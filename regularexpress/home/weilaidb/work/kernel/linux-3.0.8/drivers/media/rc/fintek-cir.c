static inline void fintek_cr_write(struct fintek_dev *fintek, u8 val, u8 reg)
static inline u8 fintek_cr_read(struct fintek_dev *fintek, u8 reg)
static inline void fintek_set_reg_bit(struct fintek_dev *fintek, u8 val, u8 reg)
static inline void fintek_clear_reg_bit(struct fintek_dev *fintek, u8 val, u8 reg)
static inline void fintek_config_mode_enable(struct fintek_dev *fintek)
static inline void fintek_config_mode_disable(struct fintek_dev *fintek)
static inline void fintek_select_logical_dev(struct fintek_dev *fintek, u8 ldev)
static inline void fintek_cir_reg_write(struct fintek_dev *fintek, u8 val, u8 offset)
static u8 fintek_cir_reg_read(struct fintek_dev *fintek, u8 offset)
#define pr_reg(text, ...) \
printk(KERN_INFO KBUILD_MODNAME ": " text, ## __VA_ARGS__)
static void cir_dump_regs(struct fintek_dev *fintek)
static int fintek_hw_detect(struct fintek_dev *fintek)
static void fintek_cir_ldev_init(struct fintek_dev *fintek)
static void fintek_enable_cir_irq(struct fintek_dev *fintek)
static void fintek_cir_regs_init(struct fintek_dev *fintek)
static void fintek_enable_wake(struct fintek_dev *fintek)
static int fintek_cmdsize(u8 cmd, u8 subcmd)
static void fintek_process_rx_ir_data(struct fintek_dev *fintek)
static void fintek_get_rx_ir_data(struct fintek_dev *fintek, u8 rx_irqs)
static void fintek_cir_log_irqs(u8 status)
static irqreturn_t fintek_cir_isr(int irq, void *data)
static void fintek_enable_cir(struct fintek_dev *fintek)
static void fintek_disable_cir(struct fintek_dev *fintek)
static int fintek_open(struct rc_dev *dev)
static void fintek_close(struct rc_dev *dev)
static int fintek_probe(struct pnp_dev *pdev, const struct pnp_device_id *dev_id)
static void __devexit fintek_remove(struct pnp_dev *pdev)
static int fintek_suspend(struct pnp_dev *pdev, pm_message_t state)
static int fintek_resume(struct pnp_dev *pdev)
static void fintek_shutdown(struct pnp_dev *pdev)
static const struct pnp_device_id fintek_ids[] = ;
static struct pnp_driver fintek_driver = ;
int fintek_init(void)
void fintek_exit(void)
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging output");
MODULE_DEVICE_TABLE(pnp, fintek_ids);
MODULE_DESCRIPTION(FINTEK_DESCRIPTION " driver");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
MODULE_LICENSE("GPL");
module_init(fintek_init);
module_exit(fintek_exit);
