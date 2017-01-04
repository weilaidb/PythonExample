#define trace_i2c(...) pvr2_trace(PVR2_TRACE_I2C,__VA_ARGS__)
static unsigned int i2c_scan;
module_param(i2c_scan, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(i2c_scan,"scan i2c bus at insmod time");
static int ir_mode[PVR_NUM] = ;
module_param_array(ir_mode, int, NULL, 0444);
MODULE_PARM_DESC(ir_mode,"specify: 0=disable IR reception, 1=normal IR");
static int pvr2_disable_ir_video;
module_param_named(disable_autoload_ir_video, pvr2_disable_ir_video,
int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(disable_autoload_ir_video,
"1=do not try to autoload ir_video IR receiver");
static int pvr2_i2c_write(struct pvr2_hdw *hdw,
u8 i2c_addr,
u8 *data,
u16 length)
static int pvr2_i2c_read(struct pvr2_hdw *hdw,
u8 i2c_addr,
u8 *data,
u16 dlen,
u8 *res,
u16 rlen)
static int pvr2_i2c_basic_op(struct pvr2_hdw *hdw,
u8 i2c_addr,
u8 *wdata,
u16 wlen,
u8 *rdata,
u16 rlen)
static int i2c_24xxx_ir(struct pvr2_hdw *hdw,
u8 i2c_addr,u8 *wdata,u16 wlen,u8 *rdata,u16 rlen)
static int i2c_hack_wm8775(struct pvr2_hdw *hdw,
u8 i2c_addr,u8 *wdata,u16 wlen,u8 *rdata,u16 rlen)
static int i2c_black_hole(struct pvr2_hdw *hdw,
u8 i2c_addr,u8 *wdata,u16 wlen,u8 *rdata,u16 rlen)
static int i2c_hack_cx25840(struct pvr2_hdw *hdw,
u8 i2c_addr,u8 *wdata,u16 wlen,u8 *rdata,u16 rlen)
static int pvr2_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[],
int num)
static u32 pvr2_i2c_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm pvr2_i2c_algo_template = ;
static struct i2c_adapter pvr2_i2c_adap_template = ;
static int do_i2c_probe(struct pvr2_hdw *hdw, int addr)
static void do_i2c_scan(struct pvr2_hdw *hdw)
static void pvr2_i2c_register_ir(struct pvr2_hdw *hdw)
void pvr2_i2c_core_init(struct pvr2_hdw *hdw)
void pvr2_i2c_core_done(struct pvr2_hdw *hdw)
