#define __MTD_MTD_H__
#define MTD_CHAR_MAJOR 90
#define MTD_BLOCK_MAJOR 31
#define MTD_ERASE_PENDING      	0x01
#define MTD_ERASING		0x02
#define MTD_ERASE_SUSPEND	0x04
#define MTD_ERASE_DONE          0x08
#define MTD_ERASE_FAILED        0x10
#define MTD_FAIL_ADDR_UNKNOWN -1LL
struct erase_info ;
struct mtd_erase_region_info ;
typedef enum  mtd_oob_mode_t;
struct mtd_oob_ops ;
#define MTD_MAX_OOBFREE_ENTRIES_LARGE	32
#define MTD_MAX_ECCPOS_ENTRIES_LARGE	448
struct nand_ecclayout ;
struct mtd_info ;
static inline struct mtd_info *dev_to_mtd(struct device *dev)
static inline uint32_t mtd_div_by_eb(uint64_t sz, struct mtd_info *mtd)
static inline uint32_t mtd_mod_by_eb(uint64_t sz, struct mtd_info *mtd)
static inline uint32_t mtd_div_by_ws(uint64_t sz, struct mtd_info *mtd)
static inline uint32_t mtd_mod_by_ws(uint64_t sz, struct mtd_info *mtd)
struct mtd_partition;
extern int mtd_device_register(struct mtd_info *master,
const struct mtd_partition *parts,
int nr_parts);
extern int mtd_device_unregister(struct mtd_info *master);
extern struct mtd_info *get_mtd_device(struct mtd_info *mtd, int num);
extern int __get_mtd_device(struct mtd_info *mtd);
extern void __put_mtd_device(struct mtd_info *mtd);
extern struct mtd_info *get_mtd_device_nm(const char *name);
extern void put_mtd_device(struct mtd_info *mtd);
struct mtd_notifier ;
extern void register_mtd_user (struct mtd_notifier *new);
extern int unregister_mtd_user (struct mtd_notifier *old);
int default_mtd_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen);
int default_mtd_readv(struct mtd_info *mtd, struct kvec *vecs,
unsigned long count, loff_t from, size_t *retlen);
void *mtd_kmalloc_up_to(const struct mtd_info *mtd, size_t *size);
void mtd_erase_callback(struct erase_info *instr);
#define MTD_DEBUG_LEVEL0	(0)
#define MTD_DEBUG_LEVEL1	(1)
#define MTD_DEBUG_LEVEL2	(2)
#define MTD_DEBUG_LEVEL3	(3)
#define DEBUG(n, args...)				\
do  while(0)
#define DEBUG(n, args...)				\
do  while(0)
