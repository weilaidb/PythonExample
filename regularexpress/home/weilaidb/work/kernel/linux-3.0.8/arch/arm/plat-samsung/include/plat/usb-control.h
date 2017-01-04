#define __ASM_ARCH_USBCONTROL_H
#define S3C_HCDFLG_USED	(1)
struct s3c2410_hcd_port ;
struct s3c2410_hcd_info ;
static void inline s3c2410_usb_report_oc(struct s3c2410_hcd_info *info, int ports)
extern void s3c_ohci_set_platdata(struct s3c2410_hcd_info *info);
