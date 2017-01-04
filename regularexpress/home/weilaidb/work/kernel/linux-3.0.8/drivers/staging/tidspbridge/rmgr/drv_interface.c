#define DRIVER_NAME  "DspBridge"
#define DSPBRIDGE_VERSION	"0.3"
s32 dsp_debug;
struct platform_device *omap_dspbridge_dev;
struct device *bridge;
s32 dsp_test_sleepstate;
static struct cdev bridge_cdev;
static struct class *bridge_class;
static u32 driver_context;
static s32 driver_major;
static char *base_img;
char *iva_img;
static s32 shm_size = 0x500000;
static int tc_wordswapon;
#define REC_TIMEOUT 5000
static atomic_t bridge_cref;
static struct workqueue_struct *bridge_rec_queue;
static struct work_struct bridge_recovery_work;
static DECLARE_COMPLETION(bridge_comp);
static DECLARE_COMPLETION(bridge_open_comp);
static bool recover;
struct omap34_xx_bridge_suspend_data ;
static struct omap34_xx_bridge_suspend_data bridge_suspend_data;
static int omap34_xxbridge_suspend_lockout(struct omap34_xx_bridge_suspend_data
*s, struct file *f)
module_param(dsp_debug, int, 0);
MODULE_PARM_DESC(dsp_debug, "Wait after loading DSP image. default = false");
module_param(dsp_test_sleepstate, int, 0);
MODULE_PARM_DESC(dsp_test_sleepstate, "DSP Sleep state = 0");
module_param(base_img, charp, 0);
MODULE_PARM_DESC(base_img, "DSP base image, default = NULL");
module_param(shm_size, int, 0);
MODULE_PARM_DESC(shm_size, "shm size, default = 4 MB, minimum = 64 KB");
module_param(tc_wordswapon, int, 0);
MODULE_PARM_DESC(tc_wordswapon, "TC Word Swap Option. default = 0");
MODULE_AUTHOR("Texas Instruments");
MODULE_LICENSE("GPL");
MODULE_VERSION(DSPBRIDGE_VERSION);
static char *driver_name = DRIVER_NAME;
static const struct file_operations bridge_fops = ;
static u32 time_out = 1000;
s32 dsp_max_opps = VDD1_OPP5;
const struct omap_opp vdd1_rate_table_bridge[] = ;
struct omap_dsp_platform_data *omap_dspbridge_pdata;
u32 vdd1_dsp_freq[6][4] = ;
static void bridge_recover(struct work_struct *work)
void bridge_recover_schedule(void)
static int dspbridge_scale_notification(struct notifier_block *op,
unsigned long val, void *ptr)
static struct notifier_block iva_clk_notifier = ;
static int omap3_bridge_startup(struct platform_device *pdev)
static int __devinit omap34_xx_bridge_probe(struct platform_device *pdev)
static int __devexit omap34_xx_bridge_remove(struct platform_device *pdev)
static int BRIDGE_SUSPEND(struct platform_device *pdev, pm_message_t state)
static int BRIDGE_RESUME(struct platform_device *pdev)
#define BRIDGE_SUSPEND NULL
#define BRIDGE_RESUME NULL
static struct platform_driver bridge_driver = ;
static int __init bridge_init(void)
static void __exit bridge_exit(void)
static int bridge_open(struct inode *ip, struct file *filp)
static int bridge_release(struct inode *ip, struct file *filp)
static long bridge_ioctl(struct file *filp, unsigned int code,
unsigned long args)
static int bridge_mmap(struct file *filp, struct vm_area_struct *vma)
int drv_remove_all_resources(void *process_ctxt)
module_init(bridge_init);
module_exit(bridge_exit);
