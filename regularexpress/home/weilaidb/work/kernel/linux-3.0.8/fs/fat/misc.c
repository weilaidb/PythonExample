void __fat_fs_error(struct super_block *sb, int report, const char *fmt, ...)
EXPORT_SYMBOL_GPL(__fat_fs_error);
void fat_msg(struct super_block *sb, const char *level, const char *fmt, ...)
int fat_clusters_flush(struct super_block *sb)
int fat_chain_add(struct inode *inode, int new_dclus, int nr_cluster)
extern struct timezone sys_tz;
#define SECS_PER_MIN	60
#define SECS_PER_HOUR	(60 * 60)
#define SECS_PER_DAY	(SECS_PER_HOUR * 24)
#define DAYS_DELTA	(365 * 10 + 2)
#define YEAR_2100	120
#define IS_LEAP_YEAR(y)	(!((y) & 3) && (y) != YEAR_2100)
static time_t days_in_year[] = ;
void fat_time_fat2unix(struct msdos_sb_info *sbi, struct timespec *ts,
__le16 __time, __le16 __date, u8 time_cs)
void fat_time_unix2fat(struct msdos_sb_info *sbi, struct timespec *ts,
__le16 *time, __le16 *date, u8 *time_cs)
EXPORT_SYMBOL_GPL(fat_time_unix2fat);
int fat_sync_bhs(struct buffer_head **bhs, int nr_bhs)
