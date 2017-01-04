static int prom_service_exists(const char *service_name)
void prom_sun4v_guest_soft_state(void)
void prom_reboot(const char *bcommand)
void prom_feval(const char *fstring)
EXPORT_SYMBOL(prom_feval);
extern void smp_capture(void);
extern void smp_release(void);
void prom_cmdline(void)
void notrace prom_halt(void)
void prom_halt_power_off(void)
unsigned char prom_get_idprom(char *idbuf, int num_bytes)
int prom_get_mmu_ihandle(void)
static int prom_get_memory_ihandle(void)
static long tlb_load(const char *type, unsigned long index,
unsigned long tte_data, unsigned long vaddr)
long prom_itlb_load(unsigned long index,
unsigned long tte_data,
unsigned long vaddr)
long prom_dtlb_load(unsigned long index,
unsigned long tte_data,
unsigned long vaddr)
int prom_map(int mode, unsigned long size,
unsigned long vaddr, unsigned long paddr)
void prom_unmap(unsigned long size, unsigned long vaddr)
int prom_retain(const char *name, unsigned long size,
unsigned long align, unsigned long *paddr)
int prom_getunumber(int syndrome_code,
unsigned long phys_addr,
char *buf, int buflen)
void prom_sleepself(void)
int prom_sleepsystem(void)
int prom_wakeupsystem(void)
void prom_startcpu(int cpunode, unsigned long pc, unsigned long arg)
void prom_startcpu_cpuid(int cpuid, unsigned long pc, unsigned long arg)
void prom_stopcpu_cpuid(int cpuid)
void prom_stopself(void)
void prom_idleself(void)
void prom_resumecpu(int cpunode)
