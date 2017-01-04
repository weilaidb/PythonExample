static struct kvm_assigned_dev_kernel *kvm_find_assigned_dev(struct list_head *head,
int assigned_dev_id)
static int find_index_from_host_irq(struct kvm_assigned_dev_kernel
*assigned_dev, int irq)
static irqreturn_t kvm_assigned_dev_thread(int irq, void *dev_id)
static void kvm_assigned_dev_ack_irq(struct kvm_irq_ack_notifier *kian)
static void deassign_guest_irq(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
static void deassign_host_irq(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
static int kvm_deassign_irq(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev,
unsigned long irq_requested_type)
static void kvm_free_assigned_irq(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
static void kvm_free_assigned_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel
*assigned_dev)
void kvm_free_all_assigned_devices(struct kvm *kvm)
static int assigned_device_enable_host_intx(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev)
static int assigned_device_enable_host_msi(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev)
static int assigned_device_enable_host_msix(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev)
static int assigned_device_enable_guest_intx(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev,
struct kvm_assigned_irq *irq)
static int assigned_device_enable_guest_msi(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev,
struct kvm_assigned_irq *irq)
static int assigned_device_enable_guest_msix(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev,
struct kvm_assigned_irq *irq)
static int assign_host_irq(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev,
__u32 host_irq_type)
static int assign_guest_irq(struct kvm *kvm,
struct kvm_assigned_dev_kernel *dev,
struct kvm_assigned_irq *irq,
unsigned long guest_irq_type)
static int kvm_vm_ioctl_assign_irq(struct kvm *kvm,
struct kvm_assigned_irq *assigned_irq)
static int kvm_vm_ioctl_deassign_dev_irq(struct kvm *kvm,
struct kvm_assigned_irq
*assigned_irq)
static int kvm_vm_ioctl_assign_device(struct kvm *kvm,
struct kvm_assigned_pci_dev *assigned_dev)
static int kvm_vm_ioctl_deassign_device(struct kvm *kvm,
struct kvm_assigned_pci_dev *assigned_dev)
static int kvm_vm_ioctl_set_msix_nr(struct kvm *kvm,
struct kvm_assigned_msix_nr *entry_nr)
static int kvm_vm_ioctl_set_msix_entry(struct kvm *kvm,
struct kvm_assigned_msix_entry *entry)
long kvm_vm_ioctl_assigned_device(struct kvm *kvm, unsigned ioctl,
unsigned long arg)
