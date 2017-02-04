#define YASM_VALPARAM_H
#define YASM_LIB_DECL
struct yasm_valparam ; STAILQ_HEAD(yasm_valparamhead, yasm_valparam);
struct yasm_directive ;
YASM_LIB_DECL
yasm_call_directive;
YASM_LIB_DECL
*yasm_vp_create_id;
YASM_LIB_DECL
*yasm_vp_create_string;
YASM_LIB_DECL
*yasm_vp_create_expr;
YASM_LIB_DECL yasm_expr *yasm_vp_expr
(const yasm_valparam *vp, yasm_symtab *symtab, unsigned long line);
*yasm_vp_string;
*yasm_vp_id;
YASM_LIB_DECL
*yasm_vps_create;
YASM_LIB_DECL
yasm_vps_destroy;
yasm_vps_initialize;
yasm_vps_initialize      STAILQ_INIT(headp)
YASM_LIB_DECL
yasm_vps_delete;
yasm_vps_append;
while yasm_valparam *yasm_vps_first
(yasm_valparamhead *headp);
yasm_vps_first       STAILQ_FIRST(headp)
*yasm_vps_next;
yasm_vps_next          STAILQ_NEXT(cur, link)
yasm_vps_foreach   STAILQ_FOREACH(iter, headp, link)
YASM_LIB_DECL
yasm_vps_print;
typedef struct yasm_dir_help  yasm_dir_help;
YASM_LIB_DECL
yasm_dir_helper (void *object,
yasm_valparam *vp,
unsigned long line,
void *data));
YASM_LIB_DECL
yasm_dir_helper_flag_set;
YASM_LIB_DECL
yasm_dir_helper_flag_or;
YASM_LIB_DECL
yasm_dir_helper_flag_and;
YASM_LIB_DECL
yasm_dir_helper_expr;
YASM_LIB_DECL
yasm_dir_helper_intn;
YASM_LIB_DECL
yasm_dir_helper_string;
YASM_LIB_DECL
yasm_dir_helper_valparam_warn;
