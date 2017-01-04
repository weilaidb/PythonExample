#define _PSERIES_PSERIES_H
struct device_node;
extern void request_event_sources_irqs(struct device_node *np,
irq_handler_t handler, const char *name);
extern void __init fw_feature_init(const char *hypertas, unsigned long len);
struct pt_regs;
extern int pSeries_system_reset_exception(struct pt_regs *regs);
extern int pSeries_machine_check_exception(struct pt_regs *regs);
extern void smp_init_pseries_mpic(void);
extern void smp_init_pseries_xics(void);
static inline void smp_init_pseries_mpic(void) ;
static inline void smp_init_pseries_xics(void) ;
extern void setup_kexec_cpu_down_xics(void);
extern void setup_kexec_cpu_down_mpic(void);
static inline void setup_kexec_cpu_down_xics(void)
static inline void setup_kexec_cpu_down_mpic(void)
extern void pSeries_final_fixup(void);
extern unsigned long rtas_poweron_auto;
extern void find_udbg_vterm(void);
extern void dlpar_free_cc_nodes(struct device_node *);
extern void dlpar_free_cc_property(struct property *);
extern struct device_node *dlpar_configure_connector(u32);
extern int dlpar_attach_node(struct device_node *);
extern int dlpar_detach_node(struct device_node *);
