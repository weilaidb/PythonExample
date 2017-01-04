#define _SPARC_SMP_H
extern unsigned char boot_cpu_id;
extern volatile unsigned long cpu_callin_map[NR_CPUS];
extern cpumask_t smp_commenced_mask;
extern struct linux_prom_registers smp_penguin_ctable;
typedef void (*smpfunc_t)(unsigned long, unsigned long, unsigned long,
unsigned long, unsigned long);
void cpu_panic(void);
extern void smp4m_irq_rotate(int cpu);
void sun4m_init_smp(void);
void sun4d_init_smp(void);
void smp_callin(void);
void smp_boot_cpus(void);
void smp_store_cpu_info(int);
void smp_resched_interrupt(void);
void smp_call_function_single_interrupt(void);
void smp_call_function_interrupt(void);
struct seq_file;
void smp_bogo(struct seq_file *);
void smp_info(struct seq_file *);
BTFIXUPDEF_CALL(void, smp_cross_call, smpfunc_t, cpumask_t, unsigned long, unsigned long, unsigned long, unsigned long)
BTFIXUPDEF_CALL(int, __hard_smp_processor_id, void)
BTFIXUPDEF_CALL(void, smp_ipi_resched, int);
BTFIXUPDEF_CALL(void, smp_ipi_single, int);
BTFIXUPDEF_CALL(void, smp_ipi_mask_one, int);
BTFIXUPDEF_BLACKBOX(hard_smp_processor_id)
BTFIXUPDEF_BLACKBOX(load_current)
#define smp_cross_call(func,mask,arg1,arg2,arg3,arg4) BTFIXUP_CALL(smp_cross_call)(func,mask,arg1,arg2,arg3,arg4)
static inline void xc0(smpfunc_t func)
static inline void xc1(smpfunc_t func, unsigned long arg1)
static inline void xc2(smpfunc_t func, unsigned long arg1, unsigned long arg2)
static inline void xc3(smpfunc_t func, unsigned long arg1, unsigned long arg2,
unsigned long arg3)
static inline void xc4(smpfunc_t func, unsigned long arg1, unsigned long arg2,
unsigned long arg3, unsigned long arg4)
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
static inline int cpu_logical_map(int cpu)
static inline int hard_smp4m_processor_id(void)
static inline int hard_smp4d_processor_id(void)
extern inline int hard_smpleon_processor_id(void)
static inline int hard_smp_processor_id(void)
static inline int hard_smp_processor_id(void)
#define raw_smp_processor_id()		(current_thread_info()->cpu)
#define prof_multiplier(__cpu)		cpu_data(__cpu).multiplier
#define prof_counter(__cpu)		cpu_data(__cpu).counter
void smp_setup_cpu_possible_map(void);
#define MSG_CROSS_CALL         0x0005
#define MBOX_STOPCPU          0xFB
#define MBOX_IDLECPU          0xFC
#define MBOX_IDLECPU2         0xFD
#define MBOX_STOPCPU2         0xFE
#define hard_smp_processor_id()		0
#define smp_setup_cpu_possible_map() do  while (0)
