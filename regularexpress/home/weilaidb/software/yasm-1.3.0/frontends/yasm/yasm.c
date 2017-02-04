defined
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
*open_file;
check_errors;
cleanup;
opt_special_handler;
opt_arch_handler;
opt_parser_handler;
opt_preproc_handler;
opt_objfmt_handler;
opt_dbgfmt_handler;
opt_listfmt_handler;
opt_listfile_handler;
opt_objfile_handler;
opt_mapfile_handler;
opt_machine_handler;
opt_strict_handler;
opt_warning_handler;
opt_error_file;
opt_error_stdout;
preproc_only_handler;
opt_include_option;
opt_preproc_option;
opt_ewmsg_handler;
opt_makedep_handler;
opt_prefix_handler;
opt_suffix_handler;
defined
opt_plugin_handler;
defined && !defined(BUILD_SHARED_LIBS)
yasm_init_plugin;
*replace_extension;
print_error;
handle_yasm_int_error;
handle_yasm_fatal;
*handle_yasm_gettext;
print_yasm_error;
print_yasm_warning;
apply_preproc_builtins;
apply_preproc_standard_macros;
apply_preproc_saved_options;
print_list_keyword_desc;
#define SPECIAL_SHOW_HELP 0x01
#define SPECIAL_SHOW_VERSION 0x02
#define SPECIAL_SHOW_LICENSE 0x04
#define SPECIAL_LISTED 0x08
static opt_option options[] =
; static const char *version_msg[] = ; static const char *help_head = N_(
); static const char *help_tail = N_(
);
STAILQ_HEAD constcharparam_head;
typedef struct constcharparam  constcharparam;
static constcharparam_head preproc_options;
do_preproc_only
do_assemble
main
open_file
check_errors
#define DO_FREE         1
cleanup
not_an_option_handler
other_option_handler
opt_special_handler
opt_arch_handler
opt_parser_handler
opt_preproc_handler
opt_objfmt_handler
opt_dbgfmt_handler
opt_listfmt_handler
opt_listfile_handler
opt_objfile_handler
opt_mapfile_handler
opt_machine_handler
opt_strict_handler
opt_warning_handler
opt_error_file
opt_error_stdout
preproc_only_handler
opt_include_option
opt_preproc_option
opt_ewmsg_handler
opt_makedep_handler
opt_prefix_handler
opt_suffix_handler
defined
opt_plugin_handler
apply_preproc_builtins
apply_preproc_standard_macros
apply_preproc_saved_options
replace_extension
print_list_keyword_desc
print_error
handle_yasm_int_error
handle_yasm_fatal
handle_yasm_gettext
static const char *fmt[2] = ;
static const char *fmt_noline[2] = ;
print_yasm_error
print_yasm_warning
