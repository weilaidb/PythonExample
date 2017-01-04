#define	FD_MAX_UNITS 2
#undef DEBUG
static DEFINE_MUTEX(ataflop_mutex);
static struct request *fd_request;
static int fdc_queue;
static struct atari_disk_type  atari_disk_type[] = ;
static int StartDiskType[] = ;
#define	TYPE_DD		0
#define	TYPE_HD		1
#define	TYPE_ED		2
static int DriveType = TYPE_HD;
static DEFINE_SPINLOCK(ataflop_lock);
static struct  minor2disktype[] = ;
#define NUM_DISK_MINORS ARRAY_SIZE(minor2disktype)
#define MAX_DISK_SIZE 3280
static struct atari_disk_type user_params[FD_MAX_UNITS];
static struct atari_disk_type default_params[FD_MAX_UNITS];
static struct atari_floppy_struct  unit[FD_MAX_UNITS];
#define	UD	unit[drive]
#define	UDT	unit[drive].disktype
#define	SUD	unit[SelectedDrive]
#define	SUDT	unit[SelectedDrive].disktype
#define FDC_READ(reg) ()
#define FDC_WRITE(reg,val)			\
do  while(0)
static int MaxSectors[] = ;
static int BufferSize[] = ;
#define	BUFFER_SIZE	(BufferSize[DriveType])
unsigned char *DMABuffer;
static unsigned long PhysDMABuffer;
static int UseTrackbuffer = -1;
module_param(UseTrackbuffer, int, 0);
unsigned char *TrackBuffer;
static unsigned long PhysTrackBuffer;
static int BufferDrive, BufferSide, BufferTrack;
static int read_track;
#define	SECTOR_BUFFER(sec)	(TrackBuffer + ((sec)-1)*512)
#define	IS_BUFFERED(drive,side,track) \
(BufferDrive == (drive) && BufferSide == (side) && BufferTrack == (track))
static int SelectedDrive = 0;
static int ReqCmd, ReqBlock;
static int ReqSide, ReqTrack, ReqSector, ReqCnt;
static int HeadSettleFlag = 0;
static unsigned char *ReqData, *ReqBuffer;
static int MotorOn = 0, MotorOffTrys;
static int IsFormatting = 0, FormatError;
static int UserSteprate[FD_MAX_UNITS] = ;
module_param_array(UserSteprate, int, NULL, 0);
static volatile int fdc_busy = 0;
static DECLARE_WAIT_QUEUE_HEAD(fdc_wait);
static DECLARE_WAIT_QUEUE_HEAD(format_wait);
static unsigned long changed_floppies = 0xff, fake_change = 0;
#define	CHECK_CHANGE_DELAY	HZ/2
#define	FD_MOTOR_OFF_DELAY	(3*HZ)
#define	FD_MOTOR_OFF_MAXTRY	(10*20)
#define FLOPPY_TIMEOUT		(6*HZ)
#define RECALIBRATE_ERRORS	4
#define MAX_ERRORS		8
static int Probing = 0;
static int NeedSeek = 0;
#define DPRINT(a)	printk a
#define DPRINT(a)
static void fd_select_side( int side );
static void fd_select_drive( int drive );
static void fd_deselect( void );
static void fd_motor_off_timer( unsigned long dummy );
static void check_change( unsigned long dummy );
static irqreturn_t floppy_irq (int irq, void *dummy);
static void fd_error( void );
static int do_format(int drive, int type, struct atari_format_descr *desc);
static void do_fd_action( int drive );
static void fd_calibrate( void );
static void fd_calibrate_done( int status );
static void fd_seek( void );
static void fd_seek_done( int status );
static void fd_rwsec( void );
static void fd_readtrack_check( unsigned long dummy );
static void fd_rwsec_done( int status );
static void fd_rwsec_done1(int status);
static void fd_writetrack( void );
static void fd_writetrack_done( int status );
static void fd_times_out( unsigned long dummy );
static void finish_fdc( void );
static void finish_fdc_done( int dummy );
static void setup_req_params( int drive );
static void redo_fd_request( void);
static int fd_locked_ioctl(struct block_device *bdev, fmode_t mode, unsigned int
cmd, unsigned long param);
static void fd_probe( int drive );
static int fd_test_drive_present( int drive );
static void config_types( void );
static int floppy_open(struct block_device *bdev, fmode_t mode);
static int floppy_release(struct gendisk *disk, fmode_t mode);
static DEFINE_TIMER(motor_off_timer, fd_motor_off_timer, 0, 0);
static DEFINE_TIMER(readtrack_timer, fd_readtrack_check, 0, 0);
static DEFINE_TIMER(timeout_timer, fd_times_out, 0, 0);
static DEFINE_TIMER(fd_timer, check_change, 0, 0);
static void fd_end_request_cur(int err)
static inline void start_motor_off_timer(void)
static inline void start_check_change_timer( void )
static inline void start_timeout(void)
static inline void stop_timeout(void)
static void fd_select_side( int side )
static void fd_select_drive( int drive )
static void fd_deselect( void )
static void fd_motor_off_timer( unsigned long dummy )
static void check_change( unsigned long dummy )
static inline void set_head_settle_flag(void)
static inline int get_head_settle_flag(void)
static inline void copy_buffer(void *from, void *to)
static void (*FloppyIRQHandler)( int status ) = NULL;
static irqreturn_t floppy_irq (int irq, void *dummy)
static void fd_error( void )
#define	SET_IRQ_HANDLER(proc) do  while(0)
#define FILL(n,val)		\
do  while(0)
static int do_format(int drive, int type, struct atari_format_descr *desc)
static void do_fd_action( int drive )
static void fd_calibrate( void )
static void fd_calibrate_done( int status )
static void fd_seek( void )
static void fd_seek_done( int status )
static int MultReadInProgress = 0;
static void fd_rwsec( void )
static void fd_readtrack_check( unsigned long dummy )
static void fd_rwsec_done( int status )
static void fd_rwsec_done1(int status)
static void fd_writetrack( void )
static void fd_writetrack_done( int status )
static void fd_times_out( unsigned long dummy )
static void finish_fdc( void )
static void finish_fdc_done( int dummy )
static unsigned int floppy_check_events(struct gendisk *disk,
unsigned int clearing)
static int floppy_revalidate(struct gendisk *disk)
static void setup_req_params( int drive )
static struct request *set_next_request(void)
static void redo_fd_request(void)
void do_fd_request(struct request_queue * q)
static int fd_locked_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int fd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static void __init fd_probe( int drive )
static int __init fd_test_drive_present( int drive )
static void __init config_types( void )
static int floppy_open(struct block_device *bdev, fmode_t mode)
static int floppy_unlocked_open(struct block_device *bdev, fmode_t mode)
static int floppy_release(struct gendisk *disk, fmode_t mode)
static const struct block_device_operations floppy_fops = ;
static struct kobject *floppy_find(dev_t dev, int *part, void *data)
static int __init atari_floppy_init (void)
static int __init atari_floppy_setup(char *str)
__setup("floppy=", atari_floppy_setup);
static void __exit atari_floppy_exit(void)
module_init(atari_floppy_init)
module_exit(atari_floppy_exit)
MODULE_LICENSE("GPL");
