#define SMBHSTSTS	(0 + piix4_smba)
#define SMBHSLVSTS	(1 + piix4_smba)
#define SMBHSTCNT	(2 + piix4_smba)
#define SMBHSTCMD	(3 + piix4_smba)
#define SMBHSTADD	(4 + piix4_smba)
#define SMBHSTDAT0	(5 + piix4_smba)
#define SMBHSTDAT1	(6 + piix4_smba)
#define SMBBLKDAT	(7 + piix4_smba)
#define SMBSLVCNT	(8 + piix4_smba)
#define SMBSHDWCMD	(9 + piix4_smba)
#define SMBSLVEVT	(0xA + piix4_smba)
#define SMBSLVDAT	(0xC + piix4_smba)
#define SMBIOSIZE	8
#define SMBBA		0x090
#define SMBHSTCFG	0x0D2
#define SMBSLVC		0x0D3
#define SMBSHDW1	0x0D4
#define SMBSHDW2	0x0D5
#define SMBREV		0x0D6
#define MAX_TIMEOUT	500
#define  ENABLE_INT9	0
#define PIIX4_QUICK		0x00
#define PIIX4_BYTE		0x04
#define PIIX4_BYTE_DATA		0x08
#define PIIX4_WORD_DATA		0x0C
#define PIIX4_BLOCK_DATA	0x14
static int force;
module_param (force, int, 0);
MODULE_PARM_DESC(force, "Forcibly enable the PIIX4. DANGEROUS!");
static int force_addr;
module_param (force_addr, int, 0);
MODULE_PARM_DESC(force_addr,
"Forcibly enable the PIIX4 at the given address. "
"EXTREMELY DANGEROUS!");
static unsigned short piix4_smba;
static int srvrworks_csb5_delay;
static struct pci_driver piix4_driver;
static struct i2c_adapter piix4_adapter;
static struct dmi_system_id __devinitdata piix4_dmi_blacklist[] = ;
static struct dmi_system_id __devinitdata piix4_dmi_ibm[] = ;
static int __devinit piix4_setup(struct pci_dev *PIIX4_dev,
const struct pci_device_id *id)
static int __devinit piix4_setup_sb800(struct pci_dev *PIIX4_dev,
const struct pci_device_id *id)
static int piix4_transaction(void)
static s32 piix4_access(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data * data)
static u32 piix4_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter piix4_adapter = ;
static const struct pci_device_id piix4_ids[] = ;
MODULE_DEVICE_TABLE (pci, piix4_ids);
static int __devinit piix4_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit piix4_remove(struct pci_dev *dev)
static struct pci_driver piix4_driver = ;
static int __init i2c_piix4_init(void)
static void __exit i2c_piix4_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl> and "
"Philip Edelbrock <phil@netroedge.com>");
MODULE_DESCRIPTION("PIIX4 SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_piix4_init);
module_exit(i2c_piix4_exit);
