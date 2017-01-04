static void flexcop_rcv_data_ctrl(struct flexcop_device *fc, int onoff)
void flexcop_smc_ctrl(struct flexcop_device *fc, int onoff)
static void flexcop_null_filter_ctrl(struct flexcop_device *fc, int onoff)
void flexcop_set_mac_filter(struct flexcop_device *fc, u8 mac[6])
void flexcop_mac_filter_ctrl(struct flexcop_device *fc, int onoff)
static void flexcop_pid_group_filter(struct flexcop_device *fc,
u16 pid, u16 mask)
static void flexcop_pid_group_filter_ctrl(struct flexcop_device *fc, int onoff)
#define pid_ctrl(vregname,field,enablefield,trans_field,transval) \
flexcop_ibi_value vpid = fc->read_ibi_reg(fc, vregname), \
v208 = fc->read_ibi_reg(fc, ctrl_208); \
vpid.vregname.field = onoff ? pid : 0x1fff; \
vpid.vregname.trans_field = transval; \
v208.ctrl_208.enablefield = onoff; \
fc->write_ibi_reg(fc, vregname, vpid); \
fc->write_ibi_reg(fc, ctrl_208, v208);
static void flexcop_pid_Stream1_PID_ctrl(struct flexcop_device *fc,
u16 pid, int onoff)
static void flexcop_pid_Stream2_PID_ctrl(struct flexcop_device *fc,
u16 pid, int onoff)
static void flexcop_pid_PCR_PID_ctrl(struct flexcop_device *fc,
u16 pid, int onoff)
static void flexcop_pid_PMT_PID_ctrl(struct flexcop_device *fc,
u16 pid, int onoff)
static void flexcop_pid_EMM_PID_ctrl(struct flexcop_device *fc,
u16 pid, int onoff)
static void flexcop_pid_ECM_PID_ctrl(struct flexcop_device *fc,
u16 pid, int onoff)
static void flexcop_pid_control(struct flexcop_device *fc,
int index, u16 pid, int onoff)
static int flexcop_toggle_fullts_streaming(struct flexcop_device *fc, int onoff)
int flexcop_pid_feed_control(struct flexcop_device *fc,
struct dvb_demux_feed *dvbdmxfeed, int onoff)
EXPORT_SYMBOL(flexcop_pid_feed_control);
void flexcop_hw_filter_init(struct flexcop_device *fc)
