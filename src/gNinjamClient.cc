// generated 2006/11/13 18:15:07 CET by tobias@THINKPAD-T43.(none)
// using glademm V2.6.0
//
// newer (non customized) versions of this file go to gNinjamClient.cc_new

// This file is for your program, I won't touch it again!

#include "config.h"
#include "gNinjamClient.hh"

#include <gtkmm/main.h>

#ifdef _WIN32
#include <windows.h>
#define strncasecmp strnicmp
#else
#include <stdlib.h>
#include <memory.h>
#endif

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <signal.h>
#include <float.h>

#include <iostream>

#include <ninjam/njmisc.h>
#include "common.hh"

#define TIMEOUT_VALUE 50

#include <ninjam/njclient.h>

extern NJClient *g_client;

gNinjamClient::gNinjamClient()
  : d_connect(new class dialog_connect()),
    w_preferences(new class window_preferences())
{
  hscale_master_pan->signal_format_value().connect(sigc::ptr_fun(on_hscale_pan_format_value), false);
  hscale_metronome_pan->signal_format_value().connect(sigc::ptr_fun(on_hscale_pan_format_value), false);
  hscale_master_volume->signal_format_value().connect(sigc::ptr_fun(on_hscale_volume_format_value), false);
  hscale_metronome_volume->signal_format_value().connect(sigc::ptr_fun(on_hscale_volume_format_value), false);

  hscale_master_volume->set_value(VAL2DB(g_client->config_mastervolume));
  hscale_master_pan->set_value(g_client->config_masterpan);
  checkbutton_master_mute->set_active(g_client->config_mastermute);
  hscale_metronome_volume->set_value(VAL2DB(g_client->config_metronome));
  hscale_metronome_pan->set_value(g_client->config_metronome_pan);
  checkbutton_metronome_mute->set_active(g_client->config_metronome_mute);

  sigc::slot<bool> my_slot = sigc::mem_fun(*this, &gNinjamClient::on_timeout);
  sigc::connection conn = Glib::signal_timeout().connect(my_slot, TIMEOUT_VALUE);
  sigc::slot<bool> my_slot2 = sigc::mem_fun(*this, &gNinjamClient::on_timeout_gui);
  sigc::connection conn2 = Glib::signal_timeout().connect(my_slot2, 1000);
  //vbox_local->remove(vbox_local_channel);
  /*
  vbox_local_channel* vlc = Gtk::manage(new class vbox_local_channel(NULL));
  vlc->show();
  vbox_local->pack_start(*vlc);
  vbox_local_channel* vlc2 = Gtk::manage(new class vbox_local_channel(NULL));
  vlc2->show();
  vbox_local->pack_start(*vlc2);
  */
  d_connect->entry_hostname->set_text("localhost");
  d_connect->entry_username->set_text("tobias");
  d_connect->entry_password->set_text("gehrig");
}

gNinjamClient::~gNinjamClient()
{
  delete d_connect;
  delete w_preferences;
}

bool gNinjamClient::on_timeout()
{
  int status = g_client->GetStatus();
  if (status >= 0) {
    if (g_client->Run()) {}
    int l,p;
    g_client->GetPosition(&p,&l);
    progressbar1->set_fraction(1.0*p/l);
  }
  return true;
}

bool gNinjamClient::on_timeout_gui()
{
  int status = g_client->GetStatus();
  if (status >= 0) {
    int l,p;
    g_client->GetPosition(&p,&l);
    /*
    printf("%f, %d, %d %d %d %d\n",g_client->GetActualBPM(),
	   g_client->GetBPI(),
	   g_client->GetLoopCount(),
	   g_client->GetSessionPosition(),
	   p, l);
    */
    progressbar1->set_text("BPM");
    float value = VAL2DB(g_client->GetOutputPeak());
    progressbar_master->set_fraction((value+120)/140);
    char output[11];
    snprintf(output, sizeof(output), "%.2f dB", value);
    progressbar_master->set_text(output);
    vbox_remote->update();
  }
  Glib::ustring statusmsg = "Status: ";
  switch (status) {
  case NJClient::NJC_STATUS_OK:
    statusmsg += "Connected to ";
    statusmsg += g_client->GetHostName();
    statusmsg += " as ";
    statusmsg += g_client->GetUserName();
    break;
  case NJClient::NJC_STATUS_INVALIDAUTH:
    statusmsg += "ERROR: invalid login/password";
    break;
  case NJClient::NJC_STATUS_CANTCONNECT:
    statusmsg += "ERROR: failed connecting to host";
    break;
  case NJClient::NJC_STATUS_PRECONNECT:
    statusmsg += "Not connected";
    break;
  case NJClient::NJC_STATUS_DISCONNECTED:
    statusmsg += "ERROR: disconnected from host";
    break;
    
  default:
    char statusnum[8];
    snprintf(statusnum, sizeof(statusnum), "%d", status);
    statusmsg += "CODE = ";
    statusmsg += statusnum;
    break;
  }
  if (g_client->GetErrorStr()[0]) {
    statusmsg += ". Server gave explanation: ";
    statusmsg += g_client->GetErrorStr();
  }
  statusbar1->push(statusmsg);
  return true;
}

