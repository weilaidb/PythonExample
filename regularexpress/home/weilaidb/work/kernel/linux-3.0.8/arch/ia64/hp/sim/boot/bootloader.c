struct task_struct;
struct disk_req ;
struct disk_stat ;
extern void jmp_to_kernel (unsigned long bp, unsigned long e_entry);
extern struct ia64_boot_param *sys_fw_init (const char *args, int arglen);
extern void debug_break (void);
static void
cons_write (const char *buf)
#define MAX_ARGS 32
void
start_bootloader (void)
