static DEFINE_MUTEX(swim3_mutex);
static struct request_queue *swim3_queue;
static struct gendisk *disks[2];
static struct request *fd_req;
#define MAX_FLOPPIES	2
enum swim_state ;
#define REG(x)	unsigned char x; char x ## _pad[15];
struct swim3 ;
#define control_bic	control
#define control_bis	status
#define CA_MASK		7
#define LSTRB		8
#define DO_SEEK		0x80
#define FORMAT		0x40
#define SELECT		0x20
#define WRITE_SECTORS	0x10
#define DO_ACTION	0x08
#define DRIVE2_ENABLE	0x04
#define DRIVE_ENABLE	0x02
#define INTR_ENABLE	0x01
#define FIFO_1BYTE	0x80
#define FIFO_2BYTE	0x40
#define ERROR		0x20
#define DATA		0x08
#define RDDATA		0x04
#define INTR_PENDING	0x02
#define MARK_BYTE	0x01
#define ERROR_INTR	0x20
#define DATA_CHANGED	0x10
#define TRANSFER_DONE	0x08
#define SEEN_SECTOR	0x04
#define SEEK_DONE	0x02
#define TIMER_DONE	0x01
#define ERR_DATA_CRC	0x80
#define ERR_ADDR_CRC	0x40
#define ERR_OVERRUN	0x04
#define ERR_UNDERRUN	0x01
#define S_SW_RESET	0x80
#define S_GCR_WRITE	0x40
#define S_IBM_DRIVE	0x20
#define S_TEST_MODE	0x10
#define S_FCLK_DIV2	0x08
#define S_GCR		0x04
#define S_COPY_PROT	0x02
#define S_INV_WDATA	0x01
#define SEEK_POSITIVE	0
#define SEEK_NEGATIVE	4
#define STEP		1
#define MOTOR_ON	2
#define MOTOR_OFF	6
#define INDEX		3
#define EJECT		7
#define SETMFM		9
#define SETGCR		13
#define STEP_DIR	0
#define STEPPING	1
#define MOTOR_ON	2
#define RELAX		3
#define READ_DATA_0	4
#define TWOMEG_DRIVE	5
#define SINGLE_SIDED	6
#define DRIVE_PRESENT	7
#define DISK_IN		8
#define WRITE_PROT	9
#define TRACK_ZERO	10
#define TACHO		11
#define READ_DATA_1	12
#define MFM_MODE	13
#define SEEK_COMPLETE	14
#define ONEMEG_MEDIA	15
#define DATA_ESCAPE	0x99
#define GCR_SYNC_EXC	0x3f
#define GCR_SYNC_CONV	0x80
#define GCR_FIRST_MARK	0xd5
#define GCR_SECOND_MARK	0xaa
#define GCR_ADDR_MARK	"\xd5\xaa\x00"
#define GCR_DATA_MARK	"\xd5\xaa\x0b"
#define GCR_SLIP_BYTE	"\x27\xaa"
#define GCR_SELF_SYNC	"\x3f\xbf\x1e\x34\x3c\x3f"
#define DATA_99		"\x99\x99"
#define MFM_ADDR_MARK	"\x99\xa1\x99\xa1\x99\xa1\x99\xfe"
#define MFM_INDEX_MARK	"\x99\xc2\x99\xc2\x99\xc2\x99\xfc"
#define MFM_GAP_LEN	12
struct floppy_state ;
static struct floppy_state floppy_states[MAX_FLOPPIES];
static int floppy_count = 0;
static DEFINE_SPINLOCK(swim3_lock);
static unsigned short write_preamble[] = ;
static unsigned short write_postamble[] = ;
static void swim3_select(struct floppy_state *fs, int sel);
static void swim3_action(struct floppy_state *fs, int action);
static int swim3_readbit(struct floppy_state *fs, int bit);
static void do_fd_request(struct request_queue * q);
static void start_request(struct floppy_state *fs);
static void set_timeout(struct floppy_state *fs, int nticks,
void (*proc)(unsigned long));
static void scan_track(struct floppy_state *fs);
static void seek_track(struct floppy_state *fs, int n);
static void init_dma(struct dbdma_cmd *cp, int cmd, void *buf, int count);
static void setup_transfer(struct floppy_state *fs);
static void act(struct floppy_state *fs);
static void scan_timeout(unsigned long data);
static void seek_timeout(unsigned long data);
static void settle_timeout(unsigned long data);
static void xfer_timeout(unsigned long data);
static irqreturn_t swim3_interrupt(int irq, void *dev_id);
static int grab_drive(struct floppy_state *fs, enum swim_state state,
int interruptible);
static void release_drive(struct floppy_state *fs);
static int fd_eject(struct floppy_state *fs);
static int floppy_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param);
static int floppy_open(struct block_device *bdev, fmode_t mode);
static int floppy_release(struct gendisk *disk, fmode_t mode);
static unsigned int floppy_check_events(struct gendisk *disk,
unsigned int clearing);
static int floppy_revalidate(struct gendisk *disk);
static bool swim3_end_request(int err, unsigned int nr_bytes)
static bool swim3_end_request_cur(int err)
static void swim3_select(struct floppy_state *fs, int sel)
static void swim3_action(struct floppy_state *fs, int action)
static int swim3_readbit(struct floppy_state *fs, int bit)
static void do_fd_request(struct request_queue * q)
static void start_request(struct floppy_state *fs)
static void set_timeout(struct floppy_state *fs, int nticks,
void (*proc)(unsigned long))
static inline void scan_track(struct floppy_state *fs)
static inline void seek_track(struct floppy_state *fs, int n)
static inline void init_dma(struct dbdma_cmd *cp, int cmd,
void *buf, int count)
static inline void setup_transfer(struct floppy_state *fs)
static void act(struct floppy_state *fs)
static void scan_timeout(unsigned long data)
static void seek_timeout(unsigned long data)
static void settle_timeout(unsigned long data)
static void xfer_timeout(unsigned long data)
static irqreturn_t swim3_interrupt(int irq, void *dev_id)
static int grab_drive(struct floppy_state *fs, enum swim_state state,
int interruptible)
static void release_drive(struct floppy_state *fs)
static int fd_eject(struct floppy_state *fs)
static struct floppy_struct floppy_type =
;
static int floppy_locked_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int floppy_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int floppy_open(struct block_device *bdev, fmode_t mode)
static int floppy_unlocked_open(struct block_device *bdev, fmode_t mode)
static int floppy_release(struct gendisk *disk, fmode_t mode)
static unsigned int floppy_check_events(struct gendisk *disk,
unsigned int clearing)
static int floppy_revalidate(struct gendisk *disk)
static const struct block_device_operations floppy_fops = ;
static int swim3_add_device(struct macio_dev *mdev, int index)
static int __devinit swim3_attach(struct macio_dev *mdev, const struct of_device_id *match)
static struct of_device_id swim3_match[] =
;
static struct macio_driver swim3_driver =
;
int swim3_init(void)
module_init(swim3_init)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Paul Mackerras");
MODULE_ALIAS_BLOCKDEV_MAJOR(FLOPPY_MAJOR);
