#define MODULE_NAME "saa7134"
static unsigned int disable_ir;
module_param(disable_ir, int, 0444);
MODULE_PARM_DESC(disable_ir,"disable infrared remote support");
static unsigned int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug,"enable debug messages [IR]");
static int pinnacle_remote;
module_param(pinnacle_remote, int, 0644);
MODULE_PARM_DESC(pinnacle_remote, "Specify Pinnacle PCTV remote: 0=coloured, 1=grey (defaults to 0)");
#define dprintk(fmt, arg...)	if (ir_debug) \
printk(KERN_DEBUG "%s/ir: " fmt, dev->name , ## arg)
#define i2cdprintk(fmt, arg...)    if (ir_debug) \
printk(KERN_DEBUG "%s/ir: " fmt, ir->name , ## arg)
static int saa7134_raw_decode_irq(struct saa7134_dev *dev);
static int build_key(struct saa7134_dev *dev)
static int get_key_flydvb_trio(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_msi_tvanywhere_plus(struct IR_i2c *ir, u32 *ir_key,
u32 *ir_raw)
static int get_key_purpletv(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_hvr1110(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_beholdm6xx(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_pinnacle(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw,
int parity_offset, int marker, int code_modulo)
static int get_key_pinnacle_grey(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_pinnacle_color(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
void saa7134_input_irq(struct saa7134_dev *dev)
static void saa7134_input_timer(unsigned long data)
static void ir_raw_decode_timer_end(unsigned long data)
static int __saa7134_ir_start(void *priv)
static void __saa7134_ir_stop(void *priv)
int saa7134_ir_start(struct saa7134_dev *dev)
void saa7134_ir_stop(struct saa7134_dev *dev)
static int saa7134_ir_open(struct rc_dev *rc)
static void saa7134_ir_close(struct rc_dev *rc)
int saa7134_input_init1(struct saa7134_dev *dev)
void saa7134_input_fini(struct saa7134_dev *dev)
void saa7134_probe_i2c_ir(struct saa7134_dev *dev)
static int saa7134_raw_decode_irq(struct saa7134_dev *dev)
