STATIC int
xfs_internal_inum(
xfs_mount_t	*mp,
xfs_ino_t	ino)
int
xfs_bulkstat_one_int(
struct xfs_mount	*mp,
xfs_ino_t		ino,
void __user		*buffer,
int			ubsize,
bulkstat_one_fmt_pf	formatter,
int			*ubused,
int			*stat)
STATIC int
xfs_bulkstat_one_fmt(
void			__user *ubuffer,
int			ubsize,
int			*ubused,
const xfs_bstat_t	*buffer)
int
xfs_bulkstat_one(
xfs_mount_t	*mp,
xfs_ino_t	ino,
void		__user *buffer,
int		ubsize,
int		*ubused,
int		*stat)
#define XFS_BULKSTAT_UBLEFT(ubleft)	((ubleft) >= statstruct_size)
int
xfs_bulkstat(
xfs_mount_t		*mp,
xfs_ino_t		*lastinop,
int			*ubcountp,
bulkstat_one_pf		formatter,
size_t			statstruct_size,
char			__user *ubuffer,
int			*done)
int
xfs_bulkstat_single(
xfs_mount_t		*mp,
xfs_ino_t		*lastinop,
char			__user *buffer,
int			*done)
int
xfs_inumbers_fmt(
void			__user *ubuffer,
const xfs_inogrp_t	*buffer,
long			count,
long			*written)
int
xfs_inumbers(
xfs_mount_t	*mp,
xfs_ino_t	*lastino,
int		*count,
void		__user *ubuffer,
inumbers_fmt_pf	formatter)
