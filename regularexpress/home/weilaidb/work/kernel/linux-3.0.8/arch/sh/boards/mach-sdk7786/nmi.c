enum ;
static unsigned int __initdata nmi_mode = NMI_MODE_ANY;
static int __init nmi_mode_setup(char *str)
early_param("nmi_mode", nmi_mode_setup);
void __init sdk7786_nmi_init(void)
