#define DSPDEFS_
struct bridge_dev_context;
typedef int(*fxn_brd_monitor) (struct bridge_dev_context *dev_ctxt);
typedef int(*fxn_brd_setstate) (struct bridge_dev_context
* dev_ctxt, u32 brd_state);
typedef int(*fxn_brd_start) (struct bridge_dev_context
* dev_ctxt, u32 dsp_addr);
typedef int(*fxn_brd_memcopy) (struct bridge_dev_context
* dev_ctxt,
u32 dsp_dest_addr,
u32 dsp_src_addr,
u32 ul_num_bytes, u32 mem_type);
typedef int(*fxn_brd_memwrite) (struct bridge_dev_context
* dev_ctxt,
u8 *host_buf,
u32 dsp_addr, u32 ul_num_bytes,
u32 mem_type);
typedef int(*fxn_brd_memmap) (struct bridge_dev_context
* dev_ctxt, u32 ul_mpu_addr,
u32 virt_addr, u32 ul_num_bytes,
u32 map_attr,
struct page **mapped_pages);
typedef int(*fxn_brd_memunmap) (struct bridge_dev_context
* dev_ctxt,
u32 virt_addr, u32 ul_num_bytes);
typedef int(*fxn_brd_stop) (struct bridge_dev_context *dev_ctxt);
typedef int(*fxn_brd_status) (struct bridge_dev_context *dev_ctxt,
int *board_state);
typedef int(*fxn_brd_read) (struct bridge_dev_context *dev_ctxt,
u8 *host_buf,
u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type);
typedef int(*fxn_brd_write) (struct bridge_dev_context *dev_ctxt,
u8 *host_buf,
u32 dsp_addr,
u32 ul_num_bytes, u32 mem_type);
typedef int(*fxn_chnl_create) (struct chnl_mgr
**channel_mgr,
struct dev_object
* hdev_obj,
const struct
chnl_mgrattrs * mgr_attrts);
typedef int(*fxn_chnl_destroy) (struct chnl_mgr *hchnl_mgr);
typedef void (*fxn_deh_notify) (struct deh_mgr *hdeh_mgr,
u32 evnt_mask, u32 error_info);
typedef int(*fxn_chnl_open) (struct chnl_object
**chnl,
struct chnl_mgr *hchnl_mgr,
s8 chnl_mode,
u32 ch_id,
const struct
chnl_attr * pattrs);
typedef int(*fxn_chnl_close) (struct chnl_object *chnl_obj);
typedef int(*fxn_chnl_addioreq) (struct chnl_object
* chnl_obj,
void *host_buf,
u32 byte_size,
u32 buf_size,
u32 dw_dsp_addr, u32 dw_arg);
typedef int(*fxn_chnl_getioc) (struct chnl_object *chnl_obj,
u32 timeout,
struct chnl_ioc *chan_ioc);
typedef int(*fxn_chnl_cancelio) (struct chnl_object *chnl_obj);
typedef int(*fxn_chnl_flushio) (struct chnl_object *chnl_obj,
u32 timeout);
typedef int(*fxn_chnl_getinfo) (struct chnl_object *chnl_obj,
struct chnl_info *channel_info);
typedef int(*fxn_chnl_getmgrinfo) (struct chnl_mgr
* hchnl_mgr,
u32 ch_id,
struct chnl_mgrinfo *mgr_info);
typedef int(*fxn_chnl_idle) (struct chnl_object *chnl_obj,
u32 timeout, bool flush_data);
typedef int(*fxn_chnl_registernotify)
(struct chnl_object *chnl_obj,
u32 event_mask, u32 notify_type, struct dsp_notification *hnotification);
typedef int(*fxn_dev_create) (struct bridge_dev_context
**device_ctx,
struct dev_object
* hdev_obj,
struct cfg_hostres
* config_param);
typedef int(*fxn_dev_ctrl) (struct bridge_dev_context *dev_ctxt,
u32 dw_cmd, void *pargs);
typedef int(*fxn_dev_destroy) (struct bridge_dev_context *dev_ctxt);
typedef int(*fxn_io_create) (struct io_mgr **io_man,
struct dev_object *hdev_obj,
const struct io_attrs *mgr_attrts);
typedef int(*fxn_io_destroy) (struct io_mgr *hio_mgr);
typedef int(*fxn_io_onloaded) (struct io_mgr *hio_mgr);
typedef int(*fxn_io_getprocload) (struct io_mgr *hio_mgr,
struct dsp_procloadstat *
proc_load_stat);
typedef int(*fxn_msg_create)
(struct msg_mgr **msg_man,
struct dev_object *hdev_obj, msg_onexit msg_callback);
typedef int(*fxn_msg_createqueue)
(struct msg_mgr *hmsg_mgr,
struct msg_queue **msgq, u32 msgq_id, u32 max_msgs, void *h);
typedef void (*fxn_msg_delete) (struct msg_mgr *hmsg_mgr);
typedef void (*fxn_msg_deletequeue) (struct msg_queue *msg_queue_obj);
typedef int(*fxn_msg_get) (struct msg_queue *msg_queue_obj,
struct dsp_msg *pmsg, u32 utimeout);
typedef int(*fxn_msg_put) (struct msg_queue *msg_queue_obj,
const struct dsp_msg *pmsg, u32 utimeout);
typedef int(*fxn_msg_registernotify)
(struct msg_queue *msg_queue_obj,
u32 event_mask, u32 notify_type, struct dsp_notification *hnotification);
typedef void (*fxn_msg_setqueueid) (struct msg_queue *msg_queue_obj,
u32 msgq_id);
struct bridge_drv_interface ;
void bridge_drv_entry(struct bridge_drv_interface **drv_intf,
const char *driver_file_name);
