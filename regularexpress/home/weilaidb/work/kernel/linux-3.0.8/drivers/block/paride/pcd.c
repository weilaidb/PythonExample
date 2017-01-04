#define	PCD_VERSION	"1.07"
#define PCD_MAJOR	46
#define PCD_NAME	"pcd"
#define PCD_UNITS	4
static int verbose = 0;
static int major = PCD_MAJOR;
static char *name = PCD_NAME;
static int nice = 0;
static int disable = 0;
static int drive0[6] = ;
static int drive1[6] = ;
static int drive2[6] = ;
static int drive3[6] = ;
static int (*drives[4])[6] = ;
static int pcd_drive_count;
enum ;
static DEFINE_MUTEX(pcd_mutex);
static DEFINE_SPINLOCK(pcd_lock);
module_param(verbose, bool, 0644);
module_param(major, int, 0);
module_param(name, charp, 0);
module_param(nice, int, 0);
module_param_array(drive0, int, NULL, 0);
module_param_array(drive1, int, NULL, 0);
module_param_array(drive2, int, NULL, 0);
module_param_array(drive3, int, NULL, 0);
#define PCD_RETRIES	     5
#define PCD_TMO		   800
#define PCD_DELAY           50
#define PCD_READY_TMO	    20
#define PCD_RESET_TMO	   100
#define PCD_SPIN	(1000000*PCD_TMO)/(HZ*PCD_DELAY)
#define IDE_ERR		0x01
#define IDE_DRQ         0x08
#define IDE_READY       0x40
#define IDE_BUSY        0x80
static int pcd_open(struct cdrom_device_info *cdi, int purpose);
static void pcd_release(struct cdrom_device_info *cdi);
static int pcd_drive_status(struct cdrom_device_info *cdi, int slot_nr);
static unsigned int pcd_check_events(struct cdrom_device_info *cdi,
unsigned int clearing, int slot_nr);
static int pcd_tray_move(struct cdrom_device_info *cdi, int position);
static int pcd_lock_door(struct cdrom_device_info *cdi, int lock);
static int pcd_drive_reset(struct cdrom_device_info *cdi);
static int pcd_get_mcn(struct cdrom_device_info *cdi, struct cdrom_mcn *mcn);
static int pcd_audio_ioctl(struct cdrom_device_info *cdi,
unsigned int cmd, void *arg);
static int pcd_packet(struct cdrom_device_info *cdi,
struct packet_command *cgc);
static int pcd_detect(void);
static void pcd_probe_capabilities(void);
static void do_pcd_read_drq(void);
static void do_pcd_request(struct request_queue * q);
static void do_pcd_read(void);
struct pcd_unit ;
static struct pcd_unit pcd[PCD_UNITS];
static char pcd_scratch[64];
static char pcd_buffer[2048];
static int pcd_bufblk = -1;
static struct pcd_unit *pcd_current;
static struct request *pcd_req;
static int pcd_retries;
static int pcd_busy;
static int pcd_sector;
static int pcd_count;
static char *pcd_buf;
static int pcd_block_open(struct block_device *bdev, fmode_t mode)
static int pcd_block_release(struct gendisk *disk, fmode_t mode)
static int pcd_block_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static unsigned int pcd_block_check_events(struct gendisk *disk,
unsigned int clearing)
static const struct block_device_operations pcd_bdops = ;
static struct cdrom_device_ops pcd_dops = ;
static void pcd_init_units(void)
static int pcd_open(struct cdrom_device_info *cdi, int purpose)
static void pcd_release(struct cdrom_device_info *cdi)
static inline int status_reg(struct pcd_unit *cd)
static inline int read_reg(struct pcd_unit *cd, int reg)
static inline void write_reg(struct pcd_unit *cd, int reg, int val)
static int pcd_wait(struct pcd_unit *cd, int go, int stop, char *fun, char *msg)
static int pcd_command(struct pcd_unit *cd, char *cmd, int dlen, char *fun)
static int pcd_completion(struct pcd_unit *cd, char *buf, char *fun)
static void pcd_req_sense(struct pcd_unit *cd, char *fun)
static int pcd_atapi(struct pcd_unit *cd, char *cmd, int dlen, char *buf, char *fun)
static int pcd_packet(struct cdrom_device_info *cdi, struct packet_command *cgc)
#define DBMSG(msg)	((verbose>1)?(msg):NULL)
static unsigned int pcd_check_events(struct cdrom_device_info *cdi,
unsigned int clearing, int slot_nr)
static int pcd_lock_door(struct cdrom_device_info *cdi, int lock)
static int pcd_tray_move(struct cdrom_device_info *cdi, int position)
static void pcd_sleep(int cs)
static int pcd_reset(struct pcd_unit *cd)
static int pcd_drive_reset(struct cdrom_device_info *cdi)
static int pcd_ready_wait(struct pcd_unit *cd, int tmo)
static int pcd_drive_status(struct cdrom_device_info *cdi, int slot_nr)
static int pcd_identify(struct pcd_unit *cd, char *id)
static int pcd_probe(struct pcd_unit *cd, int ms, char *id)
static void pcd_probe_capabilities(void)
static int pcd_detect(void)
static struct request_queue *pcd_queue;
static void do_pcd_request(struct request_queue * q)
static inline void next_request(int err)
static int pcd_ready(void)
static void pcd_transfer(void)
static void pcd_start(void)
static void do_pcd_read(void)
static void do_pcd_read_drq(void)
static int pcd_audio_ioctl(struct cdrom_device_info *cdi, unsigned int cmd, void *arg)
static int pcd_get_mcn(struct cdrom_device_info *cdi, struct cdrom_mcn *mcn)
static int __init pcd_init(void)
static void __exit pcd_exit(void)
MODULE_LICENSE("GPL");
module_init(pcd_init)
module_exit(pcd_exit)
