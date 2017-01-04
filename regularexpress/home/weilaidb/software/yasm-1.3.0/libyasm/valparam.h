#define YASM_VALPARAM_H
#define YASM_LIB_DECL
struct yasm_valparam ; STAILQ_HEAD(yasm_valparamhead, yasm_valparam);
struct yasm_directive ;
YASM_LIB_DECL
void yasm_call_directive(const yasm_directive *directive, yasm_object *object,
yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line);
YASM_LIB_DECL
yasm_valparam *yasm_vp_create_id( char *v, char *p,
int id_prefix);
YASM_LIB_DECL
yasm_valparam *yasm_vp_create_string( char *v, char *p);
YASM_LIB_DECL
yasm_valparam *yasm_vp_create_expr( char *v, yasm_expr *p);
YASM_LIB_DECL yasm_expr *yasm_vp_expr
(const yasm_valparam *vp, yasm_symtab *symtab, unsigned long line);
YASM_LIB_DECL const char *yasm_vp_string(const yasm_valparam *vp);
YASM_LIB_DECL const char *yasm_vp_id(const yasm_valparam *vp);
YASM_LIB_DECL
yasm_valparamhead *yasm_vps_create(void);
YASM_LIB_DECL
void yasm_vps_destroy(yasm_valparamhead *headp);
void yasm_vps_initialize( yasm_valparamhead *headp);
#define yasm_vps_initialize(headp)      STAILQ_INIT(headp)
YASM_LIB_DECL
void yasm_vps_delete(yasm_valparamhead *headp);
void yasm_vps_append(yasm_valparamhead *headp, yasm_valparam *vp);
#define yasm_vps_append(headp, vp)      do  while(0) yasm_valparam *yasm_vps_first
(yasm_valparamhead *headp);
#define yasm_vps_first(headp)       STAILQ_FIRST(headp) yasm_valparam *yasm_vps_next(yasm_valparam *cur);
#define yasm_vps_next(cur)          STAILQ_NEXT(cur, link)
#define yasm_vps_foreach(iter, headp)   STAILQ_FOREACH(iter, headp, link)
YASM_LIB_DECL
void yasm_vps_print( const yasm_valparamhead *headp, FILE *f);
typedef struct yasm_dir_help  yasm_dir_help;
YASM_LIB_DECL
int yasm_dir_helper(void *obj, yasm_valparam *vp_first, unsigned long line,
const yasm_dir_help *help, size_t nhelp, void *data,
int (*helper_valparam) (void *object,
yasm_valparam *vp,
unsigned long line,
void *data));
YASM_LIB_DECL
int yasm_dir_helper_flag_set(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg);
YASM_LIB_DECL
int yasm_dir_helper_flag_or(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg);
YASM_LIB_DECL
int yasm_dir_helper_flag_and(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg);
YASM_LIB_DECL
int yasm_dir_helper_expr(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg);
YASM_LIB_DECL
int yasm_dir_helper_intn(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg);
YASM_LIB_DECL
int yasm_dir_helper_string(void *obj, yasm_valparam *vp, unsigned long line,
void *data, uintptr_t arg);
YASM_LIB_DECL
int yasm_dir_helper_valparam_warn(void *obj, yasm_valparam *vp,
unsigned long line, void *data);
