#define BITSPERPAGE	(PSIZE << 3)
#define L2MEGABYTE	20
#define MEGABYTE	(1 << L2MEGABYTE)
#define MEGABYTE32	(MEGABYTE << 5)
#define BLKTODMAPN(b)\
(((b) >> 13) + ((b) >> 23) + ((b) >> 33) + 3 + 1)
int jfs_extendfs(struct super_block *sb, s64 newLVSize, int newLogSize)
