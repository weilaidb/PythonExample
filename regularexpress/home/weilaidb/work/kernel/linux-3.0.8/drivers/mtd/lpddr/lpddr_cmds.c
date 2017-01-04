static int lpddr_read(struct mtd_info *mtd, loff_t adr, size_t len,
size_t *retlen, u_char *buf);
static int lpddr_write_buffers(struct mtd_info *mtd, loff_t to,
size_t len, size_t *retlen, const u_char *buf);
static int lpddr_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen);
static int lpddr_erase(struct mtd_info *mtd, struct erase_info *instr);
static int lpddr_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int lpddr_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int lpddr_point(struct mtd_info *mtd, loff_t adr, size_t len,
size_t *retlen, void **mtdbuf, resource_size_t *phys);
static void lpddr_unpoint(struct mtd_info *mtd, loff_t adr, size_t len);
static int get_chip(struct map_info *map, struct flchip *chip, int mode);
static int chip_ready(struct map_info *map, struct flchip *chip, int mode);
static void put_chip(struct map_info *map, struct flchip *chip);
struct mtd_info *lpddr_cmdset(struct map_info *map)
EXPORT_SYMBOL(lpddr_cmdset);
static int wait_for_ready(struct map_info *map, struct flchip *chip,
unsigned int chip_op_time)
static int get_chip(struct map_info *map, struct flchip *chip, int mode)
static int chip_ready(struct map_info *map, struct flchip *chip, int mode)
static void put_chip(struct map_info *map, struct flchip *chip)
int do_write_buffer(struct map_info *map, struct flchip *chip,
unsigned long adr, const struct kvec **pvec,
unsigned long *pvec_seek, int len)
int do_erase_oneblock(struct mtd_info *mtd, loff_t adr)
static int lpddr_read(struct mtd_info *mtd, loff_t adr, size_t len,
size_t *retlen, u_char *buf)
static int lpddr_point(struct mtd_info *mtd, loff_t adr, size_t len,
size_t *retlen, void **mtdbuf, resource_size_t *phys)
static void lpddr_unpoint (struct mtd_info *mtd, loff_t adr, size_t len)
static int lpddr_write_buffers(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int lpddr_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
static int lpddr_erase(struct mtd_info *mtd, struct erase_info *instr)
#define DO_XXLOCK_LOCK		1
#define DO_XXLOCK_UNLOCK	2
int do_xxlock(struct mtd_info *mtd, loff_t adr, uint32_t len, int thunk)
static int lpddr_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int lpddr_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
int word_program(struct map_info *map, loff_t adr, uint32_t curval)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexey Korolev <akorolev@infradead.org>");
MODULE_DESCRIPTION("MTD driver for LPDDR flash chips");
