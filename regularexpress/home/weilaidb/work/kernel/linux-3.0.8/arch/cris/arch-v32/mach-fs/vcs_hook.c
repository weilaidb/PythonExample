#define HOOK_TRIG_ADDR     0xb7000000
#define HOOK_MEM_BASE_ADDR 0xa0000000
#define HOOK_DATA(offset) ((unsigned *)HOOK_MEM_BASE_ADDR)[offset]
#define VHOOK_DATA(offset) ((volatile unsigned *)HOOK_MEM_BASE_ADDR)[offset]
#define HOOK_TRIG(funcid) \
do  while (0)
#define HOOK_DATA_BYTE(offset) ((unsigned char *)HOOK_MEM_BASE_ADDR)[offset]
int hook_call(unsigned id, unsigned pcnt, ...)
unsigned hook_buf(unsigned i)
void print_str(const char *str)
void CPU_KICK_DOG(void)
void CPU_WATCHDOG_TIMEOUT(unsigned t)
