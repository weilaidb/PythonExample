#define	__XFS_INODE_H__
struct posix_acl;
struct xfs_dinode;
struct xfs_inode;
#define	XFS_DATA_FORK	0
#define	XFS_ATTR_FORK	1
typedef struct xfs_ext_irec  xfs_ext_irec_t;
#define	XFS_IEXT_BUFSZ		4096
#define	XFS_LINEAR_EXTS		(XFS_IEXT_BUFSZ / (uint)sizeof(xfs_bmbt_rec_t))
#define	XFS_INLINE_EXTS		2
#define	XFS_INLINE_DATA		32
typedef struct xfs_ifork  xfs_ifork_t;
struct xfs_imap ;
typedef struct xfs_ictimestamp  xfs_ictimestamp_t;
typedef struct xfs_icdinode  xfs_icdinode_t;
#define	XFS_ICHGTIME_MOD	0x1
#define	XFS_ICHGTIME_CHG	0x2
#define	XFS_IFINLINE	0x01
#define	XFS_IFEXTENTS	0x02
#define	XFS_IFBROOT	0x04
#define	XFS_IFEXTIREC	0x08
#define XFS_IFORK_Q(ip)			((ip)->i_d.di_forkoff != 0)
#define XFS_IFORK_BOFF(ip)		((int)((ip)->i_d.di_forkoff << 3))
#define XFS_IFORK_PTR(ip,w)		\
((w) == XFS_DATA_FORK ? \
&(ip)->i_df : \
(ip)->i_afp)
#define XFS_IFORK_DSIZE(ip) \
(XFS_IFORK_Q(ip) ? \
XFS_IFORK_BOFF(ip) : \
XFS_LITINO((ip)->i_mount))
#define XFS_IFORK_ASIZE(ip) \
(XFS_IFORK_Q(ip) ? \
XFS_LITINO((ip)->i_mount) - XFS_IFORK_BOFF(ip) : \
0)
#define XFS_IFORK_SIZE(ip,w) \
((w) == XFS_DATA_FORK ? \
XFS_IFORK_DSIZE(ip) : \
XFS_IFORK_ASIZE(ip))
#define XFS_IFORK_FORMAT(ip,w) \
((w) == XFS_DATA_FORK ? \
(ip)->i_d.di_format : \
(ip)->i_d.di_aformat)
#define XFS_IFORK_FMT_SET(ip,w,n) \
((w) == XFS_DATA_FORK ? \
((ip)->i_d.di_format = (n)) : \
((ip)->i_d.di_aformat = (n)))
#define XFS_IFORK_NEXTENTS(ip,w) \
((w) == XFS_DATA_FORK ? \
(ip)->i_d.di_nextents : \
(ip)->i_d.di_anextents)
#define XFS_IFORK_NEXT_SET(ip,w,n) \
((w) == XFS_DATA_FORK ? \
((ip)->i_d.di_nextents = (n)) : \
((ip)->i_d.di_anextents = (n)))
struct bhv_desc;
struct xfs_buf;
struct xfs_bmap_free;
struct xfs_bmbt_irec;
struct xfs_inode_log_item;
struct xfs_mount;
struct xfs_trans;
struct xfs_dquot;
typedef struct dm_attrs_s  dm_attrs_t;
typedef struct xfs_inode  xfs_inode_t;
#define XFS_ISIZE(ip)	(((ip)->i_d.di_mode & S_IFMT) == S_IFREG) ? \
(ip)->i_size : (ip)->i_d.di_size;
static inline struct xfs_inode *XFS_I(struct inode *inode)
static inline struct inode *VFS_I(struct xfs_inode *ip)
static inline void
__xfs_iflags_set(xfs_inode_t *ip, unsigned short flags)
static inline void
xfs_iflags_set(xfs_inode_t *ip, unsigned short flags)
static inline void
xfs_iflags_clear(xfs_inode_t *ip, unsigned short flags)
static inline int
__xfs_iflags_test(xfs_inode_t *ip, unsigned short flags)
static inline int
xfs_iflags_test(xfs_inode_t *ip, unsigned short flags)
static inline int
xfs_iflags_test_and_clear(xfs_inode_t *ip, unsigned short flags)
static inline prid_t
xfs_get_projid(struct xfs_inode *ip)
static inline void
xfs_set_projid(struct xfs_inode *ip,
prid_t projid)
static inline void xfs_iflock(xfs_inode_t *ip)
static inline int xfs_iflock_nowait(xfs_inode_t *ip)
static inline void xfs_ifunlock(xfs_inode_t *ip)
#define XFS_IRECLAIM		0x0001
#define XFS_ISTALE		0x0002
#define XFS_IRECLAIMABLE	0x0004
#define XFS_INEW		0x0008
#define XFS_IFILESTREAM		0x0010
#define XFS_ITRUNCATED		0x0020
#define XFS_IDIRTY_RELEASE	0x0040
#define XFS_IRECLAIM_RESET_FLAGS	\
(XFS_IRECLAIMABLE | XFS_IRECLAIM | \
XFS_IDIRTY_RELEASE | XFS_ITRUNCATED | \
XFS_IFILESTREAM);
#define	XFS_IOLOCK_EXCL		(1<<0)
#define	XFS_IOLOCK_SHARED	(1<<1)
#define	XFS_ILOCK_EXCL		(1<<2)
#define	XFS_ILOCK_SHARED	(1<<3)
#define	XFS_IUNLOCK_NONOTIFY	(1<<4)
#define XFS_LOCK_MASK		(XFS_IOLOCK_EXCL | XFS_IOLOCK_SHARED \
| XFS_ILOCK_EXCL | XFS_ILOCK_SHARED)
#define XFS_LOCK_FLAGS \
, \
, \
, \
, \
#define XFS_LOCK_PARENT		1
#define XFS_LOCK_RTBITMAP	2
#define XFS_LOCK_RTSUM		3
#define XFS_LOCK_INUMORDER	4
#define XFS_IOLOCK_SHIFT	16
#define	XFS_IOLOCK_PARENT	(XFS_LOCK_PARENT << XFS_IOLOCK_SHIFT)
#define XFS_ILOCK_SHIFT		24
#define	XFS_ILOCK_PARENT	(XFS_LOCK_PARENT << XFS_ILOCK_SHIFT)
#define	XFS_ILOCK_RTBITMAP	(XFS_LOCK_RTBITMAP << XFS_ILOCK_SHIFT)
#define	XFS_ILOCK_RTSUM		(XFS_LOCK_RTSUM << XFS_ILOCK_SHIFT)
#define XFS_IOLOCK_DEP_MASK	0x00ff0000
#define XFS_ILOCK_DEP_MASK	0xff000000
#define XFS_LOCK_DEP_MASK	(XFS_IOLOCK_DEP_MASK | XFS_ILOCK_DEP_MASK)
#define XFS_IOLOCK_DEP(flags)	(((flags) & XFS_IOLOCK_DEP_MASK) >> XFS_IOLOCK_SHIFT)
#define XFS_ILOCK_DEP(flags)	(((flags) & XFS_ILOCK_DEP_MASK) >> XFS_ILOCK_SHIFT)
extern struct lock_class_key xfs_iolock_reclaimable;
#define	XFS_ITRUNC_DEFINITE	0x1
#define	XFS_ITRUNC_MAYBE	0x2
#define XFS_ITRUNC_FLAGS \
, \
#define XFS_INHERIT_GID(pip)	\
(((pip)->i_mount->m_flags & XFS_MOUNT_GRPID) || \
((pip)->i_d.di_mode & S_ISGID))
int		xfs_iget(struct xfs_mount *, struct xfs_trans *, xfs_ino_t,
uint, uint, xfs_inode_t **);
void		xfs_ilock(xfs_inode_t *, uint);
int		xfs_ilock_nowait(xfs_inode_t *, uint);
void		xfs_iunlock(xfs_inode_t *, uint);
void		xfs_ilock_demote(xfs_inode_t *, uint);
int		xfs_isilocked(xfs_inode_t *, uint);
uint		xfs_ilock_map_shared(xfs_inode_t *);
void		xfs_iunlock_map_shared(xfs_inode_t *, uint);
void		xfs_inode_free(struct xfs_inode *ip);
int		xfs_ialloc(struct xfs_trans *, xfs_inode_t *, mode_t,
xfs_nlink_t, xfs_dev_t, prid_t, int,
struct xfs_buf **, boolean_t *, xfs_inode_t **);
uint		xfs_ip2xflags(struct xfs_inode *);
uint		xfs_dic2xflags(struct xfs_dinode *);
int		xfs_ifree(struct xfs_trans *, xfs_inode_t *,
struct xfs_bmap_free *);
int		xfs_itruncate_start(xfs_inode_t *, uint, xfs_fsize_t);
int		xfs_itruncate_finish(struct xfs_trans **, xfs_inode_t *,
xfs_fsize_t, int, int);
int		xfs_iunlink(struct xfs_trans *, xfs_inode_t *);
void		xfs_iext_realloc(xfs_inode_t *, int, int);
void		xfs_iunpin_wait(xfs_inode_t *);
int		xfs_iflush(xfs_inode_t *, uint);
void		xfs_lock_inodes(xfs_inode_t **, int, uint);
void		xfs_lock_two_inodes(xfs_inode_t *, xfs_inode_t *, uint);
void		xfs_synchronize_times(xfs_inode_t *);
void		xfs_mark_inode_dirty(xfs_inode_t *);
void		xfs_mark_inode_dirty_sync(xfs_inode_t *);
#define IHOLD(ip) \
do  while (0)
#define IRELE(ip) \
do  while (0)
#define XFS_IGET_CREATE		0x1
#define XFS_IGET_UNTRUSTED	0x2
int		xfs_inotobp(struct xfs_mount *, struct xfs_trans *,
xfs_ino_t, struct xfs_dinode **,
struct xfs_buf **, int *, uint);
int		xfs_itobp(struct xfs_mount *, struct xfs_trans *,
struct xfs_inode *, struct xfs_dinode **,
struct xfs_buf **, uint);
int		xfs_iread(struct xfs_mount *, struct xfs_trans *,
struct xfs_inode *, uint);
void		xfs_dinode_to_disk(struct xfs_dinode *,
struct xfs_icdinode *);
void		xfs_idestroy_fork(struct xfs_inode *, int);
void		xfs_idata_realloc(struct xfs_inode *, int, int);
void		xfs_iroot_realloc(struct xfs_inode *, int, int);
int		xfs_iread_extents(struct xfs_trans *, struct xfs_inode *, int);
int		xfs_iextents_copy(struct xfs_inode *, xfs_bmbt_rec_t *, int);
xfs_bmbt_rec_host_t *xfs_iext_get_ext(xfs_ifork_t *, xfs_extnum_t);
void		xfs_iext_insert(xfs_inode_t *, xfs_extnum_t, xfs_extnum_t,
xfs_bmbt_irec_t *, int);
void		xfs_iext_add(xfs_ifork_t *, xfs_extnum_t, int);
void		xfs_iext_add_indirect_multi(xfs_ifork_t *, int, xfs_extnum_t, int);
void		xfs_iext_remove(xfs_inode_t *, xfs_extnum_t, int, int);
void		xfs_iext_remove_inline(xfs_ifork_t *, xfs_extnum_t, int);
void		xfs_iext_remove_direct(xfs_ifork_t *, xfs_extnum_t, int);
void		xfs_iext_remove_indirect(xfs_ifork_t *, xfs_extnum_t, int);
void		xfs_iext_realloc_direct(xfs_ifork_t *, int);
void		xfs_iext_direct_to_inline(xfs_ifork_t *, xfs_extnum_t);
void		xfs_iext_inline_to_direct(xfs_ifork_t *, int);
void		xfs_iext_destroy(xfs_ifork_t *);
xfs_bmbt_rec_host_t *xfs_iext_bno_to_ext(xfs_ifork_t *, xfs_fileoff_t, int *);
xfs_ext_irec_t	*xfs_iext_bno_to_irec(xfs_ifork_t *, xfs_fileoff_t, int *);
xfs_ext_irec_t	*xfs_iext_idx_to_irec(xfs_ifork_t *, xfs_extnum_t *, int *, int);
void		xfs_iext_irec_init(xfs_ifork_t *);
xfs_ext_irec_t *xfs_iext_irec_new(xfs_ifork_t *, int);
void		xfs_iext_irec_remove(xfs_ifork_t *, int);
void		xfs_iext_irec_compact(xfs_ifork_t *);
void		xfs_iext_irec_compact_pages(xfs_ifork_t *);
void		xfs_iext_irec_compact_full(xfs_ifork_t *);
void		xfs_iext_irec_update_extoffs(xfs_ifork_t *, int, int);
#define xfs_ipincount(ip)	((unsigned int) atomic_read(&ip->i_pincount))
void		xfs_isize_check(struct xfs_mount *, struct xfs_inode *,
xfs_fsize_t);
#define xfs_isize_check(mp, ip, isize)
#if defined(DEBUG)
void		xfs_inobp_check(struct xfs_mount *, struct xfs_buf *);
#define	xfs_inobp_check(mp, bp)
extern struct kmem_zone	*xfs_ifork_zone;
extern struct kmem_zone	*xfs_inode_zone;
extern struct kmem_zone	*xfs_ili_zone;
