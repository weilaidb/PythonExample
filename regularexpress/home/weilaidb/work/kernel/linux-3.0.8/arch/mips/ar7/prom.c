#define MAX_ENTRY 80
struct env_var ;
static struct env_var adam2_env[MAX_ENTRY];
char *prom_getenv(const char *name)
EXPORT_SYMBOL(prom_getenv);
static void  __init ar7_init_cmdline(int argc, char *argv[])
struct psbl_rec ;
static __initdata char psp_env_version[] = "TIENV0.8";
struct psp_env_chunk  __attribute__ ((packed));
struct psp_var_map_entry ;
static struct psp_var_map_entry psp_var_map[] = ;
#define PSP_ENV_SIZE  4096
static char psp_env_data[PSP_ENV_SIZE] = ;
static char * __init lookup_psp_var_map(u8 num)
static void __init add_adam2_var(char *name, char *value)
static int __init parse_psp_env(void *psp_env_base)
static void __init ar7_init_env(struct env_var *env)
static void __init console_config(void)
void __init prom_init(void)
#define PORT(offset) (KSEG1ADDR(AR7_REGS_UART0 + (offset * 4)))
static inline unsigned int serial_in(int offset)
static inline void serial_out(int offset, int value)
int prom_putchar(char c)
