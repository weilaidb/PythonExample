static void __init mb93090_display(void);
static void __init setup_linux_memory(void);
static void __init setup_uclinux_memory(void);
static char __initdata mb93090_banner[] = "FJ/RH FR-V Linux";
static char __initdata mb93090_version[] = UTS_RELEASE;
int __nongprelbss mb93090_mb00_detected;
const char __frv_unknown_system[] = "unknown";
const char __frv_mb93091_cb10[] = "mb93091-cb10";
const char __frv_mb93091_cb11[] = "mb93091-cb11";
const char __frv_mb93091_cb30[] = "mb93091-cb30";
const char __frv_mb93091_cb41[] = "mb93091-cb41";
const char __frv_mb93091_cb60[] = "mb93091-cb60";
const char __frv_mb93091_cb70[] = "mb93091-cb70";
const char __frv_mb93091_cb451[] = "mb93091-cb451";
const char __frv_mb93090_mb00[] = "mb93090-mb00";
const char __frv_mb93493[] = "mb93493";
const char __frv_mb93093[] = "mb93093";
static const char *__nongprelbss cpu_series;
static const char *__nongprelbss cpu_core;
static const char *__nongprelbss cpu_silicon;
static const char *__nongprelbss cpu_mmu;
static const char *__nongprelbss cpu_system;
static const char *__nongprelbss cpu_board1;
static const char *__nongprelbss cpu_board2;
static unsigned long __nongprelbss cpu_psr_all;
static unsigned long __nongprelbss cpu_hsr0_all;
unsigned long __nongprelbss pdm_suspend_mode;
unsigned long __nongprelbss rom_length;
unsigned long __nongprelbss memory_start;
unsigned long __nongprelbss memory_end;
unsigned long __nongprelbss dma_coherent_mem_start;
unsigned long __nongprelbss dma_coherent_mem_end;
unsigned long __initdata __sdram_old_base;
unsigned long __initdata num_mappedpages;
struct cpuinfo_frv __nongprelbss boot_cpu_data;
char __initdata command_line[COMMAND_LINE_SIZE];
char __initdata redboot_command_line[COMMAND_LINE_SIZE];
#define __pminit
#define __pminitdata
#define __pminit __init
#define __pminitdata __initdata
struct clock_cmode ;
#define _frac(N,D) ((N)<<4 | (D))
#define _x0_16	_frac(1,6)
#define _x0_25	_frac(1,4)
#define _x0_33	_frac(1,3)
#define _x0_375	_frac(3,8)
#define _x0_5	_frac(1,2)
#define _x0_66	_frac(2,3)
#define _x0_75	_frac(3,4)
#define _x1	_frac(1,1)
#define _x1_5	_frac(3,2)
#define _x2	_frac(2,1)
#define _x3	_frac(3,1)
#define _x4	_frac(4,1)
#define _x4_5	_frac(9,2)
#define _x6	_frac(6,1)
#define _x8	_frac(8,1)
#define _x9	_frac(9,1)
int __nongprelbss clock_p0_current;
int __nongprelbss clock_cm_current;
int __nongprelbss clock_cmode_current;
int __nongprelbss clock_cmodes_permitted;
unsigned long __nongprelbss clock_bits_settable;
static struct clock_cmode __pminitdata undef_clock_cmode = ;
static struct clock_cmode __pminitdata clock_cmodes_fr401_fr403[16] = ;
static struct clock_cmode __pminitdata clock_cmodes_fr405[16] = ;
static struct clock_cmode __pminitdata clock_cmodes_fr555[16] = ;
static const struct clock_cmode __pminitdata *clock_cmodes;
static int __pminitdata clock_doubled;
static struct uart_port __pminitdata __frv_uart0 = ;
static struct uart_port __pminitdata __frv_uart1 = ;
phys = ampr & xAMPRx_PPFN;
size = 1 << (((ampr & xAMPRx_SS) >> 4) + 17);
printk("%cAMPR%d: va %08lx-%08lx [pa %08lx] %c%c%c%c [cxn:%04lx]\n",
i_d, n,
virt, virt + size - 1,
phys,
ampr & xAMPRx_S  ? 'S' : '-',
ampr & xAMPRx_C  ? 'C' : '-',
ampr & DAMPRx_WP ? 'W' : '-',
ampr & xAMPRx_V  ? 'V' : '-',
cxn
);
}
static void __init dump_memory_map(void)
static void __init detect_mb93091(void)
static void __init determine_cpu(void)
void __pminit determine_clocks(int verbose)
static void __init reserve_dma_coherent(void)
void __cpuinit calibrate_delay(void)
static void __init parse_cmdline_early(char *cmdline)
void __init setup_arch(char **cmdline_p)
early_serial_setup(&__frv_uart1);
return 0;
}
late_initcall(setup_arch_serial);
static void __init setup_linux_memory(void)
static void __init setup_uclinux_memory(void)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
void arch_gettod(int *year, int *mon, int *day, int *hour,
int *min, int *sec)
static void __init mb93090_sendlcdcmd(uint32_t cmd)
static void __init mb93090_display(void)
