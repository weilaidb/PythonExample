unsigned int sb1_pass;
unsigned int soc_pass;
unsigned int soc_type;
EXPORT_SYMBOL(soc_type);
unsigned int periph_rev;
unsigned int zbbus_mhz;
EXPORT_SYMBOL(zbbus_mhz);
static unsigned int part_type;
static char *soc_str;
static char *pass_str;
static int __init setup_bcm1x80_bcm1x55(void)
static int __init sys_rev_decode(void)
void __init bcm1480_setup(void)
