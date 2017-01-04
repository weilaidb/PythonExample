#undef  FLOPPY_SILENT_DCL_CLEAR
#define REALLY_SLOW_IO
#define DEBUGT 2
#define DPRINT(format, args...) \
pr_info("floppy%d: " format, current_drive, ##args)
#define DCL_DEBUG
#define debug_dcl(test, fmt, args...) \
do  while (0)
#define debug_dcl(test, fmt, args...) \
do  while (0)
static int print_unex = 1;
#define FDPATCHES
static DEFINE_MUTEX(floppy_mutex);
static int slow_floppy;
static int FLOPPY_IRQ = 6;
static int FLOPPY_DMA = 2;
static int can_use_virtual_dma = 2;
static int use_virtual_dma;
static DEFINE_SPINLOCK(floppy_lock);
static unsigned short virtual_dma_port = 0x3f0;
irqreturn_t floppy_interrupt(int irq, void *dev_id);
static int set_dor(int fdc, char mask, char data);
#define K_64	0x10000
static int allowed_drive_mask = 0x33;
static int irqdma_allocated;
static struct request *current_req;
static void do_fd_request(struct request_queue *q);
static int set_next_request(void);
#define fd_get_dma_residue() get_dma_residue(FLOPPY_DMA)
#define fd_dma_mem_free(addr, size) free_pages(addr, get_order(size))
#define fd_dma_mem_alloc(size) __get_dma_pages(GFP_KERNEL, get_order(size))
static inline void fallback_on_nodma_alloc(char **addr, size_t l)
static unsigned long fake_change;
static bool initialized;
#define ITYPE(x)	(((x) >> 2) & 0x1f)
#define TOMINOR(x)	((x & 3) | ((x & 4) << 5))
#define UNIT(x)		((x) & 0x03)
#define FDC(x)		(((x) & 0x04) >> 2)
#define REVDRIVE(fdc, unit) ((unit) + ((fdc) << 2))
#define DP	(&drive_params[current_drive])
#define DRS	(&drive_state[current_drive])
#define DRWE	(&write_errors[current_drive])
#define FDCS	(&fdc_state[fdc])
#define UDP	(&drive_params[drive])
#define UDRS	(&drive_state[drive])
#define UDRWE	(&write_errors[drive])
#define UFDCS	(&fdc_state[FDC(drive)])
#define PH_HEAD(floppy, head) (((((floppy)->stretch & 2) >> 1) ^ head) << 2)
#define STRETCH(floppy)	((floppy)->stretch & FD_STRETCH)
#define COMMAND		(raw_cmd->cmd[0])
#define DR_SELECT	(raw_cmd->cmd[1])
#define TRACK		(raw_cmd->cmd[2])
#define HEAD		(raw_cmd->cmd[3])
#define SECTOR		(raw_cmd->cmd[4])
#define SIZECODE	(raw_cmd->cmd[5])
#define SECT_PER_TRACK	(raw_cmd->cmd[6])
#define GAP		(raw_cmd->cmd[7])
#define SIZECODE2	(raw_cmd->cmd[8])
#define NR_RW 9
#define F_SIZECODE	(raw_cmd->cmd[2])
#define F_SECT_PER_TRACK (raw_cmd->cmd[3])
#define F_GAP		(raw_cmd->cmd[4])
#define F_FILL		(raw_cmd->cmd[5])
#define NR_F 6
#define MAX_DISK_SIZE 4
#define MAX_REPLIES 16
static unsigned char reply_buffer[MAX_REPLIES];
static int inr;
#define ST0		(reply_buffer[0])
#define ST1		(reply_buffer[1])
#define ST2		(reply_buffer[2])
#define ST3		(reply_buffer[0])
#define R_TRACK		(reply_buffer[3])
#define R_HEAD		(reply_buffer[4])
#define R_SECTOR	(reply_buffer[5])
#define R_SIZECODE	(reply_buffer[6])
#define SEL_DLY		(2 * HZ / 100)
static struct  default_drive_params[] = ;
static struct floppy_drive_params drive_params[N_DRIVE];
static struct floppy_drive_struct drive_state[N_DRIVE];
static struct floppy_write_errors write_errors[N_DRIVE];
static struct timer_list motor_off_timer[N_DRIVE];
static struct gendisk *disks[N_DRIVE];
static struct block_device *opened_bdev[N_DRIVE];
static DEFINE_MUTEX(open_lock);
static struct floppy_raw_cmd *raw_cmd, default_raw_cmd;
static int fdc_queue;
static struct floppy_struct floppy_type[32] = ;
#define SECTSIZE (_FD_SECTSIZE(*floppy))
static struct floppy_struct *current_type[N_DRIVE];
static struct floppy_struct user_params[N_DRIVE];
static sector_t floppy_sizes[256];
static char floppy_device_name[] = "floppy";
static int probing;
#define FD_COMMAND_NONE		-1
#define FD_COMMAND_ERROR	2
#define FD_COMMAND_OKAY		3
static volatile int command_status = FD_COMMAND_NONE;
static unsigned long fdc_busy;
static DECLARE_WAIT_QUEUE_HEAD(fdc_wait);
static DECLARE_WAIT_QUEUE_HEAD(command_done);
static int format_errors;
static struct format_descr format_req;
static char *floppy_track_buffer;
static int max_buffer_sectors;
static int *errors;
typedef void (*done_f)(int);
static const struct cont_t  *cont;
static void floppy_ready(void);
static void floppy_start(void);
static void process_fd_request(void);
static void recalibrate_floppy(void);
static void floppy_shutdown(unsigned long);
static int floppy_request_regions(int);
static void floppy_release_regions(int);
static int floppy_grab_irq_and_dma(void);
static void floppy_release_irq_and_dma(void);
static void reset_fdc(void);
#define NO_TRACK	-1
#define NEED_1_RECAL	-2
#define NEED_2_RECAL	-3
static atomic_t usage_count = ATOMIC_INIT(0);
static int buffer_track = -1;
static int buffer_drive = -1;
static int buffer_min = -1;
static int buffer_max = -1;
static struct floppy_fdc_state fdc_state[N_FDC];
static int fdc;
static struct floppy_struct *_floppy = floppy_type;
static unsigned char current_drive;
static long current_count_sectors;
static unsigned char fsector_t;
static unsigned char in_sector_offset;
static inline bool drive_no_geom(int drive)
static inline int fd_eject(int drive)
static long unsigned debugtimer;
static inline void set_debugt(void)
static inline void debugt(const char *func, const char *msg)
static inline void set_debugt(void)
static inline void debugt(const char *func, const char *msg)
typedef void (*timeout_fn)(unsigned long);
static DEFINE_TIMER(fd_timeout, floppy_shutdown, 0, 0);
static const char *timeout_message;
static void is_alive(const char *func, const char *message)
static void (*do_floppy)(void) = NULL;
#define OLOGSIZE 20
static void (*lasthandler)(void);
static unsigned long interruptjiffies;
static unsigned long resultjiffies;
static int resultsize;
static unsigned long lastredo;
static struct output_log  output_log[OLOGSIZE];
static int output_log_pos;
#define current_reqD -1
#define MAXTIMEOUT -2
static void __reschedule_timeout(int drive, const char *message)
static void reschedule_timeout(int drive, const char *message)
#define INFBOUND(a, b) (a) = max_t(int, a, b)
#define SUPBOUND(a, b) (a) = min_t(int, a, b)
static int disk_change(int drive)
static inline int is_selected(int dor, int unit)
static bool is_ready_state(int status)
static int set_dor(int fdc, char mask, char data)
static void twaddle(void)
static void reset_fdc_info(int mode)
static void set_fdc(int drive)
static int lock_fdc(int drive, bool interruptible)
static void unlock_fdc(void)
static void motor_off_callback(unsigned long nr)
static void floppy_off(unsigned int drive)
static void scandrives(void)
static void empty(void)
static DECLARE_WORK(floppy_work, NULL);
static void schedule_bh(void (*handler)(void))
static DEFINE_TIMER(fd_timer, NULL, 0, 0);
static void cancel_activity(void)
static void fd_watchdog(void)
static void main_command_interrupt(void)
static int fd_wait_for_completion(unsigned long delay, timeout_fn function)
static DEFINE_SPINLOCK(floppy_hlt_lock);
static int hlt_disabled;
static void floppy_disable_hlt(void)
static void floppy_enable_hlt(void)
static void setup_DMA(void)
static void show_floppy(void);
static int wait_til_ready(void)
static int output_byte(char byte)
static int result(void)
#define MORE_OUTPUT -2
static int need_more_output(void)
static void perpendicular_mode(void)
static int fifo_depth = 0xa;
static int no_fifo;
static int fdc_configure(void)
#define NOMINAL_DTR 500
static void fdc_specify(void)
static int fdc_dtr(void)
static void tell_sector(void)
static void print_errors(void)
static int interpret_errors(void)
static void setup_rw_floppy(void)
static int blind_seek;
static void seek_interrupt(void)
static void check_wp(void)
static void seek_floppy(void)
static void recal_interrupt(void)
static void print_result(char *message, int inr)
irqreturn_t floppy_interrupt(int irq, void *dev_id)
static void recalibrate_floppy(void)
static void reset_interrupt(void)
static void reset_fdc(void)
static void show_floppy(void)
static void floppy_shutdown(unsigned long data)
static int start_motor(void (*function)(void))
static void floppy_ready(void)
static void floppy_start(void)
static void do_wakeup(void)
static const struct cont_t wakeup_cont = ;
static const struct cont_t intr_cont = ;
static int wait_til_done(void (*handler)(void), bool interruptible)
static void generic_done(int result)
static void generic_success(void)
static void generic_failure(void)
static void success_and_wakeup(void)
static int next_valid_format(void)
static void bad_flp_intr(void)
static void set_floppy(int drive)
static void format_interrupt(void)
#define FM_MODE(x, y) ((y) & ~(((x)->rate & 0x80) >> 1))
#define CT(x) ((x) | 0xc0)
static void setup_format_params(int track)
static void redo_format(void)
static const struct cont_t format_cont = ;
static int do_format(int drive, struct format_descr *tmp_format_req)
static void floppy_end_request(struct request *req, int error)
static void request_done(int uptodate)
static void rw_interrupt(void)
static int buffer_chain_size(void)
static int transfer_size(int ssize, int max_sector, int max_size)
static void copy_buffer(int ssize, int max_sector, int max_sector_2)
static void virtualdmabug_workaround(void)
static int make_raw_rw_request(void)
static int set_next_request(void)
static void redo_fd_request(void)
static const struct cont_t rw_cont = ;
static void process_fd_request(void)
static void do_fd_request(struct request_queue *q)
static const struct cont_t poll_cont = ;
static int poll_drive(bool interruptible, int flag)
static void reset_intr(void)
static const struct cont_t reset_cont = ;
static int user_reset_fdc(int drive, int arg, bool interruptible)
static inline int fd_copyout(void __user *param, const void *address,
unsigned long size)
static inline int fd_copyin(void __user *param, void *address,
unsigned long size)
static const char *drive_name(int type, int drive)
static void raw_cmd_done(int flag)
static const struct cont_t raw_cmd_cont = ;
static int raw_cmd_copyout(int cmd, void __user *param,
struct floppy_raw_cmd *ptr)
static void raw_cmd_free(struct floppy_raw_cmd **ptr)
static int raw_cmd_copyin(int cmd, void __user *param,
struct floppy_raw_cmd **rcmd)
static int raw_cmd_ioctl(int cmd, void __user *param)
static int invalidate_drive(struct block_device *bdev)
static int set_geometry(unsigned int cmd, struct floppy_struct *g,
int drive, int type, struct block_device *bdev)
static unsigned int ioctl_table[] = ;
static int normalize_ioctl(unsigned int *cmd, int *size)
static int get_floppy_geometry(int drive, int type, struct floppy_struct **g)
static int fd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int fd_locked_ioctl(struct block_device *bdev, fmode_t mode, unsigned int cmd,
unsigned long param)
static int fd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static void __init config_types(void)
static int floppy_release(struct gendisk *disk, fmode_t mode)
static int floppy_open(struct block_device *bdev, fmode_t mode)
static unsigned int floppy_check_events(struct gendisk *disk,
unsigned int clearing)
static void floppy_rb0_complete(struct bio *bio, int err)
static int __floppy_read_block_0(struct block_device *bdev)
static int floppy_revalidate(struct gendisk *disk)
static const struct block_device_operations floppy_fops = ;
static char __init get_fdc_version(void)
static void __init floppy_set_flags(int *ints, int param, int param2)
static void __init daring(int *ints, int param, int param2)
static void __init set_cmos(int *ints, int dummy, int dummy2)
static struct param_table  config_params[] __initdata = ;
static int __init floppy_setup(char *str)
static int have_no_fdc = -ENODEV;
static ssize_t floppy_cmos_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cmos, S_IRUGO, floppy_cmos_show, NULL);
static void floppy_device_release(struct device *dev)
static int floppy_resume(struct device *dev)
static const struct dev_pm_ops floppy_pm_ops = ;
static struct platform_driver floppy_driver = ;
static struct platform_device floppy_device[N_DRIVE];
static struct kobject *floppy_find(dev_t dev, int *part, void *data)
static int __init floppy_init(void)
static const struct io_region  io_regions[] = ;
static void floppy_release_allocated_regions(int fdc, const struct io_region *p)
#define ARRAY_END(X) (&((X)[ARRAY_SIZE(X)]))
static int floppy_request_regions(int fdc)
static void floppy_release_regions(int fdc)
static int floppy_grab_irq_and_dma(void)
static void floppy_release_irq_and_dma(void)
static char *floppy;
static void __init parse_floppy_cfg_string(char *cfg)
static int __init floppy_module_init(void)
module_init(floppy_module_init);
static void __exit floppy_module_exit(void)
module_exit(floppy_module_exit);
module_param(floppy, charp, 0);
module_param(FLOPPY_IRQ, int, 0);
module_param(FLOPPY_DMA, int, 0);
MODULE_AUTHOR("Alain L. Knaff");
MODULE_SUPPORTED_DEVICE("fd");
MODULE_LICENSE("GPL");
static const struct pnp_device_id floppy_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp, floppy_pnpids);
__setup("floppy=", floppy_setup);
module_init(floppy_init)
MODULE_ALIAS_BLOCKDEV_MAJOR(FLOPPY_MAJOR);
