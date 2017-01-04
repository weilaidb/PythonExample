#define AV_CNT		4
#define IR_RC5		0
#define IR_RCMM		1
#define IR_RC5_EXT	2
#define IR_ALL		0xffffffff
#define UP_TIMEOUT	(HZ*7/25)
static int ir_protocol[AV_CNT] = ;
module_param_array(ir_protocol, int, NULL, 0644);
MODULE_PARM_DESC(ir_protocol, "Infrared protocol: 0 RC5, 1 RCMM (default)");
static int ir_inversion[AV_CNT];
module_param_array(ir_inversion, int, NULL, 0644);
MODULE_PARM_DESC(ir_inversion, "Inversion of infrared signal: 0 not inverted (default), 1 inverted");
static uint ir_device_mask[AV_CNT] = ;
module_param_array(ir_device_mask, uint, NULL, 0644);
MODULE_PARM_DESC(ir_device_mask, "Bitmask of infrared devices: bit 0..31 = device 0..31 (default: all)");
static int av_cnt;
static struct av7110 *av_list[AV_CNT];
static u16 default_key_map [256] = ;
static void av7110_emit_keyup(unsigned long parm)
static void av7110_emit_key(unsigned long parm)
static void input_register_keys(struct infrared *ir)
static void input_repeat_key(unsigned long parm)
int av7110_check_ir_config(struct av7110 *av7110, int force)
static ssize_t av7110_ir_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations av7110_ir_proc_fops = ;
static void ir_handler(struct av7110 *av7110, u32 ircom)
int __devinit av7110_ir_init(struct av7110 *av7110)
void __devexit av7110_ir_exit(struct av7110 *av7110)
