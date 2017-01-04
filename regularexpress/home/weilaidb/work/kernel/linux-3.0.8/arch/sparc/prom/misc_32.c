extern void restore_current(void);
DEFINE_SPINLOCK(prom_lock);
void
prom_reboot(char *bcommand)
void
prom_feval(char *fstring)
EXPORT_SYMBOL(prom_feval);
void
prom_cmdline(void)
void __noreturn
prom_halt(void)
typedef void (*sfunc_t)(void);
void
prom_setsync(sfunc_t funcp)
unsigned char
prom_get_idprom(char *idbuf, int num_bytes)
int
prom_version(void)
int
prom_getrev(void)
int
prom_getprev(void)
