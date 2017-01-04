struct _irqfd ;
static struct workqueue_struct *irqfd_cleanup_wq;
static void
irqfd_inject(struct work_struct *work)
static void
irqfd_shutdown(struct work_struct *work)
static bool
irqfd_is_active(struct _irqfd *irqfd)
static void
irqfd_deactivate(struct _irqfd *irqfd)
static int
irqfd_wakeup(wait_queue_t *wait, unsigned mode, int sync, void *key)
static void
irqfd_ptable_queue_proc(struct file *file, wait_queue_head_t *wqh,
poll_table *pt)
static void irqfd_update(struct kvm *kvm, struct _irqfd *irqfd,
struct kvm_irq_routing_table *irq_rt)
static int
kvm_irqfd_assign(struct kvm *kvm, int fd, int gsi)
void
kvm_eventfd_init(struct kvm *kvm)
static int
kvm_irqfd_deassign(struct kvm *kvm, int fd, int gsi)
int
kvm_irqfd(struct kvm *kvm, int fd, int gsi, int flags)
void
kvm_irqfd_release(struct kvm *kvm)
void kvm_irq_routing_update(struct kvm *kvm,
struct kvm_irq_routing_table *irq_rt)
static int __init irqfd_module_init(void)
static void __exit irqfd_module_exit(void)
module_init(irqfd_module_init);
module_exit(irqfd_module_exit);
struct _ioeventfd ;
static inline struct _ioeventfd *
to_ioeventfd(struct kvm_io_device *dev)
static void
ioeventfd_release(struct _ioeventfd *p)
static bool
ioeventfd_in_range(struct _ioeventfd *p, gpa_t addr, int len, const void *val)
static int
ioeventfd_write(struct kvm_io_device *this, gpa_t addr, int len,
const void *val)
static void
ioeventfd_destructor(struct kvm_io_device *this)
static const struct kvm_io_device_ops ioeventfd_ops = ;
static bool
ioeventfd_check_collision(struct kvm *kvm, struct _ioeventfd *p)
static int
kvm_assign_ioeventfd(struct kvm *kvm, struct kvm_ioeventfd *args)
static int
kvm_deassign_ioeventfd(struct kvm *kvm, struct kvm_ioeventfd *args)
int
kvm_ioeventfd(struct kvm *kvm, struct kvm_ioeventfd *args)
