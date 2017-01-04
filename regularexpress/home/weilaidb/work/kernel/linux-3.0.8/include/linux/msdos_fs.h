#define _LINUX_MSDOS_FS_H
#define SECTOR_SIZE	512
#define SECTOR_BITS	9
#define MSDOS_DPB	(MSDOS_DPS)
#define MSDOS_DPB_BITS	4
#define MSDOS_DPS	(SECTOR_SIZE / sizeof(struct msdos_dir_entry))
#define MSDOS_DPS_BITS	4
#define MSDOS_LONGNAME	256
#define CF_LE_W(v)	le16_to_cpu(v)
#define CF_LE_L(v)	le32_to_cpu(v)
#define CT_LE_W(v)	cpu_to_le16(v)
#define CT_LE_L(v)	cpu_to_le32(v)
#define MSDOS_ROOT_INO	1
#define MSDOS_DIR_BITS	5
#define FAT_MAX_DIR_ENTRIES	(65536)
#define FAT_MAX_DIR_SIZE	(FAT_MAX_DIR_ENTRIES << MSDOS_DIR_BITS)
#define ATTR_NONE	0
#define ATTR_RO		1
#define ATTR_HIDDEN	2
#define ATTR_SYS	4
#define ATTR_VOLUME	8
#define ATTR_DIR	16
#define ATTR_ARCH	32
#define ATTR_UNUSED	(ATTR_VOLUME | ATTR_ARCH | ATTR_SYS | ATTR_HIDDEN)
#define ATTR_EXT	(ATTR_RO | ATTR_HIDDEN | ATTR_SYS | ATTR_VOLUME)
#define CASE_LOWER_BASE	8
#define CASE_LOWER_EXT	16
#define DELETED_FLAG	0xe5
#define IS_FREE(n)	(!*(n) || *(n) == DELETED_FLAG)
#define FAT_LFN_LEN	255
#define MSDOS_NAME	11
#define MSDOS_SLOTS	21
#define MSDOS_DOT	".          "
#define MSDOS_DOTDOT	"..         "
#define FAT_FIRST_ENT(s, x)	((MSDOS_SB(s)->fat_bits == 32 ? 0x0FFFFF00 : \
MSDOS_SB(s)->fat_bits == 16 ? 0xFF00 : 0xF00) | (x))
#define FAT_START_ENT	2
#define MAX_FAT12	0xFF4
#define MAX_FAT16	0xFFF4
#define MAX_FAT32	0x0FFFFFF6
#define MAX_FAT(s)	(MSDOS_SB(s)->fat_bits == 32 ? MAX_FAT32 : \
MSDOS_SB(s)->fat_bits == 16 ? MAX_FAT16 : MAX_FAT12)
#define BAD_FAT12	0xFF7
#define BAD_FAT16	0xFFF7
#define BAD_FAT32	0x0FFFFFF7
#define EOF_FAT12	0xFFF
#define EOF_FAT16	0xFFFF
#define EOF_FAT32	0x0FFFFFFF
#define FAT_ENT_FREE	(0)
#define FAT_ENT_BAD	(BAD_FAT32)
#define FAT_ENT_EOF	(EOF_FAT32)
#define FAT_FSINFO_SIG1	0x41615252
#define FAT_FSINFO_SIG2	0x61417272
#define IS_FSINFO(x)	(le32_to_cpu((x)->signature1) == FAT_FSINFO_SIG1 \
&& le32_to_cpu((x)->signature2) == FAT_FSINFO_SIG2)
struct __fat_dirent ;
#define VFAT_IOCTL_READDIR_BOTH		_IOR('r', 1, struct __fat_dirent[2])
#define VFAT_IOCTL_READDIR_SHORT	_IOR('r', 2, struct __fat_dirent[2])
#define FAT_IOCTL_GET_ATTRIBUTES	_IOR('r', 0x10, __u32)
#define FAT_IOCTL_SET_ATTRIBUTES	_IOW('r', 0x11, __u32)
struct fat_boot_sector ;
struct fat_boot_fsinfo ;
struct msdos_dir_entry ;
struct msdos_dir_slot ;
static inline int fat_valid_media(u8 media)
