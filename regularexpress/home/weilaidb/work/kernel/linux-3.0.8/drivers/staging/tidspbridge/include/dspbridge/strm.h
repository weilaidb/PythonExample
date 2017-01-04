#define STRM_
extern int strm_allocate_buffer(struct strm_res_object *strmres,
u32 usize,
u8 **ap_buffer,
u32 num_bufs,
struct process_context *pr_ctxt);
extern int strm_close(struct strm_res_object *strmres,
struct process_context *pr_ctxt);
extern int strm_create(struct strm_mgr **strm_man,
struct dev_object *dev_obj);
extern void strm_delete(struct strm_mgr *strm_mgr_obj);
extern void strm_exit(void);
extern int strm_free_buffer(struct strm_res_object *strmres,
u8 **ap_buffer, u32 num_bufs,
struct process_context *pr_ctxt);
extern int strm_get_info(struct strm_object *stream_obj,
struct stream_info *stream_info,
u32 stream_info_size);
extern int strm_idle(struct strm_object *stream_obj, bool flush_data);
extern bool strm_init(void);
extern int strm_issue(struct strm_object *stream_obj, u8 * pbuf,
u32 ul_bytes, u32 ul_buf_size, u32 dw_arg);
extern int strm_open(struct node_object *hnode, u32 dir,
u32 index, struct strm_attr *pattr,
struct strm_res_object **strmres,
struct process_context *pr_ctxt);
extern int strm_reclaim(struct strm_object *stream_obj,
u8 **buf_ptr, u32 * nbytes,
u32 *buff_size, u32 *pdw_arg);
extern int strm_register_notify(struct strm_object *stream_obj,
u32 event_mask, u32 notify_type,
struct dsp_notification
*hnotification);
extern int strm_select(struct strm_object **strm_tab,
u32 strms, u32 *pmask, u32 utimeout);
