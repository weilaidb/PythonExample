#define __EXOFS_COM_H__
#define EXOFS_MIN_PID   0x10000
#define EXOFS_OBJ_OFF	0x10000
#define EXOFS_SUPER_ID	0x10000
#define EXOFS_DEVTABLE_ID 0x10001
#define EXOFS_ROOT_ID	0x10002
# define EXOFS_APAGE_FS_DATA	(OSD_APAGE_APP_DEFINED_FIRST + 3)
# define EXOFS_ATTR_INODE_DATA	1
# define EXOFS_ATTR_INODE_FILE_LAYOUT	2
# define EXOFS_ATTR_INODE_DIR_LAYOUT	3
# define EXOFS_APAGE_SB_DATA	(0xF0000000U + 3)
# define EXOFS_ATTR_SB_STATS	1
enum ;
#define EXOFS_BLKSHIFT	12
#define EXOFS_BLKSIZE	(1UL << EXOFS_BLKSHIFT)
#define EXOFS_SUPER_MAGIC	0x5DF5
enum ;
struct exofs_fscb  __packed;
struct exofs_sb_stats  __packed;
struct exofs_dt_data_map  __packed;
struct exofs_dt_device_info  __packed;
struct exofs_device_table  __packed;
#define EXOFS_IDATA		5
struct exofs_fcb ;
#define EXOFS_INO_ATTR_SIZE	sizeof(struct exofs_fcb)
static const struct __weak osd_attr g_attr_inode_data = ATTR_DEF(
EXOFS_APAGE_FS_DATA,
EXOFS_ATTR_INODE_DATA,
EXOFS_INO_ATTR_SIZE);
#define EXOFS_NAME_LEN	255
struct exofs_dir_entry ;
enum ;
#define EXOFS_DIR_PAD			4
#define EXOFS_DIR_ROUND			(EXOFS_DIR_PAD - 1)
#define EXOFS_DIR_REC_LEN(name_len) \
(((name_len) + offsetof(struct exofs_dir_entry, name)  + \
EXOFS_DIR_ROUND) & ~EXOFS_DIR_ROUND)
enum exofs_inode_layout_gen_functions ;
struct exofs_on_disk_inode_layout  __packed;
static inline size_t exofs_on_disk_inode_layout_size(unsigned max_devs)
