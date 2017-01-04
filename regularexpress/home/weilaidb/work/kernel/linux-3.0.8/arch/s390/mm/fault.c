#define __FAIL_ADDR_MASK 0x7ffff000
#define __SUBCODE_MASK 0x0200
#define __PF_RES_FIELD 0ULL
#define __FAIL_ADDR_MASK -4096L
#define __SUBCODE_MASK 0x0600
#define __PF_RES_FIELD 0x8000000000000000ULL
#define VM_FAULT_BADCONTEXT	0x010000
#define VM_FAULT_BADMAP		0x020000
#define VM_FAULT_BADACCESS	0x040000
static unsigned long store_indication;
void fault_init(void)
static inline int notify_page_fault(struct pt_regs *regs)
void bust_spinlocks(int yes)
static inline int user_space_fault(unsigned long trans_exc_code)
static inline void report_user_fault(struct pt_regs *regs, long int_code,
int signr, unsigned long address)
static noinline void do_sigsegv(struct pt_regs *regs, long int_code,
int si_code, unsigned long trans_exc_code)
static noinline void do_no_context(struct pt_regs *regs, long int_code,
unsigned long trans_exc_code)
static noinline void do_low_address(struct pt_regs *regs, long int_code,
unsigned long trans_exc_code)
static noinline void do_sigbus(struct pt_regs *regs, long int_code,
unsigned long trans_exc_code)
static noinline void do_fault_error(struct pt_regs *regs, long int_code,
unsigned long trans_exc_code, int fault)
static inline int do_exception(struct pt_regs *regs, int access,
unsigned long trans_exc_code)
void __kprobes do_protection_exception(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
void __kprobes do_dat_exception(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
void __kprobes do_asce_exception(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
int __handle_fault(unsigned long uaddr, unsigned long pgm_int_code, int write)
static int pfault_disable;
static int __init nopfault(char *str)
__setup("nopfault", nopfault);
struct pfault_refbk  __attribute__ ((packed, aligned(8)));
int pfault_init(void)
void pfault_fini(void)
static DEFINE_SPINLOCK(pfault_lock);
static LIST_HEAD(pfault_list);
static void pfault_interrupt(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static int __cpuinit pfault_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static int __init pfault_irq_init(void)
early_initcall(pfault_irq_init);
