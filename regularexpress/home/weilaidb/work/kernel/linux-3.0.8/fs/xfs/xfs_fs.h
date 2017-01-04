#define __XFS_FS_H__
struct dioattr ;
struct fsxattr ;
#define XFS_XFLAG_REALTIME	0x00000001
#define XFS_XFLAG_PREALLOC	0x00000002
#define XFS_XFLAG_IMMUTABLE	0x00000008
#define XFS_XFLAG_APPEND	0x00000010
#define XFS_XFLAG_SYNC		0x00000020
#define XFS_XFLAG_NOATIME	0x00000040
#define XFS_XFLAG_NODUMP	0x00000080
#define XFS_XFLAG_RTINHERIT	0x00000100
#define XFS_XFLAG_PROJINHERIT	0x00000200
#define XFS_XFLAG_NOSYMLINKS	0x00000400
#define XFS_XFLAG_EXTSIZE	0x00000800
#define XFS_XFLAG_EXTSZINHERIT	0x00001000
#define XFS_XFLAG_NODEFRAG	0x00002000
#define XFS_XFLAG_FILESTREAM	0x00004000
#define XFS_XFLAG_HASATTR	0x80000000
struct getbmap ;
struct getbmapx ;
#define BMV_IF_ATTRFORK		0x1
#define BMV_IF_NO_DMAPI_READ	0x2
#define BMV_IF_PREALLOC		0x4
#define BMV_IF_DELALLOC		0x8
#define BMV_IF_NO_HOLES		0x10
#define BMV_IF_VALID	\
(BMV_IF_ATTRFORK|BMV_IF_NO_DMAPI_READ|BMV_IF_PREALLOC|	\
BMV_IF_DELALLOC|BMV_IF_NO_HOLES)
#define BMV_OF_PREALLOC		0x1
#define BMV_OF_DELALLOC		0x2
#define BMV_OF_LAST		0x4
struct fsdmidata ;
typedef struct xfs_flock64  xfs_flock64_t;
typedef struct xfs_fsop_geom_v1  xfs_fsop_geom_v1_t;
typedef struct xfs_fsop_geom  xfs_fsop_geom_t;
typedef struct xfs_fsop_counts  xfs_fsop_counts_t;
typedef struct xfs_fsop_resblks  xfs_fsop_resblks_t;
#define XFS_FSOP_GEOM_VERSION	0
#define XFS_FSOP_GEOM_FLAGS_ATTR	0x0001
#define XFS_FSOP_GEOM_FLAGS_NLINK	0x0002
#define XFS_FSOP_GEOM_FLAGS_QUOTA	0x0004
#define XFS_FSOP_GEOM_FLAGS_IALIGN	0x0008
#define XFS_FSOP_GEOM_FLAGS_DALIGN	0x0010
#define XFS_FSOP_GEOM_FLAGS_SHARED	0x0020
#define XFS_FSOP_GEOM_FLAGS_EXTFLG	0x0040
#define XFS_FSOP_GEOM_FLAGS_DIRV2	0x0080
#define XFS_FSOP_GEOM_FLAGS_LOGV2	0x0100
#define XFS_FSOP_GEOM_FLAGS_SECTOR	0x0200
#define XFS_FSOP_GEOM_FLAGS_ATTR2	0x0400
#define XFS_FSOP_GEOM_FLAGS_DIRV2CI	0x1000
#define XFS_FSOP_GEOM_FLAGS_LAZYSB	0x4000
#define XFS_MIN_AG_BLOCKS	64
#define XFS_MIN_LOG_BLOCKS	512ULL
#define XFS_MAX_LOG_BLOCKS	(1024 * 1024ULL)
#define XFS_MIN_LOG_BYTES	(10 * 1024 * 1024ULL)
#define XFS_MAX_LOG_BYTES \
((2 * 1024 * 1024 * 1024ULL) - XFS_MIN_LOG_BYTES)
typedef struct xfs_growfs_data  xfs_growfs_data_t;
typedef struct xfs_growfs_log  xfs_growfs_log_t;
typedef struct xfs_growfs_rt  xfs_growfs_rt_t;
typedef struct xfs_bstime  xfs_bstime_t;
typedef struct xfs_bstat  xfs_bstat_t;
typedef struct xfs_fsop_bulkreq  xfs_fsop_bulkreq_t;
typedef struct xfs_inogrp  xfs_inogrp_t;
typedef struct xfs_error_injection  xfs_error_injection_t;
typedef struct xfs_fsop_handlereq  xfs_fsop_handlereq_t;
typedef struct xfs_fsop_setdm_handlereq  xfs_fsop_setdm_handlereq_t;
typedef struct xfs_attrlist_cursor  xfs_attrlist_cursor_t;
typedef struct xfs_fsop_attrlist_handlereq  xfs_fsop_attrlist_handlereq_t;
typedef struct xfs_attr_multiop  xfs_attr_multiop_t;
typedef struct xfs_fsop_attrmulti_handlereq  xfs_fsop_attrmulti_handlereq_t;
typedef struct  xfs_fsid_t;
typedef struct xfs_fid  xfs_fid_t;
typedef struct xfs_handle  xfs_handle_t;
#define ha_fsid ha_u._ha_fsid
#define XFS_HSIZE(handle)	(((char *) &(handle).ha_fid.fid_pad	 \
- (char *) &(handle))			  \
+ (handle).ha_fid.fid_len)
#define XFS_FSOP_GOING_FLAGS_DEFAULT		0x0
#define XFS_FSOP_GOING_FLAGS_LOGFLUSH		0x1
#define XFS_FSOP_GOING_FLAGS_NOLOGFLUSH		0x2
#define XFS_IOC_GETXFLAGS	FS_IOC_GETFLAGS
#define XFS_IOC_SETXFLAGS	FS_IOC_SETFLAGS
#define XFS_IOC_GETVERSION	FS_IOC_GETVERSION
#define XFS_IOC_ALLOCSP		_IOW ('X', 10, struct xfs_flock64)
#define XFS_IOC_FREESP		_IOW ('X', 11, struct xfs_flock64)
#define XFS_IOC_DIOINFO		_IOR ('X', 30, struct dioattr)
#define XFS_IOC_FSGETXATTR	_IOR ('X', 31, struct fsxattr)
#define XFS_IOC_FSSETXATTR	_IOW ('X', 32, struct fsxattr)
#define XFS_IOC_ALLOCSP64	_IOW ('X', 36, struct xfs_flock64)
#define XFS_IOC_FREESP64	_IOW ('X', 37, struct xfs_flock64)
#define XFS_IOC_GETBMAP		_IOWR('X', 38, struct getbmap)
#define XFS_IOC_FSSETDM		_IOW ('X', 39, struct fsdmidata)
#define XFS_IOC_RESVSP		_IOW ('X', 40, struct xfs_flock64)
#define XFS_IOC_UNRESVSP	_IOW ('X', 41, struct xfs_flock64)
#define XFS_IOC_RESVSP64	_IOW ('X', 42, struct xfs_flock64)
#define XFS_IOC_UNRESVSP64	_IOW ('X', 43, struct xfs_flock64)
#define XFS_IOC_GETBMAPA	_IOWR('X', 44, struct getbmap)
#define XFS_IOC_FSGETXATTRA	_IOR ('X', 45, struct fsxattr)
#define XFS_IOC_GETBMAPX	_IOWR('X', 56, struct getbmap)
#define XFS_IOC_ZERO_RANGE	_IOW ('X', 57, struct xfs_flock64)
#define XFS_IOC_FSGEOMETRY_V1	     _IOR ('X', 100, struct xfs_fsop_geom_v1)
#define XFS_IOC_FSBULKSTAT	     _IOWR('X', 101, struct xfs_fsop_bulkreq)
#define XFS_IOC_FSBULKSTAT_SINGLE    _IOWR('X', 102, struct xfs_fsop_bulkreq)
#define XFS_IOC_FSINUMBERS	     _IOWR('X', 103, struct xfs_fsop_bulkreq)
#define XFS_IOC_PATH_TO_FSHANDLE     _IOWR('X', 104, struct xfs_fsop_handlereq)
#define XFS_IOC_PATH_TO_HANDLE	     _IOWR('X', 105, struct xfs_fsop_handlereq)
#define XFS_IOC_FD_TO_HANDLE	     _IOWR('X', 106, struct xfs_fsop_handlereq)
#define XFS_IOC_OPEN_BY_HANDLE	     _IOWR('X', 107, struct xfs_fsop_handlereq)
#define XFS_IOC_READLINK_BY_HANDLE   _IOWR('X', 108, struct xfs_fsop_handlereq)
#define XFS_IOC_SWAPEXT		     _IOWR('X', 109, struct xfs_swapext)
#define XFS_IOC_FSGROWFSDATA	     _IOW ('X', 110, struct xfs_growfs_data)
#define XFS_IOC_FSGROWFSLOG	     _IOW ('X', 111, struct xfs_growfs_log)
#define XFS_IOC_FSGROWFSRT	     _IOW ('X', 112, struct xfs_growfs_rt)
#define XFS_IOC_FSCOUNTS	     _IOR ('X', 113, struct xfs_fsop_counts)
#define XFS_IOC_SET_RESBLKS	     _IOWR('X', 114, struct xfs_fsop_resblks)
#define XFS_IOC_GET_RESBLKS	     _IOR ('X', 115, struct xfs_fsop_resblks)
#define XFS_IOC_ERROR_INJECTION	     _IOW ('X', 116, struct xfs_error_injection)
#define XFS_IOC_ERROR_CLEARALL	     _IOW ('X', 117, struct xfs_error_injection)
#define XFS_IOC_FSSETDM_BY_HANDLE    _IOW ('X', 121, struct xfs_fsop_setdm_handlereq)
#define XFS_IOC_ATTRLIST_BY_HANDLE   _IOW ('X', 122, struct xfs_fsop_attrlist_handlereq)
#define XFS_IOC_ATTRMULTI_BY_HANDLE  _IOW ('X', 123, struct xfs_fsop_attrmulti_handlereq)
#define XFS_IOC_FSGEOMETRY	     _IOR ('X', 124, struct xfs_fsop_geom)
#define XFS_IOC_GOINGDOWN	     _IOR ('X', 125, __uint32_t)
#define BBSHIFT		9
#define BBSIZE		(1<<BBSHIFT)
#define BBMASK		(BBSIZE-1)
#define BTOBB(bytes)	(((__u64)(bytes) + BBSIZE - 1) >> BBSHIFT)
#define BTOBBT(bytes)	((__u64)(bytes) >> BBSHIFT)
#define BBTOB(bbs)	((bbs) << BBSHIFT)
