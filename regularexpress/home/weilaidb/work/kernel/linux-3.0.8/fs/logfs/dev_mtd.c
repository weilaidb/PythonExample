#define PAGE_OFS(ofs) ((ofs) & (PAGE_SIZE-1))
static int mtd_read(struct super_block *sb, loff_t ofs, size_t len, void *buf)
static int mtd_write(struct super_block *sb, loff_t ofs, size_t len, void *buf)
static void logfs_erase_callback(struct erase_info *ei)
static int mtd_erase_mapping(struct super_block *sb, loff_t ofs, size_t len)
static int mtd_erase(struct super_block *sb, loff_t ofs, size_t len,
int ensure_write)
static void mtd_sync(struct super_block *sb)
static int mtd_readpage(void *_sb, struct page *page)
static struct page *mtd_find_first_sb(struct super_block *sb, u64 *ofs)
static struct page *mtd_find_last_sb(struct super_block *sb, u64 *ofs)
static int __mtd_writeseg(struct super_block *sb, u64 ofs, pgoff_t index,
size_t nr_pages)
static void mtd_writeseg(struct super_block *sb, u64 ofs, size_t len)
static void mtd_put_device(struct logfs_super *s)
static int mtd_can_write_buf(struct super_block *sb, u64 ofs)
static const struct logfs_device_ops mtd_devops = ;
int logfs_get_sb_mtd(struct logfs_super *s, int mtdnr)
