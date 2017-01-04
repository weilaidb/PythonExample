#define	__XFS_DIR2_H__
struct uio;
struct xfs_dabuf;
struct xfs_da_args;
struct xfs_dir2_put_args;
struct xfs_bmap_free;
struct xfs_inode;
struct xfs_mount;
struct xfs_trans;
typedef	__uint16_t	xfs_dir2_data_off_t;
#define	NULLDATAOFF	0xffffU
typedef uint		xfs_dir2_data_aoff_t;
typedef	__uint32_t	xfs_dir2_db_t;
typedef	xfs_off_t	xfs_dir2_off_t;
extern struct xfs_name	xfs_name_dotdot;
extern void xfs_dir_startup(void);
extern void xfs_dir_mount(struct xfs_mount *mp);
extern int xfs_dir_isempty(struct xfs_inode *dp);
extern int xfs_dir_init(struct xfs_trans *tp, struct xfs_inode *dp,
struct xfs_inode *pdp);
extern int xfs_dir_createname(struct xfs_trans *tp, struct xfs_inode *dp,
struct xfs_name *name, xfs_ino_t inum,
xfs_fsblock_t *first,
struct xfs_bmap_free *flist, xfs_extlen_t tot);
extern int xfs_dir_lookup(struct xfs_trans *tp, struct xfs_inode *dp,
struct xfs_name *name, xfs_ino_t *inum,
struct xfs_name *ci_name);
extern int xfs_dir_removename(struct xfs_trans *tp, struct xfs_inode *dp,
struct xfs_name *name, xfs_ino_t ino,
xfs_fsblock_t *first,
struct xfs_bmap_free *flist, xfs_extlen_t tot);
extern int xfs_dir_replace(struct xfs_trans *tp, struct xfs_inode *dp,
struct xfs_name *name, xfs_ino_t inum,
xfs_fsblock_t *first,
struct xfs_bmap_free *flist, xfs_extlen_t tot);
extern int xfs_dir_canenter(struct xfs_trans *tp, struct xfs_inode *dp,
struct xfs_name *name, uint resblks);
extern int xfs_dir_ino_validate(struct xfs_mount *mp, xfs_ino_t ino);
extern int xfs_dir2_grow_inode(struct xfs_da_args *args, int space,
xfs_dir2_db_t *dbp);
extern int xfs_dir2_isblock(struct xfs_trans *tp, struct xfs_inode *dp,
int *vp);
extern int xfs_dir2_isleaf(struct xfs_trans *tp, struct xfs_inode *dp,
int *vp);
extern int xfs_dir2_shrink_inode(struct xfs_da_args *args, xfs_dir2_db_t db,
struct xfs_dabuf *bp);
extern int xfs_dir_cilookup_result(struct xfs_da_args *args,
const unsigned char *name, int len);
