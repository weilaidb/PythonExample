struct hfsplus_wd ;
static void hfsplus_end_io_sync(struct bio *bio, int err)
int hfsplus_submit_bio(struct super_block *sb, sector_t sector,
void *buf, void **data, int rw)
static int hfsplus_read_mdb(void *bufptr, struct hfsplus_wd *wd)
static int hfsplus_get_last_session(struct super_block *sb,
sector_t *start, sector_t *size)
int hfsplus_read_wrapper(struct super_block *sb)
