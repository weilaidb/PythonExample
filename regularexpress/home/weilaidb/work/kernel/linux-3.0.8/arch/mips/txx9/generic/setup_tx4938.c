static void __init tx4938_wdr_init(void)
void __init tx4938_wdt_init(void)
static void tx4938_machine_restart(char *command)
void show_registers(struct pt_regs *regs);
static int tx4938_be_handler(struct pt_regs *regs, int is_fixup)
static void __init tx4938_be_init(void)
static struct resource tx4938_sdram_resource[4];
static struct resource tx4938_sram_resource;
#define TX4938_SRAM_SIZE 0x800
void __init tx4938_setup(void)
void __init tx4938_time_init(unsigned int tmrnr)
void __init tx4938_sio_init(unsigned int sclk, unsigned int cts_mask)
void __init tx4938_spi_init(int busid)
void __init tx4938_ethaddr_init(unsigned char *addr0, unsigned char *addr1)
void __init tx4938_mtd_init(int ch)
void __init tx4938_ata_init(unsigned int irq, unsigned int shift, int tune)
void __init tx4938_ndfmc_init(unsigned int hold, unsigned int spw)
void __init tx4938_dmac_init(int memcpy_chan0, int memcpy_chan1)
void __init tx4938_aclc_init(void)
void __init tx4938_sramc_init(void)
static void __init tx4938_stop_unused_modules(void)
static int __init tx4938_late_init(void)
late_initcall(tx4938_late_init);
