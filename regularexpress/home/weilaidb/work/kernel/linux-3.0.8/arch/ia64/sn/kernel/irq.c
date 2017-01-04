static void register_intr_pda(struct sn_irq_info *sn_irq_info);
static void unregister_intr_pda(struct sn_irq_info *sn_irq_info);
extern int sn_ioif_inited;
struct list_head **sn_irq_lh;
static DEFINE_SPINLOCK(sn_irq_info_lock);
u64 sn_intr_alloc(nasid_t local_nasid, int local_widget,
struct sn_irq_info *sn_irq_info,
int req_irq, nasid_t req_nasid,
int req_slice)
void sn_intr_free(nasid_t local_nasid, int local_widget,
struct sn_irq_info *sn_irq_info)
u64 sn_intr_redirect(nasid_t local_nasid, int local_widget,
struct sn_irq_info *sn_irq_info,
nasid_t req_nasid, int req_slice)
static unsigned int sn_startup_irq(struct irq_data *data)
static void sn_shutdown_irq(struct irq_data *data)
extern void ia64_mca_register_cpev(int);
static void sn_disable_irq(struct irq_data *data)
static void sn_enable_irq(struct irq_data *data)
static void sn_ack_irq(struct irq_data *data)
static void sn_irq_info_free(struct rcu_head *head);
struct sn_irq_info *sn_retarget_vector(struct sn_irq_info *sn_irq_info,
nasid_t nasid, int slice)
static int sn_set_affinity_irq(struct irq_data *data,
const struct cpumask *mask, bool force)
void sn_set_err_irq_affinity(unsigned int irq)
void sn_set_err_irq_affinity(unsigned int irq)
static void
sn_mask_irq(struct irq_data *data)
static void
sn_unmask_irq(struct irq_data *data)
struct irq_chip irq_type_sn = ;
ia64_vector sn_irq_to_vector(int irq)
unsigned int sn_local_vector_to_irq(u8 vector)
void sn_irq_init(void)
static void register_intr_pda(struct sn_irq_info *sn_irq_info)
static void unregister_intr_pda(struct sn_irq_info *sn_irq_info)
static void sn_irq_info_free(struct rcu_head *head)
void sn_irq_fixup(struct pci_dev *pci_dev, struct sn_irq_info *sn_irq_info)
void sn_irq_unfixup(struct pci_dev *pci_dev)
static inline void
sn_call_force_intr_provider(struct sn_irq_info *sn_irq_info)
static void sn_check_intr(int irq, struct sn_irq_info *sn_irq_info)
void sn_lb_int_war_check(void)
void __init sn_irq_lh_init(void)
