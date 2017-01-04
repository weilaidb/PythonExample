static int (*prom) (void *);
void of_init(void *promptr)
int of_call_prom(const char *service, int nargs, int nret, ...)
static int of_call_prom_ret(const char *service, int nargs, int nret,
unsigned int *rets, ...)
static int string_match(const char *s1, const char *s2)
static int need_map = -1;
static ihandle chosen_mmu;
static phandle memory;
static int check_of_version(void)
void *of_claim(unsigned long virt, unsigned long size, unsigned long align)
void *of_vmlinux_alloc(unsigned long size)
void of_exit(void)
void *of_finddevice(const char *name)
int of_getprop(const void *phandle, const char *name, void *buf,
const int buflen)
int of_setprop(const void *phandle, const char *name, const void *buf,
const int buflen)
