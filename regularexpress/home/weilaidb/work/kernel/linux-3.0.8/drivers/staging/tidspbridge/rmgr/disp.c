#define REPLYSIZE (3 * sizeof(rms_word))
#define CHNLTORMSOFFSET       0
#define CHNLFROMRMSOFFSET     1
#define CHNLIOREQS      1
struct disp_object ;
static u32 refs;
static void delete_disp(struct disp_object *disp_obj);
static int fill_stream_def(rms_word *pdw_buf, u32 *ptotal, u32 offset,
struct node_strmdef strm_def, u32 max,
u32 chars_in_rms_word);
static int send_message(struct disp_object *disp_obj, u32 timeout,
u32 ul_bytes, u32 *pdw_arg);
int disp_create(struct disp_object **dispatch_obj,
struct dev_object *hdev_obj,
const struct disp_attr *disp_attrs)
void disp_delete(struct disp_object *disp_obj)
void disp_exit(void)
bool disp_init(void)
int disp_node_change_priority(struct disp_object *disp_obj,
struct node_object *hnode,
u32 rms_fxn, nodeenv node_env, s32 prio)
int disp_node_create(struct disp_object *disp_obj,
struct node_object *hnode, u32 rms_fxn,
u32 ul_create_fxn,
const struct node_createargs *pargs,
nodeenv *node_env)
int disp_node_delete(struct disp_object *disp_obj,
struct node_object *hnode, u32 rms_fxn,
u32 ul_delete_fxn, nodeenv node_env)
int disp_node_run(struct disp_object *disp_obj,
struct node_object *hnode, u32 rms_fxn,
u32 ul_execute_fxn, nodeenv node_env)
static void delete_disp(struct disp_object *disp_obj)
static int fill_stream_def(rms_word *pdw_buf, u32 *ptotal, u32 offset,
struct node_strmdef strm_def, u32 max,
u32 chars_in_rms_word)
static int send_message(struct disp_object *disp_obj, u32 timeout,
u32 ul_bytes, u32 *pdw_arg)
