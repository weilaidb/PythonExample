#define __XFS_IOCTL32_H__
#define XFS_IOC_GETXFLAGS_32	FS_IOC32_GETFLAGS
#define XFS_IOC_SETXFLAGS_32	FS_IOC32_SETFLAGS
#define XFS_IOC_GETVERSION_32	FS_IOC32_GETVERSION
#if defined(CONFIG_IA64) || defined(CONFIG_X86_64)
#define BROKEN_X86_ALIGNMENT
#define __compat_packed __attribute__((packed))
#define __compat_packed
typedef struct compat_xfs_bstime  compat_xfs_bstime_t;
typedef struct compat_xfs_bstat  __compat_packed compat_xfs_bstat_t;
typedef struct compat_xfs_fsop_bulkreq  compat_xfs_fsop_bulkreq_t;
#define XFS_IOC_FSBULKSTAT_32 \
_IOWR('X', 101, struct compat_xfs_fsop_bulkreq)
#define XFS_IOC_FSBULKSTAT_SINGLE_32 \
_IOWR('X', 102, struct compat_xfs_fsop_bulkreq)
#define XFS_IOC_FSINUMBERS_32 \
_IOWR('X', 103, struct compat_xfs_fsop_bulkreq)
typedef struct compat_xfs_fsop_handlereq  compat_xfs_fsop_handlereq_t;
#define XFS_IOC_PATH_TO_FSHANDLE_32 \
_IOWR('X', 104, struct compat_xfs_fsop_handlereq)
#define XFS_IOC_PATH_TO_HANDLE_32 \
_IOWR('X', 105, struct compat_xfs_fsop_handlereq)
#define XFS_IOC_FD_TO_HANDLE_32 \
_IOWR('X', 106, struct compat_xfs_fsop_handlereq)
#define XFS_IOC_OPEN_BY_HANDLE_32 \
_IOWR('X', 107, struct compat_xfs_fsop_handlereq)
#define XFS_IOC_READLINK_BY_HANDLE_32 \
_IOWR('X', 108, struct compat_xfs_fsop_handlereq)
typedef struct compat_xfs_swapext  __compat_packed compat_xfs_swapext_t;
#define XFS_IOC_SWAPEXT_32	_IOWR('X', 109, struct compat_xfs_swapext)
typedef struct compat_xfs_fsop_attrlist_handlereq  __compat_packed compat_xfs_fsop_attrlist_handlereq_t;
#define XFS_IOC_ATTRLIST_BY_HANDLE_32 \
_IOW('X', 122, struct compat_xfs_fsop_attrlist_handlereq)
typedef struct compat_xfs_attr_multiop  compat_xfs_attr_multiop_t;
typedef struct compat_xfs_fsop_attrmulti_handlereq  compat_xfs_fsop_attrmulti_handlereq_t;
#define XFS_IOC_ATTRMULTI_BY_HANDLE_32 \
_IOW('X', 123, struct compat_xfs_fsop_attrmulti_handlereq)
typedef struct compat_xfs_fsop_setdm_handlereq  compat_xfs_fsop_setdm_handlereq_t;
#define XFS_IOC_FSSETDM_BY_HANDLE_32 \
_IOW('X', 121, struct compat_xfs_fsop_setdm_handlereq)
typedef struct compat_xfs_flock64  compat_xfs_flock64_t;
#define XFS_IOC_ALLOCSP_32	_IOW('X', 10, struct compat_xfs_flock64)
#define XFS_IOC_FREESP_32	_IOW('X', 11, struct compat_xfs_flock64)
#define XFS_IOC_ALLOCSP64_32	_IOW('X', 36, struct compat_xfs_flock64)
#define XFS_IOC_FREESP64_32	_IOW('X', 37, struct compat_xfs_flock64)
#define XFS_IOC_RESVSP_32	_IOW('X', 40, struct compat_xfs_flock64)
#define XFS_IOC_UNRESVSP_32	_IOW('X', 41, struct compat_xfs_flock64)
#define XFS_IOC_RESVSP64_32	_IOW('X', 42, struct compat_xfs_flock64)
#define XFS_IOC_UNRESVSP64_32	_IOW('X', 43, struct compat_xfs_flock64)
#define XFS_IOC_ZERO_RANGE_32	_IOW('X', 57, struct compat_xfs_flock64)
typedef struct compat_xfs_fsop_geom_v1  __attribute__((packed)) compat_xfs_fsop_geom_v1_t;
#define XFS_IOC_FSGEOMETRY_V1_32  \
_IOR('X', 100, struct compat_xfs_fsop_geom_v1)
typedef struct compat_xfs_inogrp  __attribute__((packed)) compat_xfs_inogrp_t;
typedef struct compat_xfs_growfs_data  __attribute__((packed)) compat_xfs_growfs_data_t;
typedef struct compat_xfs_growfs_rt  __attribute__((packed)) compat_xfs_growfs_rt_t;
#define XFS_IOC_FSGROWFSDATA_32 _IOW('X', 110, struct compat_xfs_growfs_data)
#define XFS_IOC_FSGROWFSRT_32   _IOW('X', 112, struct compat_xfs_growfs_rt)
