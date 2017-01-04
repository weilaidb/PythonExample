static void __init tx4939_wdr_init(void)
void __init tx4939_wdt_init(void)
static void tx4939_machine_restart(char *command)
void show_registers(struct pt_regs *regs);
static int tx4939_be_handler(struct pt_regs *regs, int is_fixup)
static void __init tx4939_be_init(void)
static struct resource tx4939_sdram_resource[4];
static struct resource tx4939_sram_resource;
#define TX4939_SRAM_SIZE 0x800
void __init tx4939_add_memory_regions(void)
void __init tx4939_setup(void)
void __init tx4939_time_init(unsigned int tmrnr)
void __init tx4939_sio_init(unsigned int sclk, unsigned int cts_mask)
#if defined(CONFIG_TC35815) || defined(CONFIG_TC35815_MODULE)
static u32 tx4939_get_eth_speed(struct net_device *dev)
static int tx4939_netdev_event(struct notifier_block *this,
unsigned long event,
void *ptr)
static struct notifier_block tx4939_netdev_notifier = ;
void __init tx4939_ethaddr_init(unsigned char *addr0, unsigned char *addr1)
void __init tx4939_ethaddr_init(unsigned char *addr0, unsigned char *addr1)
void __init tx4939_mtd_init(int ch)
#define TX4939_ATA_REG_PHYS(ch) (TX4939_ATA_REG(ch) & 0xfffffffffULL)
void __init tx4939_ata_init(void)
void __init tx4939_rtc_init(void)
void __init tx4939_ndfmc_init(unsigned int hold, unsigned int spw,
unsigned char ch_mask, unsigned char wide_mask)
void __init tx4939_dmac_init(int memcpy_chan0, int memcpy_chan1)
void __init tx4939_aclc_init(void)
void __init tx4939_sramc_init(void)
void __init tx4939_rng_init(void)
static void __init tx4939_stop_unused_modules(void)
static int __init tx4939_late_init(void)
late_initcall(tx4939_late_init);
