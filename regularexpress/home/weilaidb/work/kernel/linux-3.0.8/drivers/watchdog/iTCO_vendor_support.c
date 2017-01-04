#define DRV_NAME	"iTCO_vendor_support"
#define DRV_VERSION	"1.04"
#define PFX		DRV_NAME ": "
#define	SMI_EN		(acpibase + 0x30)
#define	TCOBASE		(acpibase + 0x60)
#define	TCO1_STS	(TCOBASE + 0x04)
#define SUPERMICRO_OLD_BOARD	1
#define SUPERMICRO_NEW_BOARD	2
#define BROKEN_BIOS		911
static int vendorsupport;
module_param(vendorsupport, int, 0);
MODULE_PARM_DESC(vendorsupport, "iTCO vendor specific support mode, default="
"0 (none), 1=SuperMicro Pent3, 2=SuperMicro Pent4+, "
"911=Broken SMI BIOS");
static void supermicro_old_pre_start(unsigned long acpibase)
static void supermicro_old_pre_stop(unsigned long acpibase)
#define SM_REGINDEX	0x2e
#define SM_DATAIO	0x2f
#define SM_CTLPAGESW	0x07
#define SM_CTLPAGE	0x08
#define SM_WATCHENABLE	0x30
#define SM_WATCHPAGE	0x87
#define SM_ENDWATCH	0xAA
#define SM_COUNTMODE	0xf5
#define SM_WATCHTIMER	0xf6
#define SM_RESETCONTROL	0xf7
static void supermicro_new_unlock_watchdog(void)
static void supermicro_new_lock_watchdog(void)
static void supermicro_new_pre_start(unsigned int heartbeat)
static void supermicro_new_pre_stop(void)
static void supermicro_new_pre_set_heartbeat(unsigned int heartbeat)
static void broken_bios_start(unsigned long acpibase)
static void broken_bios_stop(unsigned long acpibase)
void iTCO_vendor_pre_start(unsigned long acpibase,
unsigned int heartbeat)
EXPORT_SYMBOL(iTCO_vendor_pre_start);
void iTCO_vendor_pre_stop(unsigned long acpibase)
EXPORT_SYMBOL(iTCO_vendor_pre_stop);
void iTCO_vendor_pre_keepalive(unsigned long acpibase, unsigned int heartbeat)
EXPORT_SYMBOL(iTCO_vendor_pre_keepalive);
void iTCO_vendor_pre_set_heartbeat(unsigned int heartbeat)
EXPORT_SYMBOL(iTCO_vendor_pre_set_heartbeat);
int iTCO_vendor_check_noreboot_on(void)
EXPORT_SYMBOL(iTCO_vendor_check_noreboot_on);
static int __init iTCO_vendor_init_module(void)
static void __exit iTCO_vendor_exit_module(void)
module_init(iTCO_vendor_init_module);
module_exit(iTCO_vendor_exit_module);
MODULE_AUTHOR("Wim Van Sebroeck <wim@iguana.be>, "
"R. Seretny <lkpatches@paypc.com>");
MODULE_DESCRIPTION("Intel TCO Vendor Specific WatchDog Timer Driver Support");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
