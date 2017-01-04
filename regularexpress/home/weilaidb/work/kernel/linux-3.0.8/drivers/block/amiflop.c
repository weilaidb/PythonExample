#undef DEBUG
#define RAW_IOCTL
#define IOCTL_RAW_TRACK 0x5254524B
#define FD_OK		0
#define FD_ERROR	-1
#define FD_NOUNIT	1
#define FD_UNITBUSY	2
#define FD_NOTACTIVE	3
#define FD_NOTREADY	4
#define MFM_NOSYNC	1
#define MFM_HEADER	2
#define MFM_DATA	3
#define MFM_TRACK	4
#define FD_NODRIVE	0x00000000
#define FD_DD_3 	0xffffffff
#define FD_HD_3 	0x55555555
#define FD_DD_5 	0xaaaaaaaa
static DEFINE_MUTEX(amiflop_mutex);
static unsigned long int fd_def_df0 = FD_DD_3;
module_param(fd_def_df0, ulong, 0);
MODULE_LICENSE("GPL");
#define MOTOR_ON	(ciab.prb &= ~DSKMOTOR)
#define MOTOR_OFF	(ciab.prb |= DSKMOTOR)
#define SELECT(mask)    (ciab.prb &= ~mask)
#define DESELECT(mask)  (ciab.prb |= mask)
#define SELMASK(drive)  (1 << (3 + (drive & 3)))
static struct fd_drive_type drive_types[] = ;
static int num_dr_types = ARRAY_SIZE(drive_types);
static int amiga_read(int), dos_read(int);
static void amiga_write(int), dos_write(int);
static struct fd_data_type data_types[] = ;
static struct amiga_floppy_struct unit[FD_MAX_UNITS];
static struct timer_list flush_track_timer[FD_MAX_UNITS];
static struct timer_list post_write_timer;
static struct timer_list motor_on_timer;
static struct timer_list motor_off_timer[FD_MAX_UNITS];
static int on_attempts;
static volatile int fdc_busy = -1;
static volatile int fdc_nested;
static DECLARE_WAIT_QUEUE_HEAD(fdc_wait);
static DECLARE_COMPLETION(motor_on_completion);
static volatile int selected = -1;
static int writepending;
static int writefromint;
static char *raw_buf;
static int fdc_queue;
static DEFINE_SPINLOCK(amiflop_lock);
#define RAW_BUF_SIZE 30000
static volatile char block_flag;
static DECLARE_WAIT_QUEUE_HEAD(wait_fd_block);
static unsigned char mfmencode[16]=;
static unsigned char mfmdecode[128];
static DECLARE_COMPLETION(ms_wait_completion);
#define MS_TICKS ((amiga_eclock+50)/1000)
#define MAX_ERRORS 12
#define custom amiga_custom
static int fd_ref[4] = ;
static int fd_device[4] = ;
static irqreturn_t ms_isr(int irq, void *dummy)
static void ms_delay(int ms)
static inline int try_fdc(int drive)
static void get_fdc(int drive)
static inline void rel_fdc(void)
static void fd_select (int drive)
static void fd_deselect (int drive)
static void motor_on_callback(unsigned long nr)
static int fd_motor_on(int nr)
static void fd_motor_off(unsigned long drive)
static void floppy_off (unsigned int nr)
static int fd_calibrate(int drive)
static int fd_seek(int drive, int track)
static unsigned long fd_get_drive_id(int drive)
static irqreturn_t fd_block_done(int irq, void *dummy)
static void raw_read(int drive)
static int raw_write(int drive)
static void post_write (unsigned long drive)
static unsigned long scan_sync(unsigned long raw, unsigned long end)
static inline unsigned long checksum(unsigned long *addr, int len)
static unsigned long decode (unsigned long *data, unsigned long *raw,
int len)
struct header ;
static int amiga_read(int drive)
static void encode(unsigned long data, unsigned long *dest)
static void encode_block(unsigned long *dest, unsigned long *src, int len)
static unsigned long *putsec(int disk, unsigned long *raw, int cnt)
static void amiga_write(int disk)
struct dos_header ;
static ushort dos_crc(void * data_a3, int data_d0, int data_d1, int data_d3)
static inline ushort dos_hdr_crc (struct dos_header *hdr)
static inline ushort dos_data_crc(unsigned char *data)
static inline unsigned char dos_decode_byte(ushort word)
static unsigned long dos_decode(unsigned char *data, unsigned short *raw, int len)
static void dbg(unsigned long ptr)
static int dos_read(int drive)
static inline ushort dos_encode_byte(unsigned char byte)
static void dos_encode_block(ushort *dest, unsigned char *src, int len)
static unsigned long *ms_putsec(int drive, unsigned long *raw, int cnt)
static void dos_write(int disk)
static void flush_track_callback(unsigned long nr)
static int non_int_flush_track (unsigned long nr)
static int get_track(int drive, int track)
static struct request *set_next_request(void)
static void redo_fd_request(void)
static void do_fd_request(struct request_queue * q)
static int fd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int fd_locked_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int fd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static void fd_probe(int dev)
static int floppy_open(struct block_device *bdev, fmode_t mode)
static int floppy_release(struct gendisk *disk, fmode_t mode)
static unsigned amiga_check_events(struct gendisk *disk, unsigned int clearing)
static const struct block_device_operations floppy_fops = ;
static int __init fd_probe_drives(void)
static struct kobject *floppy_find(dev_t dev, int *part, void *data)
static int __init amiga_floppy_probe(struct platform_device *pdev)
static struct platform_driver amiga_floppy_driver = ;
static int __init amiga_floppy_init(void)
module_init(amiga_floppy_init);
static int __init amiga_floppy_setup (char *str)
__setup("floppy=", amiga_floppy_setup);
MODULE_ALIAS("platform:amiga-floppy");
