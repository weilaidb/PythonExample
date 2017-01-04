#define LKC_DIRECT_LINK
static const char nohelp_text[] = N_(
"There is no help available for this option.\n");
struct menu rootmenu;
static struct menu **last_entry_ptr;
struct file *file_list;
struct file *current_file;
void menu_warn(struct menu *menu, const char *fmt, ...)
static void prop_warn(struct property *prop, const char *fmt, ...)
void _menu_init(void)
void menu_add_entry(struct symbol *sym)
void menu_end_entry(void)
struct menu *menu_add_menu(void)
void menu_end_menu(void)
static struct expr *menu_check_dep(struct expr *e)
void menu_add_dep(struct expr *dep)
void menu_set_type(int type)
struct property *menu_add_prop(enum prop_type type, char *prompt, struct expr *expr, struct expr *dep)
struct property *menu_add_prompt(enum prop_type type, char *prompt, struct expr *dep)
void menu_add_visibility(struct expr *expr)
void menu_add_expr(enum prop_type type, struct expr *expr, struct expr *dep)
void menu_add_symbol(enum prop_type type, struct symbol *sym, struct expr *dep)
void menu_add_option(int token, char *arg)
static int menu_validate_number(struct symbol *sym, struct symbol *sym2)
static void sym_check_prop(struct symbol *sym)
void menu_finalize(struct menu *parent)
bool menu_has_prompt(struct menu *menu)
bool menu_is_visible(struct menu *menu)
const char *menu_get_prompt(struct menu *menu)
struct menu *menu_get_root_menu(struct menu *menu)
struct menu *menu_get_parent_menu(struct menu *menu)
bool menu_has_help(struct menu *menu)
const char *menu_get_help(struct menu *menu)
static void get_prompt_str(struct gstr *r, struct property *prop)
void get_symbol_str(struct gstr *r, struct symbol *sym)
struct gstr get_relations_str(struct symbol **sym_arr)
void menu_get_ext_help(struct menu *menu, struct gstr *help)
