#define DISP_
struct disp_object;
struct disp_attr ;
extern int disp_create(struct disp_object **dispatch_obj,
struct dev_object *hdev_obj,
const struct disp_attr *disp_attrs);
extern void disp_delete(struct disp_object *disp_obj);
extern void disp_exit(void);
extern bool disp_init(void);
extern int disp_node_change_priority(struct disp_object
*disp_obj,
struct node_object *hnode,
u32 rms_fxn,
nodeenv node_env, s32 prio);
extern int disp_node_create(struct disp_object *disp_obj,
struct node_object *hnode,
u32 rms_fxn,
u32 ul_create_fxn,
const struct node_createargs
*pargs, nodeenv *node_env);
extern int disp_node_delete(struct disp_object *disp_obj,
struct node_object *hnode,
u32 rms_fxn,
u32 ul_delete_fxn, nodeenv node_env);
extern int disp_node_run(struct disp_object *disp_obj,
struct node_object *hnode,
u32 rms_fxn,
u32 ul_execute_fxn, nodeenv node_env);
