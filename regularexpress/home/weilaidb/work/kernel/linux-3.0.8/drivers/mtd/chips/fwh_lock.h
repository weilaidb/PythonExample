#define FWH_LOCK_H
enum fwh_lock_state ;
struct fwh_xxlock_thunk ;
#define FWH_XXLOCK_ONEBLOCK_LOCK   ((struct fwh_xxlock_thunk))
#define FWH_XXLOCK_ONEBLOCK_UNLOCK ((struct fwh_xxlock_thunk))
static int fwh_xxlock_oneblock(struct map_info *map, struct flchip *chip,
unsigned long adr, int len, void *thunk)
static int fwh_lock_varsize(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int fwh_unlock_varsize(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static void fixup_use_fwh_lock(struct mtd_info *mtd)
