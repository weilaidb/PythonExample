#define	__XFS_ATTR_H__
struct xfs_inode;
struct xfs_da_args;
struct xfs_attr_list_context;
#define ATTR_DONTFOLLOW	0x0001
#define ATTR_ROOT	0x0002
#define ATTR_TRUST	0x0004
#define ATTR_SECURE	0x0008
#define ATTR_CREATE	0x0010
#define ATTR_REPLACE	0x0020
#define ATTR_KERNOTIME	0x1000
#define ATTR_KERNOVAL	0x2000
#define XFS_ATTR_FLAGS \
, \
, \
, \
, \
, \
, \
, \
#define	ATTR_MAX_VALUELEN	(64*1024)
typedef struct attrlist  attrlist_t;
typedef struct attrlist_ent  attrlist_ent_t;
#define	ATTR_ENTRY(buffer, index)		\
((attrlist_ent_t *)			\
&((char *)buffer)[ ((attrlist_t *)(buffer))->al_offset[index] ])
typedef struct attrlist_cursor_kern  attrlist_cursor_kern_t;
typedef int (*put_listent_func_t)(struct xfs_attr_list_context *, int,
unsigned char *, int, int, unsigned char *);
typedef struct xfs_attr_list_context  xfs_attr_list_context_t;
int xfs_attr_inactive(struct xfs_inode *dp);
int xfs_attr_rmtval_get(struct xfs_da_args *args);
int xfs_attr_list_int(struct xfs_attr_list_context *);
