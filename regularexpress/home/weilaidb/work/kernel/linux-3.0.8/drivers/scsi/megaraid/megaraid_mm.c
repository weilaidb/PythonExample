static DEFINE_MUTEX(mraid_mm_mutex);
static int mraid_mm_open(struct inode *, struct file *);
static long mraid_mm_unlocked_ioctl(struct file *, uint, unsigned long);
static int mimd_to_kioc(mimd_t __user *, mraid_mmadp_t *, uioc_t *);
static int kioc_to_mimd(uioc_t *, mimd_t __user *);
static int handle_drvrcmd(void __user *, uint8_t, int *);
static int lld_ioctl(mraid_mmadp_t *, uioc_t *);
static void ioctl_done(uioc_t *);
static void lld_timedout(unsigned long);
static void hinfo_to_cinfo(mraid_hba_info_t *, mcontroller_t *);
static mraid_mmadp_t *mraid_mm_get_adapter(mimd_t __user *, int *);
static uioc_t *mraid_mm_alloc_kioc(mraid_mmadp_t *);
static void mraid_mm_dealloc_kioc(mraid_mmadp_t *, uioc_t *);
static int mraid_mm_attach_buf(mraid_mmadp_t *, uioc_t *, int);
static int mraid_mm_setup_dma_pools(mraid_mmadp_t *);
static void mraid_mm_free_adp_resources(mraid_mmadp_t *);
static void mraid_mm_teardown_dma_pools(mraid_mmadp_t *);
static long mraid_mm_compat_ioctl(struct file *, unsigned int, unsigned long);
MODULE_AUTHOR("LSI Logic Corporation");
MODULE_DESCRIPTION("LSI Logic Management Module");
MODULE_LICENSE("GPL");
MODULE_VERSION(LSI_COMMON_MOD_VERSION);
static int dbglevel = CL_ANN;
module_param_named(dlevel, dbglevel, int, 0);
MODULE_PARM_DESC(dlevel, "Debug level (default=0)");
EXPORT_SYMBOL(mraid_mm_register_adp);
EXPORT_SYMBOL(mraid_mm_unregister_adp);
EXPORT_SYMBOL(mraid_mm_adapter_app_handle);
static uint32_t drvr_ver	= 0x02200207;
static int adapters_count_g;
static struct list_head adapters_list_g;
static wait_queue_head_t wait_q;
static const struct file_operations lsi_fops = ;
static struct miscdevice megaraid_mm_dev = ;
static int
mraid_mm_open(struct inode *inode, struct file *filep)
static int
mraid_mm_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static long
mraid_mm_unlocked_ioctl(struct file *filep, unsigned int cmd,
unsigned long arg)
static mraid_mmadp_t *
mraid_mm_get_adapter(mimd_t __user *umimd, int *rval)
static int
handle_drvrcmd(void __user *arg, uint8_t old_ioctl, int *rval)
static int
mimd_to_kioc(mimd_t __user *umimd, mraid_mmadp_t *adp, uioc_t *kioc)
static int
mraid_mm_attach_buf(mraid_mmadp_t *adp, uioc_t *kioc, int xferlen)
static uioc_t *
mraid_mm_alloc_kioc(mraid_mmadp_t *adp)
static void
mraid_mm_dealloc_kioc(mraid_mmadp_t *adp, uioc_t *kioc)
static int
lld_ioctl(mraid_mmadp_t *adp, uioc_t *kioc)
static void
ioctl_done(uioc_t *kioc)
static void
lld_timedout(unsigned long ptr)
static int
kioc_to_mimd(uioc_t *kioc, mimd_t __user *mimd)
static void
hinfo_to_cinfo(mraid_hba_info_t *hinfo, mcontroller_t *cinfo)
int
mraid_mm_register_adp(mraid_mmadp_t *lld_adp)
uint32_t
mraid_mm_adapter_app_handle(uint32_t unique_id)
static int
mraid_mm_setup_dma_pools(mraid_mmadp_t *adp)
int
mraid_mm_unregister_adp(uint32_t unique_id)
static void
mraid_mm_free_adp_resources(mraid_mmadp_t *adp)
static void
mraid_mm_teardown_dma_pools(mraid_mmadp_t *adp)
static int __init
mraid_mm_init(void)
static long
mraid_mm_compat_ioctl(struct file *filep, unsigned int cmd,
unsigned long arg)
static void __exit
mraid_mm_exit(void)
module_init(mraid_mm_init);
module_exit(mraid_mm_exit);
