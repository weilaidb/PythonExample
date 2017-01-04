#define _LINUX_IRQ_H
struct seq_file;
struct irq_desc;
struct irq_data;
typedef	void (*irq_flow_handler_t)(unsigned int irq,
struct irq_desc *desc);
typedef	void (*irq_preflow_handler_t)(struct irq_data *data);
enum ;
#define IRQF_MODIFY_MASK	\
(IRQ_TYPE_SENSE_MASK | IRQ_NOPROBE | IRQ_NOREQUEST | \
IRQ_NOAUTOEN | IRQ_MOVE_PCNTXT | IRQ_LEVEL | IRQ_NO_BALANCING | \
IRQ_PER_CPU | IRQ_NESTED_THREAD)
#define IRQ_NO_BALANCING_MASK	(IRQ_PER_CPU | IRQ_NO_BALANCING)
static inline __deprecated bool CHECK_IRQ_PER_CPU(unsigned int status)
enum ;
struct msi_desc;
struct irq_data ;
enum ;
static inline bool irqd_is_setaffinity_pending(struct irq_data *d)
static inline bool irqd_is_per_cpu(struct irq_data *d)
static inline bool irqd_can_balance(struct irq_data *d)
static inline bool irqd_affinity_was_set(struct irq_data *d)
static inline void irqd_mark_affinity_was_set(struct irq_data *d)
static inline u32 irqd_get_trigger_type(struct irq_data *d)
static inline void irqd_set_trigger_type(struct irq_data *d, u32 type)
static inline bool irqd_is_level_type(struct irq_data *d)
static inline bool irqd_is_wakeup_set(struct irq_data *d)
static inline bool irqd_can_move_in_process_context(struct irq_data *d)
static inline bool irqd_irq_disabled(struct irq_data *d)
static inline bool irqd_irq_masked(struct irq_data *d)
static inline bool irqd_irq_inprogress(struct irq_data *d)
static inline void irqd_set_chained_irq_inprogress(struct irq_data *d)
static inline void irqd_clr_chained_irq_inprogress(struct irq_data *d)
struct irq_chip ;
enum ;
# define NR_IRQS_LEGACY 0
# define ARCH_IRQ_INIT_FLAGS	0
#define IRQ_DEFAULT_INIT_FLAGS	ARCH_IRQ_INIT_FLAGS
struct irqaction;
extern int setup_irq(unsigned int irq, struct irqaction *new);
extern void remove_irq(unsigned int irq, struct irqaction *act);
extern void irq_cpu_online(void);
extern void irq_cpu_offline(void);
extern int __irq_set_affinity_locked(struct irq_data *data,  const struct cpumask *cpumask);
#if defined(CONFIG_SMP) && defined(CONFIG_GENERIC_PENDING_IRQ)
void irq_move_irq(struct irq_data *data);
void irq_move_masked_irq(struct irq_data *data);
static inline void irq_move_irq(struct irq_data *data)
static inline void irq_move_masked_irq(struct irq_data *data)
extern int no_irq_affinity;
extern void handle_level_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_fasteoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_eoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_simple_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_percpu_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_bad_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_nested_irq(unsigned int irq);
extern void note_interrupt(unsigned int irq, struct irq_desc *desc,
irqreturn_t action_ret);
extern int noirqdebug_setup(char *str);
extern int can_request_irq(unsigned int irq, unsigned long irqflags);
extern struct irq_chip no_irq_chip;
extern struct irq_chip dummy_irq_chip;
extern void
irq_set_chip_and_handler_name(unsigned int irq, struct irq_chip *chip,
irq_flow_handler_t handle, const char *name);
static inline void irq_set_chip_and_handler(unsigned int irq, struct irq_chip *chip,
irq_flow_handler_t handle)
extern void
__irq_set_handler(unsigned int irq, irq_flow_handler_t handle, int is_chained,
const char *name);
static inline void
irq_set_handler(unsigned int irq, irq_flow_handler_t handle)
static inline void
irq_set_chained_handler(unsigned int irq, irq_flow_handler_t handle)
void irq_modify_status(unsigned int irq, unsigned long clr, unsigned long set);
static inline void irq_set_status_flags(unsigned int irq, unsigned long set)
static inline void irq_clear_status_flags(unsigned int irq, unsigned long clr)
static inline void irq_set_noprobe(unsigned int irq)
static inline void irq_set_probe(unsigned int irq)
static inline void irq_set_nothread(unsigned int irq)
static inline void irq_set_thread(unsigned int irq)
static inline void irq_set_nested_thread(unsigned int irq, bool nest)
extern unsigned int create_irq_nr(unsigned int irq_want, int node);
extern int create_irq(void);
extern void destroy_irq(unsigned int irq);
extern void dynamic_irq_cleanup(unsigned int irq);
static inline void dynamic_irq_init(unsigned int irq)
extern int irq_set_chip(unsigned int irq, struct irq_chip *chip);
extern int irq_set_handler_data(unsigned int irq, void *data);
extern int irq_set_chip_data(unsigned int irq, void *data);
extern int irq_set_irq_type(unsigned int irq, unsigned int type);
extern int irq_set_msi_desc(unsigned int irq, struct msi_desc *entry);
extern struct irq_data *irq_get_irq_data(unsigned int irq);
static inline struct irq_chip *irq_get_chip(unsigned int irq)
static inline struct irq_chip *irq_data_get_irq_chip(struct irq_data *d)
static inline void *irq_get_chip_data(unsigned int irq)
static inline void *irq_data_get_irq_chip_data(struct irq_data *d)
static inline void *irq_get_handler_data(unsigned int irq)
static inline void *irq_data_get_irq_handler_data(struct irq_data *d)
static inline struct msi_desc *irq_get_msi_desc(unsigned int irq)
static inline struct msi_desc *irq_data_get_msi(struct irq_data *d)
int irq_alloc_descs(int irq, unsigned int from, unsigned int cnt, int node);
void irq_free_descs(unsigned int irq, unsigned int cnt);
int irq_reserve_irqs(unsigned int from, unsigned int cnt);
static inline int irq_alloc_desc(int node)
static inline int irq_alloc_desc_at(unsigned int at, int node)
static inline int irq_alloc_desc_from(unsigned int from, int node)
static inline void irq_free_desc(unsigned int irq)
static inline int irq_reserve_irq(unsigned int irq)
# define irq_reg_writel(val, addr)	writel(val, addr)
# define irq_reg_readl(addr)		readl(addr)
struct irq_chip_regs ;
struct irq_chip_type ;
struct irq_chip_generic ;
enum irq_gc_flags ;
void irq_gc_noop(struct irq_data *d);
void irq_gc_mask_disable_reg(struct irq_data *d);
void irq_gc_mask_set_bit(struct irq_data *d);
void irq_gc_mask_clr_bit(struct irq_data *d);
void irq_gc_unmask_enable_reg(struct irq_data *d);
void irq_gc_ack_set_bit(struct irq_data *d);
void irq_gc_ack_clr_bit(struct irq_data *d);
void irq_gc_mask_disable_reg_and_ack(struct irq_data *d);
void irq_gc_eoi(struct irq_data *d);
int irq_gc_set_wake(struct irq_data *d, unsigned int on);
struct irq_chip_generic *
irq_alloc_generic_chip(const char *name, int nr_ct, unsigned int irq_base,
void __iomem *reg_base, irq_flow_handler_t handler);
void irq_setup_generic_chip(struct irq_chip_generic *gc, u32 msk,
enum irq_gc_flags flags, unsigned int clr,
unsigned int set);
int irq_setup_alt_chip(struct irq_data *d, unsigned int type);
void irq_remove_generic_chip(struct irq_chip_generic *gc, u32 msk,
unsigned int clr, unsigned int set);
static inline struct irq_chip_type *irq_data_get_chip_type(struct irq_data *d)
#define IRQ_MSK(n) (u32)((n) < 32 ? ((1 << (n)) - 1) : UINT_MAX)
static inline void irq_gc_lock(struct irq_chip_generic *gc)
static inline void irq_gc_unlock(struct irq_chip_generic *gc)
static inline void irq_gc_lock(struct irq_chip_generic *gc)
static inline void irq_gc_unlock(struct irq_chip_generic *gc)
