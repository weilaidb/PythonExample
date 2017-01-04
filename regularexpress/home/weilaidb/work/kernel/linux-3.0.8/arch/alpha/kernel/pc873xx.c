static unsigned pc873xx_probelist[] = ;
static char *pc873xx_names[] = ;
static unsigned int base, model;
unsigned int __init pc873xx_get_base()
char *__init pc873xx_get_model()
static unsigned char __init pc873xx_read(unsigned int base, int reg)
static void __init pc873xx_write(unsigned int base, int reg, unsigned char data)
int __init pc873xx_probe(void)
void __init pc873xx_enable_epp19(void)
void __init pc873xx_enable_ide(void)
