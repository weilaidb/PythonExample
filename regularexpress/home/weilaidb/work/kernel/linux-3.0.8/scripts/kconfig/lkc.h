#define LKC_H
# include <libintl.h>
static inline const char *gettext(const char *txt)
static inline void textdomain(const char *domainname)
static inline void bindtextdomain(const char *name, const char *dir)
static inline char *bind_textdomain_codeset(const char *dn, char *c)
#define P(name,type,arg)	extern type name arg
#define P(name,type,arg)	extern type (*name ## _p) arg
#undef P
#define SRCTREE "srctree"
#define PACKAGE "linux"
#define LOCALEDIR "/usr/share/locale"
#define _(text) gettext(text)
#define N_(text) (text)
#define CONFIG_ "CONFIG_"
#define TF_COMMAND	0x0001
#define TF_PARAM	0x0002
#define TF_OPTION	0x0004
enum conf_def_mode ;
#define T_OPT_MODULES		1
#define T_OPT_DEFCONFIG_LIST	2
#define T_OPT_ENV		3
struct kconf_id ;
extern int zconfdebug;
int zconfparse(void);
void zconfdump(FILE *out);
void zconf_starthelp(void);
FILE *zconf_fopen(const char *name);
void zconf_initscan(const char *name);
void zconf_nextfile(const char *name);
int zconf_lineno(void);
const char *zconf_curname(void);
void xfgets(char *str, int size, FILE *in);
const char *conf_get_configname(void);
const char *conf_get_autoconfig_name(void);
char *conf_get_default_confname(void);
void sym_set_change_count(int count);
void sym_add_change_count(int count);
void conf_set_all_new_symbols(enum conf_def_mode mode);
static inline void xfwrite(const void *str, size_t len, size_t count, FILE *out)
void kconfig_load(void);
void _menu_init(void);
void menu_warn(struct menu *menu, const char *fmt, ...);
struct menu *menu_add_menu(void);
void menu_end_menu(void);
void menu_add_entry(struct symbol *sym);
void menu_end_entry(void);
void menu_add_dep(struct expr *dep);
void menu_add_visibility(struct expr *dep);
struct property *menu_add_prop(enum prop_type type, char *prompt, struct expr *expr, struct expr *dep);
struct property *menu_add_prompt(enum prop_type type, char *prompt, struct expr *dep);
void menu_add_expr(enum prop_type type, struct expr *expr, struct expr *dep);
void menu_add_symbol(enum prop_type type, struct symbol *sym, struct expr *dep);
void menu_add_option(int token, char *arg);
void menu_finalize(struct menu *parent);
void menu_set_type(int type);
struct file *file_lookup(const char *name);
int file_write_dep(const char *name);
struct gstr ;
struct gstr str_new(void);
struct gstr str_assign(const char *s);
void str_free(struct gstr *gs);
void str_append(struct gstr *gs, const char *s);
void str_printf(struct gstr *gs, const char *fmt, ...);
const char *str_get(struct gstr *gs);
extern struct expr *sym_env_list;
void sym_init(void);
void sym_clear_all_valid(void);
void sym_set_all_changed(void);
void sym_set_changed(struct symbol *sym);
struct symbol *sym_choice_default(struct symbol *sym);
const char *sym_get_string_default(struct symbol *sym);
struct symbol *sym_check_deps(struct symbol *sym);
struct property *prop_alloc(enum prop_type type, struct symbol *sym);
struct symbol *prop_get_symbol(struct property *prop);
struct property *sym_get_env_prop(struct symbol *sym);
static inline tristate sym_get_tristate_value(struct symbol *sym)
static inline struct symbol *sym_get_choice_value(struct symbol *sym)
static inline bool sym_set_choice_value(struct symbol *ch, struct symbol *chval)
static inline bool sym_is_choice(struct symbol *sym)
static inline bool sym_is_choice_value(struct symbol *sym)
static inline bool sym_is_optional(struct symbol *sym)
static inline bool sym_has_value(struct symbol *sym)
