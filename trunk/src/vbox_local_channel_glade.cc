// generated 2006/11/19 1:59:50 CET by tobias@THINKPAD-T43.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/tobias/src/svn/gninjam/trunk/gninjam.glade
// for gtk 2.10.6 and gtkmm 2.10.3
//
// Please modify the corresponding derived classes in ./src/vbox_local_channel.cc


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
#include "vbox_local_channel_glade.hh"
#include <gtkmm/box.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/button.h>

vbox_local_channel_glade::vbox_local_channel_glade(GlademmData *gmm_data
) : Gtk::VBox(false, 4)
{  
   
   Gtk::VBox *vbox_local_channel = this;
   entry_local_channelname = Gtk::manage(new class Gtk::Entry());
   checkbutton_local_transmit = Gtk::manage(new class Gtk::CheckButton("Transmit"));
   combobox_local_input = Gtk::manage(new class Gtk::ComboBox());
   progressbar_local = Gtk::manage(new class Gtk::ProgressBar());
   
   Gtk::HBox *hbox2 = Gtk::manage(new class Gtk::HBox(false, 4));
   Gtk::Adjustment *hscale_local_volume_adj = Gtk::manage(new class Gtk::Adjustment(0, -120, 20, 0.5, 1, 0));
   hscale_local_volume = Gtk::manage(new class Gtk::HScale(*hscale_local_volume_adj));
   
   Gtk::Adjustment *hscale_local_pan_adj = Gtk::manage(new class Gtk::Adjustment(0, -1, 1, 0.00999999977648, 0.10000000149, 0));
   hscale_local_pan = Gtk::manage(new class Gtk::HScale(*hscale_local_pan_adj));
   checkbutton_local_mute = Gtk::manage(new class Gtk::CheckButton("Mute"));
   checkbutton_local_solo = Gtk::manage(new class Gtk::CheckButton("Solo"));
   
   Gtk::Button *button_local_remove = Gtk::manage(new class Gtk::Button("Remove"));
   Gtk::HBox *hbox3 = Gtk::manage(new class Gtk::HBox(false, 4));
   entry_local_channelname->set_name("entry_local_channelname");
   entry_local_channelname->set_flags(Gtk::CAN_FOCUS);
   entry_local_channelname->set_visibility(true);
   entry_local_channelname->set_editable(true);
   entry_local_channelname->set_max_length(0);
   entry_local_channelname->set_text("");
   entry_local_channelname->set_has_frame(true);
   entry_local_channelname->set_activates_default(false);
   checkbutton_local_transmit->set_name("checkbutton_local_transmit");
   checkbutton_local_transmit->set_flags(Gtk::CAN_FOCUS);
   checkbutton_local_transmit->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_local_transmit->set_mode(true);
   checkbutton_local_transmit->set_active(false);
   combobox_local_input->set_name("combobox_local_input");
   progressbar_local->set_name("progressbar_local");
   hbox2->set_name("hbox2");
   hbox2->pack_start(*entry_local_channelname);
   hbox2->pack_start(*checkbutton_local_transmit, Gtk::PACK_SHRINK, 0);
   hbox2->pack_start(*combobox_local_input);
   hbox2->pack_start(*progressbar_local, Gtk::PACK_SHRINK, 0);
   hscale_local_volume->set_size_request(100,-1);
   hscale_local_volume->set_name("hscale_local_volume");
   hscale_local_volume->set_flags(Gtk::CAN_FOCUS);
   hscale_local_volume->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_local_volume->set_inverted(false);
   hscale_local_volume->set_digits(1);
   hscale_local_volume->set_draw_value(true);
   hscale_local_volume->set_value_pos(Gtk::POS_RIGHT);
   hscale_local_pan->set_size_request(25,-1);
   hscale_local_pan->set_name("hscale_local_pan");
   hscale_local_pan->set_flags(Gtk::CAN_FOCUS);
   hscale_local_pan->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_local_pan->set_inverted(false);
   hscale_local_pan->set_digits(2);
   hscale_local_pan->set_draw_value(true);
   hscale_local_pan->set_value_pos(Gtk::POS_LEFT);
   checkbutton_local_mute->set_name("checkbutton_local_mute");
   checkbutton_local_mute->set_flags(Gtk::CAN_FOCUS);
   checkbutton_local_mute->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_local_mute->set_mode(true);
   checkbutton_local_mute->set_active(false);
   checkbutton_local_solo->set_name("checkbutton_local_solo");
   checkbutton_local_solo->set_flags(Gtk::CAN_FOCUS);
   checkbutton_local_solo->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_local_solo->set_mode(true);
   checkbutton_local_solo->set_active(false);
   button_local_remove->set_name("button_local_remove");
   button_local_remove->set_flags(Gtk::CAN_FOCUS);
   button_local_remove->set_relief(Gtk::RELIEF_NORMAL);
   hbox3->set_name("hbox3");
   hbox3->pack_start(*hscale_local_volume);
   hbox3->pack_start(*hscale_local_pan);
   hbox3->pack_start(*checkbutton_local_mute, Gtk::PACK_SHRINK, 0);
   hbox3->pack_start(*checkbutton_local_solo, Gtk::PACK_SHRINK, 0);
   hbox3->pack_start(*button_local_remove, Gtk::PACK_SHRINK, 0);
   vbox_local_channel->set_name("vbox_local_channel");
   vbox_local_channel->set_border_width(4);
   vbox_local_channel->pack_start(*hbox2, Gtk::PACK_SHRINK, 0);
   vbox_local_channel->pack_start(*hbox3, Gtk::PACK_SHRINK, 0);
   entry_local_channelname->show();
   checkbutton_local_transmit->show();
   combobox_local_input->show();
   progressbar_local->show();
   hbox2->show();
   hscale_local_volume->show();
   hscale_local_pan->show();
   checkbutton_local_mute->show();
   checkbutton_local_solo->show();
   button_local_remove->show();
   hbox3->show();
   vbox_local_channel->show();
   entry_local_channelname->signal_changed().connect(SigC::slot(*this, &vbox_local_channel_glade::on_entry_local_channelname_changed), false);
   checkbutton_local_transmit->signal_toggled().connect(SigC::slot(*this, &vbox_local_channel_glade::on_checkbutton_local_transmit_toggled), false);
   combobox_local_input->signal_changed().connect(SigC::slot(*this, &vbox_local_channel_glade::on_combobox_local_input_changed), false);
   hscale_local_volume->signal_value_changed().connect(SigC::slot(*this, &vbox_local_channel_glade::on_hscale_local_volume_value_changed), false);
   hscale_local_pan->signal_value_changed().connect(SigC::slot(*this, &vbox_local_channel_glade::on_hscale_local_pan_value_changed), false);
   checkbutton_local_mute->signal_toggled().connect(SigC::slot(*this, &vbox_local_channel_glade::on_checkbutton_local_mute_toggled), false);
   checkbutton_local_solo->signal_toggled().connect(SigC::slot(*this, &vbox_local_channel_glade::on_checkbutton_local_solo_toggled), false);
   button_local_remove->signal_clicked().connect(SigC::slot(*this, &vbox_local_channel_glade::on_button_local_remove_clicked), false);
}

vbox_local_channel_glade::~vbox_local_channel_glade()
{  
}
