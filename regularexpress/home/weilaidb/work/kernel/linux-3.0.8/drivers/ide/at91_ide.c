#define DRV_NAME "at91_ide"
#define perr(fmt, args...) pr_err(DRV_NAME ": " fmt, ##args)
#define pdbg(fmt, args...) pr_debug("%s " fmt, __func__, ##args)
#define TASK_FILE	0x00c00000
#define ALT_MODE	0x00e00000
#define REGS_SIZE	8
#define enter_16bit(cs, mode) do  while (0)
#define leave_16bit(cs, mode) at91_sys_write(AT91_SMC_MODE(cs), mode);
static void set_smc_timings(const u8 chipselect, const u16 cycle,
const u16 setup, const u16 pulse,
const u16 data_float, int use_iordy)
static unsigned int calc_mck_cycles(unsigned int ns, unsigned int mck_hz)
static void apply_timings(const u8 chipselect, const u8 pio,
const struct ide_timing *timing, int use_iordy)
static void at91_ide_input_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void at91_ide_output_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void at91_ide_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_tp_ops at91_ide_tp_ops = ;
static const struct ide_port_ops at91_ide_port_ops = ;
static const struct ide_port_info at91_ide_port_info __initdata = ;
irqreturn_t at91_irq_handler(int irq, void *dev_id)
static int __init at91_ide_probe(struct platform_device *pdev)
static int __exit at91_ide_remove(struct platform_device *pdev)
static struct platform_driver at91_ide_driver = ;
static int __init at91_ide_init(void)
static void __exit at91_ide_exit(void)
module_init(at91_ide_init);
module_exit(at91_ide_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Stanislaw Gruszka <stf_xl@wp.pl>");
