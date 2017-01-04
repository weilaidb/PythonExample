#define __ALPHA_MMU_CONTEXT_H
static inline unsigned long
__reload_thread(struct pcb_struct *pcb)
#define EV4_MAX_ASN 63
#define EV5_MAX_ASN 127
#define EV6_MAX_ASN 255
# define MAX_ASN	(alpha_mv.max_asn)
# ifdef CONFIG_ALPHA_EV4
#  define MAX_ASN	EV4_MAX_ASN
# elif defined(CONFIG_ALPHA_EV5)
#  define MAX_ASN	EV5_MAX_ASN
# else
#  define MAX_ASN	EV6_MAX_ASN
# endif
#define cpu_last_asn(cpuid)	(cpu_data[cpuid].last_asn)
extern unsigned long last_asn;
#define cpu_last_asn(cpuid)	last_asn
#define WIDTH_HARDWARE_ASN	8
#define ASN_FIRST_VERSION (1UL << WIDTH_HARDWARE_ASN)
#define HARDWARE_ASN_MASK ((1UL << WIDTH_HARDWARE_ASN) - 1)
#define __EXTERN_INLINE extern inline
#define __MMU_EXTERN_INLINE
extern inline unsigned long
__get_new_mm_context(struct mm_struct *mm, long cpu)
__EXTERN_INLINE void
ev5_switch_mm(struct mm_struct *prev_mm, struct mm_struct *next_mm,
struct task_struct *next)
__EXTERN_INLINE void
ev4_switch_mm(struct mm_struct *prev_mm, struct mm_struct *next_mm,
struct task_struct *next)
extern void __load_new_mm_context(struct mm_struct *);
#define check_mmu_context()					\
do  while(0)
#define check_mmu_context()  do  while(0)
__EXTERN_INLINE void
ev5_activate_mm(struct mm_struct *prev_mm, struct mm_struct *next_mm)
__EXTERN_INLINE void
ev4_activate_mm(struct mm_struct *prev_mm, struct mm_struct *next_mm)
#define deactivate_mm(tsk,mm)	do  while (0)
# define switch_mm(a,b,c)	alpha_mv.mv_switch_mm((a),(b),(c))
# define activate_mm(x,y)	alpha_mv.mv_activate_mm((x),(y))
# ifdef CONFIG_ALPHA_EV4
#  define switch_mm(a,b,c)	ev4_switch_mm((a),(b),(c))
#  define activate_mm(x,y)	ev4_activate_mm((x),(y))
# else
#  define switch_mm(a,b,c)	ev5_switch_mm((a),(b),(c))
#  define activate_mm(x,y)	ev5_activate_mm((x),(y))
# endif
static inline int
init_new_context(struct task_struct *tsk, struct mm_struct *mm)
extern inline void
destroy_context(struct mm_struct *mm)
static inline void
enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
#undef __EXTERN_INLINE
#undef __MMU_EXTERN_INLINE
