#if !defined(CONFIG_ROMFS_ON_MTD) && !defined(CONFIG_ROMFS_ON_BLOCK)
#error no ROMFS backing store interface configured
#define ROMFS_MTD_READ(sb, ...) ((sb)->s_mtd->read((sb)->s_mtd, ##__VA_ARGS__))
static int romfs_mtd_read(struct super_block *sb, unsigned long pos,
void *buf, size_t buflen)
static ssize_t romfs_mtd_strnlen(struct super_block *sb,
unsigned long pos, size_t maxlen)
static int romfs_mtd_strcmp(struct super_block *sb, unsigned long pos,
const char *str, size_t size)
static int romfs_blk_read(struct super_block *sb, unsigned long pos,
void *buf, size_t buflen)
static ssize_t romfs_blk_strnlen(struct super_block *sb,
unsigned long pos, size_t limit)
static int romfs_blk_strcmp(struct super_block *sb, unsigned long pos,
const char *str, size_t size)
int romfs_dev_read(struct super_block *sb, unsigned long pos,
void *buf, size_t buflen)
ssize_t romfs_dev_strnlen(struct super_block *sb,
unsigned long pos, size_t maxlen)
int romfs_dev_strcmp(struct super_block *sb, unsigned long pos,
const char *str, size_t size)
