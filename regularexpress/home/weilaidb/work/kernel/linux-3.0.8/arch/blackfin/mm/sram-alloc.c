struct sram_piece ;
static DEFINE_PER_CPU_SHARED_ALIGNED(spinlock_t, l1sram_lock);
static DEFINE_PER_CPU(struct sram_piece, free_l1_ssram_head);
static DEFINE_PER_CPU(struct sram_piece, used_l1_ssram_head);
#if L1_DATA_A_LENGTH != 0
static DEFINE_PER_CPU(struct sram_piece, free_l1_data_A_sram_head);
static DEFINE_PER_CPU(struct sram_piece, used_l1_data_A_sram_head);
#if L1_DATA_B_LENGTH != 0
static DEFINE_PER_CPU(struct sram_piece, free_l1_data_B_sram_head);
static DEFINE_PER_CPU(struct sram_piece, used_l1_data_B_sram_head);
#if L1_DATA_A_LENGTH || L1_DATA_B_LENGTH
static DEFINE_PER_CPU_SHARED_ALIGNED(spinlock_t, l1_data_sram_lock);
#if L1_CODE_LENGTH != 0
static DEFINE_PER_CPU_SHARED_ALIGNED(spinlock_t, l1_inst_sram_lock);
static DEFINE_PER_CPU(struct sram_piece, free_l1_inst_sram_head);
static DEFINE_PER_CPU(struct sram_piece, used_l1_inst_sram_head);
#if L2_LENGTH != 0
static spinlock_t l2_sram_lock ____cacheline_aligned_in_smp;
static struct sram_piece free_l2_sram_head, used_l2_sram_head;
static struct kmem_cache *sram_piece_cache;
static void __init l1sram_init(void)
static void __init l1_data_sram_init(void)
static void __init l1_inst_sram_init(void)
static void __init l2_sram_init(void)
static int __init bfin_sram_init(void)
pure_initcall(bfin_sram_init);
static void *_sram_alloc(size_t size, struct sram_piece *pfree_head,
struct sram_piece *pused_head)
static void *_sram_alloc_max(struct sram_piece *pfree_head,
struct sram_piece *pused_head,
unsigned long *psize)
static int _sram_free(const void *addr,
struct sram_piece *pfree_head,
struct sram_piece *pused_head)
int sram_free(const void *addr)
EXPORT_SYMBOL(sram_free);
void *l1_data_A_sram_alloc(size_t size)
EXPORT_SYMBOL(l1_data_A_sram_alloc);
int l1_data_A_sram_free(const void *addr)
EXPORT_SYMBOL(l1_data_A_sram_free);
void *l1_data_B_sram_alloc(size_t size)
EXPORT_SYMBOL(l1_data_B_sram_alloc);
int l1_data_B_sram_free(const void *addr)
EXPORT_SYMBOL(l1_data_B_sram_free);
void *l1_data_sram_alloc(size_t size)
EXPORT_SYMBOL(l1_data_sram_alloc);
void *l1_data_sram_zalloc(size_t size)
EXPORT_SYMBOL(l1_data_sram_zalloc);
int l1_data_sram_free(const void *addr)
EXPORT_SYMBOL(l1_data_sram_free);
void *l1_inst_sram_alloc(size_t size)
EXPORT_SYMBOL(l1_inst_sram_alloc);
int l1_inst_sram_free(const void *addr)
EXPORT_SYMBOL(l1_inst_sram_free);
void *l1sram_alloc(size_t size)
void *l1sram_alloc_max(size_t *psize)
int l1sram_free(const void *addr)
void *l2_sram_alloc(size_t size)
EXPORT_SYMBOL(l2_sram_alloc);
void *l2_sram_zalloc(size_t size)
EXPORT_SYMBOL(l2_sram_zalloc);
int l2_sram_free(const void *addr)
EXPORT_SYMBOL(l2_sram_free);
int sram_free_with_lsl(const void *addr)
EXPORT_SYMBOL(sram_free_with_lsl);
void *sram_alloc_with_lsl(size_t size, unsigned long flags)
EXPORT_SYMBOL(sram_alloc_with_lsl);
static int _sram_proc_show(struct seq_file *m, const char *desc,
struct sram_piece *pfree_head,
struct sram_piece *pused_head)
static int sram_proc_show(struct seq_file *m, void *v)
static int sram_proc_open(struct inode *inode, struct file *file)
static const struct file_operations sram_proc_ops = ;
static int __init sram_proc_init(void)
late_initcall(sram_proc_init);
