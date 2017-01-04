#define PREFIX "HP SDC MLC: "
static hil_mlc hp_sdc_mlc;
MODULE_AUTHOR("Brian S. Julin <bri@calyx.com>");
MODULE_DESCRIPTION("Glue for onboard HIL MLC in HP-PARISC machines");
MODULE_LICENSE("Dual BSD/GPL");
static struct hp_sdc_mlc_priv_s  hp_sdc_mlc_priv;
static void hp_sdc_mlc_isr (int irq, void *dev_id,
uint8_t status, uint8_t data)
static int hp_sdc_mlc_in(hil_mlc *mlc, suseconds_t timeout)
static int hp_sdc_mlc_cts(hil_mlc *mlc)
static void hp_sdc_mlc_out(hil_mlc *mlc)
static int __init hp_sdc_mlc_init(void)
static void __exit hp_sdc_mlc_exit(void)
module_init(hp_sdc_mlc_init);
module_exit(hp_sdc_mlc_exit);
