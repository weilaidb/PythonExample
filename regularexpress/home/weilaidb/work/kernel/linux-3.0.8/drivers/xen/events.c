static DEFINE_SPINLOCK(irq_mapping_update_lock);
static LIST_HEAD(xen_irq_list_head);
static DEFINE_PER_CPU(int [NR_VIRQS], virq_to_irq) = ;
static DEFINE_PER_CPU(int [XEN_NR_IPIS], ipi_to_irq) = ;
enum xen_irq_type ;
struct irq_info
;
#define PIRQ_NEEDS_EOI	(1 << 0)
#define PIRQ_SHAREABLE	(1 << 1)
static int *evtchn_to_irq;
static DEFINE_PER_CPU(unsigned long [NR_EVENT_CHANNELS/BITS_PER_LONG],
cpu_evtchn_mask);
#define VALID_EVTCHN(chn)	((chn) != 0)
static struct irq_chip xen_dynamic_chip;
static struct irq_chip xen_percpu_chip;
static struct irq_chip xen_pirq_chip;
static void enable_dynirq(struct irq_data *data);
static void disable_dynirq(struct irq_data *data);
static struct irq_info *info_for_irq(unsigned irq)
static void xen_irq_info_common_init(struct irq_info *info,
unsigned irq,
enum xen_irq_type type,
unsigned short evtchn,
unsigned short cpu)
static void xen_irq_info_evtchn_init(unsigned irq,
unsigned short evtchn)
static void xen_irq_info_ipi_init(unsigned cpu,
unsigned irq,
unsigned short evtchn,
enum ipi_vector ipi)
static void xen_irq_info_virq_init(unsigned cpu,
unsigned irq,
unsigned short evtchn,
unsigned short virq)
static void xen_irq_info_pirq_init(unsigned irq,
unsigned short evtchn,
unsigned short pirq,
unsigned short gsi,
unsigned short vector,
uint16_t domid,
unsigned char flags)
static unsigned int evtchn_from_irq(unsigned irq)
unsigned irq_from_evtchn(unsigned int evtchn)
EXPORT_SYMBOL_GPL(irq_from_evtchn);
static enum ipi_vector ipi_from_irq(unsigned irq)
static unsigned virq_from_irq(unsigned irq)
static unsigned pirq_from_irq(unsigned irq)
static enum xen_irq_type type_from_irq(unsigned irq)
static unsigned cpu_from_irq(unsigned irq)
static unsigned int cpu_from_evtchn(unsigned int evtchn)
static bool pirq_needs_eoi(unsigned irq)
static inline unsigned long active_evtchns(unsigned int cpu,
struct shared_info *sh,
unsigned int idx)
static void bind_evtchn_to_cpu(unsigned int chn, unsigned int cpu)
static void init_evtchn_cpu_bindings(void)
static inline void clear_evtchn(int port)
static inline void set_evtchn(int port)
static inline int test_evtchn(int port)
void notify_remote_via_irq(int irq)
EXPORT_SYMBOL_GPL(notify_remote_via_irq);
static void mask_evtchn(int port)
static void unmask_evtchn(int port)
static void xen_irq_init(unsigned irq)
static int __must_check xen_allocate_irq_dynamic(void)
static int __must_check xen_allocate_irq_gsi(unsigned gsi)
static void xen_free_irq(unsigned irq)
static void pirq_query_unmask(int irq)
static bool probing_irq(int irq)
static void eoi_pirq(struct irq_data *data)
static void mask_ack_pirq(struct irq_data *data)
static unsigned int __startup_pirq(unsigned int irq)
static unsigned int startup_pirq(struct irq_data *data)
static void shutdown_pirq(struct irq_data *data)
static void enable_pirq(struct irq_data *data)
static void disable_pirq(struct irq_data *data)
static int find_irq_by_gsi(unsigned gsi)
int xen_allocate_pirq_gsi(unsigned gsi)
int xen_bind_pirq_gsi_to_irq(unsigned gsi,
unsigned pirq, int shareable, char *name)
int xen_allocate_pirq_msi(struct pci_dev *dev, struct msi_desc *msidesc)
int xen_bind_pirq_msi_to_irq(struct pci_dev *dev, struct msi_desc *msidesc,
int pirq, int vector, const char *name,
domid_t domid)
int xen_destroy_irq(int irq)
int xen_irq_from_pirq(unsigned pirq)
int xen_pirq_from_irq(unsigned irq)
EXPORT_SYMBOL_GPL(xen_pirq_from_irq);
int bind_evtchn_to_irq(unsigned int evtchn)
EXPORT_SYMBOL_GPL(bind_evtchn_to_irq);
static int bind_ipi_to_irq(unsigned int ipi, unsigned int cpu)
static int bind_interdomain_evtchn_to_irq(unsigned int remote_domain,
unsigned int remote_port)
int bind_virq_to_irq(unsigned int virq, unsigned int cpu)
static void unbind_from_irq(unsigned int irq)
int bind_evtchn_to_irqhandler(unsigned int evtchn,
irq_handler_t handler,
unsigned long irqflags,
const char *devname, void *dev_id)
EXPORT_SYMBOL_GPL(bind_evtchn_to_irqhandler);
int bind_interdomain_evtchn_to_irqhandler(unsigned int remote_domain,
unsigned int remote_port,
irq_handler_t handler,
unsigned long irqflags,
const char *devname,
void *dev_id)
EXPORT_SYMBOL_GPL(bind_interdomain_evtchn_to_irqhandler);
int bind_virq_to_irqhandler(unsigned int virq, unsigned int cpu,
irq_handler_t handler,
unsigned long irqflags, const char *devname, void *dev_id)
EXPORT_SYMBOL_GPL(bind_virq_to_irqhandler);
int bind_ipi_to_irqhandler(enum ipi_vector ipi,
unsigned int cpu,
irq_handler_t handler,
unsigned long irqflags,
const char *devname,
void *dev_id)
void unbind_from_irqhandler(unsigned int irq, void *dev_id)
EXPORT_SYMBOL_GPL(unbind_from_irqhandler);
void xen_send_IPI_one(unsigned int cpu, enum ipi_vector vector)
irqreturn_t xen_debug_interrupt(int irq, void *dev_id)
static DEFINE_PER_CPU(unsigned, xed_nesting_count);
static DEFINE_PER_CPU(unsigned int, current_word_idx);
static DEFINE_PER_CPU(unsigned int, current_bit_idx);
#define MASK_LSBS(w, i) (w & ((~0UL) << i))
static void __xen_evtchn_do_upcall(void)
void xen_evtchn_do_upcall(struct pt_regs *regs)
void xen_hvm_evtchn_do_upcall(void)
EXPORT_SYMBOL_GPL(xen_hvm_evtchn_do_upcall);
void rebind_evtchn_irq(int evtchn, int irq)
static int rebind_irq_to_cpu(unsigned irq, unsigned tcpu)
static int set_affinity_irq(struct irq_data *data, const struct cpumask *dest,
bool force)
int resend_irq_on_evtchn(unsigned int irq)
static void enable_dynirq(struct irq_data *data)
static void disable_dynirq(struct irq_data *data)
static void ack_dynirq(struct irq_data *data)
static void mask_ack_dynirq(struct irq_data *data)
static int retrigger_dynirq(struct irq_data *data)
static void restore_pirqs(void)
static void restore_cpu_virqs(unsigned int cpu)
static void restore_cpu_ipis(unsigned int cpu)
void xen_clear_irq_pending(int irq)
EXPORT_SYMBOL(xen_clear_irq_pending);
void xen_set_irq_pending(int irq)
bool xen_test_irq_pending(int irq)
void xen_poll_irq_timeout(int irq, u64 timeout)
EXPORT_SYMBOL(xen_poll_irq_timeout);
void xen_poll_irq(int irq)
int xen_test_irq_shared(int irq)
EXPORT_SYMBOL_GPL(xen_test_irq_shared);
void xen_irq_resume(void)
static struct irq_chip xen_dynamic_chip __read_mostly = ;
static struct irq_chip xen_pirq_chip __read_mostly = ;
static struct irq_chip xen_percpu_chip __read_mostly = ;
int xen_set_callback_via(uint64_t via)
EXPORT_SYMBOL_GPL(xen_set_callback_via);
void xen_callback_vector(void)
void xen_callback_vector(void)
void __init xen_init_IRQ(void)
