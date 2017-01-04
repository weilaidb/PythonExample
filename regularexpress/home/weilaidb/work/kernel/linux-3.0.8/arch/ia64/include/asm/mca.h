#define _ASM_IA64_MCA_H
#if !defined(__ASSEMBLY__)
#define IA64_MCA_RENDEZ_TIMEOUT		(20 * 1000)
typedef struct ia64_fptr  ia64_fptr_t;
typedef union cmcv_reg_u  cmcv_reg_t;
#define cmcv_mask		cmcv_reg_s.cmcr_mask
#define cmcv_vector		cmcv_reg_s.cmcr_vector
enum ;
typedef struct ia64_mc_info_s  ia64_mc_info_t;
struct ia64_sal_os_state ;
enum ;
enum ;
enum ;
struct ia64_mca_cpu ;
extern unsigned long __per_cpu_mca[NR_CPUS];
extern int cpe_vector;
extern int ia64_cpe_irq;
extern void ia64_mca_init(void);
extern void ia64_mca_cpu_init(void *);
extern void ia64_os_mca_dispatch(void);
extern void ia64_os_mca_dispatch_end(void);
extern void ia64_mca_ucmc_handler(struct pt_regs *, struct ia64_sal_os_state *);
extern void ia64_init_handler(struct pt_regs *,
struct switch_stack *,
struct ia64_sal_os_state *);
extern void ia64_os_init_on_kdump(void);
extern void ia64_monarch_init_handler(void);
extern void ia64_slave_init_handler(void);
extern void ia64_mca_cmc_vector_setup(void);
extern int  ia64_reg_MCA_extension(int (*fn)(void *, struct ia64_sal_os_state *));
extern void ia64_unreg_MCA_extension(void);
extern unsigned long ia64_get_rnat(unsigned long *);
extern void ia64_set_psr_mc(void);
extern void ia64_mca_printk(const char * fmt, ...)
__attribute__ ((format (printf, 1, 2)));
struct ia64_mca_notify_die ;
DECLARE_PER_CPU(u64, ia64_mca_pal_base);
#define IA64_MCA_CORRECTED	0x0
#define IA64_MCA_WARM_BOOT	-1
#define IA64_MCA_COLD_BOOT	-2
#define IA64_MCA_HALT		-3
#define IA64_INIT_RESUME	0x0
#define IA64_INIT_WARM_BOOT	-1
#define IA64_MCA_SAME_CONTEXT	0x0
#define IA64_MCA_NEW_CONTEXT	-1
