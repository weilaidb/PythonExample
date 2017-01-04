static int compat_put_ushort(unsigned long arg, unsigned short val)
static int compat_put_int(unsigned long arg, int val)
static int compat_put_uint(unsigned long arg, unsigned int val)
static int compat_put_long(unsigned long arg, long val)
static int compat_put_ulong(unsigned long arg, compat_ulong_t val)
static int compat_put_u64(unsigned long arg, u64 val)
struct compat_hd_geometry ;
static int compat_hdio_getgeo(struct gendisk *disk, struct block_device *bdev,
struct compat_hd_geometry __user *ugeo)
static int compat_hdio_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
struct compat_cdrom_read_audio ;
struct compat_cdrom_generic_command ;
static int compat_cdrom_read_audio(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int compat_cdrom_generic_command(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
struct compat_blkpg_ioctl_arg ;
static int compat_blkpg_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, struct compat_blkpg_ioctl_arg __user *ua32)
#define BLKBSZGET_32		_IOR(0x12, 112, int)
#define BLKBSZSET_32		_IOW(0x12, 113, int)
#define BLKGETSIZE64_32		_IOR(0x12, 114, int)
struct compat_floppy_struct ;
struct compat_floppy_drive_params ;
struct compat_floppy_drive_struct ;
struct compat_floppy_fdc_state ;
struct compat_floppy_write_errors ;
#define FDSETPRM32 _IOW(2, 0x42, struct compat_floppy_struct)
#define FDDEFPRM32 _IOW(2, 0x43, struct compat_floppy_struct)
#define FDGETPRM32 _IOR(2, 0x04, struct compat_floppy_struct)
#define FDSETDRVPRM32 _IOW(2, 0x90, struct compat_floppy_drive_params)
#define FDGETDRVPRM32 _IOR(2, 0x11, struct compat_floppy_drive_params)
#define FDGETDRVSTAT32 _IOR(2, 0x12, struct compat_floppy_drive_struct)
#define FDPOLLDRVSTAT32 _IOR(2, 0x13, struct compat_floppy_drive_struct)
#define FDGETFDCSTAT32 _IOR(2, 0x15, struct compat_floppy_fdc_state)
#define FDWERRORGET32  _IOR(2, 0x17, struct compat_floppy_write_errors)
static struct  fd_ioctl_trans_table[] = ;
#define NR_FD_IOCTL_TRANS ARRAY_SIZE(fd_ioctl_trans_table)
static int compat_fd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int compat_blkdev_driver_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
long compat_blkdev_ioctl(struct file *file, unsigned cmd, unsigned long arg)
