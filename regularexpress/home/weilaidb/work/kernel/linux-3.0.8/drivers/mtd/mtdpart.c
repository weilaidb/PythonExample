static LIST_HEAD(mtd_partitions);
static DEFINE_MUTEX(mtd_partitions_mutex);
struct mtd_part ;
#define PART(x)  ((struct mtd_part *)(x))
static int part_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int part_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static void part_unpoint(struct mtd_info *mtd, loff_t from, size_t len)
static unsigned long part_get_unmapped_area(struct mtd_info *mtd,
unsigned long len,
unsigned long offset,
unsigned long flags)
static int part_read_oob(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int part_read_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int part_get_user_prot_info(struct mtd_info *mtd,
struct otp_info *buf, size_t len)
static int part_read_fact_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int part_get_fact_prot_info(struct mtd_info *mtd, struct otp_info *buf,
size_t len)
static int part_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int part_panic_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int part_write_oob(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static int part_write_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int part_lock_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len)
static int part_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
static int part_erase(struct mtd_info *mtd, struct erase_info *instr)
void mtd_erase_callback(struct erase_info *instr)
EXPORT_SYMBOL_GPL(mtd_erase_callback);
static int part_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int part_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int part_is_locked(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static void part_sync(struct mtd_info *mtd)
static int part_suspend(struct mtd_info *mtd)
static void part_resume(struct mtd_info *mtd)
static int part_block_isbad(struct mtd_info *mtd, loff_t ofs)
static int part_block_markbad(struct mtd_info *mtd, loff_t ofs)
static inline void free_partition(struct mtd_part *p)
int del_mtd_partitions(struct mtd_info *master)
static struct mtd_part *allocate_partition(struct mtd_info *master,
const struct mtd_partition *part, int partno,
uint64_t cur_offset)
int mtd_add_partition(struct mtd_info *master, char *name,
long long offset, long long length)
EXPORT_SYMBOL_GPL(mtd_add_partition);
int mtd_del_partition(struct mtd_info *master, int partno)
EXPORT_SYMBOL_GPL(mtd_del_partition);
int add_mtd_partitions(struct mtd_info *master,
const struct mtd_partition *parts,
int nbparts)
static DEFINE_SPINLOCK(part_parser_lock);
static LIST_HEAD(part_parsers);
static struct mtd_part_parser *get_partition_parser(const char *name)
int register_mtd_parser(struct mtd_part_parser *p)
EXPORT_SYMBOL_GPL(register_mtd_parser);
int deregister_mtd_parser(struct mtd_part_parser *p)
EXPORT_SYMBOL_GPL(deregister_mtd_parser);
int parse_mtd_partitions(struct mtd_info *master, const char **types,
struct mtd_partition **pparts, unsigned long origin)
EXPORT_SYMBOL_GPL(parse_mtd_partitions);
int mtd_is_partition(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(mtd_is_partition);
