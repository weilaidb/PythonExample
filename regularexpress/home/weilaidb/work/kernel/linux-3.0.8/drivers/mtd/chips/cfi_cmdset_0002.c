#define AMD_BOOTLOC_BUG
#define FORCE_WORD_WRITE 0
#define MAX_WORD_RETRIES 3
#define SST49LF004B	        0x0060
#define SST49LF040B	        0x0050
#define SST49LF008A		0x005a
#define AT49BV6416		0x00d6
static int cfi_amdstd_read (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int cfi_amdstd_write_words(struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int cfi_amdstd_write_buffers(struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int cfi_amdstd_erase_chip(struct mtd_info *, struct erase_info *);
static int cfi_amdstd_erase_varsize(struct mtd_info *, struct erase_info *);
static void cfi_amdstd_sync (struct mtd_info *);
static int cfi_amdstd_suspend (struct mtd_info *);
static void cfi_amdstd_resume (struct mtd_info *);
static int cfi_amdstd_reboot(struct notifier_block *, unsigned long, void *);
static int cfi_amdstd_secsi_read (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static void cfi_amdstd_destroy(struct mtd_info *);
struct mtd_info *cfi_cmdset_0002(struct map_info *, int);
static struct mtd_info *cfi_amdstd_setup (struct mtd_info *);
static int get_chip(struct map_info *map, struct flchip *chip, unsigned long adr, int mode);
static void put_chip(struct map_info *map, struct flchip *chip, unsigned long adr);
static int cfi_atmel_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int cfi_atmel_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static struct mtd_chip_driver cfi_amdstd_chipdrv = ;
static void cfi_tell_features(struct cfi_pri_amdstd *extp)
static void fixup_amd_bootblock(struct mtd_info *mtd)
static void fixup_use_write_buffers(struct mtd_info *mtd)
static void fixup_convert_atmel_pri(struct mtd_info *mtd)
static void fixup_use_secsi(struct mtd_info *mtd)
static void fixup_use_erase_chip(struct mtd_info *mtd)
static void fixup_use_atmel_lock(struct mtd_info *mtd)
static void fixup_old_sst_eraseregion(struct mtd_info *mtd)
static void fixup_sst39vf(struct mtd_info *mtd)
static void fixup_sst39vf_rev_b(struct mtd_info *mtd)
static void fixup_sst38vf640x_sectorsize(struct mtd_info *mtd)
static void fixup_s29gl064n_sectors(struct mtd_info *mtd)
static void fixup_s29gl032n_sectors(struct mtd_info *mtd)
static struct cfi_fixup cfi_nopri_fixup_table[] = ;
static struct cfi_fixup cfi_fixup_table[] = ;
static struct cfi_fixup jedec_fixup_table[] = ;
static struct cfi_fixup fixup_table[] = ;
static void cfi_fixup_major_minor(struct cfi_private *cfi,
struct cfi_pri_amdstd *extp)
struct mtd_info *cfi_cmdset_0002(struct map_info *map, int primary)
struct mtd_info *cfi_cmdset_0006(struct map_info *map, int primary) __attribute__((alias("cfi_cmdset_0002")));
struct mtd_info *cfi_cmdset_0701(struct map_info *map, int primary) __attribute__((alias("cfi_cmdset_0002")));
EXPORT_SYMBOL_GPL(cfi_cmdset_0002);
EXPORT_SYMBOL_GPL(cfi_cmdset_0006);
EXPORT_SYMBOL_GPL(cfi_cmdset_0701);
static struct mtd_info *cfi_amdstd_setup(struct mtd_info *mtd)
static int __xipram chip_ready(struct map_info *map, unsigned long addr)
static int __xipram chip_good(struct map_info *map, unsigned long addr, map_word expected)
static int get_chip(struct map_info *map, struct flchip *chip, unsigned long adr, int mode)
static void put_chip(struct map_info *map, struct flchip *chip, unsigned long adr)
static void xip_disable(struct map_info *map, struct flchip *chip,
unsigned long adr)
static void __xipram xip_enable(struct map_info *map, struct flchip *chip,
unsigned long adr)
static void __xipram xip_udelay(struct map_info *map, struct flchip *chip,
unsigned long adr, int usec)
#define UDELAY(map, chip, adr, usec)  xip_udelay(map, chip, adr, usec)
#define XIP_INVAL_CACHED_RANGE(map, from, size)  \
INVALIDATE_CACHED_RANGE(map, from, size)
#define INVALIDATE_CACHE_UDELAY(map, chip, adr, len, usec)  \
UDELAY(map, chip, adr, usec)
#define xip_disable(map, chip, adr)
#define xip_enable(map, chip, adr)
#define XIP_INVAL_CACHED_RANGE(x...)
#define UDELAY(map, chip, adr, usec)  \
do  while (0)
#define INVALIDATE_CACHE_UDELAY(map, chip, adr, len, usec)  \
do  while (0)
static inline int do_read_onechip(struct map_info *map, struct flchip *chip, loff_t adr, size_t len, u_char *buf)
static int cfi_amdstd_read (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static inline int do_read_secsi_onechip(struct map_info *map, struct flchip *chip, loff_t adr, size_t len, u_char *buf)
static int cfi_amdstd_secsi_read (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static int __xipram do_write_oneword(struct map_info *map, struct flchip *chip, unsigned long adr, map_word datum)
static int cfi_amdstd_write_words(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int __xipram do_write_buffer(struct map_info *map, struct flchip *chip,
unsigned long adr, const u_char *buf,
int len)
static int cfi_amdstd_write_buffers(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int __xipram do_erase_chip(struct map_info *map, struct flchip *chip)
static int __xipram do_erase_oneblock(struct map_info *map, struct flchip *chip, unsigned long adr, int len, void *thunk)
static int cfi_amdstd_erase_varsize(struct mtd_info *mtd, struct erase_info *instr)
static int cfi_amdstd_erase_chip(struct mtd_info *mtd, struct erase_info *instr)
static int do_atmel_lock(struct map_info *map, struct flchip *chip,
unsigned long adr, int len, void *thunk)
static int do_atmel_unlock(struct map_info *map, struct flchip *chip,
unsigned long adr, int len, void *thunk)
static int cfi_atmel_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int cfi_atmel_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static void cfi_amdstd_sync (struct mtd_info *mtd)
static int cfi_amdstd_suspend(struct mtd_info *mtd)
static void cfi_amdstd_resume(struct mtd_info *mtd)
static int cfi_amdstd_reset(struct mtd_info *mtd)
static int cfi_amdstd_reboot(struct notifier_block *nb, unsigned long val,
void *v)
static void cfi_amdstd_destroy(struct mtd_info *mtd)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Crossnet Co. <info@crossnet.co.jp> et al.");
MODULE_DESCRIPTION("MTD chip driver for AMD/Fujitsu flash chips");
MODULE_ALIAS("cfi_cmdset_0006");
MODULE_ALIAS("cfi_cmdset_0701");
