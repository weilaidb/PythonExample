#define __PVRUSB2_HDW_H
#define PVR2_CID_STDENUM 1
#define PVR2_CID_STDCUR 2
#define PVR2_CID_STDAVAIL 3
#define PVR2_CID_INPUT 4
#define PVR2_CID_AUDIOMODE 5
#define PVR2_CID_FREQUENCY 6
#define PVR2_CID_HRES 7
#define PVR2_CID_VRES 8
#define PVR2_CID_CROPL 9
#define PVR2_CID_CROPT 10
#define PVR2_CID_CROPW 11
#define PVR2_CID_CROPH 12
#define PVR2_CID_CROPCAPPAN 13
#define PVR2_CID_CROPCAPPAD 14
#define PVR2_CID_CROPCAPBL 15
#define PVR2_CID_CROPCAPBT 16
#define PVR2_CID_CROPCAPBW 17
#define PVR2_CID_CROPCAPBH 18
#define PVR2_CVAL_INPUT_TV 0
#define PVR2_CVAL_INPUT_DTV 1
#define PVR2_CVAL_INPUT_COMPOSITE 2
#define PVR2_CVAL_INPUT_SVIDEO 3
#define PVR2_CVAL_INPUT_RADIO 4
enum pvr2_config ;
enum pvr2_v4l_type ;
#define PVR2_STATE_NONE 0
#define PVR2_STATE_DEAD 1
#define PVR2_STATE_COLD 2
#define PVR2_STATE_WARM 3
#define PVR2_STATE_ERROR 4
#define PVR2_STATE_READY 5
#define PVR2_STATE_RUN 6
const char *pvr2_config_get_name(enum pvr2_config);
struct pvr2_hdw;
struct pvr2_hdw *pvr2_hdw_create(struct usb_interface *intf,
const struct usb_device_id *devid);
int pvr2_hdw_initialize(struct pvr2_hdw *,
void (*callback_func)(void *),
void *callback_data);
void pvr2_hdw_destroy(struct pvr2_hdw *);
int pvr2_hdw_dev_ok(struct pvr2_hdw *);
int pvr2_hdw_get_unit_number(struct pvr2_hdw *);
struct usb_device *pvr2_hdw_get_dev(struct pvr2_hdw *);
unsigned long pvr2_hdw_get_sn(struct pvr2_hdw *);
const char *pvr2_hdw_get_bus_info(struct pvr2_hdw *);
const char *pvr2_hdw_get_device_identifier(struct pvr2_hdw *);
void pvr2_hdw_disconnect(struct pvr2_hdw *);
unsigned int pvr2_hdw_get_ctrl_count(struct pvr2_hdw *);
struct pvr2_ctrl *pvr2_hdw_get_ctrl_by_index(struct pvr2_hdw *,unsigned int);
struct pvr2_ctrl *pvr2_hdw_get_ctrl_by_id(struct pvr2_hdw *,unsigned int);
struct pvr2_ctrl *pvr2_hdw_get_ctrl_v4l(struct pvr2_hdw *,unsigned int ctl_id);
struct pvr2_ctrl *pvr2_hdw_get_ctrl_nextv4l(struct pvr2_hdw *,
unsigned int ctl_id);
int pvr2_hdw_commit_ctl(struct pvr2_hdw *);
unsigned int pvr2_hdw_get_input_available(struct pvr2_hdw *);
unsigned int pvr2_hdw_get_input_allowed(struct pvr2_hdw *);
int pvr2_hdw_set_input_allowed(struct pvr2_hdw *,
unsigned int change_mask,
unsigned int change_val);
const char *pvr2_hdw_get_driver_name(struct pvr2_hdw *);
void pvr2_hdw_execute_tuner_poll(struct pvr2_hdw *);
int pvr2_hdw_get_tuner_status(struct pvr2_hdw *,struct v4l2_tuner *);
int pvr2_hdw_get_cropcap(struct pvr2_hdw *, struct v4l2_cropcap *);
int pvr2_hdw_is_hsm(struct pvr2_hdw *);
const char *pvr2_hdw_get_type(struct pvr2_hdw *);
const char *pvr2_hdw_get_desc(struct pvr2_hdw *);
int pvr2_hdw_set_streaming(struct pvr2_hdw *,int);
int pvr2_hdw_get_streaming(struct pvr2_hdw *);
int pvr2_hdw_get_state(struct pvr2_hdw *);
int pvr2_hdw_set_stream_type(struct pvr2_hdw *, enum pvr2_config);
struct pvr2_stream *pvr2_hdw_get_video_stream(struct pvr2_hdw *);
int pvr2_hdw_get_stdenum_value(struct pvr2_hdw *hdw,struct v4l2_standard *std,
unsigned int idx);
void pvr2_hdw_cpufw_set_enabled(struct pvr2_hdw *,
int mode,
int enable_flag);
int pvr2_hdw_cpufw_get_enabled(struct pvr2_hdw *);
int pvr2_hdw_cpufw_get(struct pvr2_hdw *,unsigned int offs,
char *buf,unsigned int cnt);
int pvr2_hdw_v4l_get_minor_number(struct pvr2_hdw *,enum pvr2_v4l_type index);
void pvr2_hdw_v4l_store_minor_number(struct pvr2_hdw *,
enum pvr2_v4l_type index,int);
int pvr2_hdw_register_access(struct pvr2_hdw *,
struct v4l2_dbg_match *match, u64 reg_id,
int setFl, u64 *val_ptr);
int pvr2_send_request(struct pvr2_hdw *,
void *write_ptr,unsigned int write_len,
void *read_ptr,unsigned int read_len);
int pvr2_write_register(struct pvr2_hdw *, u16, u32);
void pvr2_hdw_render_useless(struct pvr2_hdw *);
void pvr2_hdw_cpureset_assert(struct pvr2_hdw *,int);
void pvr2_hdw_device_reset(struct pvr2_hdw *);
int pvr2_hdw_untrip(struct pvr2_hdw *);
int pvr2_hdw_cmd_deep_reset(struct pvr2_hdw *);
int pvr2_hdw_cmd_powerup(struct pvr2_hdw *);
int pvr2_hdw_cmd_powerdown(struct pvr2_hdw *);
int pvr2_hdw_cmd_decoder_reset(struct pvr2_hdw *);
int pvr2_hdw_gpio_get_dir(struct pvr2_hdw *hdw,u32 *);
int pvr2_hdw_gpio_get_out(struct pvr2_hdw *hdw,u32 *);
int pvr2_hdw_gpio_get_in(struct pvr2_hdw *hdw,u32 *);
int pvr2_hdw_gpio_chg_dir(struct pvr2_hdw *hdw,u32 msk,u32 val);
int pvr2_hdw_gpio_chg_out(struct pvr2_hdw *hdw,u32 msk,u32 val);
struct pvr2_hdw_debug_info ;
void pvr2_hdw_get_debug_info_unlocked(const struct pvr2_hdw *hdw,
struct pvr2_hdw_debug_info *);
void pvr2_hdw_get_debug_info_locked(struct pvr2_hdw *hdw,
struct pvr2_hdw_debug_info *);
unsigned int pvr2_hdw_state_report(struct pvr2_hdw *hdw,
char *buf_ptr,unsigned int buf_size);
void pvr2_hdw_trigger_module_log(struct pvr2_hdw *hdw);
int pvr2_upload_firmware2(struct pvr2_hdw *hdw);
