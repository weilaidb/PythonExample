#define FORCE_WORD_WRITE 0
#define I82802AB	0x00ad
#define I82802AC	0x00ac
#define PF38F4476	0x881c
#define M50LPW080       0x002F
#define M50FLW080A	0x0080
#define M50FLW080B	0x0081
#define AT49BV640D	0x02de
#define AT49BV640DT	0x02db
static int cfi_intelext_read (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int cfi_intelext_write_words(struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int cfi_intelext_write_buffers(struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int cfi_intelext_writev(struct mtd_info *, const struct kvec *, unsigned long, loff_t, size_t *);
static int cfi_intelext_erase_varsize(struct mtd_info *, struct erase_info *);
static void cfi_intelext_sync (struct mtd_info *);
static int cfi_intelext_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int cfi_intelext_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
static int cfi_intelext_is_locked(struct mtd_info *mtd, loff_t ofs,
uint64_t len);
static int cfi_intelext_read_fact_prot_reg (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int cfi_intelext_read_user_prot_reg (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int cfi_intelext_write_user_prot_reg (struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int cfi_intelext_lock_user_prot_reg (struct mtd_info *, loff_t, size_t);
static int cfi_intelext_get_fact_prot_info (struct mtd_info *,
struct otp_info *, size_t);
static int cfi_intelext_get_user_prot_info (struct mtd_info *,
struct otp_info *, size_t);
static int cfi_intelext_suspend (struct mtd_info *);
static void cfi_intelext_resume (struct mtd_info *);
static int cfi_intelext_reboot (struct notifier_block *, unsigned long, void *);
static void cfi_intelext_destroy(struct mtd_info *);
struct mtd_info *cfi_cmdset_0001(struct map_info *, int);
static struct mtd_info *cfi_intelext_setup (struct mtd_info *);
static int cfi_intelext_partition_fixup(struct mtd_info *, struct cfi_private **);
static int cfi_intelext_point (struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys);
static void cfi_intelext_unpoint(struct mtd_info *mtd, loff_t from, size_t len);
static int chip_ready (struct map_info *map, struct flchip *chip, unsigned long adr, int mode);
static int get_chip(struct map_info *map, struct flchip *chip, unsigned long adr, int mode);
static void put_chip(struct map_info *map, struct flchip *chip, unsigned long adr);
static struct mtd_chip_driver cfi_intelext_chipdrv = ;
static void cfi_tell_features(struct cfi_pri_intelext *extp)
static void fixup_convert_atmel_pri(struct mtd_info *mtd)
static void fixup_at49bv640dx_lock(struct mtd_info *mtd)
static void fixup_intel_strataflash(struct mtd_info *mtd)
static void fixup_no_write_suspend(struct mtd_info *mtd)
static void fixup_st_m28w320ct(struct mtd_info *mtd)
static void fixup_st_m28w320cb(struct mtd_info *mtd)
;
static void fixup_use_point(struct mtd_info *mtd)
static void fixup_use_write_buffers(struct mtd_info *mtd)
static void fixup_unlock_powerup_lock(struct mtd_info *mtd)
static struct cfi_fixup cfi_fixup_table[] = ;
static struct cfi_fixup jedec_fixup_table[] = ;
static struct cfi_fixup fixup_table[] = ;
static void cfi_fixup_major_minor(struct cfi_private *cfi,
struct cfi_pri_intelext *extp)
static inline struct cfi_pri_intelext *
read_pri_intelext(struct map_info *map, __u16 adr)
struct mtd_info *cfi_cmdset_0001(struct map_info *map, int primary)
struct mtd_info *cfi_cmdset_0003(struct map_info *map, int primary) __attribute__((alias("cfi_cmdset_0001")));
struct mtd_info *cfi_cmdset_0200(struct map_info *map, int primary) __attribute__((alias("cfi_cmdset_0001")));
EXPORT_SYMBOL_GPL(cfi_cmdset_0001);
EXPORT_SYMBOL_GPL(cfi_cmdset_0003);
EXPORT_SYMBOL_GPL(cfi_cmdset_0200);
static struct mtd_info *cfi_intelext_setup(struct mtd_info *mtd)
static int cfi_intelext_partition_fixup(struct mtd_info *mtd,
struct cfi_private **pcfi)
static int chip_ready (struct map_info *map, struct flchip *chip, unsigned long adr, int mode)
static int get_chip(struct map_info *map, struct flchip *chip, unsigned long adr, int mode)
static void put_chip(struct map_info *map, struct flchip *chip, unsigned long adr)
static void xip_disable(struct map_info *map, struct flchip *chip,
unsigned long adr)
static void __xipram xip_enable(struct map_info *map, struct flchip *chip,
unsigned long adr)
static int __xipram xip_wait_for_operation(
struct map_info *map, struct flchip *chip,
unsigned long adr, unsigned int chip_op_time_max)
#define XIP_INVAL_CACHED_RANGE(map, from, size)  \
INVALIDATE_CACHED_RANGE(map, from, size)
#define INVAL_CACHE_AND_WAIT(map, chip, cmd_adr, inval_adr, inval_len, usec, usec_max) \
xip_wait_for_operation(map, chip, cmd_adr, usec_max)
#define xip_disable(map, chip, adr)
#define xip_enable(map, chip, adr)
#define XIP_INVAL_CACHED_RANGE(x...)
#define INVAL_CACHE_AND_WAIT inval_cache_and_wait_for_operation
static int inval_cache_and_wait_for_operation(
struct map_info *map, struct flchip *chip,
unsigned long cmd_adr, unsigned long inval_adr, int inval_len,
unsigned int chip_op_time, unsigned int chip_op_time_max)
#define WAIT_TIMEOUT(map, chip, adr, udelay, udelay_max) \
INVAL_CACHE_AND_WAIT(map, chip, adr, 0, 0, udelay, udelay_max);
static int do_point_onechip (struct map_info *map, struct flchip *chip, loff_t adr, size_t len)
static int cfi_intelext_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static void cfi_intelext_unpoint(struct mtd_info *mtd, loff_t from, size_t len)
static inline int do_read_onechip(struct map_info *map, struct flchip *chip, loff_t adr, size_t len, u_char *buf)
static int cfi_intelext_read (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf)
static int __xipram do_write_oneword(struct map_info *map, struct flchip *chip,
unsigned long adr, map_word datum, int mode)
static int cfi_intelext_write_words (struct mtd_info *mtd, loff_t to , size_t len, size_t *retlen, const u_char *buf)
static int __xipram do_write_buffer(struct map_info *map, struct flchip *chip,
unsigned long adr, const struct kvec **pvec,
unsigned long *pvec_seek, int len)
static int cfi_intelext_writev (struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
static int cfi_intelext_write_buffers (struct mtd_info *mtd, loff_t to,
size_t len, size_t *retlen, const u_char *buf)
static int __xipram do_erase_oneblock(struct map_info *map, struct flchip *chip,
unsigned long adr, int len, void *thunk)
static int cfi_intelext_erase_varsize(struct mtd_info *mtd, struct erase_info *instr)
static void cfi_intelext_sync (struct mtd_info *mtd)
static int __xipram do_getlockstatus_oneblock(struct map_info *map,
struct flchip *chip,
unsigned long adr,
int len, void *thunk)
static int __xipram do_printlockstatus_oneblock(struct map_info *map,
struct flchip *chip,
unsigned long adr,
int len, void *thunk)
#define DO_XXLOCK_ONEBLOCK_LOCK		((void *) 1)
#define DO_XXLOCK_ONEBLOCK_UNLOCK	((void *) 2)
static int __xipram do_xxlock_oneblock(struct map_info *map, struct flchip *chip,
unsigned long adr, int len, void *thunk)
static int cfi_intelext_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int cfi_intelext_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int cfi_intelext_is_locked(struct mtd_info *mtd, loff_t ofs,
uint64_t len)
typedef int (*otp_op_t)(struct map_info *map, struct flchip *chip,
u_long data_offset, u_char *buf, u_int size,
u_long prot_offset, u_int groupno, u_int groupsize);
static int __xipram
do_otp_read(struct map_info *map, struct flchip *chip, u_long offset,
u_char *buf, u_int size, u_long prot, u_int grpno, u_int grpsz)
static int
do_otp_write(struct map_info *map, struct flchip *chip, u_long offset,
u_char *buf, u_int size, u_long prot, u_int grpno, u_int grpsz)
static int
do_otp_lock(struct map_info *map, struct flchip *chip, u_long offset,
u_char *buf, u_int size, u_long prot, u_int grpno, u_int grpsz)
static int cfi_intelext_otp_walk(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf,
otp_op_t action, int user_regs)
static int cfi_intelext_read_fact_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen,
u_char *buf)
static int cfi_intelext_read_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen,
u_char *buf)
static int cfi_intelext_write_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen,
u_char *buf)
static int cfi_intelext_lock_user_prot_reg(struct mtd_info *mtd,
loff_t from, size_t len)
static int cfi_intelext_get_fact_prot_info(struct mtd_info *mtd,
struct otp_info *buf, size_t len)
static int cfi_intelext_get_user_prot_info(struct mtd_info *mtd,
struct otp_info *buf, size_t len)
static void cfi_intelext_save_locks(struct mtd_info *mtd)
static int cfi_intelext_suspend(struct mtd_info *mtd)
static void cfi_intelext_restore_locks(struct mtd_info *mtd)
static void cfi_intelext_resume(struct mtd_info *mtd)
static int cfi_intelext_reset(struct mtd_info *mtd)
static int cfi_intelext_reboot(struct notifier_block *nb, unsigned long val,
void *v)
static void cfi_intelext_destroy(struct mtd_info *mtd)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org> et al.");
MODULE_DESCRIPTION("MTD chip driver for Intel/Sharp flash chips");
MODULE_ALIAS("cfi_cmdset_0003");
MODULE_ALIAS("cfi_cmdset_0200");
