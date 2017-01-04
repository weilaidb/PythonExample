void m68328_timer_gettod(int *year, int *mon, int *day, int *hour, int *min, int *sec);
#if defined(CONFIG_DRAGEN2)
static void m68vz328_reset(void)
static void init_hardware(char *command, int size)
#elif defined(CONFIG_UCDIMM)
static void m68vz328_reset(void)
unsigned char *cs8900a_hwaddr;
static int errno;
_bsc0(char *, getserialnum)
_bsc1(unsigned char *, gethwaddr, int, a)
_bsc1(char *, getbenv, char *, a)
static void init_hardware(char *command, int size)
static void m68vz328_reset(void)
static void init_hardware(char *command, int size)
void config_BSP(char *command, int size)
