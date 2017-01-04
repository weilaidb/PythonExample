static void xfs_dir2_sf_addname_easy(xfs_da_args_t *args,
xfs_dir2_sf_entry_t *sfep,
xfs_dir2_data_aoff_t offset,
int new_isize);
static void xfs_dir2_sf_addname_hard(xfs_da_args_t *args, int objchange,
int new_isize);
static int xfs_dir2_sf_addname_pick(xfs_da_args_t *args, int objchange,
xfs_dir2_sf_entry_t **sfepp,
xfs_dir2_data_aoff_t *offsetp);
static void xfs_dir2_sf_check(xfs_da_args_t *args);
#define	xfs_dir2_sf_check(args)
#if XFS_BIG_INUMS
static void xfs_dir2_sf_toino4(xfs_da_args_t *args);
static void xfs_dir2_sf_toino8(xfs_da_args_t *args);
int
xfs_dir2_block_sfsize(
xfs_inode_t		*dp,
xfs_dir2_block_t	*block,
xfs_dir2_sf_hdr_t	*sfhp)
int
xfs_dir2_block_to_sf(
xfs_da_args_t		*args,
xfs_dabuf_t		*bp,
int			size,
xfs_dir2_sf_hdr_t	*sfhp)
int
xfs_dir2_sf_addname(
xfs_da_args_t		*args)
static void
xfs_dir2_sf_addname_easy(
xfs_da_args_t		*args,
xfs_dir2_sf_entry_t	*sfep,
xfs_dir2_data_aoff_t	offset,
int			new_isize)
static void
xfs_dir2_sf_addname_hard(
xfs_da_args_t		*args,
int			objchange,
int			new_isize)
static int
xfs_dir2_sf_addname_pick(
xfs_da_args_t		*args,
int			objchange,
xfs_dir2_sf_entry_t	**sfepp,
xfs_dir2_data_aoff_t	*offsetp)
static void
xfs_dir2_sf_check(
xfs_da_args_t		*args)
int
xfs_dir2_sf_create(
xfs_da_args_t	*args,
xfs_ino_t	pino)
int
xfs_dir2_sf_getdents(
xfs_inode_t		*dp,
void			*dirent,
xfs_off_t		*offset,
filldir_t		filldir)
int
xfs_dir2_sf_lookup(
xfs_da_args_t		*args)
int
xfs_dir2_sf_removename(
xfs_da_args_t		*args)
int
xfs_dir2_sf_replace(
xfs_da_args_t		*args)
#if XFS_BIG_INUMS
static void
xfs_dir2_sf_toino4(
xfs_da_args_t		*args)
static void
xfs_dir2_sf_toino8(
xfs_da_args_t		*args)
