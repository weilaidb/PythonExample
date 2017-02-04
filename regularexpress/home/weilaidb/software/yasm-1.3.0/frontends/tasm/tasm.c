defined
#define DEFAULT_OBJFMT_MODULE
defined && !defined(BUILD_SHARED_LIBS)
yasm_init_plugin; static char *obj_filename = NULL, *in_filename = NULL; static char *list_filename = NULL, *xref_filename = NULL; static char *machine_name = NULL;
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
*open_file;
check_errors;
cleanup;
opt_special_handler;
opt_segment_ordering_handler;
opt_cross_reference_handler;
opt_floating_point_handler;
opt_ignore;
opt_listing_handler;
opt_case_handler;
opt_valid_length_handler;
opt_warning_handler;
opt_preproc_option;
opt_exe_handler;
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
); static const char *help_tail = N_(
);
STAILQ_HEAD constcharparam_head;
typedef struct constcharparam  constcharparam;
static constcharparam_head preproc_options;
do_assemble
main
open_file
check_errors
#define DO_FREE 1
cleanup
static char ** const filenames[] = , ** const * cur_filename = &filenames[0];
filename_handler
not_an_option_handler
opt_special_handler
opt_segment_ordering_handler
opt_cross_reference_handler
opt_floating_point_handler
opt_ignore
opt_listing_handler
opt_case_handler
opt_valid_length_handler
opt_warning_handler
opt_preproc_option
opt_exe_handler
apply_preproc_builtins
apply_preproc_standard_macros
apply_preproc_saved_options
replace_extension
print_list_keyword_desc
print_error
handle_yasm_int_error
handle_yasm_fatal
handle_yasm_gettext
print_yasm_error
print_yasm_warning
