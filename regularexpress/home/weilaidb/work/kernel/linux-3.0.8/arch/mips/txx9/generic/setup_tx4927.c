static void __init tx4927_wdr_init(void)
void __init tx4927_wdt_init(void)
static void tx4927_machine_restart(char *command)
void show_registers(struct pt_regs *regs);
static int tx4927_be_handler(struct pt_regs *regs, int is_fixup)
static void __init tx4927_be_init(void)
static struct resource tx4927_sdram_resource[4];
void __init tx4927_setup(void)
void __init tx4927_time_init(unsigned int tmrnr)
void __init tx4927_sio_init(unsigned int sclk, unsigned int cts_mask)
void __init tx4927_mtd_init(int ch)
void __init tx4927_dmac_init(int memcpy_chan)
void __init tx4927_aclc_init(unsigned int dma_chan_out,
unsigned int dma_chan_in)
static void __init tx4927_stop_unused_modules(void)
static int __init tx4927_late_init(void)
late_initcall(tx4927_late_init);
