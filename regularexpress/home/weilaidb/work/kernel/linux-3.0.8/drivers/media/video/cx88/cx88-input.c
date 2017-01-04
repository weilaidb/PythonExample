#define MODULE_NAME "cx88xx"
struct cx88_IR ;
static unsigned ir_samplerate = 4;
module_param(ir_samplerate, uint, 0444);
MODULE_PARM_DESC(ir_samplerate, "IR samplerate in kHz, 1 - 20, default 4");
static int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug, "enable debug messages [IR]");
#define ir_dprintk(fmt, arg...)	if (ir_debug) \
printk(KERN_DEBUG "%s IR: " fmt , ir->core->name , ##arg)
#define dprintk(fmt, arg...)	if (ir_debug) \
printk(KERN_DEBUG "cx88 IR: " fmt , ##arg)
static void cx88_ir_handle_key(struct cx88_IR *ir)
static enum hrtimer_restart cx88_ir_work(struct hrtimer *timer)
static int __cx88_ir_start(void *priv)
static void __cx88_ir_stop(void *priv)
int cx88_ir_start(struct cx88_core *core)
void cx88_ir_stop(struct cx88_core *core)
static int cx88_ir_open(struct rc_dev *rc)
static void cx88_ir_close(struct rc_dev *rc)
int cx88_ir_init(struct cx88_core *core, struct pci_dev *pci)
int cx88_ir_fini(struct cx88_core *core)
void cx88_ir_irq(struct cx88_core *core)
static int get_key_pvr2000(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
void cx88_i2c_init_ir(struct cx88_core *core)
MODULE_AUTHOR("Gerd Knorr, Pavel Machek, Chris Pascoe");
MODULE_DESCRIPTION("input driver for cx88 GPIO-based IR remote controls");
MODULE_LICENSE("GPL");
