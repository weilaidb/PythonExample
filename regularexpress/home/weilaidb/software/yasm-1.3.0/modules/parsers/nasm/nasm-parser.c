static void
nasm_do_parse(yasm_object *object, yasm_preproc *pp, int save_input,
yasm_linemap *linemap, yasm_errwarns *errwarns, int tasm)
static void
nasm_parser_do_parse(yasm_object *object, yasm_preproc *pp,
int save_input, yasm_linemap *linemap,
yasm_errwarns *errwarns)
static const char *nasm_parser_preproc_keywords[] = ;
static const yasm_stdmac nasm_parser_stdmacs[] = ;
yasm_parser_module yasm_nasm_LTX_parser = ;
static void
tasm_parser_do_parse(yasm_object *object, yasm_preproc *pp,
int save_input, yasm_linemap *linemap,
yasm_errwarns *errwarns)
static const char *tasm_parser_preproc_keywords[] = ;
static const yasm_stdmac tasm_parser_stdmacs[] = ;
yasm_parser_module yasm_tasm_LTX_parser = ;
