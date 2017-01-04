#define	__XFS_DA_BTREE_H__
struct xfs_buf;
struct xfs_bmap_free;
struct xfs_inode;
struct xfs_mount;
struct xfs_trans;
struct zone;
#define XFS_DA_NODE_MAGIC	0xfebe
#define XFS_ATTR_LEAF_MAGIC	0xfbee
#define	XFS_DIR2_LEAF1_MAGIC	0xd2f1
#define	XFS_DIR2_LEAFN_MAGIC	0xd2ff
typedef struct xfs_da_blkinfo  xfs_da_blkinfo_t;
#define	XFS_DA_NODE_MAXDEPTH	5
typedef struct xfs_da_intnode  xfs_da_intnode_t;
typedef struct xfs_da_node_hdr xfs_da_node_hdr_t;
typedef struct xfs_da_node_entry xfs_da_node_entry_t;
#define	XFS_LBSIZE(mp)	(mp)->m_sb.sb_blocksize
enum xfs_dacmp ;
typedef struct xfs_da_args  xfs_da_args_t;
#define XFS_DA_OP_JUSTCHECK	0x0001
#define XFS_DA_OP_RENAME	0x0002
#define XFS_DA_OP_ADDNAME	0x0004
#define XFS_DA_OP_OKNOENT	0x0008
#define XFS_DA_OP_CILOOKUP	0x0010
#define XFS_DA_OP_FLAGS \
, \
, \
, \
, \
typedef struct xfs_dabuf  xfs_dabuf_t;
#define	XFS_DA_BUF_SIZE(n)	\
(sizeof(xfs_dabuf_t) + sizeof(struct xfs_buf *) * ((n) - 1))
extern xfs_dabuf_t	*xfs_dabuf_global_list;
typedef struct xfs_da_state_blk  xfs_da_state_blk_t;
typedef struct xfs_da_state_path  xfs_da_state_path_t;
typedef struct xfs_da_state  xfs_da_state_t;
#define XFS_DA_LOGOFF(BASE, ADDR)	((char *)(ADDR) - (char *)(BASE))
#define XFS_DA_LOGRANGE(BASE, ADDR, SIZE)	\
(uint)(XFS_DA_LOGOFF(BASE, ADDR)), \
(uint)(XFS_DA_LOGOFF(BASE, ADDR)+(SIZE)-1)
struct xfs_nameops ;
int	xfs_da_node_create(xfs_da_args_t *args, xfs_dablk_t blkno, int level,
xfs_dabuf_t **bpp, int whichfork);
int	xfs_da_split(xfs_da_state_t *state);
int	xfs_da_join(xfs_da_state_t *state);
void	xfs_da_fixhashpath(xfs_da_state_t *state,
xfs_da_state_path_t *path_to_to_fix);
int	xfs_da_node_lookup_int(xfs_da_state_t *state, int *result);
int	xfs_da_path_shift(xfs_da_state_t *state, xfs_da_state_path_t *path,
int forward, int release, int *result);
int	xfs_da_blk_link(xfs_da_state_t *state, xfs_da_state_blk_t *old_blk,
xfs_da_state_blk_t *new_blk);
int	xfs_da_grow_inode(xfs_da_args_t *args, xfs_dablk_t *new_blkno);
int	xfs_da_get_buf(struct xfs_trans *trans, struct xfs_inode *dp,
xfs_dablk_t bno, xfs_daddr_t mappedbno,
xfs_dabuf_t **bp, int whichfork);
int	xfs_da_read_buf(struct xfs_trans *trans, struct xfs_inode *dp,
xfs_dablk_t bno, xfs_daddr_t mappedbno,
xfs_dabuf_t **bpp, int whichfork);
xfs_daddr_t	xfs_da_reada_buf(struct xfs_trans *trans, struct xfs_inode *dp,
xfs_dablk_t bno, int whichfork);
int	xfs_da_shrink_inode(xfs_da_args_t *args, xfs_dablk_t dead_blkno,
xfs_dabuf_t *dead_buf);
uint xfs_da_hashname(const __uint8_t *name_string, int name_length);
enum xfs_dacmp xfs_da_compname(struct xfs_da_args *args,
const unsigned char *name, int len);
xfs_da_state_t *xfs_da_state_alloc(void);
void xfs_da_state_free(xfs_da_state_t *state);
void xfs_da_buf_done(xfs_dabuf_t *dabuf);
void xfs_da_log_buf(struct xfs_trans *tp, xfs_dabuf_t *dabuf, uint first,
uint last);
void xfs_da_brelse(struct xfs_trans *tp, xfs_dabuf_t *dabuf);
void xfs_da_binval(struct xfs_trans *tp, xfs_dabuf_t *dabuf);
xfs_daddr_t xfs_da_blkno(xfs_dabuf_t *dabuf);
extern struct kmem_zone *xfs_da_state_zone;
extern struct kmem_zone *xfs_dabuf_zone;
extern const struct xfs_nameops xfs_default_nameops;
