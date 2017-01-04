#define __ASM_SH_SYSTEM_64_H
struct thread_struct;
struct task_struct *sh64_switch_to(struct task_struct *prev,
struct thread_struct *prev_thread,
struct task_struct *next,
struct thread_struct *next_thread);
#define switch_to(prev,next,last)				\
do  while (0)
#define __icbi(addr)	__asm__ __volatile__ ( "icbi %0, 0\n\t" : : "r" (addr))
#define __ocbp(addr)	__asm__ __volatile__ ( "ocbp %0, 0\n\t" : : "r" (addr))
#define __ocbi(addr)	__asm__ __volatile__ ( "ocbi %0, 0\n\t" : : "r" (addr))
#define __ocbwb(addr)	__asm__ __volatile__ ( "ocbwb %0, 0\n\t" : : "r" (addr))
static inline reg_size_t register_align(void *val)
extern void phys_stext(void);
static inline void trigger_address_error(void)
#define SR_BL_LL	0x0000000010000000LL
static inline void set_bl_bit(void)
static inline void clear_bl_bit(void)
