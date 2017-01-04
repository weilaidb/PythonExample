#if !defined(__LITTLE_ENDIAN) && !defined(__BIG_ENDIAN)
#error unknown endian
typedef u32 secno;
typedef secno dnode_secno;
typedef secno fnode_secno;
typedef secno anode_secno;
typedef u32 time32_t;
#define BB_MAGIC 0xaa55
struct hpfs_boot_block
;
#define SB_MAGIC 0xf995e849
struct hpfs_super_block
;
#define SP_MAGIC 0xf9911849
struct hpfs_spare_block
;
#define BAD_MAGIC 0
#define CP_DIR_MAGIC 0x494521f7
struct code_page_directory
;
#define CP_DATA_MAGIC 0x894521f7
struct code_page_data
;
#define DNODE_MAGIC   0x77e40aae
struct dnode ;
struct hpfs_dirent ;
struct bplus_leaf_node
;
struct bplus_internal_node
;
struct bplus_header
;
#define FNODE_MAGIC 0xf7e40aae
struct fnode
;
#define ANODE_MAGIC 0x37e40aae
struct anode
;
struct extended_attribute
;
