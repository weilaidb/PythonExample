#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
#define PREPROC_BUF_SIZE    16384 static char *obj_filename = NULL, *in_filename = NULL; static char *global_prefix = NULL, *global_suffix = NULL; static char *list_filename = NULL, *map_filename = NULL; static char *machine_name = NULL;
static int special_options = 0; static yasm_arch *cur_arch = NULL; static const yasm_arch_module *
cur_arch_module = NULL; static const yasm_parser_module *
cur_parser_module = NULL; static yasm_preproc *cur_preproc = NULL; static const yasm_preproc_module *
cur_preproc_module = NULL; static char *objfmt_keyword = NULL; static const yasm_objfmt_module *
cur_objfmt_module = NULL; static const yasm_dbgfmt_module *
cur_dbgfmt_module = NULL; static yasm_listfmt *cur_listfmt = NULL; static const yasm_listfmt_module *
cur_listfmt_module = NULL;
static int preproc_only = 0;
static unsigned int force_strict = 0;
static int generate_make_dependencies = 0;
static int warning_error = 0;
static FILE *errfile; static char *error_filename = NULL;
static enum  ewmsg_style = EWSTYLE_GNU; static FILE *open_file(const char *filename,
const char *mode);
static void check_errors( yasm_errwarns *errwarns, yasm_object *object, yasm_linemap *linemap);
static void cleanup( yasm_object *object);
static int opt_special_handler(char *cmd, char *param, int extra);
static int opt_arch_handler(char *cmd, char *param, int extra);
static int opt_parser_handler(char *cmd, char *param, int extra);
static int opt_preproc_handler(char *cmd, char *param, int extra);
static int opt_objfmt_handler(char *cmd, char *param, int extra);
static int opt_dbgfmt_handler(char *cmd, char *param, int extra);
static int opt_listfmt_handler(char *cmd, char *param, int extra);
static int opt_listfile_handler(char *cmd, char *param, int extra);
static int opt_objfile_handler(char *cmd, char *param, int extra);
static int opt_mapfile_handler(char *cmd, char *param, int extra);
static int opt_machine_handler(char *cmd, char *param, int extra);
static int opt_strict_handler(char *cmd, char *param, int extra);
static int opt_warning_handler(char *cmd, char *param, int extra);
static int opt_error_file(char *cmd, char *param, int extra);
static int opt_error_stdout(char *cmd, char *param, int extra);
static int preproc_only_handler(char *cmd, char *param, int extra);
static int opt_include_option(char *cmd, char *param, int extra);
static int opt_preproc_option(char *cmd, char *param, int extra);
static int opt_ewmsg_handler(char *cmd, char *param, int extra);
static int opt_makedep_handler(char *cmd, char *param, int extra);
static int opt_prefix_handler(char *cmd, char *param, int extra);
static int opt_suffix_handler(char *cmd, char *param, int extra);
#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
static int opt_plugin_handler(char *cmd, char *param, int extra);
#if defined(CMAKE_BUILD) && !defined(BUILD_SHARED_LIBS)
void yasm_init_plugin(void);
static char *replace_extension(const char *orig,
const char *ext, const char *def);
static void print_error(const char *fmt, ...);
static void handle_yasm_int_error(const char *file,
unsigned int line,
const char *message);
static void handle_yasm_fatal(const char *message, va_list va);
static const char *handle_yasm_gettext(const char *msgid);
static void print_yasm_error(const char *filename, unsigned long line,
const char *msg, const char *xref_fn,
unsigned long xref_line, const char *xref_msg);
static void print_yasm_warning(const char *filename, unsigned long line,
const char *msg);
static void apply_preproc_builtins(void);
static void apply_preproc_standard_macros(const yasm_stdmac *stdmacs);
static void apply_preproc_saved_options(void);
static void print_list_keyword_desc(const char *name, const char *keyword);
#define SPECIAL_SHOW_HELP 0x01
#define SPECIAL_SHOW_VERSION 0x02
#define SPECIAL_SHOW_LICENSE 0x04
#define SPECIAL_LISTED 0x08
static opt_option options[] =
; static const char *version_msg[] = ; static const char *help_head = N_(
"usage: yasm [option]* file\n"
"Options:\n"); static const char *help_tail = N_(
"\n"
"Files are asm sources to be assembled.\n"
"\n"
"Sample invocation:\n"
"   yasm -f elf -o object.o source.asm\n"
"\n"
"Report bugs to bug-yasm@tortall.net\n");
typedef STAILQ_HEAD(constcharparam_head, constcharparam) constcharparam_head;
typedef struct constcharparam  constcharparam;
static constcharparam_head preproc_options;
static int
do_preproc_only(void)
static int
do_assemble(void)
int
main(int argc, char *argv[])
static FILE *
open_file(const char *filename, const char *mode)
static void
check_errors(yasm_errwarns *errwarns, yasm_object *object,
yasm_linemap *linemap)
#define DO_FREE         1
static void
cleanup(yasm_object *object)
int
not_an_option_handler(char *param)
int
other_option_handler(char *option)
static int
opt_special_handler( char *cmd, char *param, int extra)
static int
opt_arch_handler( char *cmd, char *param, int extra)
static int
opt_parser_handler( char *cmd, char *param, int extra)
static int
opt_preproc_handler( char *cmd, char *param, int extra)
static int
opt_objfmt_handler( char *cmd, char *param, int extra)
static int
opt_dbgfmt_handler( char *cmd, char *param, int extra)
static int
opt_listfmt_handler( char *cmd, char *param, int extra)
static int
opt_listfile_handler( char *cmd, char *param, int extra)
static int
opt_objfile_handler( char *cmd, char *param, int extra)
static int
opt_mapfile_handler( char *cmd, char *param, int extra)
static int
opt_machine_handler( char *cmd, char *param, int extra)
static int
opt_strict_handler( char *cmd, char *param, int extra)
static int
opt_warning_handler(char *cmd, char *param, int extra)
static int
opt_error_file( char *cmd, char *param, int extra)
static int
opt_error_stdout( char *cmd, char *param, int extra)
static int
preproc_only_handler( char *cmd, char *param, int extra)
static int
opt_include_option( char *cmd, char *param, int extra)
static int
opt_preproc_option( char *cmd, char *param, int extra)
static int
opt_ewmsg_handler( char *cmd, char *param, int extra)
static int
opt_makedep_handler( char *cmd, char *param, int extra)
static int
opt_prefix_handler( char *cmd, char *param, int extra)
static int
opt_suffix_handler( char *cmd, char *param, int extra)
#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
static int
opt_plugin_handler( char *cmd, char *param, int extra)
static void
apply_preproc_builtins()
static void
apply_preproc_standard_macros(const yasm_stdmac *stdmacs)
static void
apply_preproc_saved_options()
static char *
replace_extension(const char *orig, const char *ext,
const char *def)
void
print_list_keyword_desc(const char *name, const char *keyword)
static void
print_error(const char *fmt, ...)
static void
handle_yasm_int_error(const char *file, unsigned int line, const char *message)
static void
handle_yasm_fatal(const char *fmt, va_list va)
static const char *
handle_yasm_gettext(const char *msgid)
static const char *fmt[2] = ;
static const char *fmt_noline[2] = ;
static void
print_yasm_error(const char *filename, unsigned long line, const char *msg,
const char *xref_fn, unsigned long xref_line,
const char *xref_msg)
static void
print_yasm_warning(const char *filename, unsigned long line, const char *msg)
