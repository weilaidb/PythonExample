static int ir_debug;
module_param(ir_debug, int, 0644);
static int ir_rc5_remote_gap = 885;
module_param(ir_rc5_remote_gap, int, 0644);
#undef dprintk
#define dprintk(arg...) do  while (0)
#define DEVNAME "bttv-input"
#define MODULE_NAME "bttv"
static void ir_handle_key(struct bttv *btv)
static void ir_enltv_handle_key(struct bttv *btv)
static int bttv_rc5_irq(struct bttv *btv);
void bttv_input_irq(struct bttv *btv)
static void bttv_input_timer(unsigned long data)
#define RC5_START(x)	(((x) >> 12) & 3)
#define RC5_TOGGLE(x)	(((x) >> 11) & 1)
#define RC5_ADDR(x)	(((x) >> 6) & 31)
#define RC5_INSTR(x)	((x) & 63)
static u32 bttv_rc5_decode(unsigned int code)
static void bttv_rc5_timer_end(unsigned long data)
static int bttv_rc5_irq(struct bttv *btv)
static void bttv_ir_start(struct bttv *btv, struct bttv_ir *ir)
static void bttv_ir_stop(struct bttv *btv)
static int get_key_pv951(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
void __devinit init_bttv_i2c_ir(struct bttv *btv)
int __devexit fini_bttv_i2c(struct bttv *btv)
int bttv_input_init(struct bttv *btv)
void bttv_input_fini(struct bttv *btv)
