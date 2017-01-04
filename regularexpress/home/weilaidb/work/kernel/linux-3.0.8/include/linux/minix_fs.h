#define _LINUX_MINIX_FS_H
#define MINIX_ROOT_INO 1
#define MINIX_LINK_MAX	250
#define MINIX2_LINK_MAX	65530
#define MINIX_I_MAP_SLOTS	8
#define MINIX_Z_MAP_SLOTS	64
#define MINIX_VALID_FS		0x0001
#define MINIX_ERROR_FS		0x0002
#define MINIX_INODES_PER_BLOCK ((BLOCK_SIZE)/(sizeof (struct minix_inode)))
struct minix_inode ;
struct minix2_inode ;
struct minix_super_block ;
struct minix3_super_block ;
struct minix_dir_entry ;
struct minix3_dir_entry ;
