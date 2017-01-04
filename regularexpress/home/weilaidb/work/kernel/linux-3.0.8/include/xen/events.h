#define _XEN_EVENTS_H
int bind_evtchn_to_irq(unsigned int evtchn);
int bind_evtchn_to_irqhandler(unsigned int evtchn,
irq_handler_t handler,
unsigned long irqflags, const char *devname,
void *dev_id);
int bind_virq_to_irq(unsigned int virq, unsigned int cpu);
int bind_virq_to_irqhandler(unsigned int virq, unsigned int cpu,
irq_handler_t handler,
unsigned long irqflags, const char *devname,
void *dev_id);
int bind_ipi_to_irqhandler(enum ipi_vector ipi,
unsigned int cpu,
irq_handler_t handler,
unsigned long irqflags,
const char *devname,
void *dev_id);
int bind_interdomain_evtchn_to_irqhandler(unsigned int remote_domain,
unsigned int remote_port,
irq_handler_t handler,
unsigned long irqflags,
const char *devname,
void *dev_id);
void unbind_from_irqhandler(unsigned int irq, void *dev_id);
void xen_send_IPI_one(unsigned int cpu, enum ipi_vector vector);
int resend_irq_on_evtchn(unsigned int irq);
void rebind_evtchn_irq(int evtchn, int irq);
static inline void notify_remote_via_evtchn(int port)
void notify_remote_via_irq(int irq);
void xen_irq_resume(void);
void xen_clear_irq_pending(int irq);
void xen_set_irq_pending(int irq);
bool xen_test_irq_pending(int irq);
void xen_poll_irq(int irq);
void xen_poll_irq_timeout(int irq, u64 timeout);
unsigned irq_from_evtchn(unsigned int evtchn);
void xen_hvm_callback_vector(void);
extern int xen_have_vector_callback;
int xen_set_callback_via(uint64_t via);
void xen_evtchn_do_upcall(struct pt_regs *regs);
void xen_hvm_evtchn_do_upcall(void);
int xen_allocate_pirq_gsi(unsigned gsi);
int xen_bind_pirq_gsi_to_irq(unsigned gsi,
unsigned pirq, int shareable, char *name);
int xen_allocate_pirq_msi(struct pci_dev *dev, struct msi_desc *msidesc);
int xen_bind_pirq_msi_to_irq(struct pci_dev *dev, struct msi_desc *msidesc,
int pirq, int vector, const char *name,
domid_t domid);
int xen_destroy_irq(int irq);
int xen_irq_from_pirq(unsigned pirq);
int xen_pirq_from_irq(unsigned irq);
int xen_test_irq_shared(int irq);
