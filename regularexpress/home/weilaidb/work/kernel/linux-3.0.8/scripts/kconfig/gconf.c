#  include <config.h>
enum ;
enum ;
static gint view_mode = FULL_VIEW;
static gboolean show_name = TRUE;
static gboolean show_range = TRUE;
static gboolean show_value = TRUE;
static gboolean resizeable = FALSE;
static int opt_mode = OPT_NORMAL;
GtkWidget *main_wnd = NULL;
GtkWidget *tree1_w = NULL;
GtkWidget *tree2_w = NULL;
GtkWidget *text_w = NULL;
GtkWidget *hpaned = NULL;
GtkWidget *vpaned = NULL;
GtkWidget *back_btn = NULL;
GtkWidget *save_btn = NULL;
GtkWidget *save_menu_item = NULL;
GtkTextTag *tag1, *tag2;
GdkColor color;
GtkTreeStore *tree1, *tree2, *tree;
GtkTreeModel *model1, *model2;
static GtkTreeIter *parents[256];
static gint indent;
static struct menu *current;
static struct menu *browsed;
enum ;
static void display_list(void);
static void display_tree(struct menu *menu);
static void display_tree_part(void);
static void update_tree(struct menu *src, GtkTreeIter * dst);
static void set_node(GtkTreeIter * node, struct menu *menu, gchar ** row);
static gchar **fill_row(struct menu *menu);
static void conf_changed(void);
const char *dbg_sym_flags(int val)
void replace_button_icon(GladeXML * xml, GdkDrawable * window,
GtkStyle * style, gchar * btn_name, gchar ** xpm)
void init_main_window(const gchar * glade_file)
void init_tree_model(void)
void init_left_tree(void)
static void renderer_edited(GtkCellRendererText * cell,
const gchar * path_string,
const gchar * new_text, gpointer user_data);
static void renderer_toggled(GtkCellRendererToggle * cellrenderertoggle,
gchar * arg1, gpointer user_data);
void init_right_tree(void)
static void text_insert_help(struct menu *menu)
static void text_insert_msg(const char *title, const char *message)
void on_save_activate(GtkMenuItem * menuitem, gpointer user_data);
gboolean on_window1_delete_event(GtkWidget * widget, GdkEvent * event,
gpointer user_data)
void on_window1_destroy(GtkObject * object, gpointer user_data)
void
on_window1_size_request(GtkWidget * widget,
GtkRequisition * requisition, gpointer user_data)
static void
load_filename(GtkFileSelection * file_selector, gpointer user_data)
void on_load1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_save_activate(GtkMenuItem * menuitem, gpointer user_data)
static void
store_filename(GtkFileSelection * file_selector, gpointer user_data)
void on_save_as1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_quit1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_show_name1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_show_range1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_show_data1_activate(GtkMenuItem * menuitem, gpointer user_data)
void
on_set_option_mode1_activate(GtkMenuItem *menuitem, gpointer user_data)
void
on_set_option_mode2_activate(GtkMenuItem *menuitem, gpointer user_data)
void
on_set_option_mode3_activate(GtkMenuItem *menuitem, gpointer user_data)
void on_introduction1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_about1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_license1_activate(GtkMenuItem * menuitem, gpointer user_data)
void on_back_clicked(GtkButton * button, gpointer user_data)
void on_load_clicked(GtkButton * button, gpointer user_data)
void on_single_clicked(GtkButton * button, gpointer user_data)
void on_split_clicked(GtkButton * button, gpointer user_data)
void on_full_clicked(GtkButton * button, gpointer user_data)
void on_collapse_clicked(GtkButton * button, gpointer user_data)
void on_expand_clicked(GtkButton * button, gpointer user_data)
static void renderer_edited(GtkCellRendererText * cell,
const gchar * path_string,
const gchar * new_text, gpointer user_data)
static void change_sym_value(struct menu *menu, gint col)
static void toggle_sym_value(struct menu *menu)
static void renderer_toggled(GtkCellRendererToggle * cell,
gchar * path_string, gpointer user_data)
static gint column2index(GtkTreeViewColumn * column)
gboolean
on_treeview2_button_press_event(GtkWidget * widget,
GdkEventButton * event, gpointer user_data)
gboolean
on_treeview2_key_press_event(GtkWidget * widget,
GdkEventKey * event, gpointer user_data)
void
on_treeview2_cursor_changed(GtkTreeView * treeview, gpointer user_data)
gboolean
on_treeview1_button_press_event(GtkWidget * widget,
GdkEventButton * event, gpointer user_data)
static gchar **fill_row(struct menu *menu)
static void set_node(GtkTreeIter * node, struct menu *menu, gchar ** row)
static void place_node(struct menu *menu, char **row)
static GtkTreeIter found;
GtkTreeIter *gtktree_iter_find_node(GtkTreeIter * parent,
struct menu *tofind)
static void update_tree(struct menu *src, GtkTreeIter * dst)
static void display_tree(struct menu *menu)
static void display_tree_part(void)
static void display_list(void)
void fixup_rootmenu(struct menu *menu)
int main(int ac, char *av[])
static void conf_changed(void)
