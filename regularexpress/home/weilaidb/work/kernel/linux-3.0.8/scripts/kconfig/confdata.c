#define LKC_DIRECT_LINK
static void conf_warning(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
static void conf_message(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
static const char *conf_filename;
static int conf_lineno, conf_warnings, conf_unsaved;
const char conf_defname[] = "arch/$ARCH/defconfig";
static void conf_warning(const char *fmt, ...)
static void conf_default_message_callback(const char *fmt, va_list ap)
static void (*conf_message_callback) (const char *fmt, va_list ap) =
conf_default_message_callback;
void conf_set_message_callback(void (*fn) (const char *fmt, va_list ap))
static void conf_message(const char *fmt, ...)
const char *conf_get_configname(void)
const char *conf_get_autoconfig_name(void)
static char *conf_expand_value(const char *in)
char *conf_get_default_confname(void)
static int conf_set_sym_val(struct symbol *sym, int def, int def_flags, char *p)
int conf_read_simple(const char *name, int def)
int conf_read(const char *name)
static void conf_write_string(bool headerfile, const char *name,
const char *str, FILE *out)
static void conf_write_symbol(struct symbol *sym, FILE *out, bool write_no)
int conf_write_defconfig(const char *filename)
int conf_write(const char *name)
static int conf_split_config(void)
int conf_write_autoconf(void)
static int sym_change_count;
static void (*conf_changed_callback)(void);
void sym_set_change_count(int count)
void sym_add_change_count(int count)
bool conf_get_changed(void)
void conf_set_changed_callback(void (*fn)(void))
static void randomize_choice_values(struct symbol *csym)
static void set_all_choice_values(struct symbol *csym)
void conf_set_all_new_symbols(enum conf_def_mode mode)
