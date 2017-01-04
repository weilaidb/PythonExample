static int r852_enable_dma = 1;
module_param(r852_enable_dma, bool, S_IRUGO);
MODULE_PARM_DESC(r852_enable_dma, "Enable usage of the DMA (default)");
static int debug;
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level (0-2)");
static inline uint8_t r852_read_reg(struct r852_device *dev, int address)
static inline void r852_write_reg(struct r852_device *dev,
int address, uint8_t value)
static inline uint32_t r852_read_reg_dword(struct r852_device *dev, int address)
static inline void r852_write_reg_dword(struct r852_device *dev,
int address, uint32_t value)
static inline struct r852_device *r852_get_dev(struct mtd_info *mtd)
static void r852_dma_test(struct r852_device *dev)
static void r852_dma_enable(struct r852_device *dev)
static void r852_dma_done(struct r852_device *dev, int error)
static int r852_dma_wait(struct r852_device *dev)
static void r852_do_dma(struct r852_device *dev, uint8_t *buf, int do_read)
void r852_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
void r852_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static uint8_t r852_read_byte(struct mtd_info *mtd)
int r852_verify_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
void r852_cmdctl(struct mtd_info *mtd, int dat, unsigned int ctrl)
int r852_wait(struct mtd_info *mtd, struct nand_chip *chip)
int r852_ready(struct mtd_info *mtd)
void r852_ecc_hwctl(struct mtd_info *mtd, int mode)
int r852_ecc_calculate(struct mtd_info *mtd, const uint8_t *dat,
uint8_t *ecc_code)
int r852_ecc_correct(struct mtd_info *mtd, uint8_t *dat,
uint8_t *read_ecc, uint8_t *calc_ecc)
static int r852_read_oob(struct mtd_info *mtd, struct nand_chip *chip,
int page, int sndcmd)
void r852_engine_enable(struct r852_device *dev)
void r852_engine_disable(struct r852_device *dev)
void r852_card_update_present(struct r852_device *dev)
void r852_update_card_detect(struct r852_device *dev)
ssize_t r852_media_type_show(struct device *sys_dev,
struct device_attribute *attr, char *buf)
DEVICE_ATTR(media_type, S_IRUGO, r852_media_type_show, NULL);
void r852_update_media_status(struct r852_device *dev)
int r852_register_nand_device(struct r852_device *dev)
void r852_unregister_nand_device(struct r852_device *dev)
void r852_card_detect_work(struct work_struct *work)
static void r852_disable_irqs(struct r852_device *dev)
static irqreturn_t r852_irq(int irq, void *data)
int  r852_probe(struct pci_dev *pci_dev, const struct pci_device_id *id)
void r852_remove(struct pci_dev *pci_dev)
void r852_shutdown(struct pci_dev *pci_dev)
int r852_suspend(struct device *device)
int r852_resume(struct device *device)
#define r852_suspend	NULL
#define r852_resume	NULL
static const struct pci_device_id r852_pci_id_tbl[] = ;
MODULE_DEVICE_TABLE(pci, r852_pci_id_tbl);
SIMPLE_DEV_PM_OPS(r852_pm_ops, r852_suspend, r852_resume);
static struct pci_driver r852_pci_driver = ;
static __init int r852_module_init(void)
static void __exit r852_module_exit(void)
module_init(r852_module_init);
module_exit(r852_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxim Levitsky <maximlevitsky@gmail.com>");
MODULE_DESCRIPTION("Ricoh 85xx xD/smartmedia card reader driver");
