#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define REVISION "Revision: 3.20"
#define VERSION "Id: cdrom.c 3.20 2003/12/17"
#define CD_NOTHING      0x0
#define CD_WARNING	0x1
#define CD_REG_UNREG	0x2
#define CD_DO_IOCTL	0x4
#define CD_OPEN		0x8
#define CD_CLOSE	0x10
#define CD_COUNT_TRACKS 0x20
#define CD_CHANGER	0x40
#define CD_DVD		0x80
#define ERRLOGMASK CD_WARNING
static int debug;
static int keeplocked;
static int autoclose=1;
static int autoeject;
static int lockdoor = 1;
static int check_media_type;
static int mrw_format_restart = 1;
module_param(debug, bool, 0);
module_param(autoclose, bool, 0);
module_param(autoeject, bool, 0);
module_param(lockdoor, bool, 0);
module_param(check_media_type, bool, 0);
module_param(mrw_format_restart, bool, 0);
static DEFINE_MUTEX(cdrom_mutex);
static const char *mrw_format_status[] = ;
static const char *mrw_address_space[] = ;
#if (ERRLOGMASK!=CD_NOTHING)
#define cdinfo(type, fmt, args...)			\
do  while (0)
#define cdinfo(type, fmt, args...)			\
do  while (0)
#define IOCTL_IN(arg, type, in)					\
if (copy_from_user(&(in), (type __user *) (arg), sizeof (in)))	\
return -EFAULT;
#define IOCTL_OUT(arg, type, out) \
if (copy_to_user((type __user *) (arg), &(out), sizeof (out)))	\
return -EFAULT;
#define CDROM_CAN(type) (cdi->ops->capability & ~cdi->mask & (type))
#define CHECKAUDIO if ((ret=check_for_audio_disc(cdi, cdo))) return ret
#define CDROM_DEF_TIMEOUT	(7 * HZ)
static int open_for_data(struct cdrom_device_info * cdi);
static int check_for_audio_disc(struct cdrom_device_info * cdi,
struct cdrom_device_ops * cdo);
static void sanitize_format(union cdrom_addr *addr,
u_char * curr, u_char requested);
static int mmc_ioctl(struct cdrom_device_info *cdi, unsigned int cmd,
unsigned long arg);
int cdrom_get_last_written(struct cdrom_device_info *, long *);
static int cdrom_get_next_writable(struct cdrom_device_info *, long *);
static void cdrom_count_tracks(struct cdrom_device_info *, tracktype*);
static int cdrom_mrw_exit(struct cdrom_device_info *cdi);
static int cdrom_get_disc_info(struct cdrom_device_info *cdi, disc_information *di);
static void cdrom_sysctl_register(void);
static LIST_HEAD(cdrom_list);
static int cdrom_dummy_generic_packet(struct cdrom_device_info *cdi,
struct packet_command *cgc)
#define ENSURE(call, bits) if (cdo->call == NULL) *change_capability &= ~(bits)
int register_cdrom(struct cdrom_device_info *cdi)
#undef ENSURE
void unregister_cdrom(struct cdrom_device_info *cdi)
int cdrom_get_media_event(struct cdrom_device_info *cdi,
struct media_event_desc *med)
static int cdrom_mrw_probe_pc(struct cdrom_device_info *cdi)
static int cdrom_is_mrw(struct cdrom_device_info *cdi, int *write)
static int cdrom_mrw_bgformat(struct cdrom_device_info *cdi, int cont)
static int cdrom_mrw_bgformat_susp(struct cdrom_device_info *cdi, int immed)
static int cdrom_flush_cache(struct cdrom_device_info *cdi)
static int cdrom_mrw_exit(struct cdrom_device_info *cdi)
static int cdrom_mrw_set_lba_space(struct cdrom_device_info *cdi, int space)
static int cdrom_get_random_writable(struct cdrom_device_info *cdi,
struct rwrt_feature_desc *rfd)
static int cdrom_has_defect_mgt(struct cdrom_device_info *cdi)
static int cdrom_is_random_writable(struct cdrom_device_info *cdi, int *write)
static int cdrom_media_erasable(struct cdrom_device_info *cdi)
static int cdrom_dvdram_open_write(struct cdrom_device_info *cdi)
static int cdrom_mrw_open_write(struct cdrom_device_info *cdi)
static int mo_open_write(struct cdrom_device_info *cdi)
static int cdrom_ram_open_write(struct cdrom_device_info *cdi)
static void cdrom_mmc3_profile(struct cdrom_device_info *cdi)
static int cdrom_is_dvd_rw(struct cdrom_device_info *cdi)
static int cdrom_open_write(struct cdrom_device_info *cdi)
static void cdrom_dvd_rw_close_write(struct cdrom_device_info *cdi)
static int cdrom_close_write(struct cdrom_device_info *cdi)
int cdrom_open(struct cdrom_device_info *cdi, struct block_device *bdev, fmode_t mode)
static
int open_for_data(struct cdrom_device_info * cdi)
static int check_for_audio_disc(struct cdrom_device_info * cdi,
struct cdrom_device_ops * cdo)
void cdrom_release(struct cdrom_device_info *cdi, fmode_t mode)
static int cdrom_read_mech_status(struct cdrom_device_info *cdi,
struct cdrom_changer_info *buf)
static int cdrom_slot_status(struct cdrom_device_info *cdi, int slot)
int cdrom_number_of_slots(struct cdrom_device_info *cdi)
static int cdrom_load_unload(struct cdrom_device_info *cdi, int slot)
static int cdrom_select_disc(struct cdrom_device_info *cdi, int slot)
static void cdrom_update_events(struct cdrom_device_info *cdi,
unsigned int clearing)
unsigned int cdrom_check_events(struct cdrom_device_info *cdi,
unsigned int clearing)
EXPORT_SYMBOL(cdrom_check_events);
static
int media_changed(struct cdrom_device_info *cdi, int queue)
int cdrom_media_changed(struct cdrom_device_info *cdi)
static void cdrom_count_tracks(struct cdrom_device_info *cdi, tracktype* tracks)
static
void sanitize_format(union cdrom_addr *addr,
u_char * curr, u_char requested)
void init_cdrom_command(struct packet_command *cgc, void *buf, int len,
int type)
#define copy_key(dest,src)	memcpy((dest), (src), sizeof(dvd_key))
#define copy_chal(dest,src)	memcpy((dest), (src), sizeof(dvd_challenge))
static void setup_report_key(struct packet_command *cgc, unsigned agid, unsigned type)
static void setup_send_key(struct packet_command *cgc, unsigned agid, unsigned type)
static int dvd_do_auth(struct cdrom_device_info *cdi, dvd_authinfo *ai)
static int dvd_read_physical(struct cdrom_device_info *cdi, dvd_struct *s,
struct packet_command *cgc)
static int dvd_read_copyright(struct cdrom_device_info *cdi, dvd_struct *s,
struct packet_command *cgc)
static int dvd_read_disckey(struct cdrom_device_info *cdi, dvd_struct *s,
struct packet_command *cgc)
static int dvd_read_bca(struct cdrom_device_info *cdi, dvd_struct *s,
struct packet_command *cgc)
static int dvd_read_manufact(struct cdrom_device_info *cdi, dvd_struct *s,
struct packet_command *cgc)
static int dvd_read_struct(struct cdrom_device_info *cdi, dvd_struct *s,
struct packet_command *cgc)
int cdrom_mode_sense(struct cdrom_device_info *cdi,
struct packet_command *cgc,
int page_code, int page_control)
int cdrom_mode_select(struct cdrom_device_info *cdi,
struct packet_command *cgc)
static int cdrom_read_subchannel(struct cdrom_device_info *cdi,
struct cdrom_subchnl *subchnl, int mcn)
static int cdrom_read_cd(struct cdrom_device_info *cdi,
struct packet_command *cgc, int lba,
int blocksize, int nblocks)
static int cdrom_read_block(struct cdrom_device_info *cdi,
struct packet_command *cgc,
int lba, int nblocks, int format, int blksize)
static int cdrom_read_cdda_old(struct cdrom_device_info *cdi, __u8 __user *ubuf,
int lba, int nframes)
static int cdrom_read_cdda_bpc(struct cdrom_device_info *cdi, __u8 __user *ubuf,
int lba, int nframes)
static int cdrom_read_cdda(struct cdrom_device_info *cdi, __u8 __user *ubuf,
int lba, int nframes)
static int cdrom_ioctl_multisession(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_eject(struct cdrom_device_info *cdi)
static int cdrom_ioctl_closetray(struct cdrom_device_info *cdi)
static int cdrom_ioctl_eject_sw(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_media_changed(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_set_options(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_clear_options(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_select_speed(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_select_disc(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_reset(struct cdrom_device_info *cdi,
struct block_device *bdev)
static int cdrom_ioctl_lock_door(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_debug(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_get_capability(struct cdrom_device_info *cdi)
static int cdrom_ioctl_get_mcn(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_drive_status(struct cdrom_device_info *cdi,
unsigned long arg)
static int cdrom_ioctl_disc_status(struct cdrom_device_info *cdi)
static int cdrom_ioctl_changer_nslots(struct cdrom_device_info *cdi)
static int cdrom_ioctl_get_subchnl(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_read_tochdr(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_read_tocentry(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_play_msf(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_play_trkind(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_volctrl(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_volread(struct cdrom_device_info *cdi,
void __user *argp)
static int cdrom_ioctl_audioctl(struct cdrom_device_info *cdi,
unsigned int cmd)
int cdrom_ioctl(struct cdrom_device_info *cdi, struct block_device *bdev,
fmode_t mode, unsigned int cmd, unsigned long arg)
static int cdrom_switch_blocksize(struct cdrom_device_info *cdi, int size)
static noinline int mmc_ioctl_cdrom_read_data(struct cdrom_device_info *cdi,
void __user *arg,
struct packet_command *cgc,
int cmd)
static noinline int mmc_ioctl_cdrom_read_audio(struct cdrom_device_info *cdi,
void __user *arg)
static noinline int mmc_ioctl_cdrom_subchannel(struct cdrom_device_info *cdi,
void __user *arg)
static noinline int mmc_ioctl_cdrom_play_msf(struct cdrom_device_info *cdi,
void __user *arg,
struct packet_command *cgc)
static noinline int mmc_ioctl_cdrom_play_blk(struct cdrom_device_info *cdi,
void __user *arg,
struct packet_command *cgc)
static noinline int mmc_ioctl_cdrom_volume(struct cdrom_device_info *cdi,
void __user *arg,
struct packet_command *cgc,
unsigned int cmd)
static noinline int mmc_ioctl_cdrom_start_stop(struct cdrom_device_info *cdi,
struct packet_command *cgc,
int cmd)
static noinline int mmc_ioctl_cdrom_pause_resume(struct cdrom_device_info *cdi,
struct packet_command *cgc,
int cmd)
static noinline int mmc_ioctl_dvd_read_struct(struct cdrom_device_info *cdi,
void __user *arg,
struct packet_command *cgc)
static noinline int mmc_ioctl_dvd_auth(struct cdrom_device_info *cdi,
void __user *arg)
static noinline int mmc_ioctl_cdrom_next_writable(struct cdrom_device_info *cdi,
void __user *arg)
static noinline int mmc_ioctl_cdrom_last_written(struct cdrom_device_info *cdi,
void __user *arg)
static int mmc_ioctl(struct cdrom_device_info *cdi, unsigned int cmd,
unsigned long arg)
static int cdrom_get_track_info(struct cdrom_device_info *cdi, __u16 track, __u8 type,
track_information *ti)
static int cdrom_get_disc_info(struct cdrom_device_info *cdi, disc_information *di)
int cdrom_get_last_written(struct cdrom_device_info *cdi, long *last_written)
static int cdrom_get_next_writable(struct cdrom_device_info *cdi, long *next_writable)
EXPORT_SYMBOL(cdrom_get_last_written);
EXPORT_SYMBOL(register_cdrom);
EXPORT_SYMBOL(unregister_cdrom);
EXPORT_SYMBOL(cdrom_open);
EXPORT_SYMBOL(cdrom_release);
EXPORT_SYMBOL(cdrom_ioctl);
EXPORT_SYMBOL(cdrom_media_changed);
EXPORT_SYMBOL(cdrom_number_of_slots);
EXPORT_SYMBOL(cdrom_mode_select);
EXPORT_SYMBOL(cdrom_mode_sense);
EXPORT_SYMBOL(init_cdrom_command);
EXPORT_SYMBOL(cdrom_get_media_event);
#define CDROM_STR_SIZE 1000
static struct cdrom_sysctl_settings  cdrom_sysctl_settings;
enum cdrom_print_option ;
static int cdrom_print_info(const char *header, int val, char *info,
int *pos, enum cdrom_print_option option)
static int cdrom_sysctl_info(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static void cdrom_update_settings(void)
static int cdrom_sysctl_handler(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static ctl_table cdrom_table[] = ;
static ctl_table cdrom_cdrom_table[] = ;
static ctl_table cdrom_root_table[] = ;
static struct ctl_table_header *cdrom_sysctl_header;
static void cdrom_sysctl_register(void)
static void cdrom_sysctl_unregister(void)
static void cdrom_sysctl_register(void)
static void cdrom_sysctl_unregister(void)
static int __init cdrom_init(void)
static void __exit cdrom_exit(void)
module_init(cdrom_init);
module_exit(cdrom_exit);
MODULE_LICENSE("GPL");
