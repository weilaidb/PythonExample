#define HOOK_TRIG_ADDR      0xb7000000
#define HOOK_MEM_BASE_ADDR  0xce000000
static volatile unsigned *hook_base;
#define HOOK_DATA(offset) hook_base[offset]
#define VHOOK_DATA(offset) hook_base[offset]
#define HOOK_TRIG(funcid) \
do  while (0)
#define HOOK_DATA_BYTE(offset) ((unsigned char *)hook_base)[offset]
static void hook_init(void)
static unsigned hook_trig(unsigned id)
int hook_call(unsigned id, unsigned pcnt, ...)
int hook_call_str(unsigned id, unsigned size, const char *str)
void print_str(const char *str)
void CPU_WATCHDOG_TIMEOUT(unsigned t)
