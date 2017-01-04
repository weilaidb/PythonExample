#define DEFAULTTIMEOUT      10000
#define DEFAULTNUMBUFS      2
struct strm_mgr ;
struct strm_object ;
static u32 refs;
static int delete_strm(struct strm_object *stream_obj);
int strm_allocate_buffer(struct strm_res_object *strmres, u32 usize,
u8 **ap_buffer, u32 num_bufs,
struct process_context *pr_ctxt)
int strm_close(struct strm_res_object *strmres,
struct process_context *pr_ctxt)
int strm_create(struct strm_mgr **strm_man,
struct dev_object *dev_obj)
void strm_delete(struct strm_mgr *strm_mgr_obj)
void strm_exit(void)
int strm_free_buffer(struct strm_res_object *strmres, u8 ** ap_buffer,
u32 num_bufs, struct process_context *pr_ctxt)
int strm_get_info(struct strm_object *stream_obj,
struct stream_info *stream_info,
u32 stream_info_size)
int strm_idle(struct strm_object *stream_obj, bool flush_data)
bool strm_init(void)
int strm_issue(struct strm_object *stream_obj, u8 *pbuf, u32 ul_bytes,
u32 ul_buf_size, u32 dw_arg)
int strm_open(struct node_object *hnode, u32 dir, u32 index,
struct strm_attr *pattr,
struct strm_res_object **strmres,
struct process_context *pr_ctxt)
int strm_reclaim(struct strm_object *stream_obj, u8 ** buf_ptr,
u32 *nbytes, u32 *buff_size, u32 *pdw_arg)
int strm_register_notify(struct strm_object *stream_obj, u32 event_mask,
u32 notify_type, struct dsp_notification
* hnotification)
int strm_select(struct strm_object **strm_tab, u32 strms,
u32 *pmask, u32 utimeout)
static int delete_strm(struct strm_object *stream_obj)
