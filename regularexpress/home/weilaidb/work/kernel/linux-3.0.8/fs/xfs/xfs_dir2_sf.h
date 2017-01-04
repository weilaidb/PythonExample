#define	__XFS_DIR2_SF_H__
struct uio;
struct xfs_dabuf;
struct xfs_da_args;
struct xfs_dir2_block;
struct xfs_inode;
struct xfs_mount;
struct xfs_trans;
typedef	struct  xfs_dir2_ino8_t;
typedef struct  xfs_dir2_ino4_t;
typedef union  xfs_dir2_inou_t;
#define	XFS_DIR2_MAX_SHORT_INUM	((xfs_ino_t)0xffffffffULL)
typedef struct  __arch_pack xfs_dir2_sf_off_t;
typedef struct xfs_dir2_sf_hdr  __arch_pack xfs_dir2_sf_hdr_t;
typedef struct xfs_dir2_sf_entry  __arch_pack xfs_dir2_sf_entry_t;
typedef struct xfs_dir2_sf  xfs_dir2_sf_t;
static inline int xfs_dir2_sf_hdr_size(int i8count)
static inline xfs_dir2_inou_t *xfs_dir2_sf_inumberp(xfs_dir2_sf_entry_t *sfep)
static inline xfs_intino_t
xfs_dir2_sf_get_inumber(xfs_dir2_sf_t *sfp, xfs_dir2_inou_t *from)
static inline void xfs_dir2_sf_put_inumber(xfs_dir2_sf_t *sfp, xfs_ino_t *from,
xfs_dir2_inou_t *to)
static inline xfs_dir2_data_aoff_t
xfs_dir2_sf_get_offset(xfs_dir2_sf_entry_t *sfep)
static inline void
xfs_dir2_sf_put_offset(xfs_dir2_sf_entry_t *sfep, xfs_dir2_data_aoff_t off)
static inline int xfs_dir2_sf_entsize_byname(xfs_dir2_sf_t *sfp, int len)
static inline int
xfs_dir2_sf_entsize_byentry(xfs_dir2_sf_t *sfp, xfs_dir2_sf_entry_t *sfep)
static inline xfs_dir2_sf_entry_t *xfs_dir2_sf_firstentry(xfs_dir2_sf_t *sfp)
static inline xfs_dir2_sf_entry_t *
xfs_dir2_sf_nextentry(xfs_dir2_sf_t *sfp, xfs_dir2_sf_entry_t *sfep)
extern int xfs_dir2_block_sfsize(struct xfs_inode *dp,
struct xfs_dir2_block *block,
xfs_dir2_sf_hdr_t *sfhp);
extern int xfs_dir2_block_to_sf(struct xfs_da_args *args, struct xfs_dabuf *bp,
int size, xfs_dir2_sf_hdr_t *sfhp);
extern int xfs_dir2_sf_addname(struct xfs_da_args *args);
extern int xfs_dir2_sf_create(struct xfs_da_args *args, xfs_ino_t pino);
extern int xfs_dir2_sf_getdents(struct xfs_inode *dp, void *dirent,
xfs_off_t *offset, filldir_t filldir);
extern int xfs_dir2_sf_lookup(struct xfs_da_args *args);
extern int xfs_dir2_sf_removename(struct xfs_da_args *args);
extern int xfs_dir2_sf_replace(struct xfs_da_args *args);
