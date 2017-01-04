#define _VXFS_DIR_H_
struct vxfs_dirblk ;
#define VXFS_NAMELEN	256
struct vxfs_direct ;
#define VXFS_DIRPAD		4
#define VXFS_NAMEMIN		offsetof(struct vxfs_direct, d_name)
#define VXFS_DIRROUND(len)	((VXFS_DIRPAD + (len) - 1) & ~(VXFS_DIRPAD -1))
#define VXFS_DIRLEN(len)	(VXFS_DIRROUND(VXFS_NAMEMIN + (len)))
#define VXFS_DIRBLKOV(dbp)	((sizeof(short) * dbp->d_nhash) + 4)
