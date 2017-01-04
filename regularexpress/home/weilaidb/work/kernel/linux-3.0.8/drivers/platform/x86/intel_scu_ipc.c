#define IPCMSG_WATCHDOG_TIMER 0xF8
#define IPCMSG_BATTERY        0xEF
#define IPCMSG_FW_UPDATE      0xFE
#define IPCMSG_PCNTRL         0xFF
#define IPCMSG_FW_REVISION    0xF4
#define IPC_CMD_PCNTRL_W      0
#define IPC_CMD_PCNTRL_R      1
#define IPC_CMD_PCNTRL_M      2
#define IPC_BASE_ADDR     0xFF11C000
#define IPC_MAX_ADDR      0x100
#define IPC_WWBUF_SIZE    20
#define IPC_RWBUF_SIZE    20
#define IPC_I2C_BASE      0xFF12B000
#define IPC_I2C_MAX_ADDR  0x10
static int ipc_probe(struct pci_dev *dev, const struct pci_device_id *id);
static void ipc_remove(struct pci_dev *pdev);
struct intel_scu_ipc_dev ;
static struct intel_scu_ipc_dev  ipcdev;
static int platform;
#define IPC_READ_BUFFER		0x90
#define IPC_I2C_CNTRL_ADDR	0
#define I2C_DATA_ADDR		0x04
static DEFINE_MUTEX(ipclock);
static inline void ipc_command(u32 cmd)
static inline void ipc_data_writel(u32 data, u32 offset)
static inline u8 ipc_read_status(void)
static inline u8 ipc_data_readb(u32 offset)
static inline u32 ipc_data_readl(u32 offset)
static inline int busy_loop(void)
static int pwr_reg_rdwr(u16 *addr, u8 *data, u32 count, u32 op, u32 id)
int intel_scu_ipc_ioread8(u16 addr, u8 *data)
EXPORT_SYMBOL(intel_scu_ipc_ioread8);
int intel_scu_ipc_ioread16(u16 addr, u16 *data)
EXPORT_SYMBOL(intel_scu_ipc_ioread16);
int intel_scu_ipc_ioread32(u16 addr, u32 *data)
EXPORT_SYMBOL(intel_scu_ipc_ioread32);
int intel_scu_ipc_iowrite8(u16 addr, u8 data)
EXPORT_SYMBOL(intel_scu_ipc_iowrite8);
int intel_scu_ipc_iowrite16(u16 addr, u16 data)
EXPORT_SYMBOL(intel_scu_ipc_iowrite16);
int intel_scu_ipc_iowrite32(u16 addr, u32 data)
EXPORT_SYMBOL(intel_scu_ipc_iowrite32);
int intel_scu_ipc_readv(u16 *addr, u8 *data, int len)
EXPORT_SYMBOL(intel_scu_ipc_readv);
int intel_scu_ipc_writev(u16 *addr, u8 *data, int len)
EXPORT_SYMBOL(intel_scu_ipc_writev);
int intel_scu_ipc_update_register(u16 addr, u8 bits, u8 mask)
EXPORT_SYMBOL(intel_scu_ipc_update_register);
int intel_scu_ipc_simple_command(int cmd, int sub)
EXPORT_SYMBOL(intel_scu_ipc_simple_command);
int intel_scu_ipc_command(int cmd, int sub, u32 *in, int inlen,
u32 *out, int outlen)
EXPORT_SYMBOL(intel_scu_ipc_command);
#define IPC_I2C_WRITE 1
#define IPC_I2C_READ  2
int intel_scu_ipc_i2c_cntrl(u32 addr, u32 *data)
EXPORT_SYMBOL(intel_scu_ipc_i2c_cntrl);
#define IPC_FW_LOAD_ADDR 0xFFFC0000
#define IPC_FW_UPDATE_MBOX_ADDR 0xFFFFDFF4
#define IPC_MAX_FW_SIZE 262144
#define IPC_FW_MIP_HEADER_SIZE 2048
#define IPC_CMD_FW_UPDATE_READY  0x10FE
#define IPC_CMD_FW_UPDATE_GO     0x20FE
#define IPC_FW_UPDATE_SUCCESS	0x444f4e45
#define IPC_FW_UPDATE_BADN	0x4241444E
#define IPC_FW_TXHIGH		0x54784849
#define IPC_FW_TXLOW		0x54784c4f
struct fw_update_mailbox ;
int intel_scu_ipc_fw_update(u8 *buffer, u32 length)
EXPORT_SYMBOL(intel_scu_ipc_fw_update);
static irqreturn_t ioc(int irq, void *dev_id)
static int ipc_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void ipc_remove(struct pci_dev *pdev)
static const struct pci_device_id pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, pci_ids);
static struct pci_driver ipc_driver = ;
static int __init intel_scu_ipc_init(void)
static void __exit intel_scu_ipc_exit(void)
MODULE_AUTHOR("Sreedhara DS <sreedhara.ds@intel.com>");
MODULE_DESCRIPTION("Intel SCU IPC driver");
MODULE_LICENSE("GPL");
module_init(intel_scu_ipc_init);
module_exit(intel_scu_ipc_exit);
