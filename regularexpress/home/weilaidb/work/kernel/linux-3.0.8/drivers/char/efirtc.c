#define EFI_RTC_VERSION		"0.4"
#define EFI_ISDST (EFI_TIME_ADJUST_DAYLIGHT|EFI_TIME_IN_DAYLIGHT)
#define EFI_RTC_EPOCH		1998
static DEFINE_SPINLOCK(efi_rtc_lock);
static long efi_rtc_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
#define is_leap(year) \
((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
static const unsigned short int __mon_yday[2][13] =
;
static inline int
compute_yday(efi_time_t *eft)
static int
compute_wday(efi_time_t *eft)
static void
convert_to_efi_time(struct rtc_time *wtime, efi_time_t *eft)
static void
convert_from_efi_time(efi_time_t *eft, struct rtc_time *wtime)
static long efi_rtc_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int efi_rtc_open(struct inode *inode, struct file *file)
static int efi_rtc_close(struct inode *inode, struct file *file)
static const struct file_operations efi_rtc_fops = ;
static struct miscdevice efi_rtc_dev= ;
static int
efi_rtc_get_status(char *buf)
static int
efi_rtc_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int __init
efi_rtc_init(void)
static void __exit
efi_rtc_exit(void)
module_init(efi_rtc_init);
module_exit(efi_rtc_exit);
MODULE_LICENSE("GPL");
