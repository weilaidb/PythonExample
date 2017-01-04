static int sample_period;
static bool learning_mode_force;
static int debug;
static bool txsim;
static void ene_set_reg_addr(struct ene_device *dev, u16 reg)
static u8 ene_read_reg(struct ene_device *dev, u16 reg)
static void ene_write_reg(struct ene_device *dev, u16 reg, u8 value)
static void ene_set_reg_mask(struct ene_device *dev, u16 reg, u8 mask)
static void ene_clear_reg_mask(struct ene_device *dev, u16 reg, u8 mask)
static void ene_set_clear_reg_mask(struct ene_device *dev, u16 reg, u8 mask,
bool set)
static int ene_hw_detect(struct ene_device *dev)
static void ene_rx_setup_hw_buffer(struct ene_device *dev)
static void ene_rx_restore_hw_buffer(struct ene_device *dev)
static void ene_rx_read_hw_pointer(struct ene_device *dev)
static int ene_rx_get_sample_reg(struct ene_device *dev)
void ene_rx_sense_carrier(struct ene_device *dev)
static void ene_rx_enable_cir_engine(struct ene_device *dev, bool enable)
static void ene_rx_select_input(struct ene_device *dev, bool gpio_0a)
static void ene_rx_enable_fan_input(struct ene_device *dev, bool enable)
static void ene_rx_setup(struct ene_device *dev)
static void ene_rx_enable(struct ene_device *dev)
static void ene_rx_disable(struct ene_device *dev)
static void ene_rx_reset(struct ene_device *dev)
static void ene_tx_set_carrier(struct ene_device *dev)
static void ene_tx_set_transmitters(struct ene_device *dev)
static void ene_tx_enable(struct ene_device *dev)
static void ene_tx_disable(struct ene_device *dev)
static void ene_tx_sample(struct ene_device *dev)
static void ene_tx_irqsim(unsigned long data)
static int ene_irq_status(struct ene_device *dev)
static irqreturn_t ene_isr(int irq, void *data)
static void ene_setup_default_settings(struct ene_device *dev)
static void ene_setup_hw_settings(struct ene_device *dev)
static int ene_open(struct rc_dev *rdev)
static void ene_close(struct rc_dev *rdev)
static int ene_set_tx_mask(struct rc_dev *rdev, u32 tx_mask)
static int ene_set_tx_carrier(struct rc_dev *rdev, u32 carrier)
static int ene_set_tx_duty_cycle(struct rc_dev *rdev, u32 duty_cycle)
static int ene_set_learning_mode(struct rc_dev *rdev, int enable)
static int ene_set_carrier_report(struct rc_dev *rdev, int enable)
static void ene_set_idle(struct rc_dev *rdev, bool idle)
static int ene_transmit(struct rc_dev *rdev, int *buf, u32 n)
static int ene_probe(struct pnp_dev *pnp_dev, const struct pnp_device_id *id)
static void ene_remove(struct pnp_dev *pnp_dev)
static void ene_enable_wake(struct ene_device *dev, int enable)
static int ene_suspend(struct pnp_dev *pnp_dev, pm_message_t state)
static int ene_resume(struct pnp_dev *pnp_dev)
static void ene_shutdown(struct pnp_dev *pnp_dev)
static const struct pnp_device_id ene_ids[] = ;
static struct pnp_driver ene_driver = ;
static int __init ene_init(void)
static void ene_exit(void)
module_param(sample_period, int, S_IRUGO);
MODULE_PARM_DESC(sample_period, "Hardware sample period (50 us default)");
module_param(learning_mode_force, bool, S_IRUGO);
MODULE_PARM_DESC(learning_mode_force, "Enable learning mode by default");
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level");
module_param(txsim, bool, S_IRUGO);
MODULE_PARM_DESC(txsim,
"Simulate TX features on unsupported hardware (dangerous)");
MODULE_DEVICE_TABLE(pnp, ene_ids);
MODULE_DESCRIPTION
("Infrared input driver for KB3926B/C/D/E/F "
"(aka ENE0100/ENE0200/ENE0201/ENE0202) CIR port");
MODULE_AUTHOR("Maxim Levitsky");
MODULE_LICENSE("GPL");
module_init(ene_init);
module_exit(ene_exit);
