#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
#if defined(CMAKE_BUILD) && !defined(BUILD_SHARED_LIBS)
void yasm_init_plugin(void); static char *objdir_pathname = NULL; static char *global_prefix = NULL, *global_suffix = NULL; static char *listdir_pathname = NULL; static char *mapdir_pathname = NULL; static char *objext = NULL; static char *listext = NULL, *mapext = NULL; static char *machine_name = NULL;
static int special_options = 0; static const yasm_arch_module *
cur_arch_module = NULL; static const yasm_parser_module *
cur_parser_module = NULL; static const yasm_preproc_module *
cur_preproc_module = NULL; static char *objfmt_keyword = NULL; static const yasm_objfmt_module *
cur_objfmt_module = NULL; static const yasm_dbgfmt_module *
cur_dbgfmt_module = NULL; static const yasm_listfmt_module *
cur_listfmt_module = NULL;
static unsigned int force_strict = 0;
static int warning_error = 0;
static FILE *errfile; static char *error_filename = NULL;
static enum  ewmsg_style = EWSTYLE_GNU; static FILE *open_file(const char *filename,
const char *mode);
static int check_errors( yasm_errwarns *errwarns, yasm_object *object, yasm_linemap *linemap, yasm_preproc *preproc, yasm_arch *arch);
static void cleanup(void);
static void free_input_filenames(void);
static int opt_special_handler(char *cmd, char *param, int extra);
static int opt_arch_handler(char *cmd, char *param, int extra);
static int opt_parser_handler(char *cmd, char *param, int extra);
static int opt_preproc_handler(char *cmd, char *param, int extra);
static int opt_objfmt_handler(char *cmd, char *param, int extra);
static int opt_dbgfmt_handler(char *cmd, char *param, int extra);
static int opt_listfmt_handler(char *cmd, char *param, int extra);
static int opt_listdir_handler(char *cmd, char *param, int extra);
static int opt_objdir_handler(char *cmd, char *param, int extra);
static int opt_mapdir_handler(char *cmd, char *param, int extra);
static int opt_listext_handler(char *cmd, char *param, int extra);
static int opt_objext_handler(char *cmd, char *param, int extra);
static int opt_mapext_handler(char *cmd, char *param, int extra);
static int opt_machine_handler(char *cmd, char *param, int extra);
static int opt_strict_handler(char *cmd, char *param, int extra);
static int opt_warning_handler(char *cmd, char *param, int extra);
static int opt_error_file(char *cmd, char *param, int extra);
static int opt_error_stdout(char *cmd, char *param, int extra);
static int opt_include_option(char *cmd, char *param, int extra);
static int opt_preproc_option(char *cmd, char *param, int extra);
static int opt_ewmsg_handler(char *cmd, char *param, int extra);
static int opt_prefix_handler(char *cmd, char *param, int extra);
static int opt_suffix_handler(char *cmd, char *param, int extra);
#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
static int opt_plugin_handler(char *cmd, char *param, int extra);
static char *replace_extension(const char *orig,
const char *ext);
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
static void apply_preproc_builtins(yasm_preproc *preproc);
static void apply_preproc_standard_macros(yasm_preproc *preproc,
const yasm_stdmac *stdmacs);
static void apply_preproc_saved_options(yasm_preproc *preproc);
static void free_preproc_saved_options(void);
static void print_list_keyword_desc(const char *name, const char *keyword);
#define SPECIAL_SHOW_HELP 0x01
#define SPECIAL_SHOW_VERSION 0x02
#define SPECIAL_SHOW_LICENSE 0x04
#define SPECIAL_LISTED 0x08
static opt_option options[] =
; static const char *version_msg[] = ; static const char *help_head = N_(
"usage: vsyasm [option]* file...\n"
"Options:\n"); static const char *help_tail = N_(
"\n"
"Files are asm sources to be assembled.\n"
"\n"
"Sample invocation:\n"
"   vsyasm -f win64 -o objdir source1.asm source2.asm\n"
"\n"
"All options apply to all files.\n"
"\n"
"Report bugs to bug-yasm@tortall.net\n");
typedef STAILQ_HEAD(constcharparam_head, constcharparam) constcharparam_head;
typedef struct constcharparam  constcharparam;
static constcharparam_head preproc_options;
static constcharparam_head input_files;
static int num_input_files = 0;
static int
do_assemble(const char *in_filename)
int
main(int argc, char *argv[])
static FILE *
open_file(const char *filename, const char *mode)
static int
check_errors(yasm_errwarns *errwarns, yasm_object *object,
yasm_linemap *linemap, yasm_preproc *preproc, yasm_arch *arch)
#define DO_FREE         1
static void
cleanup(void)
static void
free_input_filenames(void)
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
opt_listdir_handler( char *cmd, char *param, int extra)
static int
opt_objdir_handler( char *cmd, char *param, int extra)
static int
opt_mapdir_handler( char *cmd, char *param, int extra)
static int
opt_listext_handler( char *cmd, char *param, int extra)
static int
opt_objext_handler( char *cmd, char *param, int extra)
static int
opt_mapext_handler( char *cmd, char *param, int extra)
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
opt_include_option( char *cmd, char *param, int extra)
static int
opt_preproc_option( char *cmd, char *param, int extra)
static int
opt_ewmsg_handler( char *cmd, char *param, int extra)
static int
opt_prefix_handler( char *cmd, char *param, int extra)
static int
opt_suffix_handler( char *cmd, char *param, int extra)
#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
static int
opt_plugin_handler( char *cmd, char *param, int extra)
static void
apply_preproc_builtins(yasm_preproc *preproc)
static void
apply_preproc_standard_macros(yasm_preproc *preproc, const yasm_stdmac *stdmacs)
static void
apply_preproc_saved_options(yasm_preproc *preproc)
static void
free_preproc_saved_options(void)
static char *
replace_extension(const char *orig, const char *ext)
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
