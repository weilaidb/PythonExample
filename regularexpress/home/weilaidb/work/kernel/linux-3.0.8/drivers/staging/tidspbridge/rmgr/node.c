#define HOSTPREFIX	  "/host"
#define PIPEPREFIX	  "/dbpipe"
#define MAX_INPUTS(h)  \
((h)->dcd_props.obj_data.node_obj.ndb_props.num_input_streams)
#define MAX_OUTPUTS(h) \
((h)->dcd_props.obj_data.node_obj.ndb_props.num_output_streams)
#define NODE_GET_PRIORITY(h) ((h)->prio)
#define NODE_SET_PRIORITY(hnode, prio) ((hnode)->prio = prio)
#define NODE_SET_STATE(hnode, state) ((hnode)->node_state = state)
#define MAXPIPES	100
#define MAXDEVSUFFIXLEN 2
#define PIPENAMELEN     (sizeof(PIPEPREFIX) + MAXDEVSUFFIXLEN)
#define HOSTNAMELEN     (sizeof(HOSTPREFIX) + MAXDEVSUFFIXLEN)
#define MAXDEVNAMELEN	32
#define CREATEPHASE	1
#define EXECUTEPHASE	2
#define DELETEPHASE	3
#define DEFAULTBUFSIZE		32
#define DEFAULTNBUFS		2
#define DEFAULTSEGID		0
#define DEFAULTALIGNMENT	0
#define DEFAULTTIMEOUT		10000
#define RMSQUERYSERVER		0
#define RMSCONFIGURESERVER	1
#define RMSCREATENODE		2
#define RMSEXECUTENODE		3
#define RMSDELETENODE		4
#define RMSCHANGENODEPRIORITY	5
#define RMSREADMEMORY		6
#define RMSWRITEMEMORY		7
#define RMSCOPY			8
#define MAXTIMEOUT		2000
#define NUMRMSFXNS		9
#define PWR_TIMEOUT		500
#define STACKSEGLABEL "L1DSRAM_HEAP"
struct node_mgr ;
enum connecttype ;
struct stream_chnl ;
struct node_object ;
static struct dsp_bufferattr node_dfltbufattrs = ;
static void delete_node(struct node_object *hnode,
struct process_context *pr_ctxt);
static void delete_node_mgr(struct node_mgr *hnode_mgr);
static void fill_stream_connect(struct node_object *node1,
struct node_object *node2, u32 stream1,
u32 stream2);
static void fill_stream_def(struct node_object *hnode,
struct node_strmdef *pstrm_def,
struct dsp_strmattr *pattrs);
static void free_stream(struct node_mgr *hnode_mgr, struct stream_chnl stream);
static int get_fxn_address(struct node_object *hnode, u32 * fxn_addr,
u32 phase);
static int get_node_props(struct dcd_manager *hdcd_mgr,
struct node_object *hnode,
const struct dsp_uuid *node_uuid,
struct dcd_genericobj *dcd_prop);
static int get_proc_props(struct node_mgr *hnode_mgr,
struct dev_object *hdev_obj);
static int get_rms_fxns(struct node_mgr *hnode_mgr);
static u32 ovly(void *priv_ref, u32 dsp_run_addr, u32 dsp_load_addr,
u32 ul_num_bytes, u32 mem_space);
static u32 mem_write(void *priv_ref, u32 dsp_add, void *pbuf,
u32 ul_num_bytes, u32 mem_space);
static u32 refs;
static struct node_ldr_fxns nldr_fxns = ;
enum node_state node_get_state(void *hnode)
int node_allocate(struct proc_object *hprocessor,
const struct dsp_uuid *node_uuid,
const struct dsp_cbdata *pargs,
const struct dsp_nodeattrin *attr_in,
struct node_res_object **noderes,
struct process_context *pr_ctxt)
DBAPI node_alloc_msg_buf(struct node_object *hnode, u32 usize,
struct dsp_bufferattr *pattr,
u8 **pbuffer)
int node_change_priority(struct node_object *hnode, s32 prio)
int node_connect(struct node_object *node1, u32 stream1,
struct node_object *node2,
u32 stream2, struct dsp_strmattr *pattrs,
struct dsp_cbdata *conn_param)
int node_create(struct node_object *hnode)
int node_create_mgr(struct node_mgr **node_man,
struct dev_object *hdev_obj)
int node_delete(struct node_res_object *noderes,
struct process_context *pr_ctxt)
int node_delete_mgr(struct node_mgr *hnode_mgr)
int node_enum_nodes(struct node_mgr *hnode_mgr, void **node_tab,
u32 node_tab_size, u32 *pu_num_nodes,
u32 *pu_allocated)
void node_exit(void)
int node_free_msg_buf(struct node_object *hnode, u8 * pbuffer,
struct dsp_bufferattr *pattr)
int node_get_attr(struct node_object *hnode,
struct dsp_nodeattr *pattr, u32 attr_size)
int node_get_channel_id(struct node_object *hnode, u32 dir, u32 index,
u32 *chan_id)
int node_get_message(struct node_object *hnode,
struct dsp_msg *message, u32 utimeout)
int node_get_nldr_obj(struct node_mgr *hnode_mgr,
struct nldr_object **nldr_ovlyobj)
int node_get_strm_mgr(struct node_object *hnode,
struct strm_mgr **strm_man)
enum nldr_loadtype node_get_load_type(struct node_object *hnode)
u32 node_get_timeout(struct node_object *hnode)
enum node_type node_get_type(struct node_object *hnode)
bool node_init(void)
void node_on_exit(struct node_object *hnode, s32 node_status)
int node_pause(struct node_object *hnode)
int node_put_message(struct node_object *hnode,
const struct dsp_msg *pmsg, u32 utimeout)
int node_register_notify(struct node_object *hnode, u32 event_mask,
u32 notify_type,
struct dsp_notification *hnotification)
int node_run(struct node_object *hnode)
int node_terminate(struct node_object *hnode, int *pstatus)
static void delete_node(struct node_object *hnode,
struct process_context *pr_ctxt)
static void delete_node_mgr(struct node_mgr *hnode_mgr)
static void fill_stream_connect(struct node_object *node1,
struct node_object *node2,
u32 stream1, u32 stream2)
static void fill_stream_def(struct node_object *hnode,
struct node_strmdef *pstrm_def,
struct dsp_strmattr *pattrs)
static void free_stream(struct node_mgr *hnode_mgr, struct stream_chnl stream)
static int get_fxn_address(struct node_object *hnode, u32 * fxn_addr,
u32 phase)
void get_node_info(struct node_object *hnode, struct dsp_nodeinfo *node_info)
static int get_node_props(struct dcd_manager *hdcd_mgr,
struct node_object *hnode,
const struct dsp_uuid *node_uuid,
struct dcd_genericobj *dcd_prop)
static int get_proc_props(struct node_mgr *hnode_mgr,
struct dev_object *hdev_obj)
int node_get_uuid_props(void *hprocessor,
const struct dsp_uuid *node_uuid,
struct dsp_ndbprops *node_props)
static int get_rms_fxns(struct node_mgr *hnode_mgr)
static u32 ovly(void *priv_ref, u32 dsp_run_addr, u32 dsp_load_addr,
u32 ul_num_bytes, u32 mem_space)
static u32 mem_write(void *priv_ref, u32 dsp_add, void *pbuf,
u32 ul_num_bytes, u32 mem_space)
int node_find_addr(struct node_mgr *node_mgr, u32 sym_addr,
u32 offset_range, void *sym_addr_output, char *sym_name)
