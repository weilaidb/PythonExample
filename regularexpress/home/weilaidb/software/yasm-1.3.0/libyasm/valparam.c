void
yasm_call_directive(const yasm_directive *directive, yasm_object *object,
yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
yasm_valparam *
yasm_vp_create_id( char *v, char *p, int id_prefix)
yasm_valparam *
yasm_vp_create_string( char *v, char *p)
yasm_valparam *
yasm_vp_create_expr( char *v, yasm_expr *p)
yasm_expr *
yasm_vp_expr(const yasm_valparam *vp, yasm_symtab *symtab, unsigned long line)
const char *
yasm_vp_string(const yasm_valparam *vp)
const char *
yasm_vp_id(const yasm_valparam *vp)
void
yasm_vps_delete(yasm_valparamhead *headp)
void
yasm_vps_print(const yasm_valparamhead *headp, FILE *f)
yasm_valparamhead *
yasm_vps_create(void)
void
yasm_vps_destroy(yasm_valparamhead *headp)
int
yasm_dir_helper(void *obj, yasm_valparam *vp_first, unsigned long line,
const yasm_dir_help *help, size_t nhelp, void *data,
int (*helper_valparam) (void *obj, yasm_valparam *vp,
unsigned long line, void *data))
int
yasm_dir_helper_flag_or(void *obj, yasm_valparam *vp, unsigned long line,
void *d, uintptr_t flag)
int
yasm_dir_helper_flag_and(void *obj, yasm_valparam *vp, unsigned long line,
void *d, uintptr_t flag)
int
yasm_dir_helper_flag_set(void *obj, yasm_valparam *vp, unsigned long line,
void *d, uintptr_t flag)
int
yasm_dir_helper_expr(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg)
int
yasm_dir_helper_intn(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg)
int
yasm_dir_helper_string(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg)
int
yasm_dir_helper_valparam_warn(void *obj, yasm_valparam *vp,
unsigned long line, void *data)
