#define PCH_EVENT_SET	0
#define PCH_EVENT_NONE	1
#define PCH_MAX_CLK		100000
#define PCH_BUFFER_MODE_ENABLE	0x0002
#define PCH_EEPROM_SW_RST_MODE_ENABLE	0x0008
#define PCH_I2CSADR	0x00
#define PCH_I2CCTL	0x04
#define PCH_I2CSR	0x08
#define PCH_I2CDR	0x0C
#define PCH_I2CMON	0x10
#define PCH_I2CBC	0x14
#define PCH_I2CMOD	0x18
#define PCH_I2CBUFSLV	0x1C
#define PCH_I2CBUFSUB	0x20
#define PCH_I2CBUFFOR	0x24
#define PCH_I2CBUFCTL	0x28
#define PCH_I2CBUFMSK	0x2C
#define PCH_I2CBUFSTA	0x30
#define PCH_I2CBUFLEV	0x34
#define PCH_I2CESRFOR	0x38
#define PCH_I2CESRCTL	0x3C
#define PCH_I2CESRMSK	0x40
#define PCH_I2CESRSTA	0x44
#define PCH_I2CTMR	0x48
#define PCH_I2CSRST	0xFC
#define PCH_I2CNF	0xF8
#define BUS_IDLE_TIMEOUT	20
#define PCH_I2CCTL_I2CMEN	0x0080
#define TEN_BIT_ADDR_DEFAULT	0xF000
#define TEN_BIT_ADDR_MASK	0xF0
#define PCH_START		0x0020
#define PCH_ESR_START		0x0001
#define PCH_BUFF_START		0x1
#define PCH_REPSTART		0x0004
#define PCH_ACK			0x0008
#define PCH_GETACK		0x0001
#define CLR_REG			0x0
#define I2C_RD			0x1
#define I2CMCF_BIT		0x0080
#define I2CMIF_BIT		0x0002
#define I2CMAL_BIT		0x0010
#define I2CBMFI_BIT		0x0001
#define I2CBMAL_BIT		0x0002
#define I2CBMNA_BIT		0x0004
#define I2CBMTO_BIT		0x0008
#define I2CBMIS_BIT		0x0010
#define I2CESRFI_BIT		0X0001
#define I2CESRTO_BIT		0x0002
#define I2CESRFIIE_BIT		0x1
#define I2CESRTOIE_BIT		0x2
#define I2CBMDZ_BIT		0x0040
#define I2CBMAG_BIT		0x0020
#define I2CMBB_BIT		0x0020
#define BUFFER_MODE_MASK	(I2CBMFI_BIT | I2CBMAL_BIT | I2CBMNA_BIT | \
I2CBMTO_BIT | I2CBMIS_BIT)
#define I2C_ADDR_MSK		0xFF
#define I2C_MSB_2B_MSK		0x300
#define FAST_MODE_CLK		400
#define FAST_MODE_EN		0x0001
#define SUB_ADDR_LEN_MAX	4
#define BUF_LEN_MAX		32
#define PCH_BUFFER_MODE		0x1
#define EEPROM_SW_RST_MODE	0x0002
#define NORMAL_INTR_ENBL	0x0300
#define EEPROM_RST_INTR_ENBL	(I2CESRFIIE_BIT | I2CESRTOIE_BIT)
#define EEPROM_RST_INTR_DISBL	0x0
#define BUFFER_MODE_INTR_ENBL	0x001F
#define BUFFER_MODE_INTR_DISBL	0x0
#define NORMAL_MODE		0x0
#define BUFFER_MODE		0x1
#define EEPROM_SR_MODE		0x2
#define I2C_TX_MODE		0x0010
#define PCH_BUF_TX		0xFFF7
#define PCH_BUF_RD		0x0008
#define I2C_ERROR_MASK	(I2CESRTO_EVENT | I2CBMIS_EVENT | I2CBMTO_EVENT | \
I2CBMNA_EVENT | I2CBMAL_EVENT | I2CMAL_EVENT)
#define I2CMAL_EVENT		0x0001
#define I2CMCF_EVENT		0x0002
#define I2CBMFI_EVENT		0x0004
#define I2CBMAL_EVENT		0x0008
#define I2CBMNA_EVENT		0x0010
#define I2CBMTO_EVENT		0x0020
#define I2CBMIS_EVENT		0x0040
#define I2CESRFI_EVENT		0x0080
#define I2CESRTO_EVENT		0x0100
#define PCI_DEVICE_ID_PCH_I2C	0x8817
#define pch_dbg(adap, fmt, arg...)  \
dev_dbg(adap->pch_adapter.dev.parent, "%s :" fmt, __func__, ##arg)
#define pch_err(adap, fmt, arg...)  \
dev_err(adap->pch_adapter.dev.parent, "%s :" fmt, __func__, ##arg)
#define pch_pci_err(pdev, fmt, arg...)  \
dev_err(&pdev->dev, "%s :" fmt, __func__, ##arg)
#define pch_pci_dbg(pdev, fmt, arg...)  \
dev_dbg(&pdev->dev, "%s :" fmt, __func__, ##arg)
#define PCH_I2C_MAX_DEV			2
struct i2c_algo_pch_data ;
struct adapter_info ;
static int pch_i2c_speed = 100;
static int pch_clk = 50000;
static wait_queue_head_t pch_event;
static DEFINE_MUTEX(pch_mutex);
#define PCI_VENDOR_ID_ROHM		0x10DB
#define PCI_DEVICE_ID_ML7213_I2C	0x802D
#define PCI_DEVICE_ID_ML7223_I2C	0x8010
static struct pci_device_id __devinitdata pch_pcidev_id[] = ;
static irqreturn_t pch_i2c_handler(int irq, void *pData);
static inline void pch_setbit(void __iomem *addr, u32 offset, u32 bitmask)
static inline void pch_clrbit(void __iomem *addr, u32 offset, u32 bitmask)
static void pch_i2c_init(struct i2c_algo_pch_data *adap)
static inline bool ktime_lt(const ktime_t cmp1, const ktime_t cmp2)
static s32 pch_i2c_wait_for_bus_idle(struct i2c_algo_pch_data *adap,
s32 timeout)
static void pch_i2c_start(struct i2c_algo_pch_data *adap)
static s32 pch_i2c_wait_for_xfer_complete(struct i2c_algo_pch_data *adap)
static s32 pch_i2c_getack(struct i2c_algo_pch_data *adap)
static void pch_i2c_stop(struct i2c_algo_pch_data *adap)
static void pch_i2c_repstart(struct i2c_algo_pch_data *adap)
static s32 pch_i2c_writebytes(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, u32 last, u32 first)
static void pch_i2c_sendack(struct i2c_algo_pch_data *adap)
static void pch_i2c_sendnack(struct i2c_algo_pch_data *adap)
static s32 pch_i2c_readbytes(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs,
u32 last, u32 first)
static void pch_i2c_cb(struct i2c_algo_pch_data *adap)
static irqreturn_t pch_i2c_handler(int irq, void *pData)
static s32 pch_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, s32 num)
static u32 pch_i2c_func(struct i2c_adapter *adap)
static struct i2c_algorithm pch_algorithm = ;
static void pch_i2c_disbl_int(struct i2c_algo_pch_data *adap)
static int __devinit pch_i2c_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit pch_i2c_remove(struct pci_dev *pdev)
static int pch_i2c_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_i2c_resume(struct pci_dev *pdev)
#define pch_i2c_suspend NULL
#define pch_i2c_resume NULL
static struct pci_driver pch_pcidriver = ;
static int __init pch_pci_init(void)
module_init(pch_pci_init);
static void __exit pch_pci_exit(void)
module_exit(pch_pci_exit);
MODULE_DESCRIPTION("Intel EG20T PCH/OKI SEMICONDUCTOR ML7213 IOH I2C Driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tomoya MORINAGA. <tomoya-linux@dsn.okisemi.com>");
module_param(pch_i2c_speed, int, (S_IRUSR | S_IWUSR));
module_param(pch_clk, int, (S_IRUSR | S_IWUSR));
