#define __XFS_VNODE_H__
struct file;
struct xfs_inode;
struct xfs_iomap;
struct attrlist_cursor_kern;
#define	VN_INACTIVE_CACHE	0
#define	VN_INACTIVE_NOCACHE	1
#define IO_ISDIRECT	0x00004
#define IO_INVIS	0x00020
#define XFS_IO_FLAGS \
, \
#define FI_NONE			0
#define FI_REMAPF		1
#define FI_REMAPF_LOCKED	2
#define VN_MAPPED(vp)	mapping_mapped(vp->i_mapping)
#define VN_CACHED(vp)	(vp->i_mapping->nrpages)
#define VN_DIRTY(vp)	mapping_tagged(vp->i_mapping, \
PAGECACHE_TAG_DIRTY)
