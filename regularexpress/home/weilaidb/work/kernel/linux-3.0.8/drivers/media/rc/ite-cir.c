static int debug;
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging output");
static int rx_low_carrier_freq;
module_param(rx_low_carrier_freq, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(rx_low_carrier_freq, "Override low RX carrier frequency, Hz, "
"0 for no RX demodulation");
static int rx_high_carrier_freq;
module_param(rx_high_carrier_freq, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(rx_high_carrier_freq, "Override high RX carrier frequency, "
"Hz, 0 for no RX demodulation");
static int tx_carrier_freq;
module_param(tx_carrier_freq, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(tx_carrier_freq, "Override TX carrier frequency, Hz");
static int tx_duty_cycle;
module_param(tx_duty_cycle, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(tx_duty_cycle, "Override TX duty cycle, 1-100");
static long sample_period;
module_param(sample_period, long, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(sample_period, "Override carrier sample period, us");
static int model_number = -1;
module_param(model_number, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(model_number, "Use this model number, don't autodetect");
static inline bool ite_is_high_carrier_freq(unsigned int freq)
static u8 ite_get_carrier_freq_bits(unsigned int freq)
static u8 ite_get_pulse_width_bits(unsigned int freq, int duty_cycle)
static void ite_decode_bytes(struct ite_dev *dev, const u8 * data, int
length)
static void ite_set_carrier_params(struct ite_dev *dev)
static irqreturn_t ite_cir_isr(int irq, void *data)
static int ite_set_rx_carrier_range(struct rc_dev *rcdev, u32 carrier_low, u32
carrier_high)
static int ite_set_tx_carrier(struct rc_dev *rcdev, u32 carrier)
static int ite_set_tx_duty_cycle(struct rc_dev *rcdev, u32 duty_cycle)
static int ite_tx_ir(struct rc_dev *rcdev, int *txbuf, u32 n)
static void ite_s_idle(struct rc_dev *rcdev, bool enable)
static int it87_get_irq_causes(struct ite_dev *dev)
static void it87_set_carrier_params(struct ite_dev *dev, bool high_freq,
bool use_demodulator,
u8 carrier_freq_bits, u8 allowance_bits,
u8 pulse_width_bits)
static int it87_get_rx_bytes(struct ite_dev *dev, u8 * buf, int buf_size)
static int it87_get_tx_used_slots(struct ite_dev *dev)
static void it87_put_tx_byte(struct ite_dev *dev, u8 value)
static void it87_idle_rx(struct ite_dev *dev)
static void it87_disable_rx(struct ite_dev *dev)
static void it87_enable_rx(struct ite_dev *dev)
static void it87_disable_tx_interrupt(struct ite_dev *dev)
static void it87_enable_tx_interrupt(struct ite_dev *dev)
static void it87_disable(struct ite_dev *dev)
static void it87_init_hardware(struct ite_dev *dev)
static int it8708_get_irq_causes(struct ite_dev *dev)
static void it8708_set_carrier_params(struct ite_dev *dev, bool high_freq,
bool use_demodulator,
u8 carrier_freq_bits, u8 allowance_bits,
u8 pulse_width_bits)
static int it8708_get_rx_bytes(struct ite_dev *dev, u8 * buf, int buf_size)
static int it8708_get_tx_used_slots(struct ite_dev *dev)
static void it8708_put_tx_byte(struct ite_dev *dev, u8 value)
static void it8708_idle_rx(struct ite_dev *dev)
static void it8708_disable_rx(struct ite_dev *dev)
static void it8708_enable_rx(struct ite_dev *dev)
static void it8708_disable_tx_interrupt(struct ite_dev *dev)
static void it8708_enable_tx_interrupt(struct ite_dev *dev)
static void it8708_disable(struct ite_dev *dev)
static void it8708_init_hardware(struct ite_dev *dev)
static inline u8 it8709_rm(struct ite_dev *dev, int index)
static inline void it8709_wm(struct ite_dev *dev, u8 val, int index)
static void it8709_wait(struct ite_dev *dev)
static u8 it8709_rr(struct ite_dev *dev, int index)
static void it8709_wr(struct ite_dev *dev, u8 val, int index)
static int it8709_get_irq_causes(struct ite_dev *dev)
static void it8709_set_carrier_params(struct ite_dev *dev, bool high_freq,
bool use_demodulator,
u8 carrier_freq_bits, u8 allowance_bits,
u8 pulse_width_bits)
static int it8709_get_rx_bytes(struct ite_dev *dev, u8 * buf, int buf_size)
static int it8709_get_tx_used_slots(struct ite_dev *dev)
static void it8709_put_tx_byte(struct ite_dev *dev, u8 value)
static void it8709_idle_rx(struct ite_dev *dev)
static void it8709_disable_rx(struct ite_dev *dev)
static void it8709_enable_rx(struct ite_dev *dev)
static void it8709_disable_tx_interrupt(struct ite_dev *dev)
static void it8709_enable_tx_interrupt(struct ite_dev *dev)
static void it8709_disable(struct ite_dev *dev)
static void it8709_init_hardware(struct ite_dev *dev)
static int ite_open(struct rc_dev *rcdev)
static void ite_close(struct rc_dev *rcdev)
static const struct ite_dev_params ite_dev_descs[] = ;
static const struct pnp_device_id ite_ids[] = ;
static int ite_probe(struct pnp_dev *pdev, const struct pnp_device_id
*dev_id)
static void __devexit ite_remove(struct pnp_dev *pdev)
static int ite_suspend(struct pnp_dev *pdev, pm_message_t state)
static int ite_resume(struct pnp_dev *pdev)
static void ite_shutdown(struct pnp_dev *pdev)
static struct pnp_driver ite_driver = ;
int ite_init(void)
void ite_exit(void)
MODULE_DEVICE_TABLE(pnp, ite_ids);
MODULE_DESCRIPTION("ITE Tech Inc. IT8712F/ITE8512F CIR driver");
MODULE_AUTHOR("Juan J. Garcia de Soria <skandalfo@gmail.com>");
MODULE_LICENSE("GPL");
module_init(ite_init);
module_exit(ite_exit);
