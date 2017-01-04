#define __EFS_FS_SB_H__
#define EFS_MAGIC	0x072959
#define EFS_NEWMAGIC	0x07295a
#define IS_EFS_MAGIC(x)	((x == EFS_MAGIC) || (x == EFS_NEWMAGIC))
#define EFS_SUPER		1
#define EFS_ROOTINODE		2
struct efs_super ;
struct efs_sb_info ;
