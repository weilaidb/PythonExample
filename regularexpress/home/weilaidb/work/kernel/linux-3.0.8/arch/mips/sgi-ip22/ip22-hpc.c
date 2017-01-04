struct hpc3_regs *hpc3c0, *hpc3c1;
EXPORT_SYMBOL(hpc3c0);
EXPORT_SYMBOL(hpc3c1);
struct sgioc_regs *sgioc;
EXPORT_SYMBOL(sgioc);
u8 sgi_ioc_reset, sgi_ioc_write;
extern char *system_type;
void __init sgihpc_init(void)
