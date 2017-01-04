#if defined(CONFIG_MIPS_PB1000) || defined(CONFIG_MIPS_DB1000) || \
defined(CONFIG_MIPS_PB1100) || defined(CONFIG_MIPS_DB1100) || \
defined(CONFIG_MIPS_PB1500) || defined(CONFIG_MIPS_DB1500) || \
defined(CONFIG_MIPS_BOSPORUS) || defined(CONFIG_MIPS_MIRAGE)
#define ALCHEMY_BOARD_DEFAULT_MEMSIZE	0x04000000
#define ALCHEMY_BOARD_DEFAULT_MEMSIZE	0x08000000
void __init prom_init(void)
void prom_putchar(unsigned char c)
