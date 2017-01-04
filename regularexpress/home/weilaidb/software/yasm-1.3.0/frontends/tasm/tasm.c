#if defined(CMAKE_BUILD) && defined(BUILD_SHARED_LIBS)
#define DEFAULT_OBJFMT_MODULE   "bin"
#if defined(CMAKE_BUILD) && !defined(BUILD_SHARED_LIBS)
void yasm_init_plugin(void); static char *obj_filename = NULL, *in_filename = NULL; static char *list_filename = NULL, *xref_filename = NULL; static char *machine_name = NULL;
static int special_options = 0;
static int segment_ordering = 0;
static int cross_reference = 0;
static int floating_point = 0;
static int listing = 0;
static int expanded_listing = 0;
static int case_sensitivity = 0;
static int valid_length = -1; static yasm_arch *cur_arch = NULL; static const yasm_arch_module *
cur_arch_module = NULL; static const yasm_parser_module *
cur_parser_module = NULL; static yasm_preproc *cur_preproc = NULL; static const yasm_preproc_module *
cur_preproc_module = NULL; static char *objfmt_keyword = NULL; static const yasm_objfmt_module *
cur_objfmt_module = NULL; static const yasm_dbgfmt_module *
cur_dbgfmt_module = NULL; static yasm_listfmt *cur_listfmt = NULL; static const yasm_listfmt_module *
cur_listfmt_module = NULL;
static int warning_error = 0;
static FILE *errfile; static char *error_filename = NULL; static FILE *open_file(const char *filename,
const char *mode);
static void check_errors( yasm_errwarns *errwarns, yasm_object *object, yasm_linemap *linemap);
static void cleanup( yasm_object *object);
static int opt_special_handler(char *cmd, char *param, int extra);
static int opt_segment_ordering_handler(char *cmd, char *param, int extra);
static int opt_cross_reference_handler(char *cmd, char *param, int extra);
static int opt_floating_point_handler(char *cmd, char *param, int extra);
static int opt_ignore(char *cmd, char *param, int extra);
static int opt_listing_handler(char *cmd, char *param, int extra);
static int opt_case_handler(char *cmd, char *param, int extra);
static int opt_valid_length_handler(char *cmd, char *param, int extra);
static int opt_warning_handler(char *cmd, char *param, int extra);
static int opt_preproc_option(char *cmd, char *param, int extra);
static int opt_exe_handler(char *cmd, char *param, int extra);
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
#define SEGMENT_ORDERING_ALPHABETIC 0x01
#define SEGMENT_ORDERING_SOURCE 0x02
#define FP_EMULATED 0x01
#define FP_REAL 0x02
#define CASE_ALL 0x01
#define CASE_GLOBALS 0x02
#define CASE_NONE 0x04
#define DEBUG_FULL 0x01
#define DEBUG_LINES 0x02
#define DEBUG_NONE 0x04
static opt_option options[] =
; static const char *version_msg[] = ; static const char *help_head = N_(
"usage: tasm [option]* source [,object] [,listing] [,xref] \n"
"Options:\n"); static const char *help_tail = N_(
"\n"
"source is asm source to be assembled.\n"
"\n"
"Sample invocation:\n"
"   tasm /zi source.asm\n"
"\n"
"Report bugs to bug-yasm@tortall.net\n");
typedef STAILQ_HEAD(constcharparam_head, constcharparam) constcharparam_head;
typedef struct constcharparam  constcharparam;
static constcharparam_head preproc_options;
static int
do_assemble(void)
int
main(int argc, char *argv[])
static FILE *
open_file(const char *filename, const char *mode)
static void
check_errors(yasm_errwarns *errwarns, yasm_object *object,
yasm_linemap *linemap)
#define DO_FREE 1
static void
cleanup(yasm_object *object)
static char ** const filenames[] = , ** const * cur_filename = &filenames[0];
static int filename_handler(char *param)
int
not_an_option_handler(char *param)
static int
opt_special_handler( char *cmd, char *param, int extra)
static int
opt_segment_ordering_handler( char *cmd, char *param, int extra)
static int
opt_cross_reference_handler( char *cmd, char *param, int extra)
static int
opt_floating_point_handler( char *cmd, char *param, int extra)
static int
opt_ignore( char *cmd, char *param, int extra)
static int
opt_listing_handler( char *cmd, char *param, int extra)
static int
opt_case_handler( char *cmd, char *param, int extra)
static int
opt_valid_length_handler( char *cmd, char *param, int extra)
static int
opt_warning_handler(char *cmd, char *param, int extra)
static int
opt_preproc_option( char *cmd, char *param, int extra)
static int
opt_exe_handler(char *cmd, char *param, int extra)
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
static void
print_yasm_error(const char *filename, unsigned long line, const char *msg,
const char *xref_fn, unsigned long xref_line,
const char *xref_msg)
static void
print_yasm_warning(const char *filename, unsigned long line, const char *msg)
