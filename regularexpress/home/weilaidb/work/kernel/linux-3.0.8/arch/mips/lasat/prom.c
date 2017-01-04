#define RESET_VECTOR	0xbfc00000
#define PROM_JUMP_TABLE_ENTRY(n) (*((u32 *)(RESET_VECTOR + 0x20) + n))
#define PROM_DISPLAY_ADDR	PROM_JUMP_TABLE_ENTRY(0)
#define PROM_PUTC_ADDR		PROM_JUMP_TABLE_ENTRY(1)
#define PROM_MONITOR_ADDR	PROM_JUMP_TABLE_ENTRY(2)
static void null_prom_display(const char *string, int pos, int clear)
static void null_prom_monitor(void)
static void null_prom_putc(char c)
static void (*__prom_putc)(char c) = null_prom_putc;
void prom_putchar(char c)
void (*prom_display)(const char *string, int pos, int clear) =
null_prom_display;
void (*prom_monitor)(void) = null_prom_monitor;
unsigned int lasat_ndelay_divider;
static void setup_prom_vectors(void)
static struct at93c_defs at93c_defs[N_MACHTYPES] = ;
void __init prom_init(void)
void __init prom_free_prom_memory(void)
const char *get_system_type(void)
