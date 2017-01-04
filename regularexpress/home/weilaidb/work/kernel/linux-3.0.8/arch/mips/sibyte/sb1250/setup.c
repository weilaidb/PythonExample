unsigned int sb1_pass;
unsigned int soc_pass;
unsigned int soc_type;
EXPORT_SYMBOL(soc_type);
unsigned int periph_rev;
unsigned int zbbus_mhz;
EXPORT_SYMBOL(zbbus_mhz);
static char *soc_str;
static char *pass_str;
static unsigned int war_pass;
static int __init setup_bcm1250(void)
int sb1250_m3_workaround_needed(void)
static int __init setup_bcm112x(void)
static int __init sys_rev_decode(void)
void __init sb1250_setup(void)
