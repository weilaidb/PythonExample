#define	__XFS_ATTR_LEAF_H__
struct attrlist;
struct attrlist_cursor_kern;
struct xfs_attr_list_context;
struct xfs_dabuf;
struct xfs_da_args;
struct xfs_da_state;
struct xfs_da_state_blk;
struct xfs_inode;
struct xfs_trans;
#define XFS_ATTR_LEAF_MAPSIZE	3
typedef struct xfs_attr_leaf_map  xfs_attr_leaf_map_t;
typedef struct xfs_attr_leaf_hdr  xfs_attr_leaf_hdr_t;
typedef struct xfs_attr_leaf_entry  xfs_attr_leaf_entry_t;
typedef struct xfs_attr_leaf_name_local  xfs_attr_leaf_name_local_t;
typedef struct xfs_attr_leaf_name_remote  xfs_attr_leaf_name_remote_t;
typedef struct xfs_attr_leafblock  xfs_attr_leafblock_t;
#define	XFS_ATTR_LOCAL_BIT	0
#define	XFS_ATTR_ROOT_BIT	1
#define	XFS_ATTR_SECURE_BIT	2
#define	XFS_ATTR_INCOMPLETE_BIT	7
#define XFS_ATTR_LOCAL		(1 << XFS_ATTR_LOCAL_BIT)
#define XFS_ATTR_ROOT		(1 << XFS_ATTR_ROOT_BIT)
#define XFS_ATTR_SECURE		(1 << XFS_ATTR_SECURE_BIT)
#define XFS_ATTR_INCOMPLETE	(1 << XFS_ATTR_INCOMPLETE_BIT)
#define XFS_ATTR_NSP_ARGS_MASK		(ATTR_ROOT | ATTR_SECURE)
#define XFS_ATTR_NSP_ONDISK_MASK	(XFS_ATTR_ROOT | XFS_ATTR_SECURE)
#define XFS_ATTR_NSP_ONDISK(flags)	((flags) & XFS_ATTR_NSP_ONDISK_MASK)
#define XFS_ATTR_NSP_ARGS(flags)	((flags) & XFS_ATTR_NSP_ARGS_MASK)
#define XFS_ATTR_NSP_ARGS_TO_ONDISK(x)	(((x) & ATTR_ROOT ? XFS_ATTR_ROOT : 0) |\
((x) & ATTR_SECURE ? XFS_ATTR_SECURE : 0))
#define XFS_ATTR_NSP_ONDISK_TO_ARGS(x)	(((x) & XFS_ATTR_ROOT ? ATTR_ROOT : 0) |\
((x) & XFS_ATTR_SECURE ? ATTR_SECURE : 0))
#define	XFS_ATTR_LEAF_NAME_ALIGN	((uint)sizeof(xfs_dablk_t))
static inline xfs_attr_leaf_name_remote_t *
xfs_attr_leaf_name_remote(xfs_attr_leafblock_t *leafp, int idx)
static inline xfs_attr_leaf_name_local_t *
xfs_attr_leaf_name_local(xfs_attr_leafblock_t *leafp, int idx)
static inline char *xfs_attr_leaf_name(xfs_attr_leafblock_t *leafp, int idx)
static inline int xfs_attr_leaf_entsize_remote(int nlen)
static inline int xfs_attr_leaf_entsize_local(int nlen, int vlen)
static inline int xfs_attr_leaf_entsize_local_max(int bsize)
typedef struct xfs_attr_inactive_list  xfs_attr_inactive_list_t;
void	xfs_attr_shortform_create(struct xfs_da_args *args);
void	xfs_attr_shortform_add(struct xfs_da_args *args, int forkoff);
int	xfs_attr_shortform_lookup(struct xfs_da_args *args);
int	xfs_attr_shortform_getvalue(struct xfs_da_args *args);
int	xfs_attr_shortform_to_leaf(struct xfs_da_args *args);
int	xfs_attr_shortform_remove(struct xfs_da_args *args);
int	xfs_attr_shortform_list(struct xfs_attr_list_context *context);
int	xfs_attr_shortform_allfit(struct xfs_dabuf *bp, struct xfs_inode *dp);
int	xfs_attr_shortform_bytesfit(xfs_inode_t *dp, int bytes);
int	xfs_attr_leaf_to_node(struct xfs_da_args *args);
int	xfs_attr_leaf_to_shortform(struct xfs_dabuf *bp,
struct xfs_da_args *args, int forkoff);
int	xfs_attr_leaf_clearflag(struct xfs_da_args *args);
int	xfs_attr_leaf_setflag(struct xfs_da_args *args);
int	xfs_attr_leaf_flipflags(xfs_da_args_t *args);
int	xfs_attr_leaf_split(struct xfs_da_state *state,
struct xfs_da_state_blk *oldblk,
struct xfs_da_state_blk *newblk);
int	xfs_attr_leaf_lookup_int(struct xfs_dabuf *leaf,
struct xfs_da_args *args);
int	xfs_attr_leaf_getvalue(struct xfs_dabuf *bp, struct xfs_da_args *args);
int	xfs_attr_leaf_add(struct xfs_dabuf *leaf_buffer,
struct xfs_da_args *args);
int	xfs_attr_leaf_remove(struct xfs_dabuf *leaf_buffer,
struct xfs_da_args *args);
int	xfs_attr_leaf_list_int(struct xfs_dabuf *bp,
struct xfs_attr_list_context *context);
int	xfs_attr_leaf_toosmall(struct xfs_da_state *state, int *retval);
void	xfs_attr_leaf_unbalance(struct xfs_da_state *state,
struct xfs_da_state_blk *drop_blk,
struct xfs_da_state_blk *save_blk);
int	xfs_attr_root_inactive(struct xfs_trans **trans, struct xfs_inode *dp);
xfs_dahash_t	xfs_attr_leaf_lasthash(struct xfs_dabuf *bp, int *count);
int	xfs_attr_leaf_order(struct xfs_dabuf *leaf1_bp,
struct xfs_dabuf *leaf2_bp);
int	xfs_attr_leaf_newentsize(int namelen, int valuelen, int blocksize,
int *local);
