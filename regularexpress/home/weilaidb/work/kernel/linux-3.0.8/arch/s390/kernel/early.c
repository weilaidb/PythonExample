#define KMSG_COMPONENT "setup"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define DEFSYS_CMD_SIZE		128
#define SAVESYS_CMD_SIZE	32
char kernel_nss_name[NSS_NAME_SIZE + 1];
static void __init setup_boot_command_line(void);
static void __init reset_tod_clock(void)
int __init savesys_ipl_nss(char *cmd, const int cmdlen);
asm(
"	.section .init.text,\"ax\",@progbits\n"
"	.align	4\n"
"	.type	savesys_ipl_nss, @function\n"
"savesys_ipl_nss:\n"
"	stmg	6,15,48(15)\n"
"	lgr	14,3\n"
"	sam31\n"
"	diag	2,14,0x8\n"
"	sam64\n"
"	lgr	2,14\n"
"	lmg	6,15,48(15)\n"
"	stm	6,15,24(15)\n"
"	lr	14,3\n"
"	diag	2,14,0x8\n"
"	lr	2,14\n"
"	lm	6,15,24(15)\n"
"	br	14\n"
"	.size	savesys_ipl_nss, .-savesys_ipl_nss\n"
"	.previous\n");
static __initdata char upper_command_line[COMMAND_LINE_SIZE];
static noinline __init void create_kernel_nss(void)
static inline void create_kernel_nss(void)
static noinline __init void clear_bss_section(void)
static noinline __init void init_kernel_storage_key(void)
static __initdata struct sysinfo_3_2_2 vmms __aligned(PAGE_SIZE);
static noinline __init void detect_machine_type(void)
static __init void early_pgm_check_handler(void)
static noinline __init void setup_lowcore_early(void)
static noinline __init void setup_facility_list(void)
static noinline __init void setup_hpage(void)
static __init void detect_mvpg(void)
static __init void detect_ieee(void)
static __init void detect_csp(void)
static __init void detect_diag9c(void)
static __init void detect_diag44(void)
static __init void detect_machine_facilities(void)
static __init void rescue_initrd(void)
static void __init append_to_cmdline(size_t (*ipl_data)(char *, size_t))
static void __init setup_boot_command_line(void)
void __init startup_init(void)
