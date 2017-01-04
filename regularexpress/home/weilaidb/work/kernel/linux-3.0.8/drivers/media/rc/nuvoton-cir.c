static inline void nvt_cr_write(struct nvt_dev *nvt, u8 val, u8 reg)
static inline u8 nvt_cr_read(struct nvt_dev *nvt, u8 reg)
static inline void nvt_set_reg_bit(struct nvt_dev *nvt, u8 val, u8 reg)
static inline void nvt_clear_reg_bit(struct nvt_dev *nvt, u8 val, u8 reg)
static inline void nvt_efm_enable(struct nvt_dev *nvt)
static inline void nvt_efm_disable(struct nvt_dev *nvt)
static inline void nvt_select_logical_dev(struct nvt_dev *nvt, u8 ldev)
static inline void nvt_cir_reg_write(struct nvt_dev *nvt, u8 val, u8 offset)
static u8 nvt_cir_reg_read(struct nvt_dev *nvt, u8 offset)
static inline void nvt_cir_wake_reg_write(struct nvt_dev *nvt,
u8 val, u8 offset)
static u8 nvt_cir_wake_reg_read(struct nvt_dev *nvt, u8 offset)
#define pr_reg(text, ...) \
printk(KERN_INFO KBUILD_MODNAME ": " text, ## __VA_ARGS__)
static void cir_dump_regs(struct nvt_dev *nvt)
static void cir_wake_dump_regs(struct nvt_dev *nvt)
static int nvt_hw_detect(struct nvt_dev *nvt)
static void nvt_cir_ldev_init(struct nvt_dev *nvt)
static void nvt_cir_wake_ldev_init(struct nvt_dev *nvt)
static void nvt_clear_cir_fifo(struct nvt_dev *nvt)
static void nvt_clear_cir_wake_fifo(struct nvt_dev *nvt)
static void nvt_clear_tx_fifo(struct nvt_dev *nvt)
static void nvt_set_cir_iren(struct nvt_dev *nvt)
static void nvt_cir_regs_init(struct nvt_dev *nvt)
static void nvt_cir_wake_regs_init(struct nvt_dev *nvt)
static void nvt_enable_wake(struct nvt_dev *nvt)
static u32 nvt_rx_carrier_detect(struct nvt_dev *nvt)
static int nvt_set_tx_carrier(struct rc_dev *dev, u32 carrier)
static int nvt_tx_ir(struct rc_dev *dev, int *txbuf, u32 n)
static void nvt_dump_rx_buf(struct nvt_dev *nvt)
static void nvt_process_rx_ir_data(struct nvt_dev *nvt)
static void nvt_handle_rx_fifo_overrun(struct nvt_dev *nvt)
static void nvt_get_rx_ir_data(struct nvt_dev *nvt)
static void nvt_cir_log_irqs(u8 status, u8 iren)
static bool nvt_cir_tx_inactive(struct nvt_dev *nvt)
static irqreturn_t nvt_cir_isr(int irq, void *data)
static irqreturn_t nvt_cir_wake_isr(int irq, void *data)
static void nvt_enable_cir(struct nvt_dev *nvt)
static void nvt_disable_cir(struct nvt_dev *nvt)
static int nvt_open(struct rc_dev *dev)
static void nvt_close(struct rc_dev *dev)
static int nvt_probe(struct pnp_dev *pdev, const struct pnp_device_id *dev_id)
static void __devexit nvt_remove(struct pnp_dev *pdev)
static int nvt_suspend(struct pnp_dev *pdev, pm_message_t state)
static int nvt_resume(struct pnp_dev *pdev)
static void nvt_shutdown(struct pnp_dev *pdev)
static const struct pnp_device_id nvt_ids[] = ;
static struct pnp_driver nvt_driver = ;
int nvt_init(void)
void nvt_exit(void)
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging output");
MODULE_DEVICE_TABLE(pnp, nvt_ids);
MODULE_DESCRIPTION("Nuvoton W83667HG-A & W83677HG-I CIR driver");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
MODULE_LICENSE("GPL");
module_init(nvt_init);
module_exit(nvt_exit);
