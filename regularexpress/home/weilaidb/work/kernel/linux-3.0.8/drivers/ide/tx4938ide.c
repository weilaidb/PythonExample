static void tx4938ide_tune_ebusc(unsigned int ebus_ch,
unsigned int gbus_clock,
u8 pio)
static void tx4938ide_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void tx4938ide_input_data_swap(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void tx4938ide_output_data_swap(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static const struct ide_tp_ops tx4938ide_tp_ops = ;
static const struct ide_port_ops tx4938ide_port_ops = ;
static const struct ide_port_info tx4938ide_port_info __initdata = ;
static int __init tx4938ide_probe(struct platform_device *pdev)
static int __exit tx4938ide_remove(struct platform_device *pdev)
static struct platform_driver tx4938ide_driver = ;
static int __init tx4938ide_init(void)
static void __exit tx4938ide_exit(void)
module_init(tx4938ide_init);
module_exit(tx4938ide_exit);
MODULE_DESCRIPTION("TX4938 internal IDE driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:tx4938ide");
