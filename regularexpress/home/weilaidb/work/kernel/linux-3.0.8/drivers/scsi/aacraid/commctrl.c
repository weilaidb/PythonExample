# define AAC_DEBUG_PREAMBLE	KERN_INFO
# define AAC_DEBUG_POSTAMBLE
static int ioctl_send_fib(struct aac_dev * dev, void __user *arg)
static int open_getadapter_fib(struct aac_dev * dev, void __user *arg)
static int next_getadapter_fib(struct aac_dev * dev, void __user *arg)
int aac_close_fib_context(struct aac_dev * dev, struct aac_fib_context * fibctx)
static int close_getadapter_fib(struct aac_dev * dev, void __user *arg)
static int check_revision(struct aac_dev *dev, void __user *arg)
static int aac_send_raw_srb(struct aac_dev* dev, void __user * arg)
struct aac_pci_info ;
static int aac_get_pci_info(struct aac_dev* dev, void __user *arg)
int aac_do_ioctl(struct aac_dev * dev, int cmd, void __user *arg)
