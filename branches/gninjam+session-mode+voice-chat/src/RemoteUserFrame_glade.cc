// generated 2006/11/25 22:56:12 CET by tobias@THINKPAD-T43.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/tobias/src/svn/gninjam/trunk/gninjam.glade
// for gtk 2.10.6 and gtkmm 2.10.4
//
// Please modify the corresponding derived classes in ./src/RemoteUserFrame.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
/*
 * Standard gettext macros.
 */
#ifdef ENABLE_NLS
#  include <libintl.h>
#  undef _
#  define _(String) dgettext (GETTEXT_PACKAGE, String)
#  ifdef gettext_noop
#    define N_(String) gettext_noop (String)
#  else
#    define N_(String) (String)
#  endif
#else
#  define textdomain(String) (String)
#  define gettext(String) (String)
#  define dgettext(Domain,Message) (Message)
#  define dcgettext(Domain,Message,Type) (Message)
#  define bindtextdomain(Domain,Directory) (Domain)
#  define _(String) (String)
#  define N_(String) (String)
#endif
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "RemoteUserFrame_glade.hh"
#include <gtkmm/label.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/box.h>
#include <gtkmm/alignment.h>

RemoteUserFrame_glade::RemoteUserFrame_glade(GlademmData *gmm_data
)
{  
   
   Gtk::Frame *RemoteUserFrame = this;
   Gtk::Label *label25 = Gtk::manage(new class Gtk::Label(_("User master:")));
   Gtk::Adjustment *hscale_volume_adj = Gtk::manage(new class Gtk::Adjustment(0, -120, 20, 0.5, 1, 0));
   hscale_volume = Gtk::manage(new class Gtk::HScale(*hscale_volume_adj));
   
   Gtk::Adjustment *hscale_pan_adj = Gtk::manage(new class Gtk::Adjustment(0, -1, 1, 0.00999999977648, 0.10000000149, 0));
   hscale_pan = Gtk::manage(new class Gtk::HScale(*hscale_pan_adj));
   checkbutton_mute = Gtk::manage(new class Gtk::CheckButton(_("Mute")));
   
   Gtk::HBox *hbox6 = Gtk::manage(new class Gtk::HBox(false, 4));
   vbox = Gtk::manage(new class Gtk::VBox(false, 0));
   
   Gtk::VBox *vbox6 = Gtk::manage(new class Gtk::VBox(false, 0));
   Gtk::Alignment *alignment4 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label = Gtk::manage(new class Gtk::Label(""));
   label25->set_name("label25");
   label25->set_alignment(0.5,0.5);
   label25->set_padding(0,0);
   label25->set_justify(Gtk::JUSTIFY_LEFT);
   label25->set_line_wrap(false);
   label25->set_use_markup(false);
   label25->set_selectable(false);
   hscale_volume->set_size_request(100,-1);
   hscale_volume->set_name("hscale_volume");
   hscale_volume->set_flags(Gtk::CAN_FOCUS);
   hscale_volume->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_volume->set_inverted(false);
   hscale_volume->set_digits(1);
   hscale_volume->set_draw_value(true);
   hscale_volume->set_value_pos(Gtk::POS_RIGHT);
   hscale_pan->set_size_request(25,-1);
   hscale_pan->set_name("hscale_pan");
   hscale_pan->set_flags(Gtk::CAN_FOCUS);
   hscale_pan->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_pan->set_inverted(false);
   hscale_pan->set_digits(1);
   hscale_pan->set_draw_value(true);
   hscale_pan->set_value_pos(Gtk::POS_LEFT);
   checkbutton_mute->set_name("checkbutton_mute");
   checkbutton_mute->set_flags(Gtk::CAN_FOCUS);
   checkbutton_mute->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_mute->set_mode(true);
   checkbutton_mute->set_active(false);
   hbox6->set_name("hbox6");
   hbox6->set_border_width(4);
   hbox6->pack_start(*label25, Gtk::PACK_SHRINK, 0);
   hbox6->pack_start(*hscale_volume);
   hbox6->pack_start(*hscale_pan);
   hbox6->pack_start(*checkbutton_mute, Gtk::PACK_SHRINK, 0);
   vbox->set_name("vbox");
   vbox6->set_name("vbox6");
   vbox6->pack_start(*hbox6, Gtk::PACK_SHRINK, 0);
   vbox6->pack_start(*vbox, Gtk::PACK_SHRINK, 0);
   alignment4->set_name("alignment4");
   alignment4->add(*vbox6);
   label->set_name("label");
   label->set_alignment(0.5,0.5);
   label->set_padding(0,0);
   label->set_justify(Gtk::JUSTIFY_LEFT);
   label->set_line_wrap(false);
   label->set_use_markup(true);
   label->set_selectable(false);
   RemoteUserFrame->set_name("RemoteUserFrame");
   RemoteUserFrame->set_shadow_type(Gtk::SHADOW_ETCHED_IN);
   RemoteUserFrame->set_label_align(0,0.5);
   RemoteUserFrame->add(*alignment4);
   RemoteUserFrame->set_label_widget(*label);
   label25->show();
   hscale_volume->show();
   hscale_pan->show();
   checkbutton_mute->show();
   hbox6->show();
   vbox->show();
   vbox6->show();
   alignment4->show();
   label->show();
   RemoteUserFrame->show();
   hscale_volume->signal_value_changed().connect(SigC::slot(*this, &RemoteUserFrame_glade::on_hscale_volume_value_changed), false);
   hscale_pan->signal_value_changed().connect(SigC::slot(*this, &RemoteUserFrame_glade::on_hscale_pan_value_changed), false);
   checkbutton_mute->signal_toggled().connect(SigC::slot(*this, &RemoteUserFrame_glade::on_checkbutton_mute_toggled), false);
}

RemoteUserFrame_glade::~RemoteUserFrame_glade()
{  
}
