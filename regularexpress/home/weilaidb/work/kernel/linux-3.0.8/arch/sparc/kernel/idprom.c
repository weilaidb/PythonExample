struct idprom *idprom;
EXPORT_SYMBOL(idprom);
static struct idprom idprom_buffer;
static struct Sun_Machine_Models Sun_Machines[NUM_SUN_MACHINES] = ;
static void __init display_system_type(unsigned char machtype)
static void __init display_system_type(unsigned char machtype)
static unsigned char __init calc_idprom_cksum(struct idprom *idprom)
void __init idprom_init(void)
