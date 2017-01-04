#define _ASM_POWERPC_PACA_H
register struct paca_struct *local_paca asm("r13");
#if defined(CONFIG_DEBUG_PREEMPT) && defined(CONFIG_SMP)
extern unsigned int debug_smp_processor_id(void);
#define get_paca()	((void) debug_smp_processor_id(), local_paca)
#define get_paca()	local_paca
#define get_lppaca()	(get_paca()->lppaca_ptr)
#define get_slb_shadow()	(get_paca()->slb_shadow_ptr)
struct task_struct;
struct paca_struct ;
extern struct paca_struct *paca;
extern __initdata struct paca_struct boot_paca;
extern void initialise_paca(struct paca_struct *new_paca, int cpu);
extern void setup_paca(struct paca_struct *new_paca);
extern void allocate_pacas(void);
extern void free_unused_pacas(void);
static inline void allocate_pacas(void) ;
static inline void free_unused_pacas(void) ;
