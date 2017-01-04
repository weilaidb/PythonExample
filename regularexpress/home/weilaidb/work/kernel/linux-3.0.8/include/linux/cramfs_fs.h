#define __CRAMFS_H
#define CRAMFS_SIGNATURE	"Compressed ROMFS"
#define CRAMFS_MODE_WIDTH 16
#define CRAMFS_UID_WIDTH 16
#define CRAMFS_SIZE_WIDTH 24
#define CRAMFS_GID_WIDTH 8
#define CRAMFS_NAMELEN_WIDTH 6
#define CRAMFS_OFFSET_WIDTH 26
#define CRAMFS_MAXPATHLEN (((1 << CRAMFS_NAMELEN_WIDTH) - 1) << 2)
struct cramfs_inode ;
struct cramfs_info ;
struct cramfs_super ;
#define CRAMFS_FLAG_FSID_VERSION_2	0x00000001
#define CRAMFS_FLAG_SORTED_DIRS		0x00000002
#define CRAMFS_FLAG_HOLES		0x00000100
#define CRAMFS_FLAG_WRONG_SIGNATURE	0x00000200
#define CRAMFS_FLAG_SHIFTED_ROOT_OFFSET	0x00000400
#define CRAMFS_SUPPORTED_FLAGS	( 0x000000ff \
| CRAMFS_FLAG_HOLES \
| CRAMFS_FLAG_WRONG_SIGNATURE \
| CRAMFS_FLAG_SHIFTED_ROOT_OFFSET )
int cramfs_uncompress_block(void *dst, int dstlen, void *src, int srclen);
int cramfs_uncompress_init(void);
void cramfs_uncompress_exit(void);
