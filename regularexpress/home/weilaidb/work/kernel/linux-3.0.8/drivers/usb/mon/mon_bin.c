#define SETUP_LEN  8
#define MON_IOC_MAGIC 0x92
#define MON_IOCQ_URB_LEN _IO(MON_IOC_MAGIC, 1)
#define MON_IOCG_STATS _IOR(MON_IOC_MAGIC, 3, struct mon_bin_stats)
#define MON_IOCT_RING_SIZE _IO(MON_IOC_MAGIC, 4)
#define MON_IOCQ_RING_SIZE _IO(MON_IOC_MAGIC, 5)
#define MON_IOCX_GET   _IOW(MON_IOC_MAGIC, 6, struct mon_bin_get)
#define MON_IOCX_MFETCH _IOWR(MON_IOC_MAGIC, 7, struct mon_bin_mfetch)
#define MON_IOCH_MFLUSH _IO(MON_IOC_MAGIC, 8)
#define MON_IOCX_GETX   _IOW(MON_IOC_MAGIC, 10, struct mon_bin_get)
#define MON_IOCX_GET32 _IOW(MON_IOC_MAGIC, 6, struct mon_bin_get32)
#define MON_IOCX_MFETCH32 _IOWR(MON_IOC_MAGIC, 7, struct mon_bin_mfetch32)
#define MON_IOCX_GETX32   _IOW(MON_IOC_MAGIC, 10, struct mon_bin_get32)
#define CHUNK_SIZE   PAGE_SIZE
#define CHUNK_ALIGN(x)   (((x)+CHUNK_SIZE-1) & ~(CHUNK_SIZE-1))
#define BUFF_MAX  CHUNK_ALIGN(1200*1024)
#define BUFF_DFL   CHUNK_ALIGN(300*1024)
#define BUFF_MIN     CHUNK_ALIGN(8*1024)
struct mon_bin_hdr ;
struct mon_bin_isodesc ;
struct mon_bin_stats ;
struct mon_bin_get ;
struct mon_bin_mfetch ;
struct mon_bin_get32 ;
struct mon_bin_mfetch32 ;
#define PKT_ALIGN   64
#define PKT_SIZE    64
#define PKT_SZ_API0 48
#define PKT_SZ_API1 64
#define ISODESC_MAX   128
#define MON_BIN_MAX_MINOR 128
struct mon_pgmap ;
struct mon_reader_bin ;
static inline struct mon_bin_hdr *MON_OFF2HDR(const struct mon_reader_bin *rp,
unsigned int offset)
#define MON_RING_EMPTY(rp)	((rp)->b_cnt == 0)
static unsigned char xfer_to_pipe[4] = ;
static struct class *mon_bin_class;
static dev_t mon_bin_dev0;
static struct cdev mon_bin_cdev;
static void mon_buff_area_fill(const struct mon_reader_bin *rp,
unsigned int offset, unsigned int size);
static int mon_bin_wait_event(struct file *file, struct mon_reader_bin *rp);
static int mon_alloc_buff(struct mon_pgmap *map, int npages);
static void mon_free_buff(struct mon_pgmap *map, int npages);
static unsigned int mon_copy_to_buff(const struct mon_reader_bin *this,
unsigned int off, const unsigned char *from, unsigned int length)
static int copy_from_buf(const struct mon_reader_bin *this, unsigned int off,
char __user *to, int length)
static unsigned int mon_buff_area_alloc(struct mon_reader_bin *rp,
unsigned int size)
static unsigned int mon_buff_area_alloc_contiguous(struct mon_reader_bin *rp,
unsigned int size)
static void mon_buff_area_shrink(struct mon_reader_bin *rp, unsigned int size)
static void mon_buff_area_free(struct mon_reader_bin *rp, unsigned int size)
static void mon_buff_area_fill(const struct mon_reader_bin *rp,
unsigned int offset, unsigned int size)
static inline char mon_bin_get_setup(unsigned char *setupb,
const struct urb *urb, char ev_type)
static unsigned int mon_bin_get_data(const struct mon_reader_bin *rp,
unsigned int offset, struct urb *urb, unsigned int length,
char *flag)
static unsigned int mon_bin_collate_isodesc(const struct mon_reader_bin *rp,
struct urb *urb, unsigned int ndesc)
static void mon_bin_get_isodesc(const struct mon_reader_bin *rp,
unsigned int offset, struct urb *urb, char ev_type, unsigned int ndesc)
static void mon_bin_event(struct mon_reader_bin *rp, struct urb *urb,
char ev_type, int status)
static void mon_bin_submit(void *data, struct urb *urb)
static void mon_bin_complete(void *data, struct urb *urb, int status)
static void mon_bin_error(void *data, struct urb *urb, int error)
static int mon_bin_open(struct inode *inode, struct file *file)
static int mon_bin_get_event(struct file *file, struct mon_reader_bin *rp,
struct mon_bin_hdr __user *hdr, unsigned int hdrbytes,
void __user *data, unsigned int nbytes)
static int mon_bin_release(struct inode *inode, struct file *file)
static ssize_t mon_bin_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int mon_bin_flush(struct mon_reader_bin *rp, unsigned nevents)
static int mon_bin_fetch(struct file *file, struct mon_reader_bin *rp,
u32 __user *vec, unsigned int max)
static int mon_bin_queued(struct mon_reader_bin *rp)
static long mon_bin_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long mon_bin_compat_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned int
mon_bin_poll(struct file *file, struct poll_table_struct *wait)
static void mon_bin_vma_open(struct vm_area_struct *vma)
static void mon_bin_vma_close(struct vm_area_struct *vma)
static int mon_bin_vma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct mon_bin_vm_ops = ;
static int mon_bin_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct file_operations mon_fops_binary = ;
static int mon_bin_wait_event(struct file *file, struct mon_reader_bin *rp)
static int mon_alloc_buff(struct mon_pgmap *map, int npages)
static void mon_free_buff(struct mon_pgmap *map, int npages)
int mon_bin_add(struct mon_bus *mbus, const struct usb_bus *ubus)
void mon_bin_del(struct mon_bus *mbus)
int __init mon_bin_init(void)
void mon_bin_exit(void)
