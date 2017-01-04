static DEFINE_MUTEX(xd_mutex);
static void __init do_xd_setup (int *integers);
static int xd[5] = ;
#define XD_DONT_USE_DMA		0
#define XD_INIT_DISK_DELAY	(30)
static XD_INFO xd_info[XD_MAXDRIVES];
#define xd_dma_mem_alloc(size) __get_dma_pages(GFP_KERNEL,get_order(size))
#define xd_dma_mem_free(addr, size) free_pages(addr, get_order(size))
static char *xd_dma_buffer;
static XD_SIGNATURE xd_sigs[] __initdata = ;
static unsigned int xd_bases[] __initdata =
;
static DEFINE_SPINLOCK(xd_lock);
static struct gendisk *xd_gendisk[2];
static int xd_getgeo(struct block_device *bdev, struct hd_geometry *geo);
static const struct block_device_operations xd_fops = ;
static DECLARE_WAIT_QUEUE_HEAD(xd_wait_int);
static u_char xd_drives, xd_irq = 5, xd_dma = 3, xd_maxsectors;
static u_char xd_override __initdata = 0, xd_type __initdata = 0;
static u_short xd_iobase = 0x320;
static int xd_geo[XD_MAXDRIVES*3] __initdata = ;
static volatile int xdc_busy;
static struct timer_list xd_watchdog_int;
static volatile u_char xd_error;
static int nodma = XD_DONT_USE_DMA;
static struct request_queue *xd_queue;
static int __init xd_init(void)
static u_char __init xd_detect (u_char *controller, unsigned int *address)
static void do_xd_request (struct request_queue * q)
static int xd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int xd_locked_ioctl(struct block_device *bdev, fmode_t mode, u_int cmd, u_long arg)
static int xd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int xd_readwrite (u_char operation,XD_INFO *p,char *buffer,u_int block,u_int count)
static void xd_recalibrate (u_char drive)
static irqreturn_t xd_interrupt_handler(int irq, void *dev_id)
static u_char xd_setup_dma (u_char mode,u_char *buffer,u_int count)
static u_char *xd_build (u_char *cmdblk,u_char command,u_char drive,u_char head,u_short cylinder,u_char sector,u_char count,u_char control)
static void xd_watchdog (unsigned long unused)
static inline u_char xd_waitport (u_short port,u_char flags,u_char mask,u_long timeout)
static inline u_int xd_wait_for_IRQ (void)
static u_int xd_command (u_char *command,u_char mode,u_char *indata,u_char *outdata,u_char *sense,u_long timeout)
static u_char __init xd_initdrives (void (*init_drive)(u_char drive))
static void __init xd_manual_geo_set (u_char drive)
static void __init xd_dtc_init_controller (unsigned int address)
static void __init xd_dtc5150cx_init_drive (u_char drive)
static void __init xd_dtc_init_drive (u_char drive)
static void __init xd_wd_init_controller (unsigned int address)
static void __init xd_wd_init_drive (u_char drive)
static void __init xd_seagate_init_controller (unsigned int address)
static void __init xd_seagate_init_drive (u_char drive)
static void __init xd_omti_init_controller (unsigned int address)
static void __init xd_omti_init_drive (u_char drive)
static void __init xd_xebec_init_controller (unsigned int address)
static void __init xd_xebec_init_drive (u_char drive)
static void __init xd_override_init_drive (u_char drive)
static void __init do_xd_setup (int *integers)
static void __init xd_setparam (u_char command,u_char drive,u_char heads,u_short cylinders,u_short rwrite,u_short wprecomp,u_char ecc)
module_param_array(xd, int, NULL, 0);
module_param_array(xd_geo, int, NULL, 0);
module_param(nodma, bool, 0);
MODULE_LICENSE("GPL");
void cleanup_module(void)
static int __init xd_setup (char *str)
static int __init xd_manual_geo_init (char *str)
__setup ("xd=", xd_setup);
__setup ("xd_geo=", xd_manual_geo_init);
module_init(xd_init);
MODULE_ALIAS_BLOCKDEV_MAJOR(XT_DISK_MAJOR);
