#define NAME "scx200_acb"
MODULE_AUTHOR("Christer Weinigel <wingel@nano-system.com>");
MODULE_DESCRIPTION("NatSemi SCx200 ACCESS.bus Driver");
MODULE_ALIAS("platform:cs5535-smb");
MODULE_LICENSE("GPL");
#define MAX_DEVICES 4
static int base[MAX_DEVICES] = ;
module_param_array(base, int, NULL, 0);
MODULE_PARM_DESC(base, "Base addresses for the ACCESS.bus controllers");
#define POLL_TIMEOUT	(HZ/5)
enum scx200_acb_state ;
static const char *scx200_acb_state_name[] = ;
struct scx200_acb_iface ;
#define ACBSDA		(iface->base + 0)
#define ACBST		(iface->base + 1)
#define    ACBST_SDAST		0x40
#define    ACBST_BER		0x20
#define    ACBST_NEGACK		0x10
#define    ACBST_STASTR		0x08
#define    ACBST_MASTER		0x02
#define ACBCST		(iface->base + 2)
#define    ACBCST_BB		0x02
#define ACBCTL1		(iface->base + 3)
#define    ACBCTL1_STASTRE	0x80
#define    ACBCTL1_NMINTE	0x40
#define    ACBCTL1_ACK		0x10
#define    ACBCTL1_STOP		0x02
#define    ACBCTL1_START	0x01
#define ACBADDR		(iface->base + 4)
#define ACBCTL2		(iface->base + 5)
#define    ACBCTL2_ENABLE	0x01
static void scx200_acb_machine(struct scx200_acb_iface *iface, u8 status)
static void scx200_acb_poll(struct scx200_acb_iface *iface)
static void scx200_acb_reset(struct scx200_acb_iface *iface)
static s32 scx200_acb_smbus_xfer(struct i2c_adapter *adapter,
u16 address, unsigned short flags,
char rw, u8 command, int size,
union i2c_smbus_data *data)
static u32 scx200_acb_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm scx200_acb_algorithm = ;
static struct scx200_acb_iface *scx200_acb_list;
static DEFINE_MUTEX(scx200_acb_list_mutex);
static __devinit int scx200_acb_probe(struct scx200_acb_iface *iface)
static __devinit struct scx200_acb_iface *scx200_create_iface(const char *text,
struct device *dev, int index)
static int __devinit scx200_acb_create(struct scx200_acb_iface *iface)
static struct scx200_acb_iface * __devinit scx200_create_dev(const char *text,
unsigned long base, int index, struct device *dev)
static int __devinit scx200_probe(struct platform_device *pdev)
static void __devexit scx200_cleanup_iface(struct scx200_acb_iface *iface)
static int __devexit scx200_remove(struct platform_device *pdev)
static struct platform_driver scx200_pci_drv = ;
static const struct pci_device_id scx200_isa[] __initconst = ;
static __init void scx200_scan_isa(void)
static int __init scx200_acb_init(void)
static void __exit scx200_acb_cleanup(void)
module_init(scx200_acb_init);
module_exit(scx200_acb_cleanup);
