static void db1x_power_off(void)
static void db1x_reset(char *c)
static int __init db1x_poweroff_setup(void)
late_initcall(db1x_poweroff_setup);
int __init db1x_register_pcmcia_socket(phys_addr_t pcmcia_attr_start,
phys_addr_t pcmcia_attr_end,
phys_addr_t pcmcia_mem_start,
phys_addr_t pcmcia_mem_end,
phys_addr_t pcmcia_io_start,
phys_addr_t pcmcia_io_end,
int card_irq,
int cd_irq,
int stschg_irq,
int eject_irq,
int id)
#define YAMON_SIZE	0x00100000
#define YAMON_ENV_SIZE	0x00040000
int __init db1x_register_norflash(unsigned long size, int width,
int swapped)
