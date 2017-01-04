#define EFI_ISDST (EFI_TIME_ADJUST_DAYLIGHT|EFI_TIME_IN_DAYLIGHT)
#define EFI_RTC_EPOCH		1998
static inline int
compute_yday(efi_time_t *eft)
static int
compute_wday(efi_time_t *eft)
static void
convert_to_efi_time(struct rtc_time *wtime, efi_time_t *eft)
static void
convert_from_efi_time(efi_time_t *eft, struct rtc_time *wtime)
static int efi_read_alarm(struct device *dev, struct rtc_wkalrm *wkalrm)
static int efi_set_alarm(struct device *dev, struct rtc_wkalrm *wkalrm)
static int efi_read_time(struct device *dev, struct rtc_time *tm)
static int efi_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops efi_rtc_ops = ;
static int __init efi_rtc_probe(struct platform_device *dev)
static int __exit efi_rtc_remove(struct platform_device *dev)
static struct platform_driver efi_rtc_driver = ;
static int __init efi_rtc_init(void)
static void __exit efi_rtc_exit(void)
module_init(efi_rtc_init);
module_exit(efi_rtc_exit);
MODULE_AUTHOR("dann frazier <dannf@hp.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("EFI RTC driver");
