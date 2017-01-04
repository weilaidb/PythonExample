static struct resource s3c_usb_resource[] = ;
static u64 s3c_device_usb_dmamask = 0xffffffffUL;
struct platform_device s3c_device_ohci = ;
EXPORT_SYMBOL(s3c_device_ohci);
void __init s3c_ohci_set_platdata(struct s3c2410_hcd_info *info)
