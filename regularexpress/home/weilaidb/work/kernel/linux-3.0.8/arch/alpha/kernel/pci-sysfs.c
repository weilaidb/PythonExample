static int hose_mmap_page_range(struct pci_controller *hose,
struct vm_area_struct *vma,
enum pci_mmap_state mmap_type, int sparse)
static int __pci_mmap_fits(struct pci_dev *pdev, int num,
struct vm_area_struct *vma, int sparse)
static int pci_mmap_resource(struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma, int sparse)
static int pci_mmap_resource_sparse(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma)
static int pci_mmap_resource_dense(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
struct vm_area_struct *vma)
void pci_remove_resource_files(struct pci_dev *pdev)
static int sparse_mem_mmap_fits(struct pci_dev *pdev, int num)
static int pci_create_one_attr(struct pci_dev *pdev, int num, char *name,
char *suffix, struct bin_attribute *res_attr,
unsigned long sparse)
static int pci_create_attr(struct pci_dev *pdev, int num)
int pci_create_resource_files(struct pci_dev *pdev)
static int __legacy_mmap_fits(struct pci_controller *hose,
struct vm_area_struct *vma,
unsigned long res_size, int sparse)
static inline int has_sparse(struct pci_controller *hose,
enum pci_mmap_state mmap_type)
int pci_mmap_legacy_page_range(struct pci_bus *bus, struct vm_area_struct *vma,
enum pci_mmap_state mmap_type)
void pci_adjust_legacy_attr(struct pci_bus *bus, enum pci_mmap_state mmap_type)
int pci_legacy_read(struct pci_bus *bus, loff_t port, u32 *val, size_t size)
int pci_legacy_write(struct pci_bus *bus, loff_t port, u32 val, size_t size)
