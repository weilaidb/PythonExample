static int r592_enable_dma = 1;
static int debug;
static const char *tpc_names[] = ;
const char *memstick_debug_get_tpc_name(int tpc)
EXPORT_SYMBOL(memstick_debug_get_tpc_name);
static inline u32 r592_read_reg(struct r592_device *dev, int address)
static inline void r592_write_reg(struct r592_device *dev,
int address, u32 value)
static inline u32 r592_read_reg_raw_be(struct r592_device *dev, int address)
static inline void r592_write_reg_raw_be(struct r592_device *dev,
int address, u32 value)
static inline void r592_set_reg_mask(struct r592_device *dev,
int address, u32 mask)
static inline void r592_clear_reg_mask(struct r592_device *dev,
int address, u32 mask)
static int r592_wait_status(struct r592_device *dev, u32 mask, u32 wanted_mask)
static int r592_enable_device(struct r592_device *dev, bool enable)
static int r592_set_mode(struct r592_device *dev, bool parallel_mode)
static void r592_host_reset(struct r592_device *dev)
static void r592_clear_interrupts(struct r592_device *dev)
static int r592_test_io_error(struct r592_device *dev)
static int r592_test_fifo_empty(struct r592_device *dev)
static void r592_start_dma(struct r592_device *dev, bool is_write)
static void r592_stop_dma(struct r592_device *dev, int error)
static void r592_check_dma(struct r592_device *dev)
static int r592_transfer_fifo_dma(struct r592_device *dev)
static void r592_write_fifo_pio(struct r592_device *dev,
unsigned char *buffer, int len)
static void r592_flush_fifo_write(struct r592_device *dev)
static void r592_read_fifo_pio(struct r592_device *dev,
unsigned char *buffer, int len)
static int r592_transfer_fifo_pio(struct r592_device *dev)
static void r592_execute_tpc(struct r592_device *dev)
static int r592_process_thread(void *data)
static void r592_update_card_detect(struct r592_device *dev)
static void r592_detect_timer(long unsigned int data)
static irqreturn_t r592_irq(int irq, void *data)
static int r592_set_param(struct memstick_host *host,
enum memstick_param param, int value)
static void r592_submit_req(struct memstick_host *host)
static const struct pci_device_id r592_pci_id_tbl[] = ;
static int r592_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void r592_remove(struct pci_dev *pdev)
static int r592_suspend(struct device *core_dev)
static int r592_resume(struct device *core_dev)
SIMPLE_DEV_PM_OPS(r592_pm_ops, r592_suspend, r592_resume);
MODULE_DEVICE_TABLE(pci, r592_pci_id_tbl);
static struct pci_driver r852_pci_driver = ;
static __init int r592_module_init(void)
static void __exit r592_module_exit(void)
module_init(r592_module_init);
module_exit(r592_module_exit);
module_param_named(enable_dma, r592_enable_dma, bool, S_IRUGO);
MODULE_PARM_DESC(enable_dma, "Enable usage of the DMA (default)");
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level (0-3)");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxim Levitsky <maximlevitsky@gmail.com>");
MODULE_DESCRIPTION("Ricoh R5C592 Memstick/Memstick PRO card reader driver");
