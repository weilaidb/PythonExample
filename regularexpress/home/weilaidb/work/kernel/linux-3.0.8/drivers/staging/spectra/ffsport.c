int GLOB_Calc_Used_Bits(u32 n)
u64 GLOB_u64_Div(u64 addr, u32 divisor)
u64 GLOB_u64_Remainder(u64 addr, u32 divisor_type)
#define NUM_DEVICES             1
#define PARTITIONS              8
#define GLOB_SBD_NAME          "nd"
#define GLOB_SBD_IRQ_NUM       (29)
#define GLOB_SBD_IOCTL_GC                        (0x7701)
#define GLOB_SBD_IOCTL_WL                        (0x7702)
#define GLOB_SBD_IOCTL_FORMAT                    (0x7703)
#define GLOB_SBD_IOCTL_ERASE_FLASH               (0x7704)
#define GLOB_SBD_IOCTL_FLUSH_CACHE               (0x7705)
#define GLOB_SBD_IOCTL_COPY_BLK_TABLE            (0x7706)
#define GLOB_SBD_IOCTL_COPY_WEAR_LEVELING_TABLE  (0x7707)
#define GLOB_SBD_IOCTL_GET_NAND_INFO             (0x7708)
#define GLOB_SBD_IOCTL_WRITE_DATA                (0x7709)
#define GLOB_SBD_IOCTL_READ_DATA                 (0x770A)
static int reserved_mb = 0;
module_param(reserved_mb, int, 0);
MODULE_PARM_DESC(reserved_mb, "Reserved space for OS image, in MiB (default 25 MiB)");
int nand_debug_level;
module_param(nand_debug_level, int, 0644);
MODULE_PARM_DESC(nand_debug_level, "debug level value: 1-3");
MODULE_LICENSE("GPL");
struct spectra_nand_dev ;
static int GLOB_SBD_majornum;
static char *GLOB_version = GLOB_VERSION;
static struct spectra_nand_dev nand_device[NUM_DEVICES];
static struct mutex spectra_lock;
static int res_blks_os = 1;
struct spectra_indentfy_dev_tag IdentifyDeviceData;
static int force_flush_cache(void)
struct ioctl_rw_page_info ;
static int ioctl_read_page_data(unsigned long arg)
static int ioctl_write_page_data(unsigned long arg)
static int get_res_blk_num_bad_blk(void)
static int get_res_blk_num_os(void)
static int do_transfer(struct spectra_nand_dev *tr, struct request *req)
static int spectra_trans_thread(void *arg)
static void GLOB_SBD_request(struct request_queue *rq)
static int GLOB_SBD_open(struct block_device *bdev, fmode_t mode)
static int GLOB_SBD_release(struct gendisk *disk, fmode_t mode)
static int GLOB_SBD_getgeo(struct block_device *bdev, struct hd_geometry *geo)
int GLOB_SBD_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static DEFINE_MUTEX(ffsport_mutex);
int GLOB_SBD_unlocked_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static struct block_device_operations GLOB_SBD_ops = ;
static int SBD_setup_device(struct spectra_nand_dev *dev, int which)
static void register_spectra_ftl_async(void *unused, async_cookie_t cookie)
int register_spectra_ftl()
EXPORT_SYMBOL_GPL(register_spectra_ftl);
static int GLOB_SBD_init(void)
static void __exit GLOB_SBD_exit(void)
module_init(GLOB_SBD_init);
module_exit(GLOB_SBD_exit);
