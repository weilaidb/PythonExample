#undef DEBUG
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Derek G. Murray <Derek.Murray@cl.cam.ac.uk>, "
"Gerd Hoffmann <kraxel@redhat.com>");
MODULE_DESCRIPTION("User-space granted page access driver");
static int limit = 1024*1024;
module_param(limit, int, 0644);
MODULE_PARM_DESC(limit, "Maximum number of grants that may be mapped by "
"the gntdev device");
static atomic_t pages_mapped = ATOMIC_INIT(0);
static int use_ptemod;
struct gntdev_priv ;
struct unmap_notify ;
struct grant_map ;
static int unmap_grant_pages(struct grant_map *map, int offset, int pages);
static void gntdev_print_maps(struct gntdev_priv *priv,
char *text, int text_index)
static struct grant_map *gntdev_alloc_map(struct gntdev_priv *priv, int count)
static void gntdev_add_map(struct gntdev_priv *priv, struct grant_map *add)
static struct grant_map *gntdev_find_map_index(struct gntdev_priv *priv,
int index, int count)
static void gntdev_put_map(struct grant_map *map)
static int find_grant_ptes(pte_t *pte, pgtable_t token,
unsigned long addr, void *data)
static int map_grant_pages(struct grant_map *map)
static int __unmap_grant_pages(struct grant_map *map, int offset, int pages)
static int unmap_grant_pages(struct grant_map *map, int offset, int pages)
static void gntdev_vma_open(struct vm_area_struct *vma)
static void gntdev_vma_close(struct vm_area_struct *vma)
static struct vm_operations_struct gntdev_vmops = ;
static void mn_invl_range_start(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long start, unsigned long end)
static void mn_invl_page(struct mmu_notifier *mn,
struct mm_struct *mm,
unsigned long address)
static void mn_release(struct mmu_notifier *mn,
struct mm_struct *mm)
struct mmu_notifier_ops gntdev_mmu_ops = ;
static int gntdev_open(struct inode *inode, struct file *flip)
static int gntdev_release(struct inode *inode, struct file *flip)
static long gntdev_ioctl_map_grant_ref(struct gntdev_priv *priv,
struct ioctl_gntdev_map_grant_ref __user *u)
static long gntdev_ioctl_unmap_grant_ref(struct gntdev_priv *priv,
struct ioctl_gntdev_unmap_grant_ref __user *u)
static long gntdev_ioctl_get_offset_for_vaddr(struct gntdev_priv *priv,
struct ioctl_gntdev_get_offset_for_vaddr __user *u)
static long gntdev_ioctl_notify(struct gntdev_priv *priv, void __user *u)
static long gntdev_ioctl(struct file *flip,
unsigned int cmd, unsigned long arg)
static int gntdev_mmap(struct file *flip, struct vm_area_struct *vma)
static const struct file_operations gntdev_fops = ;
static struct miscdevice gntdev_miscdev = ;
static int __init gntdev_init(void)
static void __exit gntdev_exit(void)
module_init(gntdev_init);
module_exit(gntdev_exit);
