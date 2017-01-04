#define _ASM_X86_UV_UV_H
enum uv_system_type ;
struct cpumask;
struct mm_struct;
extern enum uv_system_type get_uv_system_type(void);
extern int is_uv_system(void);
extern void uv_cpu_init(void);
extern void uv_nmi_init(void);
extern void uv_system_init(void);
extern const struct cpumask *uv_flush_tlb_others(const struct cpumask *cpumask,
struct mm_struct *mm,
unsigned long va,
unsigned int cpu);
static inline enum uv_system_type get_uv_system_type(void)
static inline int is_uv_system(void)
static inline void uv_cpu_init(void)
static inline void uv_system_init(void)
static inline const struct cpumask *
uv_flush_tlb_others(const struct cpumask *cpumask, struct mm_struct *mm,
unsigned long va, unsigned int cpu)
