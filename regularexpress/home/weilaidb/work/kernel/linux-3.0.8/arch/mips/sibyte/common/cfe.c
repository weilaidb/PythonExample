#define MAX_RAM_SIZE (~0ULL)
#define MAX_RAM_SIZE (~0ULL)
#define MAX_RAM_SIZE (0xffffffffULL)
#define MAX_RAM_SIZE (0x1fffffffULL)
#define SIBYTE_MAX_MEM_REGIONS 8
phys_t board_mem_region_addrs[SIBYTE_MAX_MEM_REGIONS];
phys_t board_mem_region_sizes[SIBYTE_MAX_MEM_REGIONS];
unsigned int board_mem_region_count;
int cfe_cons_handle;
extern unsigned long initrd_start, initrd_end;
static void __noreturn cfe_linux_exit(void *arg)
static void __noreturn cfe_linux_restart(char *command)
static void __noreturn cfe_linux_halt(void)
static __init void prom_meminit(void)
static int __init initrd_setup(char *str)
extern struct plat_smp_ops sb_smp_ops;
extern struct plat_smp_ops bcm1480_smp_ops;
void __init prom_init(void)
void __init prom_free_prom_memory(void)
void prom_putchar(char c)
