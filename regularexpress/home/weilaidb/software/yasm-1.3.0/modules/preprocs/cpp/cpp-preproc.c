#define CMDLINE_SIZE 32770
#define BSIZE 512
yasm_preproc_module yasm_cpp_LTX_preproc;
typedef struct cpp_arg_entry  cpp_arg_entry;
typedef struct yasm_preproc_cpp  yasm_preproc_cpp;
#define CPP_HAS_BEEN_INVOKED        0x01
#define CPP_HAS_GENERATED_DEPS      0x02
APPEND do  while (0)
cpp_build_cmdline
cpp_invoke
cpp_destroy_args
cpp_generate_deps
cpp_preproc_create
cpp_preproc_destroy
cpp_preproc_get_line
cpp_preproc_get_included_file
cpp_preproc_add_include_file
cpp_preproc_predefine_macro
cpp_preproc_undefine_macro
cpp_preproc_define_builtin
cpp_preproc_add_standard
yasm_preproc_module yasm_cpp_LTX_preproc = ;
