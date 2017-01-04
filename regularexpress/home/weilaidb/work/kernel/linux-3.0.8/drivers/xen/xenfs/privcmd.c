static int privcmd_enforce_singleshot_mapping(struct vm_area_struct *vma);
static long privcmd_ioctl_hypercall(void __user *udata)
static void free_page_list(struct list_head *pages)
static int gather_array(struct list_head *pagelist,
unsigned nelem, size_t size,
void __user *data)
static int traverse_pages(unsigned nelem, size_t size,
struct list_head *pos,
int (*fn)(void *data, void *state),
void *state)
struct mmap_mfn_state ;
static int mmap_mfn_range(void *data, void *state)
static long privcmd_ioctl_mmap(void __user *udata)
struct mmap_batch_state ;
static int mmap_batch_fn(void *data, void *state)
static int mmap_return_errors(void *data, void *state)
static struct vm_operations_struct privcmd_vm_ops;
static long privcmd_ioctl_mmap_batch(void __user *udata)
static long privcmd_ioctl(struct file *file,
unsigned int cmd, unsigned long data)
static int privcmd_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static struct vm_operations_struct privcmd_vm_ops = ;
static int privcmd_mmap(struct file *file, struct vm_area_struct *vma)
static int privcmd_enforce_singleshot_mapping(struct vm_area_struct *vma)
const struct file_operations privcmd_file_ops = ;
