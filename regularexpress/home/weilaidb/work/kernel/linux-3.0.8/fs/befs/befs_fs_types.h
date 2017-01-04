#define _LINUX_BEFS_FS_TYPES
#define PACKED __attribute__ ((__packed__))
#define BEFS_NAME_LEN 255
#define BEFS_SYMLINK_LEN 144
#define BEFS_NUM_DIRECT_BLOCKS 12
#define B_OS_NAME_LENGTH 32
#define BEFS_DBLINDIR_BRUN_LEN 4
enum super_flags ;
#define BEFS_BYTEORDER_NATIVE 0x42494745
#define BEFS_BYTEORDER_NATIVE_LE (__force fs32)cpu_to_le32(BEFS_BYTEORDER_NATIVE)
#define BEFS_BYTEORDER_NATIVE_BE (__force fs32)cpu_to_be32(BEFS_BYTEORDER_NATIVE)
#define BEFS_SUPER_MAGIC BEFS_SUPER_MAGIC1
#define BEFS_SUPER_MAGIC1_LE (__force fs32)cpu_to_le32(BEFS_SUPER_MAGIC1)
#define BEFS_SUPER_MAGIC1_BE (__force fs32)cpu_to_be32(BEFS_SUPER_MAGIC1)
#define BEFS_INODE_MAGIC1 0x3bbe0ad9
enum inode_flags ;
typedef u64 __bitwise fs64;
typedef u32 __bitwise fs32;
typedef u16 __bitwise fs16;
typedef u64 befs_off_t;
typedef fs64 befs_time_t;
typedef struct  PACKED befs_disk_block_run;
typedef struct  PACKED befs_block_run;
typedef befs_disk_block_run befs_disk_inode_addr;
typedef befs_block_run befs_inode_addr;
typedef struct  PACKED befs_super_block;
typedef struct  PACKED befs_disk_data_stream;
typedef struct  PACKED befs_data_stream;
typedef struct  PACKED befs_small_data;
typedef struct  PACKED befs_inode;
#define BEFS_BTREE_MAGIC 0x69f6c2e8
enum btree_types ;
typedef struct  PACKED befs_disk_btree_super;
typedef struct  PACKED befs_btree_super;
typedef struct  PACKED befs_btree_nodehead;
typedef struct  PACKED befs_host_btree_nodehead;
