#define PADATA_H
#define PADATA_CPU_SERIAL   0x01
#define PADATA_CPU_PARALLEL 0x02
struct padata_priv ;
struct padata_list ;
struct padata_serial_queue ;
struct padata_parallel_queue ;
struct padata_cpumask ;
struct parallel_data ;
struct padata_instance ;
extern struct padata_instance *padata_alloc_possible(
struct workqueue_struct *wq);
extern struct padata_instance *padata_alloc(struct workqueue_struct *wq,
const struct cpumask *pcpumask,
const struct cpumask *cbcpumask);
extern void padata_free(struct padata_instance *pinst);
extern int padata_do_parallel(struct padata_instance *pinst,
struct padata_priv *padata, int cb_cpu);
extern void padata_do_serial(struct padata_priv *padata);
extern int padata_set_cpumask(struct padata_instance *pinst, int cpumask_type,
cpumask_var_t cpumask);
extern int padata_set_cpumasks(struct padata_instance *pinst,
cpumask_var_t pcpumask,
cpumask_var_t cbcpumask);
extern int padata_add_cpu(struct padata_instance *pinst, int cpu, int mask);
extern int padata_remove_cpu(struct padata_instance *pinst, int cpu, int mask);
extern int padata_start(struct padata_instance *pinst);
extern void padata_stop(struct padata_instance *pinst);
extern int padata_register_cpumask_notifier(struct padata_instance *pinst,
struct notifier_block *nblock);
extern int padata_unregister_cpumask_notifier(struct padata_instance *pinst,
struct notifier_block *nblock);
