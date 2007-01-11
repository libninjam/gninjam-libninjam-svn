// generated 2007/1/11 5:06:30 GMT by azz@cartman.at.offog.org.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/azz/src/gninjam/gninjam.glade
// for gtk 2.10.6 and gtkmm 2.8.3
//
// Please modify the corresponding derived classes in ./src/gNinjamClient.cc


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
#include "gNinjamClient_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/imagemenuitem.h>
#include <gtk/gtkimagemenuitem.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/menu.h>
#include <gtkmm/checkmenuitem.h>
#include <gtkmm/menubar.h>
#include <gtkmm/label.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/table.h>
#include "vbox_local.hh"
#include <gtkmm/viewport.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/alignment.h>
#include "vbox_remote.hh"
#include <gtkmm/paned.h>
#include <gtkmm/box.h>
#include <gtkmm/separator.h>

gNinjamClient_glade::gNinjamClient_glade(
) : Gtk::Window(Gtk::WINDOW_TOPLEVEL)
{  
   
   Gtk::Window *gNinjamClient = this;
   gmm_data = new GlademmData(get_accel_group());
   
   Gtk::ImageMenuItem *neu1 = NULL;
   Gtk::MenuItem *trennlinie3 = NULL;
   Gtk::ImageMenuItem *verbinden1 = NULL;
   Gtk::ImageMenuItem *trennen1 = NULL;
   Gtk::MenuItem *separatormenuitem1 = NULL;
   Gtk::ImageMenuItem *beenden1 = NULL;
   Gtk::Menu *menuitem1_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem1 = NULL;
   Gtk::ImageMenuItem *ausschneiden1 = NULL;
   Gtk::ImageMenuItem *kopieren1 = NULL;
   Gtk::ImageMenuItem *einf__gen1 = NULL;
   Gtk::ImageMenuItem *l__schen1 = NULL;
   Gtk::MenuItem *trennlinie1 = NULL;
   Gtk::ImageMenuItem *einstellungen1 = NULL;
   Gtk::Menu *menuitem2_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem2 = NULL;
   Gtk::CheckMenuItem *local_channels1 = NULL;
   Gtk::CheckMenuItem *remote_channels1 = NULL;
   Gtk::CheckMenuItem *chat1 = NULL;
   Gtk::Menu *menuitem3_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem3 = NULL;
   Gtk::ImageMenuItem *info1 = NULL;
   Gtk::Menu *menuitem4_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem4 = NULL;
   Gtk::MenuBar *menubar1 = Gtk::manage(new class Gtk::MenuBar());
   Gtk::Label *label8 = Gtk::manage(new class Gtk::Label(_("Master:")));
   Gtk::Label *label9 = Gtk::manage(new class Gtk::Label(_("Metronome:")));
   Gtk::Adjustment *hscale_metronome_volume_adj = Gtk::manage(new class Gtk::Adjustment(0, -120, 20, 0.5, 1, 0));
   hscale_metronome_volume = Gtk::manage(new class Gtk::HScale(*hscale_metronome_volume_adj));
   
   Gtk::Adjustment *hscale_master_pan_adj = Gtk::manage(new class Gtk::Adjustment(0, -1, 1, 0.00999999977648, 0.10000000149, 0));
   hscale_master_pan = Gtk::manage(new class Gtk::HScale(*hscale_master_pan_adj));
   
   Gtk::Adjustment *hscale_metronome_pan_adj = Gtk::manage(new class Gtk::Adjustment(0, -1, 1, 0.00999999977648, 0.10000000149, 0));
   hscale_metronome_pan = Gtk::manage(new class Gtk::HScale(*hscale_metronome_pan_adj));
   checkbutton_master_mute = Gtk::manage(new class Gtk::CheckButton(_("Mute")));
   checkbutton_metronome_mute = Gtk::manage(new class Gtk::CheckButton(_("Mute")));
   
   Gtk::Adjustment *hscale_master_volume_adj = Gtk::manage(new class Gtk::Adjustment(0, -120, 20, 0.5, 1, 0));
   hscale_master_volume = Gtk::manage(new class Gtk::HScale(*hscale_master_volume_adj));
   progressbar_master = Gtk::manage(new class Gtk::ProgressBar());
   checkbutton_metronome_stereo = Gtk::manage(new class Gtk::CheckButton(_("Stereo")));
   combobox_metronome_output = Gtk::manage(new class Gtk::ComboBox());
   
   Gtk::Table *table2 = Gtk::manage(new class Gtk::Table(2, 2, false));
   handlebox1 = Gtk::manage(new class Gtk::HandleBox());
   vbox_local = Gtk::manage(new class vbox_local(gmm_data));
   
   Gtk::Viewport *viewport2 = Gtk::manage(new class Gtk::Viewport(*manage(new Gtk::Adjustment(0,0,1)), *manage(new Gtk::Adjustment(0,0,1))));
   Gtk::ScrolledWindow *scrolledwindow5 = Gtk::manage(new class Gtk::ScrolledWindow());
   Gtk::Alignment *alignment1 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   Gtk::Label *label1 = Gtk::manage(new class Gtk::Label(_("<b>Local</b>")));
   frame_local = Gtk::manage(new class Gtk::Frame());
   vbox_remote = Gtk::manage(new class vbox_remote(gmm_data));
   
   Gtk::Viewport *viewport1 = Gtk::manage(new class Gtk::Viewport(*manage(new Gtk::Adjustment(0,0,1)), *manage(new Gtk::Adjustment(0,0,1))));
   Gtk::ScrolledWindow *scrolledwindow2 = Gtk::manage(new class Gtk::ScrolledWindow());
   Gtk::Alignment *alignment2 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   Gtk::Label *label2 = Gtk::manage(new class Gtk::Label(_("<b>Remote</b>")));
   frame_remote = Gtk::manage(new class Gtk::Frame());
   
   Gtk::VPaned *vpaned2 = Gtk::manage(new class Gtk::VPaned());
   chat_log = Gtk::manage(new class Gtk::TextView());
   
   Gtk::Adjustment *chat_log_scroll_adj = Gtk::manage(new class Gtk::Adjustment(0, 0, 0, 0, 0, 0));
   chat_log_scroll = Gtk::manage(new class Gtk::VScrollbar(*chat_log_scroll_adj));
   
   Gtk::HBox *hbox7 = Gtk::manage(new class Gtk::HBox(false, 0));
   chat_entry = Gtk::manage(new class Gtk::Entry());
   
   Gtk::VBox *vbox3 = Gtk::manage(new class Gtk::VBox(false, 0));
   Gtk::Alignment *alignment3 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label_chat = Gtk::manage(new class Gtk::Label(_("<b>Chat</b>")));
   frame_chat = Gtk::manage(new class Gtk::Frame());
   
   Gtk::HPaned *hpaned1 = Gtk::manage(new class Gtk::HPaned());
   progressbar1 = Gtk::manage(new class Gtk::ProgressBar());
   label_connection_status = Gtk::manage(new class Gtk::Label(_("")));
   
   Gtk::VSeparator *vseparator1 = Gtk::manage(new class Gtk::VSeparator());
   label_audio_info = Gtk::manage(new class Gtk::Label(_("")));
   
   Gtk::HBox *hbox1 = Gtk::manage(new class Gtk::HBox(false, 0));
   Gtk::VBox *vbox1 = Gtk::manage(new class Gtk::VBox(false, 0));
   
   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-new")));
   neu1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();
   
   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   trennlinie3 = (Gtk::MenuItem *)&menuitem1_menu->items().back();
   
   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-connect")));
   verbinden1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();
   
   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-disconnect")));
   trennen1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();
   
   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   separatormenuitem1 = (Gtk::MenuItem *)&menuitem1_menu->items().back();
   
   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-quit")));
   beenden1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();
   
   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-cut")));
   ausschneiden1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();
   
   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-copy")));
   kopieren1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();
   
   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-paste")));
   einf__gen1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();
   
   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-delete")));
   l__schen1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();
   
   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   trennlinie1 = (Gtk::MenuItem *)&menuitem2_menu->items().back();
   
   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-preferences")));
   einstellungen1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();
   
   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem(_("_Local channels")));
   local_channels1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();
   
   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem(_("_Remote channels")));
   remote_channels1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();
   
   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem(_("_Chat")));
   chat1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();
   
   menuitem4_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-about")));
   info1 = (Gtk::ImageMenuItem *)&menuitem4_menu->items().back();
   
   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_File"), *menuitem1_menu));
   menuitem1 = (Gtk::MenuItem *)&menubar1->items().back();
   
   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_Edit"), *menuitem2_menu));
   menuitem2 = (Gtk::MenuItem *)&menubar1->items().back();
   
   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_View"), *menuitem3_menu));
   menuitem3 = (Gtk::MenuItem *)&menubar1->items().back();
   
   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_Help"), *menuitem4_menu));
   menuitem4 = (Gtk::MenuItem *)&menubar1->items().back();
   menuitem1_menu->set_name("menuitem1_menu");
   menuitem2_menu->set_name("menuitem2_menu");
   local_channels1->set_active(true);
   remote_channels1->set_active(true);
   chat1->set_active(true);
   menuitem3_menu->set_name("menuitem3_menu");
   menuitem4_menu->set_name("menuitem4_menu");
   menubar1->set_name("menubar1");
   label8->set_name("label8");
   label8->set_alignment(0,0.5);
   label8->set_padding(0,0);
   label8->set_justify(Gtk::JUSTIFY_LEFT);
   label8->set_line_wrap(false);
   label8->set_use_markup(false);
   label8->set_selectable(false);
   label9->set_name("label9");
   label9->set_alignment(0,0.5);
   label9->set_padding(0,0);
   label9->set_justify(Gtk::JUSTIFY_LEFT);
   label9->set_line_wrap(false);
   label9->set_use_markup(false);
   label9->set_selectable(false);
   hscale_metronome_volume->set_size_request(200,-1);
   hscale_metronome_volume->set_name("hscale_metronome_volume");
   hscale_metronome_volume->set_flags(Gtk::CAN_FOCUS);
   hscale_metronome_volume->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_metronome_volume->set_inverted(false);
   hscale_metronome_volume->set_digits(1);
   hscale_metronome_volume->set_draw_value(true);
   hscale_metronome_volume->set_value_pos(Gtk::POS_RIGHT);
   hscale_master_pan->set_size_request(100,-1);
   hscale_master_pan->set_name("hscale_master_pan");
   hscale_master_pan->set_flags(Gtk::CAN_FOCUS);
   hscale_master_pan->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_master_pan->set_inverted(false);
   hscale_master_pan->set_digits(2);
   hscale_master_pan->set_draw_value(true);
   hscale_master_pan->set_value_pos(Gtk::POS_LEFT);
   hscale_metronome_pan->set_size_request(100,-1);
   hscale_metronome_pan->set_name("hscale_metronome_pan");
   hscale_metronome_pan->set_flags(Gtk::CAN_FOCUS);
   hscale_metronome_pan->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_metronome_pan->set_inverted(false);
   hscale_metronome_pan->set_digits(2);
   hscale_metronome_pan->set_draw_value(true);
   hscale_metronome_pan->set_value_pos(Gtk::POS_LEFT);
   checkbutton_master_mute->set_name("checkbutton_master_mute");
   checkbutton_master_mute->set_flags(Gtk::CAN_FOCUS);
   checkbutton_master_mute->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_master_mute->set_mode(true);
   checkbutton_master_mute->set_active(false);
   checkbutton_metronome_mute->set_name("checkbutton_metronome_mute");
   checkbutton_metronome_mute->set_flags(Gtk::CAN_FOCUS);
   checkbutton_metronome_mute->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_metronome_mute->set_mode(true);
   checkbutton_metronome_mute->set_active(false);
   hscale_master_volume->set_size_request(200,-1);
   hscale_master_volume->set_name("hscale_master_volume");
   hscale_master_volume->set_flags(Gtk::CAN_FOCUS);
   hscale_master_volume->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   hscale_master_volume->set_inverted(false);
   hscale_master_volume->set_digits(1);
   hscale_master_volume->set_draw_value(true);
   hscale_master_volume->set_value_pos(Gtk::POS_RIGHT);
   progressbar_master->set_name("progressbar_master");
   checkbutton_metronome_stereo->set_name("checkbutton_metronome_stereo");
   checkbutton_metronome_stereo->set_flags(Gtk::CAN_FOCUS);
   checkbutton_metronome_stereo->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_metronome_stereo->set_mode(true);
   checkbutton_metronome_stereo->set_active(false);
   combobox_metronome_output->set_name("combobox_metronome_output");
   table2->set_name("table2");
   table2->set_border_width(4);
   table2->set_row_spacings(4);
   table2->set_col_spacings(4);
   table2->attach(*label8, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*label9, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*hscale_metronome_volume, 1, 2, 1, 2, Gtk::FILL, Gtk::FILL, 0, 0);
   table2->attach(*hscale_master_pan, 2, 3, 0, 1, Gtk::EXPAND|Gtk::FILL, Gtk::FILL, 0, 0);
   table2->attach(*hscale_metronome_pan, 2, 3, 1, 2, Gtk::FILL, Gtk::FILL, 0, 0);
   table2->attach(*checkbutton_master_mute, 3, 4, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*checkbutton_metronome_mute, 3, 4, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*hscale_master_volume, 1, 2, 0, 1, Gtk::EXPAND|Gtk::FILL, Gtk::FILL, 0, 0);
   table2->attach(*progressbar_master, 4, 6, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*checkbutton_metronome_stereo, 4, 5, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*combobox_metronome_output, 5, 6, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::FILL, 0, 0);
   handlebox1->set_name("handlebox1");
   handlebox1->set_shadow_type(Gtk::SHADOW_OUT);
   handlebox1->set_handle_position(Gtk::POS_LEFT);
   handlebox1->set_snap_edge(Gtk::POS_TOP);
   handlebox1->add(*table2);
   viewport2->set_name("viewport2");
   viewport2->set_shadow_type(Gtk::SHADOW_IN);
   viewport2->add(*vbox_local);
   scrolledwindow5->set_name("scrolledwindow5");
   scrolledwindow5->set_flags(Gtk::CAN_FOCUS);
   scrolledwindow5->set_shadow_type(Gtk::SHADOW_NONE);
   scrolledwindow5->set_policy(Gtk::POLICY_NEVER, Gtk::POLICY_AUTOMATIC);
   scrolledwindow5->property_window_placement().set_value(Gtk::CORNER_TOP_LEFT);
   scrolledwindow5->add(*viewport2);
   alignment1->set_name("alignment1");
   alignment1->add(*scrolledwindow5);
   label1->set_name("label1");
   label1->set_alignment(0.5,0.5);
   label1->set_padding(0,0);
   label1->set_justify(Gtk::JUSTIFY_LEFT);
   label1->set_line_wrap(false);
   label1->set_use_markup(true);
   label1->set_selectable(false);
   frame_local->set_name("frame_local");
   frame_local->set_shadow_type(Gtk::SHADOW_NONE);
   frame_local->set_label_align(0,0.5);
   frame_local->add(*alignment1);
   frame_local->set_label_widget(*label1);
   viewport1->set_name("viewport1");
   viewport1->set_shadow_type(Gtk::SHADOW_IN);
   viewport1->add(*vbox_remote);
   scrolledwindow2->set_name("scrolledwindow2");
   scrolledwindow2->set_flags(Gtk::CAN_FOCUS);
   scrolledwindow2->set_shadow_type(Gtk::SHADOW_NONE);
   scrolledwindow2->set_policy(Gtk::POLICY_NEVER, Gtk::POLICY_AUTOMATIC);
   scrolledwindow2->property_window_placement().set_value(Gtk::CORNER_TOP_LEFT);
   scrolledwindow2->add(*viewport1);
   alignment2->set_name("alignment2");
   alignment2->add(*scrolledwindow2);
   label2->set_name("label2");
   label2->set_alignment(0.5,0.5);
   label2->set_padding(0,0);
   label2->set_justify(Gtk::JUSTIFY_LEFT);
   label2->set_line_wrap(false);
   label2->set_use_markup(true);
   label2->set_selectable(false);
   frame_remote->set_name("frame_remote");
   frame_remote->set_shadow_type(Gtk::SHADOW_NONE);
   frame_remote->set_label_align(0,0.5);
   frame_remote->add(*alignment2);
   frame_remote->set_label_widget(*label2);
   vpaned2->set_name("vpaned2");
   vpaned2->set_flags(Gtk::CAN_FOCUS);
   vpaned2->pack1(*frame_local, Gtk::SHRINK);
   vpaned2->pack2(*frame_remote, Gtk::EXPAND|Gtk::SHRINK);
   chat_log->set_size_request(300,300);
   chat_log->set_name("chat_log");
   chat_log->set_flags(Gtk::CAN_FOCUS);
   chat_log->set_editable(false);
   chat_log->set_cursor_visible(true);
   chat_log->set_pixels_above_lines(0);
   chat_log->set_pixels_below_lines(0);
   chat_log->set_pixels_inside_wrap(0);
   chat_log->set_left_margin(0);
   chat_log->set_right_margin(0);
   chat_log->set_indent(0);
   chat_log->set_wrap_mode(Gtk::WRAP_WORD);
   chat_log->set_justification(Gtk::JUSTIFY_LEFT);
   chat_log_scroll->set_name("chat_log_scroll");
   chat_log_scroll->set_update_policy(Gtk::UPDATE_CONTINUOUS);
   chat_log_scroll->set_inverted(false);
   hbox7->set_name("hbox7");
   hbox7->pack_start(*chat_log);
   hbox7->pack_start(*chat_log_scroll, Gtk::PACK_SHRINK, 0);
   chat_entry->set_name("chat_entry");
   chat_entry->set_flags(Gtk::CAN_FOCUS);
   chat_entry->set_visibility(true);
   chat_entry->set_editable(true);
   chat_entry->set_max_length(0);
   chat_entry->set_text(_(""));
   chat_entry->set_has_frame(true);
   chat_entry->set_activates_default(true);
   vbox3->set_name("vbox3");
   vbox3->pack_start(*hbox7);
   vbox3->pack_start(*chat_entry, Gtk::PACK_SHRINK, 0);
   alignment3->set_name("alignment3");
   alignment3->add(*vbox3);
   label_chat->set_name("label_chat");
   label_chat->set_alignment(0.5,0.5);
   label_chat->set_padding(0,0);
   label_chat->set_justify(Gtk::JUSTIFY_LEFT);
   label_chat->set_line_wrap(false);
   label_chat->set_use_markup(true);
   label_chat->set_selectable(false);
   frame_chat->set_name("frame_chat");
   frame_chat->set_shadow_type(Gtk::SHADOW_NONE);
   frame_chat->set_label_align(0,0.5);
   frame_chat->add(*alignment3);
   frame_chat->set_label_widget(*label_chat);
   hpaned1->set_name("hpaned1");
   hpaned1->set_flags(Gtk::CAN_FOCUS);
   hpaned1->pack1(*vpaned2, Gtk::SHRINK);
   hpaned1->pack2(*frame_chat, Gtk::EXPAND|Gtk::SHRINK);
   progressbar1->set_name("progressbar1");
   label_connection_status->set_name("label_connection_status");
   label_connection_status->set_alignment(0.5,0.5);
   label_connection_status->set_padding(0,0);
   label_connection_status->set_justify(Gtk::JUSTIFY_LEFT);
   label_connection_status->set_line_wrap(false);
   label_connection_status->set_use_markup(false);
   label_connection_status->set_selectable(false);
   vseparator1->set_name("vseparator1");
   label_audio_info->set_name("label_audio_info");
   label_audio_info->set_alignment(0.5,0.5);
   label_audio_info->set_padding(0,0);
   label_audio_info->set_justify(Gtk::JUSTIFY_RIGHT);
   label_audio_info->set_line_wrap(false);
   label_audio_info->set_use_markup(false);
   label_audio_info->set_selectable(false);
   hbox1->set_name("hbox1");
   hbox1->pack_start(*progressbar1, Gtk::PACK_SHRINK, 0);
   hbox1->pack_start(*label_connection_status, Gtk::PACK_EXPAND_WIDGET, 4);
   hbox1->pack_start(*vseparator1, Gtk::PACK_SHRINK, 0);
   hbox1->pack_start(*label_audio_info, Gtk::PACK_SHRINK, 4);
   vbox1->set_name("vbox1");
   vbox1->pack_start(*menubar1, Gtk::PACK_SHRINK, 0);
   vbox1->pack_start(*handlebox1, Gtk::PACK_SHRINK, 0);
   vbox1->pack_start(*hpaned1);
   vbox1->pack_start(*hbox1, Gtk::PACK_SHRINK, 0);
   gNinjamClient->set_name("gNinjamClient");
   gNinjamClient->set_title(_("NINJAM"));
   gNinjamClient->set_modal(false);
   gNinjamClient->property_window_position().set_value(Gtk::WIN_POS_NONE);
   gNinjamClient->set_resizable(true);
   gNinjamClient->property_destroy_with_parent().set_value(false);
   gNinjamClient->add(*vbox1);
   neu1->show();
   trennlinie3->show();
   verbinden1->show();
   trennen1->show();
   separatormenuitem1->show();
   beenden1->show();
   menuitem1->show();
   ausschneiden1->show();
   kopieren1->show();
   einf__gen1->show();
   l__schen1->show();
   trennlinie1->show();
   einstellungen1->show();
   menuitem2->show();
   local_channels1->show();
   remote_channels1->show();
   chat1->show();
   menuitem3->show();
   info1->show();
   menuitem4->show();
   menubar1->show();
   label8->show();
   label9->show();
   hscale_metronome_volume->show();
   hscale_master_pan->show();
   hscale_metronome_pan->show();
   checkbutton_master_mute->show();
   checkbutton_metronome_mute->show();
   hscale_master_volume->show();
   progressbar_master->show();
   checkbutton_metronome_stereo->show();
   combobox_metronome_output->show();
   table2->show();
   handlebox1->show();
   viewport2->show();
   scrolledwindow5->show();
   alignment1->show();
   label1->show();
   frame_local->show();
   viewport1->show();
   scrolledwindow2->show();
   alignment2->show();
   label2->show();
   frame_remote->show();
   vpaned2->show();
   chat_log->show();
   chat_log_scroll->show();
   hbox7->show();
   chat_entry->show();
   vbox3->show();
   alignment3->show();
   label_chat->show();
   frame_chat->show();
   hpaned1->show();
   progressbar1->show();
   label_connection_status->show();
   vseparator1->show();
   label_audio_info->show();
   hbox1->show();
   vbox1->show();
   gNinjamClient->show();
   neu1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_neu1_activate), false);
   verbinden1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_verbinden1_activate), false);
   trennen1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_trennen1_activate), false);
   beenden1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_beenden1_activate), false);
   ausschneiden1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_ausschneiden1_activate), false);
   kopieren1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_kopieren1_activate), false);
   einf__gen1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_einf__gen1_activate), false);
   l__schen1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_l__schen1_activate), false);
   einstellungen1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_einstellungen1_activate), false);
   local_channels1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_local_channels1_activate), false);
   remote_channels1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_remote_channels1_activate), false);
   chat1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_chat1_activate), false);
   info1->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_info1_activate), false);
   hscale_metronome_volume->signal_value_changed().connect(SigC::slot(*this, &gNinjamClient_glade::on_hscale_metronome_volume_value_changed), false);
   hscale_master_pan->signal_value_changed().connect(SigC::slot(*this, &gNinjamClient_glade::on_hscale_master_pan_value_changed), false);
   hscale_metronome_pan->signal_value_changed().connect(SigC::slot(*this, &gNinjamClient_glade::on_hscale_metronome_pan_value_changed), false);
   checkbutton_master_mute->signal_toggled().connect(SigC::slot(*this, &gNinjamClient_glade::on_checkbutton_master_mute_toggled), false);
   checkbutton_metronome_mute->signal_toggled().connect(SigC::slot(*this, &gNinjamClient_glade::on_checkbutton_metronome_mute_toggled), false);
   hscale_master_volume->signal_value_changed().connect(SigC::slot(*this, &gNinjamClient_glade::on_hscale_master_volume_value_changed), false);
   checkbutton_metronome_stereo->signal_toggled().connect(SigC::slot(*this, &gNinjamClient_glade::on_checkbutton_metronome_stereo_toggled), false);
   combobox_metronome_output->signal_changed().connect(SigC::slot(*this, &gNinjamClient_glade::on_combobox_metronome_output_changed), false);
   chat_entry->signal_activate().connect(SigC::slot(*this, &gNinjamClient_glade::on_chat_entry_activate), false);
}

gNinjamClient_glade::~gNinjamClient_glade()
{  delete gmm_data;
}
