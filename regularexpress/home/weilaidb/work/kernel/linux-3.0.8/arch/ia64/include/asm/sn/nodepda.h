#define _ASM_IA64_SN_NODEPDA_H
struct phys_cpuid ;
struct nodepda_s ;
typedef struct nodepda_s nodepda_t;
DECLARE_PER_CPU(struct nodepda_s *, __sn_nodepda);
#define sn_nodepda		(__get_cpu_var(__sn_nodepda))
#define	NODEPDA(cnodeid)	(sn_nodepda->pernode_pdaindr[cnodeid])
#define is_headless_node(cnodeid)	(nr_cpus_node(cnodeid) == 0)
