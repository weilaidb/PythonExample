#define TV_MIN_FREQ     55250000L
#define TV_MAX_FREQ    850000000L
#define TIME_MSEC_DECODER_WAIT 50
#define TIME_MSEC_DECODER_STABILIZATION_WAIT 300
#define TIME_MSEC_ENCODER_WAIT 50
#define TIME_MSEC_ENCODER_OK 250
static struct pvr2_hdw *unit_pointers[PVR_NUM] = ;
static DEFINE_MUTEX(pvr2_unit_mtx);
static int ctlchg;
static int procreload;
static int tuner[PVR_NUM] = ;
static int tolerance[PVR_NUM] = ;
static int video_std[PVR_NUM] = ;
static int init_pause_msec;
module_param(ctlchg, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ctlchg, "0=optimize ctl change 1=always accept new ctl value");
module_param(init_pause_msec, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(init_pause_msec, "hardware initialization settling delay");
module_param(procreload, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(procreload,
"Attempt init failure recovery with firmware reload");
module_param_array(tuner,    int, NULL, 0444);
MODULE_PARM_DESC(tuner,"specify installed tuner type");
module_param_array(video_std,    int, NULL, 0444);
MODULE_PARM_DESC(video_std,"specify initial video standard");
module_param_array(tolerance,    int, NULL, 0444);
MODULE_PARM_DESC(tolerance,"specify stream error tolerance");
static int default_tv_freq    = 61250000L;
static int default_radio_freq = 104300000L;
module_param_named(tv_freq, default_tv_freq, int, 0444);
MODULE_PARM_DESC(tv_freq, "specify initial television frequency");
module_param_named(radio_freq, default_radio_freq, int, 0444);
MODULE_PARM_DESC(radio_freq, "specify initial radio frequency");
#define PVR2_CTL_WRITE_ENDPOINT  0x01
#define PVR2_CTL_READ_ENDPOINT   0x81
#define PVR2_GPIO_IN 0x9008
#define PVR2_GPIO_OUT 0x900c
#define PVR2_GPIO_DIR 0x9020
#define trace_firmware(...) pvr2_trace(PVR2_TRACE_FIRMWARE,__VA_ARGS__)
#define PVR2_FIRMWARE_ENDPOINT   0x02
#define FIRMWARE_CHUNK_SIZE 0x2000
typedef void (*pvr2_subdev_update_func)(struct pvr2_hdw *,
struct v4l2_subdev *);
static const pvr2_subdev_update_func pvr2_module_update_functions[] = ;
static const char *module_names[] = ;
static const unsigned char *module_i2c_addresses[] = ;
static const char *ir_scheme_names[] = ;
struct pvr2_mpeg_ids ;
static const struct pvr2_mpeg_ids mpeg_ids[] = ;
#define MPEGDEF_COUNT ARRAY_SIZE(mpeg_ids)
static const char *control_values_srate[] = ;
static const char *control_values_input[] = ;
static const char *control_values_audiomode[] = ;
static const char *control_values_hsm[] = ;
static const char *pvr2_state_names[] = ;
struct pvr2_fx2cmd_descdef ;
static const struct pvr2_fx2cmd_descdef pvr2_fx2cmd_desc[] = ;
static int pvr2_hdw_set_input(struct pvr2_hdw *hdw,int v);
static void pvr2_hdw_state_sched(struct pvr2_hdw *);
static int pvr2_hdw_state_eval(struct pvr2_hdw *);
static void pvr2_hdw_set_cur_freq(struct pvr2_hdw *,unsigned long);
static void pvr2_hdw_worker_poll(struct work_struct *work);
static int pvr2_hdw_wait(struct pvr2_hdw *,int state);
static int pvr2_hdw_untrip_unlocked(struct pvr2_hdw *);
static void pvr2_hdw_state_log_state(struct pvr2_hdw *);
static int pvr2_hdw_cmd_usbstream(struct pvr2_hdw *hdw,int runFl);
static int pvr2_hdw_commit_setup(struct pvr2_hdw *hdw);
static int pvr2_hdw_get_eeprom_addr(struct pvr2_hdw *hdw);
static void pvr2_hdw_internal_find_stdenum(struct pvr2_hdw *hdw);
static void pvr2_hdw_internal_set_std_avail(struct pvr2_hdw *hdw);
static void pvr2_hdw_quiescent_timeout(unsigned long);
static void pvr2_hdw_decoder_stabilization_timeout(unsigned long);
static void pvr2_hdw_encoder_wait_timeout(unsigned long);
static void pvr2_hdw_encoder_run_timeout(unsigned long);
static int pvr2_issue_simple_cmd(struct pvr2_hdw *,u32);
static int pvr2_send_request_ex(struct pvr2_hdw *hdw,
unsigned int timeout,int probe_fl,
void *write_data,unsigned int write_len,
void *read_data,unsigned int read_len);
static int pvr2_hdw_check_cropcap(struct pvr2_hdw *hdw);
static void trace_stbit(const char *name,int val)
static int ctrl_channelfreq_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_channelfreq_set(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_channelprog_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_channelprog_set(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_channel_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_channel_set(struct pvr2_ctrl *cptr,int m,int slotId)
static int ctrl_freq_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_freq_is_dirty(struct pvr2_ctrl *cptr)
static void ctrl_freq_clear_dirty(struct pvr2_ctrl *cptr)
static int ctrl_freq_set(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_cropl_min_get(struct pvr2_ctrl *cptr, int *left)
static int ctrl_cropl_max_get(struct pvr2_ctrl *cptr, int *left)
static int ctrl_cropt_min_get(struct pvr2_ctrl *cptr, int *top)
static int ctrl_cropt_max_get(struct pvr2_ctrl *cptr, int *top)
static int ctrl_cropw_max_get(struct pvr2_ctrl *cptr, int *width)
static int ctrl_croph_max_get(struct pvr2_ctrl *cptr, int *height)
static int ctrl_get_cropcapbl(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapbt(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapbw(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapbh(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapdl(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapdt(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapdw(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcapdh(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcappan(struct pvr2_ctrl *cptr, int *val)
static int ctrl_get_cropcappad(struct pvr2_ctrl *cptr, int *val)
static int ctrl_vres_max_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_vres_min_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_get_input(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_check_input(struct pvr2_ctrl *cptr,int v)
static int ctrl_set_input(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_isdirty_input(struct pvr2_ctrl *cptr)
static void ctrl_cleardirty_input(struct pvr2_ctrl *cptr)
static int ctrl_freq_max_get(struct pvr2_ctrl *cptr, int *vp)
static int ctrl_freq_min_get(struct pvr2_ctrl *cptr, int *vp)
static int ctrl_cx2341x_is_dirty(struct pvr2_ctrl *cptr)
static void ctrl_cx2341x_clear_dirty(struct pvr2_ctrl *cptr)
static int ctrl_cx2341x_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_cx2341x_set(struct pvr2_ctrl *cptr,int m,int v)
static unsigned int ctrl_cx2341x_getv4lflags(struct pvr2_ctrl *cptr)
static int ctrl_streamingenabled_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_masterstate_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_hsm_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_stdavail_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_stdavail_set(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_std_val_to_sym(struct pvr2_ctrl *cptr,int msk,int val,
char *bufPtr,unsigned int bufSize,
unsigned int *len)
static int ctrl_std_sym_to_val(struct pvr2_ctrl *cptr,
const char *bufPtr,unsigned int bufSize,
int *mskp,int *valp)
static int ctrl_stdcur_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_stdcur_set(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_stdcur_is_dirty(struct pvr2_ctrl *cptr)
static void ctrl_stdcur_clear_dirty(struct pvr2_ctrl *cptr)
static int ctrl_signal_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_audio_modes_present_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_stdenumcur_set(struct pvr2_ctrl *cptr,int m,int v)
static int ctrl_stdenumcur_get(struct pvr2_ctrl *cptr,int *vp)
static int ctrl_stdenumcur_is_dirty(struct pvr2_ctrl *cptr)
static void ctrl_stdenumcur_clear_dirty(struct pvr2_ctrl *cptr)
#define DEFINT(vmin,vmax) \
.type = pvr2_ctl_int, \
.def.type_int.min_value = vmin, \
.def.type_int.max_value = vmax
#define DEFENUM(tab) \
.type = pvr2_ctl_enum, \
.def.type_enum.count = ARRAY_SIZE(tab), \
.def.type_enum.value_names = tab
#define DEFBOOL \
.type = pvr2_ctl_bool
#define DEFMASK(msk,tab) \
.type = pvr2_ctl_bitmask, \
.def.type_bitmask.valid_bits = msk, \
.def.type_bitmask.bit_names = tab
#define DEFREF(vname) \
.set_value = ctrl_set_##vname, \
.get_value = ctrl_get_##vname, \
.is_dirty = ctrl_isdirty_##vname, \
.clear_dirty = ctrl_cleardirty_##vname
#define VCREATE_FUNCS(vname) \
static int ctrl_get_##vname(struct pvr2_ctrl *cptr,int *vp) \
\
static int ctrl_set_##vname(struct pvr2_ctrl *cptr,int m,int v) \
\
static int ctrl_isdirty_##vname(struct pvr2_ctrl *cptr) \
\
static void ctrl_cleardirty_##vname(struct pvr2_ctrl *cptr) \
VCREATE_FUNCS(brightness)
VCREATE_FUNCS(contrast)
VCREATE_FUNCS(saturation)
VCREATE_FUNCS(hue)
VCREATE_FUNCS(volume)
VCREATE_FUNCS(balance)
VCREATE_FUNCS(bass)
VCREATE_FUNCS(treble)
VCREATE_FUNCS(mute)
VCREATE_FUNCS(cropl)
VCREATE_FUNCS(cropt)
VCREATE_FUNCS(cropw)
VCREATE_FUNCS(croph)
VCREATE_FUNCS(audiomode)
VCREATE_FUNCS(res_hor)
VCREATE_FUNCS(res_ver)
VCREATE_FUNCS(srate)
static const struct pvr2_ctl_info control_defs[] = ;
#define CTRLDEF_COUNT ARRAY_SIZE(control_defs)
const char *pvr2_config_get_name(enum pvr2_config cfg)
struct usb_device *pvr2_hdw_get_dev(struct pvr2_hdw *hdw)
unsigned long pvr2_hdw_get_sn(struct pvr2_hdw *hdw)
const char *pvr2_hdw_get_bus_info(struct pvr2_hdw *hdw)
const char *pvr2_hdw_get_device_identifier(struct pvr2_hdw *hdw)
unsigned long pvr2_hdw_get_cur_freq(struct pvr2_hdw *hdw)
static void pvr2_hdw_set_cur_freq(struct pvr2_hdw *hdw,unsigned long val)
int pvr2_hdw_get_unit_number(struct pvr2_hdw *hdw)
static int pvr2_locate_firmware(struct pvr2_hdw *hdw,
const struct firmware **fw_entry,
const char *fwtypename,
unsigned int fwcount,
const char *fwnames[])
static int pvr2_upload_firmware1(struct pvr2_hdw *hdw)
int pvr2_upload_firmware2(struct pvr2_hdw *hdw)
static const char *pvr2_get_state_name(unsigned int st)
static int pvr2_decoder_enable(struct pvr2_hdw *hdw,int enablefl)
int pvr2_hdw_get_state(struct pvr2_hdw *hdw)
static int pvr2_hdw_untrip_unlocked(struct pvr2_hdw *hdw)
int pvr2_hdw_untrip(struct pvr2_hdw *hdw)
int pvr2_hdw_get_streaming(struct pvr2_hdw *hdw)
int pvr2_hdw_set_streaming(struct pvr2_hdw *hdw,int enable_flag)
int pvr2_hdw_set_stream_type(struct pvr2_hdw *hdw,enum pvr2_config config)
static int get_default_tuner_type(struct pvr2_hdw *hdw)
static v4l2_std_id get_default_standard(struct pvr2_hdw *hdw)
static unsigned int get_default_error_tolerance(struct pvr2_hdw *hdw)
static int pvr2_hdw_check_firmware(struct pvr2_hdw *hdw)
struct pvr2_std_hack ;
static const struct pvr2_std_hack std_eeprom_maps[] = ;
static void pvr2_hdw_setup_std(struct pvr2_hdw *hdw)
static unsigned int pvr2_copy_i2c_addr_list(
unsigned short *dst, const unsigned char *src,
unsigned int dst_max)
static void pvr2_hdw_cx25840_vbi_hack(struct pvr2_hdw *hdw)
static int pvr2_hdw_load_subdev(struct pvr2_hdw *hdw,
const struct pvr2_device_client_desc *cd)
static void pvr2_hdw_load_modules(struct pvr2_hdw *hdw)
static void pvr2_hdw_setup_low(struct pvr2_hdw *hdw)
static void pvr2_hdw_setup(struct pvr2_hdw *hdw)
int pvr2_hdw_initialize(struct pvr2_hdw *hdw,
void (*callback_func)(void *),
void *callback_data)
struct pvr2_hdw *pvr2_hdw_create(struct usb_interface *intf,
const struct usb_device_id *devid)
static void pvr2_hdw_remove_usb_stuff(struct pvr2_hdw *hdw)
void pvr2_hdw_destroy(struct pvr2_hdw *hdw)
int pvr2_hdw_dev_ok(struct pvr2_hdw *hdw)
void pvr2_hdw_disconnect(struct pvr2_hdw *hdw)
static void pvr2_hdw_internal_find_stdenum(struct pvr2_hdw *hdw)
static void pvr2_hdw_internal_set_std_avail(struct pvr2_hdw *hdw)
int pvr2_hdw_get_stdenum_value(struct pvr2_hdw *hdw,
struct v4l2_standard *std,
unsigned int idx)
unsigned int pvr2_hdw_get_ctrl_count(struct pvr2_hdw *hdw)
struct pvr2_ctrl *pvr2_hdw_get_ctrl_by_index(struct pvr2_hdw *hdw,
unsigned int idx)
struct pvr2_ctrl *pvr2_hdw_get_ctrl_by_id(struct pvr2_hdw *hdw,
unsigned int ctl_id)
struct pvr2_ctrl *pvr2_hdw_get_ctrl_v4l(struct pvr2_hdw *hdw,unsigned int ctl_id)
struct pvr2_ctrl *pvr2_hdw_get_ctrl_nextv4l(struct pvr2_hdw *hdw,
unsigned int ctl_id)
static const char *get_ctrl_typename(enum pvr2_ctl_type tp)
static void pvr2_subdev_set_control(struct pvr2_hdw *hdw, int id,
const char *name, int val)
#define PVR2_SUBDEV_SET_CONTROL(hdw, id, lab) \
if ((hdw)->lab##_dirty || (hdw)->force_dirty)
static void pvr2_subdev_update(struct pvr2_hdw *hdw)
static int pvr2_hdw_commit_setup(struct pvr2_hdw *hdw)
static int pvr2_hdw_commit_execute(struct pvr2_hdw *hdw)
int pvr2_hdw_commit_ctl(struct pvr2_hdw *hdw)
static void pvr2_hdw_worker_poll(struct work_struct *work)
static int pvr2_hdw_wait(struct pvr2_hdw *hdw,int state)
const char *pvr2_hdw_get_driver_name(struct pvr2_hdw *hdw)
const char *pvr2_hdw_get_desc(struct pvr2_hdw *hdw)
const char *pvr2_hdw_get_type(struct pvr2_hdw *hdw)
int pvr2_hdw_is_hsm(struct pvr2_hdw *hdw)
void pvr2_hdw_execute_tuner_poll(struct pvr2_hdw *hdw)
static int pvr2_hdw_check_cropcap(struct pvr2_hdw *hdw)
int pvr2_hdw_get_cropcap(struct pvr2_hdw *hdw, struct v4l2_cropcap *pp)
int pvr2_hdw_get_tuner_status(struct pvr2_hdw *hdw,struct v4l2_tuner *vtp)
struct pvr2_stream *pvr2_hdw_get_video_stream(struct pvr2_hdw *hp)
void pvr2_hdw_trigger_module_log(struct pvr2_hdw *hdw)
#define EEPROM_SIZE 8192
#define trace_eeprom(...) pvr2_trace(PVR2_TRACE_EEPROM,__VA_ARGS__)
static u8 *pvr2_full_eeprom_fetch(struct pvr2_hdw *hdw)
void pvr2_hdw_cpufw_set_enabled(struct pvr2_hdw *hdw,
int mode,
int enable_flag)
int pvr2_hdw_cpufw_get_enabled(struct pvr2_hdw *hdw)
int pvr2_hdw_cpufw_get(struct pvr2_hdw *hdw,unsigned int offs,
char *buf,unsigned int cnt)
int pvr2_hdw_v4l_get_minor_number(struct pvr2_hdw *hdw,
enum pvr2_v4l_type index)
void pvr2_hdw_v4l_store_minor_number(struct pvr2_hdw *hdw,
enum pvr2_v4l_type index,int v)
static void pvr2_ctl_write_complete(struct urb *urb)
static void pvr2_ctl_read_complete(struct urb *urb)
static void pvr2_ctl_timeout(unsigned long data)
static int pvr2_send_request_ex(struct pvr2_hdw *hdw,
unsigned int timeout,int probe_fl,
void *write_data,unsigned int write_len,
void *read_data,unsigned int read_len)
int pvr2_send_request(struct pvr2_hdw *hdw,
void *write_data,unsigned int write_len,
void *read_data,unsigned int read_len)
static int pvr2_issue_simple_cmd(struct pvr2_hdw *hdw,u32 cmdcode)
int pvr2_write_register(struct pvr2_hdw *hdw, u16 reg, u32 data)
static int pvr2_read_register(struct pvr2_hdw *hdw, u16 reg, u32 *data)
void pvr2_hdw_render_useless(struct pvr2_hdw *hdw)
void pvr2_hdw_device_reset(struct pvr2_hdw *hdw)
void pvr2_hdw_cpureset_assert(struct pvr2_hdw *hdw,int val)
int pvr2_hdw_cmd_deep_reset(struct pvr2_hdw *hdw)
int pvr2_hdw_cmd_powerup(struct pvr2_hdw *hdw)
int pvr2_hdw_cmd_powerdown(struct pvr2_hdw *hdw)
int pvr2_hdw_cmd_decoder_reset(struct pvr2_hdw *hdw)
static int pvr2_hdw_cmd_hcw_demod_reset(struct pvr2_hdw *hdw, int onoff)
static int pvr2_hdw_cmd_onair_fe_power_ctrl(struct pvr2_hdw *hdw, int onoff)
static int pvr2_hdw_cmd_onair_digital_path_ctrl(struct pvr2_hdw *hdw,
int onoff)
static void pvr2_hdw_cmd_modeswitch(struct pvr2_hdw *hdw,int digitalFl)
static void pvr2_led_ctrl_hauppauge(struct pvr2_hdw *hdw, int onoff)
typedef void (*led_method_func)(struct pvr2_hdw *,int);
static led_method_func led_methods[] = ;
static void pvr2_led_ctrl(struct pvr2_hdw *hdw,int onoff)
static int pvr2_hdw_cmd_usbstream(struct pvr2_hdw *hdw,int runFl)
static int state_eval_pathway_ok(struct pvr2_hdw *hdw)
static int state_eval_encoder_ok(struct pvr2_hdw *hdw)
static int state_eval_encoder_config(struct pvr2_hdw *hdw)
static int state_check_disable_encoder_run(struct pvr2_hdw *hdw)
static int state_check_enable_encoder_run(struct pvr2_hdw *hdw)
static int state_eval_encoder_run(struct pvr2_hdw *hdw)
static void pvr2_hdw_quiescent_timeout(unsigned long data)
static void pvr2_hdw_decoder_stabilization_timeout(unsigned long data)
static void pvr2_hdw_encoder_wait_timeout(unsigned long data)
static void pvr2_hdw_encoder_run_timeout(unsigned long data)
static int state_eval_decoder_run(struct pvr2_hdw *hdw)
static int state_eval_usbstream_run(struct pvr2_hdw *hdw)
static int state_eval_pipeline_config(struct pvr2_hdw *hdw)
static int state_update_pipeline_state(struct pvr2_hdw *hdw)
typedef int (*state_eval_func)(struct pvr2_hdw *);
static const state_eval_func eval_funcs[] = ;
static int pvr2_hdw_state_update(struct pvr2_hdw *hdw)
static unsigned int print_input_mask(unsigned int msk,
char *buf,unsigned int acnt)
static const char *pvr2_pathway_state_name(int id)
static unsigned int pvr2_hdw_report_unlocked(struct pvr2_hdw *hdw,int which,
char *buf,unsigned int acnt)
static unsigned int pvr2_hdw_report_clients(struct pvr2_hdw *hdw,
char *buf, unsigned int acnt)
unsigned int pvr2_hdw_state_report(struct pvr2_hdw *hdw,
char *buf,unsigned int acnt)
static void pvr2_hdw_state_log_state(struct pvr2_hdw *hdw)
static int pvr2_hdw_state_eval(struct pvr2_hdw *hdw)
static void pvr2_hdw_state_sched(struct pvr2_hdw *hdw)
int pvr2_hdw_gpio_get_dir(struct pvr2_hdw *hdw,u32 *dp)
int pvr2_hdw_gpio_get_out(struct pvr2_hdw *hdw,u32 *dp)
int pvr2_hdw_gpio_get_in(struct pvr2_hdw *hdw,u32 *dp)
int pvr2_hdw_gpio_chg_dir(struct pvr2_hdw *hdw,u32 msk,u32 val)
int pvr2_hdw_gpio_chg_out(struct pvr2_hdw *hdw,u32 msk,u32 val)
void pvr2_hdw_status_poll(struct pvr2_hdw *hdw)
unsigned int pvr2_hdw_get_input_available(struct pvr2_hdw *hdw)
unsigned int pvr2_hdw_get_input_allowed(struct pvr2_hdw *hdw)
static int pvr2_hdw_set_input(struct pvr2_hdw *hdw,int v)
int pvr2_hdw_set_input_allowed(struct pvr2_hdw *hdw,
unsigned int change_mask,
unsigned int change_val)
static int pvr2_hdw_get_eeprom_addr(struct pvr2_hdw *hdw)
int pvr2_hdw_register_access(struct pvr2_hdw *hdw,
struct v4l2_dbg_match *match, u64 reg_id,
int setFl, u64 *val_ptr)
