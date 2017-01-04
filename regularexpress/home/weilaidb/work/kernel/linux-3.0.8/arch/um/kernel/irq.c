static struct irq_fd *active_fds = NULL;
static struct irq_fd **last_irq_ptr = &active_fds;
extern void free_irqs(void);
void sigio_handler(int sig, struct uml_pt_regs *regs)
static DEFINE_SPINLOCK(irq_lock);
static int activate_fd(int irq, int fd, int type, void *dev_id)
static void free_irq_by_cb(int (*test)(struct irq_fd *, void *), void *arg)
struct irq_and_dev ;
static int same_irq_and_dev(struct irq_fd *irq, void *d)
static void free_irq_by_irq_and_dev(unsigned int irq, void *dev)
static int same_fd(struct irq_fd *irq, void *fd)
void free_irq_by_fd(int fd)
static struct irq_fd *find_irq_by_fd(int fd, int irqnum, int *index_out)
void reactivate_fd(int fd, int irqnum)
void deactivate_fd(int fd, int irqnum)
int deactivate_all_fds(void)
unsigned int do_IRQ(int irq, struct uml_pt_regs *regs)
int um_request_irq(unsigned int irq, int fd, int type,
irq_handler_t handler,
unsigned long irqflags, const char * devname,
void *dev_id)
EXPORT_SYMBOL(um_request_irq);
EXPORT_SYMBOL(reactivate_fd);
static void dummy(struct irq_data *d)
static struct irq_chip normal_irq_type = ;
static struct irq_chip SIGVTALRM_irq_type = ;
void __init init_IRQ(void)
static unsigned long pending_mask;
unsigned long to_irq_stack(unsigned long *mask_out)
unsigned long from_irq_stack(int nested)
