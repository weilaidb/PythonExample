#define MAX_CONFIG_LEN		40
static struct kgdb_io		kgdboc_io_ops;
static int configured		= -1;
static char config[MAX_CONFIG_LEN];
static struct kparam_string kps = ;
static int kgdboc_use_kms;
static struct tty_driver	*kgdb_tty_driver;
static int			kgdb_tty_line;
static int kgdboc_reset_connect(struct input_handler *handler,
struct input_dev *dev,
const struct input_device_id *id)
static void kgdboc_reset_disconnect(struct input_handle *handle)
static const struct input_device_id kgdboc_reset_ids[] = ;
static struct input_handler kgdboc_reset_handler = ;
static DEFINE_MUTEX(kgdboc_reset_mutex);
static void kgdboc_restore_input_helper(struct work_struct *dummy)
static DECLARE_WORK(kgdboc_restore_input_work, kgdboc_restore_input_helper);
static void kgdboc_restore_input(void)
static int kgdboc_register_kbd(char **cptr)
static void kgdboc_unregister_kbd(void)
#define kgdboc_register_kbd(x) 0
#define kgdboc_unregister_kbd()
#define kgdboc_restore_input()
static int kgdboc_option_setup(char *opt)
__setup("kgdboc=", kgdboc_option_setup);
static void cleanup_kgdboc(void)
static int configure_kgdboc(void)
static int __init init_kgdboc(void)
static int kgdboc_get_char(void)
static void kgdboc_put_char(u8 chr)
static int param_set_kgdboc_var(const char *kmessage, struct kernel_param *kp)
static int dbg_restore_graphics;
static void kgdboc_pre_exp_handler(void)
static void kgdboc_post_exp_handler(void)
static struct kgdb_io kgdboc_io_ops = ;
static int __init kgdboc_early_init(char *opt)
early_param("ekgdboc", kgdboc_early_init);
module_init(init_kgdboc);
module_exit(cleanup_kgdboc);
module_param_call(kgdboc, param_set_kgdboc_var, param_get_string, &kps, 0644);
MODULE_PARM_DESC(kgdboc, "<serial_device>[,baud]");
MODULE_DESCRIPTION("KGDB Console TTY Driver");
MODULE_LICENSE("GPL");
