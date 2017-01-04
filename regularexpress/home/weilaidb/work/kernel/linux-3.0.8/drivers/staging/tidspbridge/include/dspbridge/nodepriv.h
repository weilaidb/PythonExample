#define NODEPRIV_
typedef u32 nodeenv;
struct node_msgargs ;
struct node_strmdef ;
struct node_taskargs ;
struct node_createargs ;
extern int node_get_channel_id(struct node_object *hnode,
u32 dir, u32 index, u32 *chan_id);
extern int node_get_strm_mgr(struct node_object *hnode,
struct strm_mgr **strm_man);
extern u32 node_get_timeout(struct node_object *hnode);
extern enum node_type node_get_type(struct node_object *hnode);
extern void get_node_info(struct node_object *hnode,
struct dsp_nodeinfo *node_info);
extern enum nldr_loadtype node_get_load_type(struct node_object *hnode);
