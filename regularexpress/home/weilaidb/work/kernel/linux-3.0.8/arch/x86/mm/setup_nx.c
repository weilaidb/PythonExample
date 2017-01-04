static int disable_nx __cpuinitdata;
static int __init noexec_setup(char *str)
early_param("noexec", noexec_setup);
void __cpuinit x86_configure_nx(void)
void __init x86_report_nx(void)
