struct xfs_name xfs_name_dotdot = ;
STATIC xfs_dahash_t
xfs_ascii_ci_hashname(
struct xfs_name	*name)
STATIC enum xfs_dacmp
xfs_ascii_ci_compname(
struct xfs_da_args *args,
const unsigned char *name,
int		len)
static struct xfs_nameops xfs_ascii_ci_nameops = ;
void
xfs_dir_mount(
xfs_mount_t	*mp)
int
xfs_dir_isempty(
xfs_inode_t	*dp)
int
xfs_dir_ino_validate(
xfs_mount_t	*mp,
xfs_ino_t	ino)
int
xfs_dir_init(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
xfs_inode_t	*pdp)
int
xfs_dir_createname(
xfs_trans_t		*tp,
xfs_inode_t		*dp,
struct xfs_name		*name,
xfs_ino_t		inum,
xfs_fsblock_t		*first,
xfs_bmap_free_t		*flist,
xfs_extlen_t		total)
int
xfs_dir_cilookup_result(
struct xfs_da_args *args,
const unsigned char *name,
int		len)
int
xfs_dir_lookup(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
struct xfs_name	*name,
xfs_ino_t	*inum,
struct xfs_name *ci_name)
int
xfs_dir_removename(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
struct xfs_name	*name,
xfs_ino_t	ino,
xfs_fsblock_t	*first,
xfs_bmap_free_t	*flist,
xfs_extlen_t	total)
int
xfs_readdir(
xfs_inode_t	*dp,
void		*dirent,
size_t		bufsize,
xfs_off_t	*offset,
filldir_t	filldir)
int
xfs_dir_replace(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
struct xfs_name	*name,
xfs_ino_t	inum,
xfs_fsblock_t	*first,
xfs_bmap_free_t	*flist,
xfs_extlen_t	total)
int
xfs_dir_canenter(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
struct xfs_name	*name,
uint		resblks)
int
xfs_dir2_grow_inode(
xfs_da_args_t	*args,
int		space,
xfs_dir2_db_t	*dbp)
int
xfs_dir2_isblock(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
int		*vp)
int
xfs_dir2_isleaf(
xfs_trans_t	*tp,
xfs_inode_t	*dp,
int		*vp)
int
xfs_dir2_shrink_inode(
xfs_da_args_t	*args,
xfs_dir2_db_t	db,
xfs_dabuf_t	*bp)
