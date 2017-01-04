#define EM28XX_SNAPSHOT_KEY KEY_CAMERA
#define EM28XX_SBUTTON_QUERY_INTERVAL 500
#define EM28XX_R0C_USBSUSP_SNAPSHOT 0x20
static unsigned int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug, "enable debug messages [IR]");
#define MODULE_NAME "em28xx"
#define i2cdprintk(fmt, arg...) \
if (ir_debug)
#define dprintk(fmt, arg...) \
if (ir_debug)
struct em28xx_ir_poll_result ;
struct em28xx_IR ;
int em28xx_get_key_terratec(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
int em28xx_get_key_em_haup(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
int em28xx_get_key_pinnacle_usb_grey(struct IR_i2c *ir, u32 *ir_key,
u32 *ir_raw)
int em28xx_get_key_winfast_usbii_deluxe(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int default_polling_getkey(struct em28xx_IR *ir,
struct em28xx_ir_poll_result *poll_result)
static int em2874_polling_getkey(struct em28xx_IR *ir,
struct em28xx_ir_poll_result *poll_result)
static void em28xx_ir_handle_key(struct em28xx_IR *ir)
static void em28xx_ir_work(struct work_struct *work)
static int em28xx_ir_start(struct rc_dev *rc)
static void em28xx_ir_stop(struct rc_dev *rc)
int em28xx_ir_change_protocol(struct rc_dev *rc_dev, u64 rc_type)
int em28xx_ir_init(struct em28xx *dev)
int em28xx_ir_fini(struct em28xx *dev)
static void em28xx_query_sbutton(struct work_struct *work)
void em28xx_register_snapshot_button(struct em28xx *dev)
void em28xx_deregister_snapshot_button(struct em28xx *dev)
