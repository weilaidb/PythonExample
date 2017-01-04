#undef DEBUG
#define SPUFS_MMAP_4K (PAGE_SIZE == 0x1000)
struct spufs_attr ;
static int spufs_attr_open(struct inode *inode, struct file *file,
int (*get)(void *, u64 *), int (*set)(void *, u64),
const char *fmt)
static int spufs_attr_release(struct inode *inode, struct file *file)
static ssize_t spufs_attr_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static ssize_t spufs_attr_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
#define DEFINE_SPUFS_SIMPLE_ATTRIBUTE(__fops, __get, __set, __fmt)	\
static int __fops ## _open(struct inode *inode, struct file *file)	\
\
static const struct file_operations __fops = ;
static int
spufs_mem_open(struct inode *inode, struct file *file)
static int
spufs_mem_release(struct inode *inode, struct file *file)
static ssize_t
__spufs_mem_read(struct spu_context *ctx, char __user *buffer,
size_t size, loff_t *pos)
static ssize_t
spufs_mem_read(struct file *file, char __user *buffer,
size_t size, loff_t *pos)
static ssize_t
spufs_mem_write(struct file *file, const char __user *buffer,
size_t size, loff_t *ppos)
static int
spufs_mem_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int spufs_mem_mmap_access(struct vm_area_struct *vma,
unsigned long address,
void *buf, int len, int write)
static const struct vm_operations_struct spufs_mem_mmap_vmops = ;
static int spufs_mem_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned long spufs_get_unmapped_area(struct file *file,
unsigned long addr, unsigned long len, unsigned long pgoff,
unsigned long flags)
static const struct file_operations spufs_mem_fops = ;
static int spufs_ps_fault(struct vm_area_struct *vma,
struct vm_fault *vmf,
unsigned long ps_offs,
unsigned long ps_size)
#if SPUFS_MMAP_4K
static int spufs_cntl_mmap_fault(struct vm_area_struct *vma,
struct vm_fault *vmf)
static const struct vm_operations_struct spufs_cntl_mmap_vmops = ;
static int spufs_cntl_mmap(struct file *file, struct vm_area_struct *vma)
#define spufs_cntl_mmap NULL
static int spufs_cntl_get(void *data, u64 *val)
static int spufs_cntl_set(void *data, u64 val)
static int spufs_cntl_open(struct inode *inode, struct file *file)
static int
spufs_cntl_release(struct inode *inode, struct file *file)
static const struct file_operations spufs_cntl_fops = ;
static int
spufs_regs_open(struct inode *inode, struct file *file)
static ssize_t
__spufs_regs_read(struct spu_context *ctx, char __user *buffer,
size_t size, loff_t *pos)
static ssize_t
spufs_regs_read(struct file *file, char __user *buffer,
size_t size, loff_t *pos)
static ssize_t
spufs_regs_write(struct file *file, const char __user *buffer,
size_t size, loff_t *pos)
static const struct file_operations spufs_regs_fops = ;
static ssize_t
__spufs_fpcr_read(struct spu_context *ctx, char __user * buffer,
size_t size, loff_t * pos)
static ssize_t
spufs_fpcr_read(struct file *file, char __user * buffer,
size_t size, loff_t * pos)
static ssize_t
spufs_fpcr_write(struct file *file, const char __user * buffer,
size_t size, loff_t * pos)
static const struct file_operations spufs_fpcr_fops = ;
static int spufs_pipe_open(struct inode *inode, struct file *file)
static ssize_t spufs_mbox_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_mbox_fops = ;
static ssize_t spufs_mbox_stat_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_mbox_stat_fops = ;
size_t spu_ibox_read(struct spu_context *ctx, u32 *data)
static int spufs_ibox_fasync(int fd, struct file *file, int on)
void spufs_ibox_callback(struct spu *spu)
static ssize_t spufs_ibox_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static unsigned int spufs_ibox_poll(struct file *file, poll_table *wait)
static const struct file_operations spufs_ibox_fops = ;
static ssize_t spufs_ibox_stat_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_ibox_stat_fops = ;
size_t spu_wbox_write(struct spu_context *ctx, u32 data)
static int spufs_wbox_fasync(int fd, struct file *file, int on)
void spufs_wbox_callback(struct spu *spu)
static ssize_t spufs_wbox_write(struct file *file, const char __user *buf,
size_t len, loff_t *pos)
static unsigned int spufs_wbox_poll(struct file *file, poll_table *wait)
static const struct file_operations spufs_wbox_fops = ;
static ssize_t spufs_wbox_stat_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_wbox_stat_fops = ;
static int spufs_signal1_open(struct inode *inode, struct file *file)
static int
spufs_signal1_release(struct inode *inode, struct file *file)
static ssize_t __spufs_signal1_read(struct spu_context *ctx, char __user *buf,
size_t len, loff_t *pos)
static ssize_t spufs_signal1_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static ssize_t spufs_signal1_write(struct file *file, const char __user *buf,
size_t len, loff_t *pos)
static int
spufs_signal1_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct spufs_signal1_mmap_vmops = ;
static int spufs_signal1_mmap(struct file *file, struct vm_area_struct *vma)
static const struct file_operations spufs_signal1_fops = ;
static const struct file_operations spufs_signal1_nosched_fops = ;
static int spufs_signal2_open(struct inode *inode, struct file *file)
static int
spufs_signal2_release(struct inode *inode, struct file *file)
static ssize_t __spufs_signal2_read(struct spu_context *ctx, char __user *buf,
size_t len, loff_t *pos)
static ssize_t spufs_signal2_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static ssize_t spufs_signal2_write(struct file *file, const char __user *buf,
size_t len, loff_t *pos)
#if SPUFS_MMAP_4K
static int
spufs_signal2_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct spufs_signal2_mmap_vmops = ;
static int spufs_signal2_mmap(struct file *file, struct vm_area_struct *vma)
#define spufs_signal2_mmap NULL
static const struct file_operations spufs_signal2_fops = ;
static const struct file_operations spufs_signal2_nosched_fops = ;
#define SPU_ATTR_NOACQUIRE	0
#define SPU_ATTR_ACQUIRE	1
#define SPU_ATTR_ACQUIRE_SAVED	2
#define DEFINE_SPUFS_ATTRIBUTE(__name, __get, __set, __fmt, __acquire)	\
static int __##__get(void *data, u64 *val)				\
\
DEFINE_SPUFS_SIMPLE_ATTRIBUTE(__name, __##__get, __set, __fmt);
static int spufs_signal1_type_set(void *data, u64 val)
static u64 spufs_signal1_type_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_signal1_type, spufs_signal1_type_get,
spufs_signal1_type_set, "%llu\n", SPU_ATTR_ACQUIRE);
static int spufs_signal2_type_set(void *data, u64 val)
static u64 spufs_signal2_type_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_signal2_type, spufs_signal2_type_get,
spufs_signal2_type_set, "%llu\n", SPU_ATTR_ACQUIRE);
#if SPUFS_MMAP_4K
static int
spufs_mss_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct spufs_mss_mmap_vmops = ;
static int spufs_mss_mmap(struct file *file, struct vm_area_struct *vma)
#define spufs_mss_mmap NULL
static int spufs_mss_open(struct inode *inode, struct file *file)
static int
spufs_mss_release(struct inode *inode, struct file *file)
static const struct file_operations spufs_mss_fops = ;
static int
spufs_psmap_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct spufs_psmap_mmap_vmops = ;
static int spufs_psmap_mmap(struct file *file, struct vm_area_struct *vma)
static int spufs_psmap_open(struct inode *inode, struct file *file)
static int
spufs_psmap_release(struct inode *inode, struct file *file)
static const struct file_operations spufs_psmap_fops = ;
#if SPUFS_MMAP_4K
static int
spufs_mfc_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct spufs_mfc_mmap_vmops = ;
static int spufs_mfc_mmap(struct file *file, struct vm_area_struct *vma)
#define spufs_mfc_mmap NULL
static int spufs_mfc_open(struct inode *inode, struct file *file)
static int
spufs_mfc_release(struct inode *inode, struct file *file)
void spufs_mfc_callback(struct spu *spu)
static int spufs_read_mfc_tagstatus(struct spu_context *ctx, u32 *status)
static ssize_t spufs_mfc_read(struct file *file, char __user *buffer,
size_t size, loff_t *pos)
static int spufs_check_valid_dma(struct mfc_dma_command *cmd)
static int spu_send_mfc_command(struct spu_context *ctx,
struct mfc_dma_command cmd,
int *error)
static ssize_t spufs_mfc_write(struct file *file, const char __user *buffer,
size_t size, loff_t *pos)
static unsigned int spufs_mfc_poll(struct file *file,poll_table *wait)
static int spufs_mfc_flush(struct file *file, fl_owner_t id)
static int spufs_mfc_fsync(struct file *file, int datasync)
static int spufs_mfc_fasync(int fd, struct file *file, int on)
static const struct file_operations spufs_mfc_fops = ;
static int spufs_npc_set(void *data, u64 val)
static u64 spufs_npc_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_npc_ops, spufs_npc_get, spufs_npc_set,
"0x%llx\n", SPU_ATTR_ACQUIRE);
static int spufs_decr_set(void *data, u64 val)
static u64 spufs_decr_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_decr_ops, spufs_decr_get, spufs_decr_set,
"0x%llx\n", SPU_ATTR_ACQUIRE_SAVED);
static int spufs_decr_status_set(void *data, u64 val)
static u64 spufs_decr_status_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_decr_status_ops, spufs_decr_status_get,
spufs_decr_status_set, "0x%llx\n",
SPU_ATTR_ACQUIRE_SAVED);
static int spufs_event_mask_set(void *data, u64 val)
static u64 spufs_event_mask_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_event_mask_ops, spufs_event_mask_get,
spufs_event_mask_set, "0x%llx\n",
SPU_ATTR_ACQUIRE_SAVED);
static u64 spufs_event_status_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_event_status_ops, spufs_event_status_get,
NULL, "0x%llx\n", SPU_ATTR_ACQUIRE_SAVED)
static int spufs_srr0_set(void *data, u64 val)
static u64 spufs_srr0_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_srr0_ops, spufs_srr0_get, spufs_srr0_set,
"0x%llx\n", SPU_ATTR_ACQUIRE_SAVED)
static u64 spufs_id_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_id_ops, spufs_id_get, NULL, "0x%llx\n",
SPU_ATTR_ACQUIRE)
static u64 spufs_object_id_get(struct spu_context *ctx)
static int spufs_object_id_set(void *data, u64 id)
DEFINE_SPUFS_ATTRIBUTE(spufs_object_id_ops, spufs_object_id_get,
spufs_object_id_set, "0x%llx\n", SPU_ATTR_NOACQUIRE);
static u64 spufs_lslr_get(struct spu_context *ctx)
DEFINE_SPUFS_ATTRIBUTE(spufs_lslr_ops, spufs_lslr_get, NULL, "0x%llx\n",
SPU_ATTR_ACQUIRE_SAVED);
static int spufs_info_open(struct inode *inode, struct file *file)
static int spufs_caps_show(struct seq_file *s, void *private)
static int spufs_caps_open(struct inode *inode, struct file *file)
static const struct file_operations spufs_caps_fops = ;
static ssize_t __spufs_mbox_info_read(struct spu_context *ctx,
char __user *buf, size_t len, loff_t *pos)
static ssize_t spufs_mbox_info_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_mbox_info_fops = ;
static ssize_t __spufs_ibox_info_read(struct spu_context *ctx,
char __user *buf, size_t len, loff_t *pos)
static ssize_t spufs_ibox_info_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_ibox_info_fops = ;
static ssize_t __spufs_wbox_info_read(struct spu_context *ctx,
char __user *buf, size_t len, loff_t *pos)
static ssize_t spufs_wbox_info_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_wbox_info_fops = ;
static ssize_t __spufs_dma_info_read(struct spu_context *ctx,
char __user *buf, size_t len, loff_t *pos)
static ssize_t spufs_dma_info_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_dma_info_fops = ;
static ssize_t __spufs_proxydma_info_read(struct spu_context *ctx,
char __user *buf, size_t len, loff_t *pos)
static ssize_t spufs_proxydma_info_read(struct file *file, char __user *buf,
size_t len, loff_t *pos)
static const struct file_operations spufs_proxydma_info_fops = ;
static int spufs_show_tid(struct seq_file *s, void *private)
static int spufs_tid_open(struct inode *inode, struct file *file)
static const struct file_operations spufs_tid_fops = ;
static const char *ctx_state_names[] = ;
static unsigned long long spufs_acct_time(struct spu_context *ctx,
enum spu_utilization_state state)
static unsigned long long spufs_slb_flts(struct spu_context *ctx)
static unsigned long long spufs_class2_intrs(struct spu_context *ctx)
static int spufs_show_stat(struct seq_file *s, void *private)
static int spufs_stat_open(struct inode *inode, struct file *file)
static const struct file_operations spufs_stat_fops = ;
static inline int spufs_switch_log_used(struct spu_context *ctx)
static inline int spufs_switch_log_avail(struct spu_context *ctx)
static int spufs_switch_log_open(struct inode *inode, struct file *file)
static int spufs_switch_log_release(struct inode *inode, struct file *file)
static int switch_log_sprint(struct spu_context *ctx, char *tbuf, int n)
static ssize_t spufs_switch_log_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static unsigned int spufs_switch_log_poll(struct file *file, poll_table *wait)
static const struct file_operations spufs_switch_log_fops = ;
void spu_switch_log_notify(struct spu *spu, struct spu_context *ctx,
u32 type, u32 val)
static int spufs_show_ctx(struct seq_file *s, void *private)
static int spufs_ctx_open(struct inode *inode, struct file *file)
static const struct file_operations spufs_ctx_fops = ;
const struct spufs_tree_descr spufs_dir_contents[] = ;
const struct spufs_tree_descr spufs_dir_nosched_contents[] = ;
const struct spufs_tree_descr spufs_dir_debug_contents[] = ;
const struct spufs_coredump_reader spufs_coredump_read[] = ;