void gNinjamClient::on_verbinden1_activate()
{
  d_connect->show();
  int response_id = d_connect->run();
  d_connect->hide();
  if (response_id == Gtk::RESPONSE_OK) {
    Glib::ustring hostname = d_connect->entry_hostname->get_text();
    Glib::ustring username = d_connect->entry_username->get_text();
    Glib::ustring password = d_connect->entry_password->get_text();
    g_client->Connect(hostname.c_str(), username.c_str(), password.c_str());
  }
}

void gNinjamClient::on_trennen1_activate()
{
  g_client->Disconnect();
}

void gNinjamClient::on_beenden1_activate()
{
  Gtk::Main::quit();
}

void gNinjamClient::on_ausschneiden1_activate()
{  
}

void gNinjamClient::on_kopieren1_activate()
{  
}

void gNinjamClient::on_einf__gen1_activate()
{  
}

void gNinjamClient::on_l__schen1_activate()
{  
}

void gNinjamClient::on_einstellungen1_activate()
{
  w_preferences->show();
}

void gNinjamClient::on_info1_activate()
{  
}

void gNinjamClient::on_hscale_master_volume_value_changed()
{
  g_client->config_mastervolume = DB2VAL(hscale_master_volume->get_value());
}

void gNinjamClient::on_hscale_master_pan_value_changed()
{
  g_client->config_masterpan = hscale_master_pan->get_value();
}

void gNinjamClient::on_hscale_metronome_volume_value_changed()
{
  g_client->config_metronome = DB2VAL(hscale_metronome_volume->get_value());
}

void gNinjamClient::on_hscale_metronome_pan_value_changed()
{
  g_client->config_metronome_pan = hscale_metronome_pan->get_value();
}

void gNinjamClient::on_checkbutton_master_mute_toggled()
{
  g_client->config_mastermute = checkbutton_master_mute->get_active();  
}

void gNinjamClient::on_checkbutton_metronome_mute_toggled()
{
  g_client->config_metronome_mute = checkbutton_metronome_mute->get_active();
}

void gNinjamClient::on_chat_entry_activate()
{
  Glib::ustring text = chat_entry->get_text();
  chat_entry->set_text("");
  
  if (text.size() > 0) {
    if (text[0] == '/') {
      if (!strncasecmp(text.c_str(), "/me ", 4)) {
	g_client->ChatMessage_Send("MSG", text.c_str());
      } else if (!strncasecmp(text.c_str(), "/topic ", 7)||
		 !strncasecmp(text.c_str(), "/kick ", 6) ||                        
		 !strncasecmp(text.c_str(), "/bpm ", 5) ||
		 !strncasecmp(text.c_str(), "/bpi ", 5)
		 ) { // alias to /admin *
	g_client->ChatMessage_Send("ADMIN", text.c_str()+1);
      } else if (!strncasecmp(text.c_str(), "/admin ", 7)) {
	const char *p=text.c_str()+7;
	while (*p == ' ') p++;
	g_client->ChatMessage_Send("ADMIN", p);
      } else if (!strncasecmp(text.c_str(), "/msg ", 5)) {
	unsigned i = 5;
	while (text[i] == ' ') i++;
	Glib::ustring name;
	unsigned n = i;
	while ((n < text.size()) && (text[n] != ' ')) n++;
	name = text.substr(i, n-i);
	Glib::ustring msg = text.substr(n);
	if (msg.size() > 0) {
	  g_client->ChatMessage_Send("PRIVMSG", name.c_str(), msg.c_str());
	  Glib::ustring tmp;
	  tmp = "-> *";
	  tmp += name;
	  tmp += "* ";
	  tmp += msg;
	  addChatText(tmp);
	} else {
	  addChatText("*** error: /msg requires a username and a message.");
	}
      } else {
	addChatText("*** error: unknown command.");
      }
    } else {
      g_client->ChatMessage_Send("MSG", text.c_str());
    }
  }
}

void gNinjamClient::addChatText(Glib::ustring text)
{
  Glib::RefPtr<Gtk::TextBuffer> buffer = textview1->get_buffer();
  Glib::ustring buffertext = buffer->get_text();
  buffer->set_text(buffertext+text+"\n");
}

void gNinjamClient::setChatTopic(Glib::ustring text)
{
  label_chat->set_text(text);
}
