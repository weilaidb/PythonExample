STATIC int xfs_attr_shortform_addname(xfs_da_args_t *args);
STATIC int xfs_attr_leaf_get(xfs_da_args_t *args);
STATIC int xfs_attr_leaf_addname(xfs_da_args_t *args);
STATIC int xfs_attr_leaf_removename(xfs_da_args_t *args);
STATIC int xfs_attr_leaf_list(xfs_attr_list_context_t *context);
STATIC int xfs_attr_node_get(xfs_da_args_t *args);
STATIC int xfs_attr_node_addname(xfs_da_args_t *args);
STATIC int xfs_attr_node_removename(xfs_da_args_t *args);
STATIC int xfs_attr_node_list(xfs_attr_list_context_t *context);
STATIC int xfs_attr_fillstate(xfs_da_state_t *state);
STATIC int xfs_attr_refillstate(xfs_da_state_t *state);
STATIC int xfs_attr_rmtval_set(xfs_da_args_t *args);
STATIC int xfs_attr_rmtval_remove(xfs_da_args_t *args);
#define ATTR_RMTVALUE_MAPSIZE	1
STATIC int
xfs_attr_name_to_xname(
struct xfs_name	*xname,
const unsigned char *aname)
STATIC int
xfs_inode_hasattr(
struct xfs_inode	*ip)
STATIC int
xfs_attr_get_int(
struct xfs_inode	*ip,
struct xfs_name		*name,
unsigned char		*value,
int			*valuelenp,
int			flags)
int
xfs_attr_get(
xfs_inode_t	*ip,
const unsigned char *name,
unsigned char	*value,
int		*valuelenp,
int		flags)
STATIC int
xfs_attr_calc_size(
struct xfs_inode 	*ip,
int			namelen,
int			valuelen,
int			*local)
STATIC int
xfs_attr_set_int(
struct xfs_inode *dp,
struct xfs_name	*name,
unsigned char	*value,
int		valuelen,
int		flags)
int
xfs_attr_set(
xfs_inode_t	*dp,
const unsigned char *name,
unsigned char	*value,
int		valuelen,
int		flags)
STATIC int
xfs_attr_remove_int(xfs_inode_t *dp, struct xfs_name *name, int flags)
int
xfs_attr_remove(
xfs_inode_t	*dp,
const unsigned char *name,
int		flags)
int
xfs_attr_list_int(xfs_attr_list_context_t *context)
#define	ATTR_ENTBASESIZE \
(((struct attrlist_ent *) 0)->a_name - (char *) 0)
#define	ATTR_ENTSIZE(namelen) \
((ATTR_ENTBASESIZE + (namelen) + 1 + sizeof(u_int32_t)-1) \
& ~(sizeof(u_int32_t)-1))
STATIC int
xfs_attr_put_listent(
xfs_attr_list_context_t *context,
int		flags,
unsigned char	*name,
int		namelen,
int		valuelen,
unsigned char	*value)
int
xfs_attr_list(
xfs_inode_t	*dp,
char		*buffer,
int		bufsize,
int		flags,
attrlist_cursor_kern_t *cursor)
int
xfs_attr_inactive(xfs_inode_t *dp)
STATIC int
xfs_attr_shortform_addname(xfs_da_args_t *args)
STATIC int
xfs_attr_leaf_addname(xfs_da_args_t *args)
STATIC int
xfs_attr_leaf_removename(xfs_da_args_t *args)
STATIC int
xfs_attr_leaf_get(xfs_da_args_t *args)
STATIC int
xfs_attr_leaf_list(xfs_attr_list_context_t *context)
STATIC int
xfs_attr_node_addname(xfs_da_args_t *args)
STATIC int
xfs_attr_node_removename(xfs_da_args_t *args)
STATIC int
xfs_attr_fillstate(xfs_da_state_t *state)
STATIC int
xfs_attr_refillstate(xfs_da_state_t *state)
STATIC int
xfs_attr_node_get(xfs_da_args_t *args)
STATIC int
xfs_attr_node_list(xfs_attr_list_context_t *context)
int
xfs_attr_rmtval_get(xfs_da_args_t *args)
STATIC int
xfs_attr_rmtval_set(xfs_da_args_t *args)
STATIC int
xfs_attr_rmtval_remove(xfs_da_args_t *args)
