#define __ASM_SYSTEM_H
struct task_struct;
extern struct task_struct *__switch_to(void *, void *);
extern void update_per_regs(struct task_struct *task);
static inline void save_fp_regs(s390_fp_regs *fpregs)
static inline void restore_fp_regs(s390_fp_regs *fpregs)
static inline void save_access_regs(unsigned int *acrs)
static inline void restore_access_regs(unsigned int *acrs)
#define switch_to(prev,next,last) do  while (0)
extern void account_vtime(struct task_struct *, struct task_struct *);
extern void account_tick_vtime(struct task_struct *);
extern int pfault_init(void);
extern void pfault_fini(void);
#define pfault_init()		()
#define pfault_fini()		do  while (0)
extern void cmma_init(void);
extern int memcpy_real(void *, void *, size_t);
#define finish_arch_switch(prev) do  while (0)
#define nop() asm volatile("nop")
#define eieio()	asm volatile("bcr 15,0" : : : "memory")
#define SYNC_OTHER_CORES(x)   eieio()
#define mb()    eieio()
#define rmb()   eieio()
#define wmb()   eieio()
#define read_barrier_depends() do  while(0)
#define smp_mb()       mb()
#define smp_rmb()      rmb()
#define smp_wmb()      wmb()
#define smp_read_barrier_depends()    read_barrier_depends()
#define smp_mb__before_clear_bit()     smp_mb()
#define smp_mb__after_clear_bit()      smp_mb()
#define set_mb(var, value)      do  while (0)
#define __ctl_load(array, low, high) ()
#define __ctl_store(array, low, high) ()
#define __ctl_load(array, low, high) ()
#define __ctl_store(array, low, high) ()
#define __ctl_set_bit(cr, bit) ()
#define __ctl_clear_bit(cr, bit) ()
static inline void
__set_psw_mask(unsigned long mask)
#define local_mcck_enable()  __set_psw_mask(psw_kernel_bits)
#define local_mcck_disable() __set_psw_mask(psw_kernel_bits & ~PSW_MASK_MCHECK)
extern void smp_ctl_set_bit(int cr, int bit);
extern void smp_ctl_clear_bit(int cr, int bit);
#define ctl_set_bit(cr, bit) smp_ctl_set_bit(cr, bit)
#define ctl_clear_bit(cr, bit) smp_ctl_clear_bit(cr, bit)
#define ctl_set_bit(cr, bit) __ctl_set_bit(cr, bit)
#define ctl_clear_bit(cr, bit) __ctl_clear_bit(cr, bit)
#define MAX_FACILITY_BIT (256*8)
static inline int test_facility(unsigned long nr)
static inline unsigned short stap(void)
extern void (*_machine_restart)(char *command);
extern void (*_machine_halt)(void);
extern void (*_machine_power_off)(void);
extern unsigned long arch_align_stack(unsigned long sp);
static inline int tprot(unsigned long addr)
