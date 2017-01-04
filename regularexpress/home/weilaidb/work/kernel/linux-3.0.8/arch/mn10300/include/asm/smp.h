#define _ASM_SMP_H
#define RESCHEDULE_IPI		63
#define CALL_FUNC_SINGLE_IPI	192
#define LOCAL_TIMER_IPI		193
#define FLUSH_CACHE_IPI		194
#define CALL_FUNCTION_NMI_IPI	195
#define DEBUGGER_NMI_IPI	196
#define SMP_BOOT_IRQ		195
#define RESCHEDULE_GxICR_LV	GxICR_LEVEL_6
#define CALL_FUNCTION_GxICR_LV	GxICR_LEVEL_4
#define LOCAL_TIMER_GxICR_LV	GxICR_LEVEL_4
#define FLUSH_CACHE_GxICR_LV	GxICR_LEVEL_0
#define SMP_BOOT_GxICR_LV	GxICR_LEVEL_0
#define DEBUGGER_GxICR_LV	CONFIG_DEBUGGER_IRQ_LEVEL
#define TIME_OUT_COUNT_BOOT_IPI	100
#define DELAY_TIME_BOOT_IPI	75000
#define arch_smp_processor_id()	(CPUID)
static inline int cpu_logical_map(int cpu)
static inline int cpu_number_map(int cpu)
extern cpumask_t cpu_boot_map;
extern void smp_init_cpus(void);
extern void smp_cache_interrupt(void);
extern void send_IPI_allbutself(int irq);
extern int smp_nmi_call_function(smp_call_func_t func, void *info, int wait);
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
extern int __cpu_disable(void);
extern void __cpu_die(unsigned int cpu);
static inline void smp_init_cpus(void)
