#define	__XFS_DIR2_LEAF_H__
struct uio;
struct xfs_dabuf;
struct xfs_da_args;
struct xfs_inode;
struct xfs_mount;
struct xfs_trans;
#define	XFS_DIR2_LEAF_SPACE	1
#define	XFS_DIR2_LEAF_OFFSET	(XFS_DIR2_LEAF_SPACE * XFS_DIR2_SPACE_SIZE)
#define	XFS_DIR2_LEAF_FIRSTDB(mp)	\
xfs_dir2_byte_to_db(mp, XFS_DIR2_LEAF_OFFSET)
typedef	__uint32_t	xfs_dir2_dataptr_t;
#define	XFS_DIR2_MAX_DATAPTR	((xfs_dir2_dataptr_t)0xffffffff)
#define	XFS_DIR2_NULL_DATAPTR	((xfs_dir2_dataptr_t)0)
typedef struct xfs_dir2_leaf_hdr  xfs_dir2_leaf_hdr_t;
typedef struct xfs_dir2_leaf_entry  xfs_dir2_leaf_entry_t;
typedef struct xfs_dir2_leaf_tail  xfs_dir2_leaf_tail_t;
typedef struct xfs_dir2_leaf  xfs_dir2_leaf_t;
static inline int xfs_dir2_max_leaf_ents(struct xfs_mount *mp)
static inline xfs_dir2_leaf_tail_t *
xfs_dir2_leaf_tail_p(struct xfs_mount *mp, xfs_dir2_leaf_t *lp)
static inline __be16 *
xfs_dir2_leaf_bests_p(xfs_dir2_leaf_tail_t *ltp)
static inline xfs_dir2_off_t
xfs_dir2_dataptr_to_byte(struct xfs_mount *mp, xfs_dir2_dataptr_t dp)
static inline xfs_dir2_dataptr_t
xfs_dir2_byte_to_dataptr(struct xfs_mount *mp, xfs_dir2_off_t by)
static inline xfs_dir2_db_t
xfs_dir2_byte_to_db(struct xfs_mount *mp, xfs_dir2_off_t by)
static inline xfs_dir2_db_t
xfs_dir2_dataptr_to_db(struct xfs_mount *mp, xfs_dir2_dataptr_t dp)
static inline xfs_dir2_data_aoff_t
xfs_dir2_byte_to_off(struct xfs_mount *mp, xfs_dir2_off_t by)
static inline xfs_dir2_data_aoff_t
xfs_dir2_dataptr_to_off(struct xfs_mount *mp, xfs_dir2_dataptr_t dp)
static inline xfs_dir2_off_t
xfs_dir2_db_off_to_byte(struct xfs_mount *mp, xfs_dir2_db_t db,
xfs_dir2_data_aoff_t o)
static inline xfs_dablk_t
xfs_dir2_db_to_da(struct xfs_mount *mp, xfs_dir2_db_t db)
static inline xfs_dablk_t
xfs_dir2_byte_to_da(struct xfs_mount *mp, xfs_dir2_off_t by)
static inline xfs_dir2_dataptr_t
xfs_dir2_db_off_to_dataptr(struct xfs_mount *mp, xfs_dir2_db_t db,
xfs_dir2_data_aoff_t o)
static inline xfs_dir2_db_t
xfs_dir2_da_to_db(struct xfs_mount *mp, xfs_dablk_t da)
static inline xfs_dir2_off_t
xfs_dir2_da_to_byte(struct xfs_mount *mp, xfs_dablk_t da)
extern int xfs_dir2_block_to_leaf(struct xfs_da_args *args,
struct xfs_dabuf *dbp);
extern int xfs_dir2_leaf_addname(struct xfs_da_args *args);
extern void xfs_dir2_leaf_compact(struct xfs_da_args *args,
struct xfs_dabuf *bp);
extern void xfs_dir2_leaf_compact_x1(struct xfs_dabuf *bp, int *indexp,
int *lowstalep, int *highstalep,
int *lowlogp, int *highlogp);
extern int xfs_dir2_leaf_getdents(struct xfs_inode *dp, void *dirent,
size_t bufsize, xfs_off_t *offset,
filldir_t filldir);
extern int xfs_dir2_leaf_init(struct xfs_da_args *args, xfs_dir2_db_t bno,
struct xfs_dabuf **bpp, int magic);
extern void xfs_dir2_leaf_log_ents(struct xfs_trans *tp, struct xfs_dabuf *bp,
int first, int last);
extern void xfs_dir2_leaf_log_header(struct xfs_trans *tp,
struct xfs_dabuf *bp);
extern int xfs_dir2_leaf_lookup(struct xfs_da_args *args);
extern int xfs_dir2_leaf_removename(struct xfs_da_args *args);
extern int xfs_dir2_leaf_replace(struct xfs_da_args *args);
extern int xfs_dir2_leaf_search_hash(struct xfs_da_args *args,
struct xfs_dabuf *lbp);
extern int xfs_dir2_leaf_trim_data(struct xfs_da_args *args,
struct xfs_dabuf *lbp, xfs_dir2_db_t db);
extern int xfs_dir2_node_to_leaf(struct xfs_da_state *state);
