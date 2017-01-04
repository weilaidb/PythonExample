# include <linux/efi.h>
static inline unsigned long size_inside_page(unsigned long start,
unsigned long size)
static inline int valid_phys_addr_range(unsigned long addr, size_t count)
static inline int valid_mmap_phys_addr_range(unsigned long pfn, size_t size)
static inline int range_is_allowed(unsigned long pfn, unsigned long size)
static inline int range_is_allowed(unsigned long pfn, unsigned long size)
void __weak unxlate_dev_mem_ptr(unsigned long phys, void *addr)
static ssize_t read_mem(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_mem(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
int __weak phys_mem_access_prot_allowed(struct file *file,
unsigned long pfn, unsigned long size, pgprot_t *vma_prot)
static int uncached_access(struct file *file, unsigned long addr)
static pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot)
static unsigned long get_unmapped_area_mem(struct file *file,
unsigned long addr,
unsigned long len,
unsigned long pgoff,
unsigned long flags)
static inline int private_mapping_ok(struct vm_area_struct *vma)
#define get_unmapped_area_mem	NULL
static inline int private_mapping_ok(struct vm_area_struct *vma)
static const struct vm_operations_struct mmap_mem_ops = ;
static int mmap_mem(struct file *file, struct vm_area_struct *vma)
static int mmap_kmem(struct file *file, struct vm_area_struct *vma)
static ssize_t read_oldmem(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t read_kmem(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t do_write_kmem(unsigned long p, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_kmem(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t read_port(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_port(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t read_null(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_null(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int pipe_to_null(struct pipe_inode_info *info, struct pipe_buffer *buf,
struct splice_desc *sd)
static ssize_t splice_write_null(struct pipe_inode_info *pipe, struct file *out,
loff_t *ppos, size_t len, unsigned int flags)
static ssize_t read_zero(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int mmap_zero(struct file *file, struct vm_area_struct *vma)
static ssize_t write_full(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static loff_t null_lseek(struct file *file, loff_t offset, int orig)
static loff_t memory_lseek(struct file *file, loff_t offset, int orig)
static int open_port(struct inode * inode, struct file * filp)
#define zero_lseek	null_lseek
#define full_lseek      null_lseek
#define write_zero	write_null
#define read_full       read_zero
#define open_mem	open_port
#define open_kmem	open_mem
#define open_oldmem	open_mem
static const struct file_operations mem_fops = ;
static const struct file_operations kmem_fops = ;
static const struct file_operations null_fops = ;
static const struct file_operations port_fops = ;
static const struct file_operations zero_fops = ;
static struct backing_dev_info zero_bdi = ;
static const struct file_operations full_fops = ;
static const struct file_operations oldmem_fops = ;
static ssize_t kmsg_writev(struct kiocb *iocb, const struct iovec *iv,
unsigned long count, loff_t pos)
static const struct file_operations kmsg_fops = ;
static const struct memdev  devlist[] = ;
static int memory_open(struct inode *inode, struct file *filp)
static const struct file_operations memory_fops = ;
static char *mem_devnode(struct device *dev, mode_t *mode)
static struct class *mem_class;
static int __init chr_dev_init(void)
fs_initcall(chr_dev_init);
