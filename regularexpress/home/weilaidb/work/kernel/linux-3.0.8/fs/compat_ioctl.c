static int w_long(unsigned int fd, unsigned int cmd,
compat_ulong_t __user *argp)
struct compat_video_event ;
static int do_video_get_event(unsigned int fd, unsigned int cmd,
struct compat_video_event __user *up)
struct compat_video_still_picture ;
static int do_video_stillpicture(unsigned int fd, unsigned int cmd,
struct compat_video_still_picture __user *up)
struct compat_video_spu_palette ;
static int do_video_set_spu_palette(unsigned int fd, unsigned int cmd,
struct compat_video_spu_palette __user *up)
typedef struct sg_io_hdr32  sg_io_hdr32_t;
typedef struct sg_iovec32  sg_iovec32_t;
static int sg_build_iovec(sg_io_hdr_t __user *sgio, void __user *dxferp, u16 iovec_count)
static int sg_ioctl_trans(unsigned int fd, unsigned int cmd,
sg_io_hdr32_t __user *sgio32)
struct compat_sg_req_info ;
static int sg_grt_trans(unsigned int fd, unsigned int cmd, struct
compat_sg_req_info __user *o)
struct sock_fprog32 ;
#define PPPIOCSPASS32	_IOW('t', 71, struct sock_fprog32)
#define PPPIOCSACTIVE32	_IOW('t', 70, struct sock_fprog32)
static int ppp_sock_fprog_ioctl_trans(unsigned int fd, unsigned int cmd,
struct sock_fprog32 __user *u_fprog32)
struct ppp_option_data32 ;
#define PPPIOCSCOMPRESS32	_IOW('t', 77, struct ppp_option_data32)
struct ppp_idle32 ;
#define PPPIOCGIDLE32		_IOR('t', 63, struct ppp_idle32)
static int ppp_gidle(unsigned int fd, unsigned int cmd,
struct ppp_idle32 __user *idle32)
static int ppp_scompress(unsigned int fd, unsigned int cmd,
struct ppp_option_data32 __user *odata32)
struct mtget32 ;
#define MTIOCGET32	_IOR('m', 2, struct mtget32)
struct mtpos32 ;
#define MTIOCPOS32	_IOR('m', 3, struct mtpos32)
static int mt_ioctl_trans(unsigned int fd, unsigned int cmd, void __user *argp)
#define HCIUARTSETPROTO		_IOW('U', 200, int)
#define HCIUARTGETPROTO		_IOR('U', 201, int)
#define HCIUARTGETDEVICE	_IOR('U', 202, int)
#define HCIUARTSETFLAGS		_IOW('U', 203, int)
#define HCIUARTGETFLAGS		_IOR('U', 204, int)
#define BNEPCONNADD	_IOW('B', 200, int)
#define BNEPCONNDEL	_IOW('B', 201, int)
#define BNEPGETCONNLIST	_IOR('B', 210, int)
#define BNEPGETCONNINFO	_IOR('B', 211, int)
#define CMTPCONNADD	_IOW('C', 200, int)
#define CMTPCONNDEL	_IOW('C', 201, int)
#define CMTPGETCONNLIST	_IOR('C', 210, int)
#define CMTPGETCONNINFO	_IOR('C', 211, int)
#define HIDPCONNADD	_IOW('H', 200, int)
#define HIDPCONNDEL	_IOW('H', 201, int)
#define HIDPGETCONNLIST	_IOR('H', 210, int)
#define HIDPGETCONNINFO	_IOR('H', 211, int)
struct serial_struct32 ;
static int serial_struct_ioctl(unsigned fd, unsigned cmd,
struct serial_struct32 __user *ss32)
struct i2c_msg32 ;
struct i2c_rdwr_ioctl_data32 ;
struct i2c_smbus_ioctl_data32 ;
struct i2c_rdwr_aligned ;
static int do_i2c_rdwr_ioctl(unsigned int fd, unsigned int cmd,
struct i2c_rdwr_ioctl_data32    __user *udata)
static int do_i2c_smbus_ioctl(unsigned int fd, unsigned int cmd,
struct i2c_smbus_ioctl_data32   __user *udata)
#define RTC_IRQP_READ32		_IOR('p', 0x0b, compat_ulong_t)
#define RTC_IRQP_SET32		_IOW('p', 0x0c, compat_ulong_t)
#define RTC_EPOCH_READ32	_IOR('p', 0x0d, compat_ulong_t)
#define RTC_EPOCH_SET32		_IOW('p', 0x0e, compat_ulong_t)
static int rtc_ioctl(unsigned fd, unsigned cmd, void __user *argp)
#if defined(CONFIG_IA64) || defined(CONFIG_X86_64)
struct space_resv_32 ;
#define FS_IOC_RESVSP_32		_IOW ('X', 40, struct space_resv_32)
#define FS_IOC_RESVSP64_32	_IOW ('X', 42, struct space_resv_32)
static int compat_ioctl_preallocate(struct file *file,
struct space_resv_32    __user *p32)
#define XFORM(i) (((i) ^ ((i) << 27) ^ ((i) << 17)) & 0xffffffff)
#define COMPATIBLE_IOCTL(cmd) XFORM(cmd),
#define IGNORE_IOCTL(cmd) COMPATIBLE_IOCTL(cmd)
static unsigned int ioctl_pointer[] = ;
static long do_ioctl_trans(int fd, unsigned int cmd,
unsigned long arg, struct file *file)
static void compat_ioctl_error(struct file *filp, unsigned int fd,
unsigned int cmd, unsigned long arg)
static int compat_ioctl_check_table(unsigned int xcmd)
asmlinkage long compat_sys_ioctl(unsigned int fd, unsigned int cmd,
unsigned long arg)
static int __init init_sys32_ioctl_cmp(const void *p, const void *q)
static int __init init_sys32_ioctl(void)
__initcall(init_sys32_ioctl);
