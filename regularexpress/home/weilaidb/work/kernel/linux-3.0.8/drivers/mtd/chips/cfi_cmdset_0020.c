static int cfi_staa_read(struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int cfi_staa_write_buffers(struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int cfi_staa_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen);
static int cfi_staa_erase_varsize(struct mtd_info *, struct erase_info *);
static void cfi_staa_sync (struct mtd_info *);
static int cfi_staa_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int cfi_staa_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int cfi_staa_suspend (struct mtd_info *);
static void cfi_staa_resume (struct mtd_info *);
static void cfi_staa_destroy(struct mtd_info *);
struct mtd_info *cfi_cmdset_0020(struct map_info *, int);
static struct mtd_info *cfi_staa_setup (struct map_info *);
static struct mtd_chip_driver cfi_staa_chipdrv = ;
static void cfi_tell_features(struct cfi_pri_intelext *extp)
struct mtd_info *cfi_cmdset_0020(struct map_info *map, int primary)
EXPORT_SYMBOL_GPL(cfi_cmdset_0020);
static struct mtd_info *cfi_staa_setup(struct map_info *map)
static inline int do_read_onechip(struct map_info *map, struct flchip *chip, loff_t adr, size_t len, u_char *buf)
static int cfi_staa_read (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static inline int do_write_buffer(struct map_info *map, struct flchip *chip,
unsigned long adr, const u_char *buf, int len)
static int cfi_staa_write_buffers (struct mtd_info *mtd, loff_t to,
size_t len, size_t *retlen, const u_char *buf)
#define ECCBUF_SIZE (mtd->writesize)
#define ECCBUF_DIV(x) ((x) & ~(ECCBUF_SIZE - 1))
#define ECCBUF_MOD(x) ((x) &  (ECCBUF_SIZE - 1))
static int
cfi_staa_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
static inline int do_erase_oneblock(struct map_info *map, struct flchip *chip, unsigned long adr)
static int cfi_staa_erase_varsize(struct mtd_info *mtd,
struct erase_info *instr)
static void cfi_staa_sync (struct mtd_info *mtd)
static inline int do_lock_oneblock(struct map_info *map, struct flchip *chip, unsigned long adr)
static int cfi_staa_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static inline int do_unlock_oneblock(struct map_info *map, struct flchip *chip, unsigned long adr)
static int cfi_staa_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int cfi_staa_suspend(struct mtd_info *mtd)
static void cfi_staa_resume(struct mtd_info *mtd)
static void cfi_staa_destroy(struct mtd_info *mtd)
MODULE_LICENSE("GPL");
