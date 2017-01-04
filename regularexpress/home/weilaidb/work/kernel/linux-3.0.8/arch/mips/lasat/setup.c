int lasat_command_line;
void lasatint_init(void);
extern void lasat_reboot_setup(void);
extern void pcisetup(void);
extern void edhac_init(void *, void *, void *);
extern void addrflt_init(void);
struct lasat_misc lasat_misc_info[N_MACHTYPES] = ;
struct lasat_misc *lasat_misc;
static struct ds_defs ds_defs[N_MACHTYPES] = ;
static struct pvc_defs pvc_defs[N_MACHTYPES] = ;
static int lasat_panic_display(struct notifier_block *this,
unsigned long event, void *ptr)
static int lasat_panic_prom_monitor(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block lasat_panic_block[] =
;
void __init plat_time_init(void)
void __init plat_mem_setup(void)
