#define YASM_NASM_PREPROC_H
void pp_pre_include (const char *);
void pp_pre_define (char *);
void pp_pre_undefine (char *);
void pp_builtin_define (char *);
void pp_extra_stdmac (const char **);
extern Preproc nasmpp;
nasm_preproc_add_dep;
