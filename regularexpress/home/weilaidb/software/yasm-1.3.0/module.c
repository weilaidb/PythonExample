typedef struct module  module;
extern yasm_arch_module yasm_x86_LTX_arch;
extern yasm_arch_module yasm_lc3b_LTX_arch;
extern yasm_listfmt_module yasm_nasm_LTX_listfmt;
extern yasm_parser_module yasm_gas_LTX_parser;
extern yasm_parser_module yasm_gnu_LTX_parser;
extern yasm_parser_module yasm_nasm_LTX_parser;
extern yasm_parser_module yasm_tasm_LTX_parser;
extern yasm_preproc_module yasm_nasm_LTX_preproc;
extern yasm_preproc_module yasm_tasm_LTX_preproc;
extern yasm_preproc_module yasm_raw_LTX_preproc;
extern yasm_preproc_module yasm_cpp_LTX_preproc;
extern yasm_preproc_module yasm_gas_LTX_preproc;
extern yasm_dbgfmt_module yasm_cv8_LTX_dbgfmt;
extern yasm_dbgfmt_module yasm_dwarf2_LTX_dbgfmt;
extern yasm_dbgfmt_module yasm_null_LTX_dbgfmt;
extern yasm_dbgfmt_module yasm_stabs_LTX_dbgfmt;
extern yasm_objfmt_module yasm_dbg_LTX_objfmt;
extern yasm_objfmt_module yasm_bin_LTX_objfmt;
extern yasm_objfmt_module yasm_dosexe_LTX_objfmt;
extern yasm_objfmt_module yasm_elf_LTX_objfmt;
extern yasm_objfmt_module yasm_elf32_LTX_objfmt;
extern yasm_objfmt_module yasm_elf64_LTX_objfmt;
extern yasm_objfmt_module yasm_elfx32_LTX_objfmt;
extern yasm_objfmt_module yasm_coff_LTX_objfmt;
extern yasm_objfmt_module yasm_macho_LTX_objfmt;
extern yasm_objfmt_module yasm_macho32_LTX_objfmt;
extern yasm_objfmt_module yasm_macho64_LTX_objfmt;
extern yasm_objfmt_module yasm_rdf_LTX_objfmt;
extern yasm_objfmt_module yasm_win32_LTX_objfmt;
extern yasm_objfmt_module yasm_win64_LTX_objfmt;
extern yasm_objfmt_module yasm_x64_LTX_objfmt;
extern yasm_objfmt_module yasm_xdf_LTX_objfmt;
static module arch_modules[] = ;
static module dbgfmt_modules[] = ;
static module objfmt_modules[] = ;
static module listfmt_modules[] = ;
static module parser_modules[] = ;
static module preproc_modules[] = ;
static struct  module_types[] = ;
typedef struct loaded_module  loaded_module;
static loaded_module *loaded_modules = NULL;
static size_t num_loaded_modules = 0;
yasm_load_module
yasm_register_module
yasm_list_one_module (const char *name, const char *keyword))
yasm_list_modules (const char *name, const char *keyword))
