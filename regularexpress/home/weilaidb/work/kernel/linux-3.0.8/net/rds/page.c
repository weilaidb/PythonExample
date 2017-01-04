struct rds_page_remainder ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct rds_page_remainder,
rds_page_remainders);
int rds_page_copy_user(struct page *page, unsigned long offset,
void __user *ptr, unsigned long bytes,
int to_user)
EXPORT_SYMBOL_GPL(rds_page_copy_user);
int rds_page_remainder_alloc(struct scatterlist *scat, unsigned long bytes,
gfp_t gfp)
EXPORT_SYMBOL_GPL(rds_page_remainder_alloc);
static int rds_page_remainder_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block rds_page_remainder_nb = ;
void rds_page_exit(void)
