// generated 2006/11/22 14:38:04 CET by tobias@THINKPAD-T43.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/tobias/src/svn/gninjam/trunk/gninjam.glade
// for gtk 2.10.6 and gtkmm 2.10.3
//
// Please modify the corresponding derived classes in ./src/vbox_remote_channel.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "vbox_remote_channel_glade.hh"
#include <gtkmm/box.h>
#include <gtkmm/adjustment.h>

vbox_remote_channel_glade::vbox_remote_channel_glade(GlademmData *gmm_data
) : Gtk::VBox(false, 4)
{  
   
   Gtk::VBox *vbox_remote_channel = this;
   entry_remote_channelname = Gtk::manage(new class Gtk::Entry());
   checkbutton_remote_receive = Gtk::manage(new class Gtk::CheckButton("Receive"));
   combobox_remote_output = Gtk::manage(new class Gtk::ComboBox());
   progressbar_remote = Gtk::manage(new class Gtk::ProgressBar());
   
   Gtk::HBox *hbox4 = Gtk::manage(new class Gtk::HBox(false, 4));
   Gtk::Adjustment *hscale_remote_volume_adj = Gtk::manage(new class Gtk::Adjustment(0, -120, 20, 0.5, 1, 0));
   hscale_remote_volume = Gtk::manage(new class Gtk::HScale(*hscale_remote_volume_adj));
   
   Gtk::Adjustment *hscale_remote_pan_adj = Gtk::manage(new class Gtk::Adjustment(0, -1, 1, 0.00999999977648, 0.10000000149, 0));
   hscale_remote_pan = Gtk::manage(new class Gtk::HScale(*hscale_remote_pan_adj));
   checkbutton_remote_mute = Gtk::manage(new class Gtk::CheckButton("Mute"));
   checkbutton_remote_solo = Gtk::manage(new class Gtk::CheckButton("Solo"));
   checkbutton_remote_stereo = Gtk::manage(new class Gtk::CheckButton("Stereo"));
   
   Gtk::HBox *hbox5 = Gtk::manage(new class Gtk::HBox(false, 4));
   entry_remote_channelname->set_name("entry_remote_channelname");
   entry_remote_channelname->set_flags(Gtk::CAN_FOCUS);
   entry_remote_channelname->set_visibility(true);
   entry_remote_channelname->set_editable(false);
   entry_remote_channelname->set_max_length(0);
   entry_remote_channelname->set_text("");
   entry_remote_channelname->set_has_frame(true);
   entry_remote_channelname->set_activates_default(false);
   checkbutton_remote_receive->set_name("checkbutton_remote_receive");
   checkbutton_remote_receive->set_flags(Gtk::CAN_FOCUS);
   checkbutton_remote_receive->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_remote_receive->set_mode(true);
   checkbutton_remote_receive->set_active(false);
   combobox_remote_output->set_name("combobox_remote_output");
   progressbar_remote->set_name("progressbar_remote");
   hbox4->set_name("hbox4");
   hbox4->pack_start(*entry_remote_channelname);
   hbox4->pack_start(*checkbutton_remote_receive, Gtk::PACK_SHRINK, 0);
   hbox4->pack_start(*combobox_remote_output);
   hbox4->pack_start(*progressbar_remote, Gtk::PACK_SHRINK, 0);
   hscale_remote_volume->set_size_request(100,-1);
   hscale_remote_volume->set_name("hscale_remote_volume");
   hscale_remote_volume->set_flags(Gtk::CAN_FOCUS);
   hscale_remote_volume->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_remote_volume->set_inverted(false);
   hscale_remote_volume->set_digits(1);
   hscale_remote_volume->set_draw_value(true);
   hscale_remote_volume->set_value_pos(Gtk::POS_RIGHT);
   hscale_remote_pan->set_size_request(25,-1);
   hscale_remote_pan->set_name("hscale_remote_pan");
   hscale_remote_pan->set_flags(Gtk::CAN_FOCUS);
   hscale_remote_pan->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_remote_pan->set_inverted(false);
   hscale_remote_pan->set_digits(2);
   hscale_remote_pan->set_draw_value(true);
   hscale_remote_pan->set_value_pos(Gtk::POS_LEFT);
   checkbutton_remote_mute->set_name("checkbutton_remote_mute");
   checkbutton_remote_mute->set_flags(Gtk::CAN_FOCUS);
   checkbutton_remote_mute->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_remote_mute->set_mode(true);
   checkbutton_remote_mute->set_active(false);
   checkbutton_remote_solo->set_name("checkbutton_remote_solo");
   checkbutton_remote_solo->set_flags(Gtk::CAN_FOCUS);
   checkbutton_remote_solo->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_remote_solo->set_mode(true);
   checkbutton_remote_solo->set_active(false);
   checkbutton_remote_stereo->set_name("checkbutton_remote_stereo");
   checkbutton_remote_stereo->set_flags(Gtk::CAN_FOCUS);
   checkbutton_remote_stereo->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_remote_stereo->set_mode(true);
   checkbutton_remote_stereo->set_active(false);
   hbox5->set_name("hbox5");
   hbox5->pack_start(*hscale_remote_volume);
   hbox5->pack_start(*hscale_remote_pan);
   hbox5->pack_start(*checkbutton_remote_mute, Gtk::PACK_SHRINK, 0);
   hbox5->pack_start(*checkbutton_remote_solo, Gtk::PACK_SHRINK, 0);
   hbox5->pack_start(*checkbutton_remote_stereo, Gtk::PACK_SHRINK, 0);
   vbox_remote_channel->set_name("vbox_remote_channel");
   vbox_remote_channel->set_border_width(4);
   vbox_remote_channel->pack_start(*hbox4, Gtk::PACK_SHRINK, 0);
   vbox_remote_channel->pack_start(*hbox5, Gtk::PACK_SHRINK, 0);
   entry_remote_channelname->show();
   checkbutton_remote_receive->show();
   combobox_remote_output->show();
   progressbar_remote->show();
   hbox4->show();
   hscale_remote_volume->show();
   hscale_remote_pan->show();
   checkbutton_remote_mute->show();
   checkbutton_remote_solo->show();
   checkbutton_remote_stereo->show();
   hbox5->show();
   vbox_remote_channel->show();
   checkbutton_remote_receive->signal_toggled().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_checkbutton_remote_receive_toggled), false);
   combobox_remote_output->signal_changed().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_combobox_remote_output_changed), false);
   hscale_remote_volume->signal_value_changed().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_hscale_remote_volume_value_changed), false);
   hscale_remote_pan->signal_value_changed().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_hscale_remote_pan_value_changed), false);
   checkbutton_remote_mute->signal_toggled().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_checkbutton_remote_mute_toggled), false);
   checkbutton_remote_solo->signal_toggled().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_checkbutton_remote_solo_toggled), false);
   checkbutton_remote_stereo->signal_toggled().connect(SigC::slot(*this, &vbox_remote_channel_glade::on_checkbutton_remote_stereo_toggled), false);
}

vbox_remote_channel_glade::~vbox_remote_channel_glade()
{  
}
