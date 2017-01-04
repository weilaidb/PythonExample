struct mtd_concat ;
#define SIZEOF_STRUCT_MTD_CONCAT(num_subdev)	\
((sizeof(struct mtd_concat) + (num_subdev) * sizeof(struct mtd_info *)))
#define CONCAT(x)  ((struct mtd_concat *)(x))
static int
concat_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t * retlen, u_char * buf)
static int
concat_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t * retlen, const u_char * buf)
static int
concat_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t * retlen)
static int
concat_read_oob(struct mtd_info *mtd, loff_t from, struct mtd_oob_ops *ops)
static int
concat_write_oob(struct mtd_info *mtd, loff_t to, struct mtd_oob_ops *ops)
static void concat_erase_callback(struct erase_info *instr)
static int concat_dev_erase(struct mtd_info *mtd, struct erase_info *erase)
static int concat_erase(struct mtd_info *mtd, struct erase_info *instr)
static int concat_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int concat_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static void concat_sync(struct mtd_info *mtd)
static int concat_suspend(struct mtd_info *mtd)
static void concat_resume(struct mtd_info *mtd)
static int concat_block_isbad(struct mtd_info *mtd, loff_t ofs)
static int concat_block_markbad(struct mtd_info *mtd, loff_t ofs)
static unsigned long concat_get_unmapped_area(struct mtd_info *mtd,
unsigned long len,
unsigned long offset,
unsigned long flags)
struct mtd_info *mtd_concat_create(struct mtd_info *subdev[],
int num_devs,
const char *name)
void mtd_concat_destroy(struct mtd_info *mtd)
EXPORT_SYMBOL(mtd_concat_create);
EXPORT_SYMBOL(mtd_concat_destroy);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert Kaiser <rkaiser@sysgo.de>");
MODULE_DESCRIPTION("Generic support for concatenating of MTD devices");
