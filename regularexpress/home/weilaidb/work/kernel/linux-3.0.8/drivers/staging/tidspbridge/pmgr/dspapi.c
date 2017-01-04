#define MAX_TRACEBUFLEN 255
#define MAX_LOADARGS    16
#define MAX_NODES       64
#define MAX_STREAMS     16
#define MAX_BUFS	64
#define DB_GET_IOC_TABLE(cmd)	(DB_GET_MODULE(cmd) >> DB_MODULE_SHIFT)
struct api_cmd ;
static u32 api_c_refs;
static struct api_cmd mgr_cmd[] = ;
static struct api_cmd proc_cmd[] = ;
static struct api_cmd node_cmd[] = ;
static struct api_cmd strm_cmd[] = ;
static struct api_cmd cmm_cmd[] = ;
static u8 size_cmd[] = ;
static inline void _cp_fm_usr(void *to, const void __user * from,
int *err, unsigned long bytes)
#define CP_FM_USR(to, from, err, n)				\
_cp_fm_usr(to, from, &(err), (n) * sizeof(*(to)))
static inline void _cp_to_usr(void __user *to, const void *from,
int *err, unsigned long bytes)
#define CP_TO_USR(to, from, err, n)				\
_cp_to_usr(to, from, &(err), (n) * sizeof(*(from)))
inline int api_call_dev_ioctl(u32 cmd, union trapped_args *args,
u32 *result, void *pr_ctxt)
void api_exit(void)
bool api_init(void)
int api_init_complete2(void)
u32 mgrwrap_enum_node_info(union trapped_args *args, void *pr_ctxt)
u32 mgrwrap_enum_proc_info(union trapped_args *args, void *pr_ctxt)
#define WRAP_MAP2CALLER(x) x
u32 mgrwrap_register_object(union trapped_args *args, void *pr_ctxt)
u32 mgrwrap_unregister_object(union trapped_args *args, void *pr_ctxt)
u32 mgrwrap_wait_for_bridge_events(union trapped_args *args, void *pr_ctxt)
u32 __deprecated mgrwrap_get_process_resources_info(union trapped_args * args,
void *pr_ctxt)
u32 procwrap_attach(union trapped_args *args, void *pr_ctxt)
u32 procwrap_ctrl(union trapped_args *args, void *pr_ctxt)
u32 __deprecated procwrap_detach(union trapped_args * args, void *pr_ctxt)
u32 procwrap_enum_node_info(union trapped_args *args, void *pr_ctxt)
u32 procwrap_end_dma(union trapped_args *args, void *pr_ctxt)
u32 procwrap_begin_dma(union trapped_args *args, void *pr_ctxt)
u32 procwrap_flush_memory(union trapped_args *args, void *pr_ctxt)
u32 procwrap_invalidate_memory(union trapped_args *args, void *pr_ctxt)
u32 procwrap_enum_resources(union trapped_args *args, void *pr_ctxt)
u32 procwrap_get_state(union trapped_args *args, void *pr_ctxt)
u32 procwrap_get_trace(union trapped_args *args, void *pr_ctxt)
u32 procwrap_load(union trapped_args *args, void *pr_ctxt)
u32 procwrap_map(union trapped_args *args, void *pr_ctxt)
u32 procwrap_register_notify(union trapped_args *args, void *pr_ctxt)
u32 procwrap_reserve_memory(union trapped_args *args, void *pr_ctxt)
u32 procwrap_start(union trapped_args *args, void *pr_ctxt)
u32 procwrap_un_map(union trapped_args *args, void *pr_ctxt)
u32 procwrap_un_reserve_memory(union trapped_args *args, void *pr_ctxt)
u32 procwrap_stop(union trapped_args *args, void *pr_ctxt)
inline void find_node_handle(struct node_res_object **noderes,
void *pr_ctxt, void *hnode)
u32 nodewrap_allocate(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_alloc_msg_buf(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_change_priority(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_connect(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_create(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_delete(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_free_msg_buf(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_get_attr(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_get_message(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_pause(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_put_message(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_register_notify(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_run(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_terminate(union trapped_args *args, void *pr_ctxt)
u32 nodewrap_get_uuid_props(union trapped_args *args, void *pr_ctxt)
inline void find_strm_handle(struct strm_res_object **strmres,
void *pr_ctxt, void *hstream)
u32 strmwrap_allocate_buffer(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_close(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_free_buffer(union trapped_args *args, void *pr_ctxt)
u32 __deprecated strmwrap_get_event_handle(union trapped_args * args,
void *pr_ctxt)
u32 strmwrap_get_info(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_idle(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_issue(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_open(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_reclaim(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_register_notify(union trapped_args *args, void *pr_ctxt)
u32 strmwrap_select(union trapped_args *args, void *pr_ctxt)
u32 __deprecated cmmwrap_calloc_buf(union trapped_args * args, void *pr_ctxt)
u32 __deprecated cmmwrap_free_buf(union trapped_args * args, void *pr_ctxt)
u32 cmmwrap_get_handle(union trapped_args *args, void *pr_ctxt)
u32 cmmwrap_get_info(union trapped_args *args, void *pr_ctxt)
