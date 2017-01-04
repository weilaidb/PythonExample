#define MTDSWAP_PREFIX "mtdswap"
#define CLEAN_BLOCK_THRESHOLD	20
#define LOW_FRAG_GC_TRESHOLD	5
#define MAX_ERASE_DIFF		4000
#define COLLECT_NONDIRTY_BASE	MAX_ERASE_DIFF
#define COLLECT_NONDIRTY_FREQ1	6
#define COLLECT_NONDIRTY_FREQ2	4
#define PAGE_UNDEF		UINT_MAX
#define BLOCK_UNDEF		UINT_MAX
#define BLOCK_ERROR		(UINT_MAX - 1)
#define BLOCK_MAX		(UINT_MAX - 2)
#define EBLOCK_BAD		(1 << 0)
#define EBLOCK_NOMAGIC		(1 << 1)
#define EBLOCK_BITFLIP		(1 << 2)
#define EBLOCK_FAILED		(1 << 3)
#define EBLOCK_READERR		(1 << 4)
#define EBLOCK_IDX_SHIFT	5
struct swap_eb ;
#define MTDSWAP_ECNT_MIN(rbroot) (rb_entry(rb_first(rbroot), struct swap_eb, \
rb)->erase_count)
#define MTDSWAP_ECNT_MAX(rbroot) (rb_entry(rb_last(rbroot), struct swap_eb, \
rb)->erase_count)
struct mtdswap_tree ;
enum ;
struct mtdswap_dev ;
struct mtdswap_oobdata  __attribute__((packed));
#define MTDSWAP_MAGIC_CLEAN	0x2095
#define MTDSWAP_MAGIC_DIRTY	(MTDSWAP_MAGIC_CLEAN + 1)
#define MTDSWAP_TYPE_CLEAN	0
#define MTDSWAP_TYPE_DIRTY	1
#define MTDSWAP_OOBSIZE		sizeof(struct mtdswap_oobdata)
#define MTDSWAP_ERASE_RETRIES	3
#define MTDSWAP_IO_RETRIES	3
enum ;
#define MIN_SPARE_EBLOCKS	2
#define MIN_ERASE_BLOCKS	(MIN_SPARE_EBLOCKS + 1)
#define TREE_ROOT(d, name) (&d->trees[MTDSWAP_ ## name].root)
#define TREE_EMPTY(d, name) (TREE_ROOT(d, name)->rb_node == NULL)
#define TREE_NONEMPTY(d, name) (!TREE_EMPTY(d, name))
#define TREE_COUNT(d, name) (d->trees[MTDSWAP_ ## name].count)
#define MTDSWAP_MBD_TO_MTDSWAP(dev) ((struct mtdswap_dev *)dev->priv)
static char partitions[128] = "";
module_param_string(partitions, partitions, sizeof(partitions), 0444);
MODULE_PARM_DESC(partitions, "MTD partition numbers to use as swap "
"partitions=\"1,3,5\"");
static unsigned int spare_eblocks = 10;
module_param(spare_eblocks, uint, 0444);
MODULE_PARM_DESC(spare_eblocks, "Percentage of spare erase blocks for "
"garbage collection (default 10%)");
static bool header;
module_param(header, bool, 0444);
MODULE_PARM_DESC(header,
"Include builtin swap header (default 0, without header)");
static int mtdswap_gc(struct mtdswap_dev *d, unsigned int background);
static loff_t mtdswap_eb_offset(struct mtdswap_dev *d, struct swap_eb *eb)
static void mtdswap_eb_detach(struct mtdswap_dev *d, struct swap_eb *eb)
static void __mtdswap_rb_add(struct rb_root *root, struct swap_eb *eb)
static void mtdswap_rb_add(struct mtdswap_dev *d, struct swap_eb *eb, int idx)
static struct rb_node *mtdswap_rb_index(struct rb_root *root, unsigned int idx)
static int mtdswap_handle_badblock(struct mtdswap_dev *d, struct swap_eb *eb)
static int mtdswap_handle_write_error(struct mtdswap_dev *d, struct swap_eb *eb)
static int mtdswap_read_oob(struct mtdswap_dev *d, loff_t from,
struct mtd_oob_ops *ops)
static int mtdswap_read_markers(struct mtdswap_dev *d, struct swap_eb *eb)
static int mtdswap_write_marker(struct mtdswap_dev *d, struct swap_eb *eb,
u16 marker)
static void mtdswap_check_counts(struct mtdswap_dev *d)
static void mtdswap_scan_eblks(struct mtdswap_dev *d)
static void mtdswap_store_eb(struct mtdswap_dev *d, struct swap_eb *eb)
static void mtdswap_erase_callback(struct erase_info *done)
static int mtdswap_erase_block(struct mtdswap_dev *d, struct swap_eb *eb)
static int mtdswap_map_free_block(struct mtdswap_dev *d, unsigned int page,
unsigned int *block)
static unsigned int mtdswap_free_page_cnt(struct mtdswap_dev *d)
static unsigned int mtdswap_enough_free_pages(struct mtdswap_dev *d)
static int mtdswap_write_block(struct mtdswap_dev *d, char *buf,
unsigned int page, unsigned int *bp, int gc_context)
static int mtdswap_move_block(struct mtdswap_dev *d, unsigned int oldblock,
unsigned int *newblock)
static int mtdswap_gc_eblock(struct mtdswap_dev *d, struct swap_eb *eb)
static int __mtdswap_choose_gc_tree(struct mtdswap_dev *d)
static int mtdswap_wlfreq(unsigned int maxdiff)
static int mtdswap_choose_wl_tree(struct mtdswap_dev *d)
static int mtdswap_choose_gc_tree(struct mtdswap_dev *d,
unsigned int background)
static struct swap_eb *mtdswap_pick_gc_eblk(struct mtdswap_dev *d,
unsigned int background)
static unsigned int mtdswap_test_patt(unsigned int i)
static unsigned int mtdswap_eblk_passes(struct mtdswap_dev *d,
struct swap_eb *eb)
static int mtdswap_gc(struct mtdswap_dev *d, unsigned int background)
static void mtdswap_background(struct mtd_blktrans_dev *dev)
static void mtdswap_cleanup(struct mtdswap_dev *d)
static int mtdswap_flush(struct mtd_blktrans_dev *dev)
static unsigned int mtdswap_badblocks(struct mtd_info *mtd, uint64_t size)
static int mtdswap_writesect(struct mtd_blktrans_dev *dev,
unsigned long page, char *buf)
static int mtdswap_auto_header(struct mtdswap_dev *d, char *buf)
static int mtdswap_readsect(struct mtd_blktrans_dev *dev,
unsigned long page, char *buf)
static int mtdswap_discard(struct mtd_blktrans_dev *dev, unsigned long first,
unsigned nr_pages)
static int mtdswap_show(struct seq_file *s, void *data)
static int mtdswap_open(struct inode *inode, struct file *file)
static const struct file_operations mtdswap_fops = ;
static int mtdswap_add_debugfs(struct mtdswap_dev *d)
static int mtdswap_init(struct mtdswap_dev *d, unsigned int eblocks,
unsigned int spare_cnt)
static void mtdswap_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void mtdswap_remove_dev(struct mtd_blktrans_dev *dev)
static struct mtd_blktrans_ops mtdswap_ops = ;
static int __init mtdswap_modinit(void)
static void __exit mtdswap_modexit(void)
module_init(mtdswap_modinit);
module_exit(mtdswap_modexit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarkko Lavinen <jarkko.lavinen@nokia.com>");
MODULE_DESCRIPTION("Block device access to an MTD suitable for using as "
"swap space");
