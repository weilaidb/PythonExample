#define FS_ENET_PD_H
#define FS_ENET_NAME	"fs_enet"
enum fs_id ;
#define FS_MAX_INDEX	9
static inline int fs_get_fec_index(enum fs_id id)
static inline int fs_get_fcc_index(enum fs_id id)
static inline int fs_get_scc_index(enum fs_id id)
static inline int fs_fec_index2id(int index)
static inline int fs_fcc_index2id(int index)
static inline int fs_scc_index2id(int index)
enum fs_mii_method ;
enum fs_ioport ;
struct fs_mii_bit ;
struct fs_mii_bb_platform_info ;
struct fs_platform_info ;
struct fs_mii_fec_platform_info ;
static inline int fs_get_id(struct fs_platform_info *fpi)
