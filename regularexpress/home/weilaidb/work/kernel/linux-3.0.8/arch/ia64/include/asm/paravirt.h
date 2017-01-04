#define __ASM_PARAVIRT_H
struct pv_fsys_data ;
extern struct pv_fsys_data pv_fsys_data;
unsigned long *paravirt_get_fsyscall_table(void);
char *paravirt_get_fsys_bubble_down(void);
enum pv_gate_patchlist ;
struct pv_patchdata ;
extern struct pv_patchdata pv_patchdata;
unsigned long paravirt_get_gate_patchlist(enum pv_gate_patchlist type);
void *paravirt_get_gate_section(void);
#define PARAVIRT_HYPERVISOR_TYPE_DEFAULT	0
#define PARAVIRT_HYPERVISOR_TYPE_XEN		1
struct pv_info ;
extern struct pv_info pv_info;
static inline int paravirt_enabled(void)
static inline unsigned int get_kernel_rpl(void)
struct rsvd_region;
struct pv_init_ops ;
extern struct pv_init_ops pv_init_ops;
static inline void paravirt_banner(void)
static inline int paravirt_reserve_memory(struct rsvd_region *region)
static inline void paravirt_arch_setup_early(void)
static inline void paravirt_arch_setup_console(char **cmdline_p)
static inline int paravirt_arch_setup_nomca(void)
static inline void paravirt_post_smp_prepare_boot_cpu(void)
struct pv_iosapic_ops ;
extern struct pv_iosapic_ops pv_iosapic_ops;
static inline void
iosapic_pcat_compat_init(void)
static inline struct irq_chip*
iosapic_get_irq_chip(unsigned long trigger)
static inline unsigned int
__iosapic_read(char __iomem *iosapic, unsigned int reg)
static inline void
__iosapic_write(char __iomem *iosapic, unsigned int reg, u32 val)
struct pv_irq_ops ;
extern struct pv_irq_ops pv_irq_ops;
static inline void
ia64_register_ipi(void)
static inline int
assign_irq_vector(int irq)
static inline void
free_irq_vector(int vector)
static inline void
register_percpu_irq(ia64_vector vec, struct irqaction *action)
static inline void
ia64_resend_irq(unsigned int vector)
extern struct itc_jitter_data_t itc_jitter_data;
extern volatile int time_keeper_id;
struct pv_time_ops ;
extern struct pv_time_ops pv_time_ops;
static inline void
paravirt_init_missing_ticks_accounting(int cpu)
static inline int
paravirt_do_steal_accounting(unsigned long *new_itm)
static inline unsigned long long paravirt_sched_clock(void)
#define paravirt_banner()				do  while (0)
#define paravirt_reserve_memory(region)			0
#define paravirt_arch_setup_early()			do  while (0)
#define paravirt_arch_setup_console(cmdline_p)		do  while (0)
#define paravirt_arch_setup_nomca()			0
#define paravirt_post_smp_prepare_boot_cpu()		do  while (0)
#define paravirt_init_missing_ticks_accounting(cpu)	do  while (0)
#define paravirt_do_steal_accounting(new_itm)		0
