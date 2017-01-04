#define UTSTARCOM_VENDOR_ID			0x106c
#define UTSTARCOM_PRODUCT_PC5740		0x3701
#define UTSTARCOM_PRODUCT_PC5750		0x3702
#define UTSTARCOM_PRODUCT_UM150			0x3711
#define UTSTARCOM_PRODUCT_UM175_V1		0x3712
#define UTSTARCOM_PRODUCT_UM175_V2		0x3714
#define UTSTARCOM_PRODUCT_UM175_ALLTEL		0x3715
#define PANTECH_PRODUCT_UML290_VZW		0x3718
#define CMOTECH_VENDOR_ID			0x16d8
#define CMOTECH_PRODUCT_CDU550			0x5553
#define CMOTECH_PRODUCT_CDX650			0x6512
#define LG_VENDOR_ID				0x1004
#define LG_PRODUCT_VX4400_6000			0x6000
#define SANYO_VENDOR_ID				0x0474
#define SANYO_PRODUCT_KATANA_LX			0x0754
#define SAMSUNG_VENDOR_ID			0x04e8
#define SAMSUNG_PRODUCT_U520			0x6640
static struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver qcaux_driver = ;
static struct usb_serial_driver qcaux_device = ;
static int __init qcaux_init(void)
static void __exit qcaux_exit(void)
module_init(qcaux_init);
module_exit(qcaux_exit);
MODULE_LICENSE("GPL");
