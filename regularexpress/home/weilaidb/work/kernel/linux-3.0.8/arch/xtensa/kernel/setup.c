#if defined(CONFIG_VGA_CONSOLE) || defined(CONFIG_DUMMY_CONSOLE)
# include <linux/console.h>
# include <linux/timex.h>
# include <linux/seq_file.h>
#if defined(CONFIG_VGA_CONSOLE) || defined(CONFIG_DUMMY_CONSOLE)
struct screen_info screen_info = ;
extern struct fd_ops no_fd_ops;
struct fd_ops *fd_ops;
extern struct rtc_ops no_rtc_ops;
struct rtc_ops *rtc_ops;
extern void *initrd_start;
extern void *initrd_end;
extern void *__initrd_start;
extern void *__initrd_end;
int initrd_is_mapped = 0;
extern int initrd_below_start_ok;
unsigned char aux_device_present;
extern unsigned long loops_per_jiffy;
static char __initdata command_line[COMMAND_LINE_SIZE];
static char default_command_line[COMMAND_LINE_SIZE] __initdata = CONFIG_CMDLINE;
sysmem_info_t __initdata sysmem;
int initrd_is_mapped;
extern void init_mmu(void);
static inline void init_mmu(void)
extern void zones_init(void);
typedef struct tagtable  tagtable_t;
#define __tagtable(tag, fn) static tagtable_t __tagtable_##fn 		\
__attribute__((unused, __section__(".taglist"))) =
static int __init parse_tag_mem(const bp_tag_t *tag)
__tagtable(BP_TAG_MEMORY, parse_tag_mem);
static int __init parse_tag_initrd(const bp_tag_t* tag)
__tagtable(BP_TAG_INITRD, parse_tag_initrd);
static int __init parse_tag_cmdline(const bp_tag_t* tag)
__tagtable(BP_TAG_COMMAND_LINE, parse_tag_cmdline);
static int __init parse_bootparam(const bp_tag_t* tag)
void __init init_arch(bp_tag_t *bp_start)
extern char _end;
extern char _stext;
extern char _WindowVectors_text_start;
extern char _WindowVectors_text_end;
extern char _DebugInterruptVector_literal_start;
extern char _DebugInterruptVector_text_end;
extern char _KernelExceptionVector_literal_start;
extern char _KernelExceptionVector_text_end;
extern char _UserExceptionVector_literal_start;
extern char _UserExceptionVector_text_end;
extern char _DoubleExceptionVector_literal_start;
extern char _DoubleExceptionVector_text_end;
void __init setup_arch(char **cmdline_p)
void machine_restart(char * cmd)
void machine_halt(void)
void machine_power_off(void)
static int
c_show(struct seq_file *f, void *slot)
static void *
c_start(struct seq_file *f, loff_t *pos)
static void *
c_next(struct seq_file *f, void *v, loff_t *pos)
static void
c_stop(struct seq_file *f, void *v)
const struct seq_operations cpuinfo_op =
;
