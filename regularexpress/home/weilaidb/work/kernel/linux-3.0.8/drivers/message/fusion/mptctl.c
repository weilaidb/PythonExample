#define COPYRIGHT	"Copyright (c) 1999-2008 LSI Corporation"
#define MODULEAUTHOR	"LSI Corporation"
#define my_NAME		"Fusion MPT misc device (ioctl) driver"
#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptctl"
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(my_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
static DEFINE_MUTEX(mpctl_mutex);
static u8 mptctl_id = MPT_MAX_PROTOCOL_DRIVERS;
static u8 mptctl_taskmgmt_id = MPT_MAX_PROTOCOL_DRIVERS;
static DECLARE_WAIT_QUEUE_HEAD ( mptctl_wait );
struct buflist ;
static int mptctl_fw_download(unsigned long arg);
static int mptctl_getiocinfo(unsigned long arg, unsigned int cmd);
static int mptctl_gettargetinfo(unsigned long arg);
static int mptctl_readtest(unsigned long arg);
static int mptctl_mpt_command(unsigned long arg);
static int mptctl_eventquery(unsigned long arg);
static int mptctl_eventenable(unsigned long arg);
static int mptctl_eventreport(unsigned long arg);
static int mptctl_replace_fw(unsigned long arg);
static int mptctl_do_reset(unsigned long arg);
static int mptctl_hp_hostinfo(unsigned long arg, unsigned int cmd);
static int mptctl_hp_targetinfo(unsigned long arg);
static int  mptctl_probe(struct pci_dev *, const struct pci_device_id *);
static void mptctl_remove(struct pci_dev *);
static long compat_mpctl_ioctl(struct file *f, unsigned cmd, unsigned long arg);
static int mptctl_do_mpt_command(struct mpt_ioctl_command karg, void __user *mfPtr);
static int mptctl_do_fw_download(int ioc, char __user *ufwbuf, size_t fwlen);
static MptSge_t *kbuf_alloc_2_sgl(int bytes, u32 dir, int sge_offset, int *frags,
struct buflist **blp, dma_addr_t *sglbuf_dma, MPT_ADAPTER *ioc);
static void kfree_sgl(MptSge_t *sgl, dma_addr_t sgl_dma,
struct buflist *buflist, MPT_ADAPTER *ioc);
static int  mptctl_ioc_reset(MPT_ADAPTER *ioc, int reset_phase);
static int mptctl_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply);
static struct fasync_struct *async_queue=NULL;
#define MAX_FRAGS_SPILL1	9
#define MAX_FRAGS_SPILL2	15
#define FRAGS_PER_BUCKET	(MAX_FRAGS_SPILL2 + 1)
#define MAX_CHAIN_FRAGS		(4 * MAX_FRAGS_SPILL2 + 1)
#define MAX_SGL_BYTES		((MAX_FRAGS_SPILL1 + 1 + (4 * FRAGS_PER_BUCKET)) * 8)
#define MAX_KMALLOC_SZ		(128*1024)
#define MPT_IOCTL_DEFAULT_TIMEOUT 10
static inline int
mptctl_syscall_down(MPT_ADAPTER *ioc, int nonblock)
static int
mptctl_reply(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req, MPT_FRAME_HDR *reply)
static int
mptctl_taskmgmt_reply(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *mr)
static int
mptctl_do_taskmgmt(MPT_ADAPTER *ioc, u8 tm_type, u8 bus_id, u8 target_id)
static void
mptctl_timeout_expired(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf)
static int
mptctl_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
static int
mptctl_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply)
static int
mptctl_release(struct inode *inode, struct file *filep)
static int
mptctl_fasync(int fd, struct file *filep, int mode)
static long
__mptctl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long
mptctl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int mptctl_do_reset(unsigned long arg)
static int
mptctl_fw_download(unsigned long arg)
static int
mptctl_do_fw_download(int ioc, char __user *ufwbuf, size_t fwlen)
static MptSge_t *
kbuf_alloc_2_sgl(int bytes, u32 sgdir, int sge_offset, int *frags,
struct buflist **blp, dma_addr_t *sglbuf_dma, MPT_ADAPTER *ioc)
static void
kfree_sgl(MptSge_t *sgl, dma_addr_t sgl_dma, struct buflist *buflist, MPT_ADAPTER *ioc)
static int
mptctl_getiocinfo (unsigned long arg, unsigned int data_size)
static int
mptctl_gettargetinfo (unsigned long arg)
static int
mptctl_readtest (unsigned long arg)
static int
mptctl_eventquery (unsigned long arg)
static int
mptctl_eventenable (unsigned long arg)
static int
mptctl_eventreport (unsigned long arg)
static int
mptctl_replace_fw (unsigned long arg)
static int
mptctl_mpt_command (unsigned long arg)
static int
mptctl_do_mpt_command (struct mpt_ioctl_command karg, void __user *mfPtr)
static int
mptctl_hp_hostinfo(unsigned long arg, unsigned int data_size)
static int
mptctl_hp_targetinfo(unsigned long arg)
static const struct file_operations mptctl_fops = ;
static struct miscdevice mptctl_miscdev = ;
static int
compat_mptfwxfer_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int
compat_mpt_command(struct file *filp, unsigned int cmd,
unsigned long arg)
static long compat_mpctl_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
static int
mptctl_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void
mptctl_remove(struct pci_dev *pdev)
static struct mpt_pci_driver mptctl_driver = ;
static int __init mptctl_init(void)
static void mptctl_exit(void)
module_init(mptctl_init);
module_exit(mptctl_exit);
