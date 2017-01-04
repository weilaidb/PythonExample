#define _CODA_HEADER_
#if defined(__NetBSD__) || \
((defined(DJGPP) || defined(__CYGWIN32__)) && !defined(KERNEL))
#define CODA_MAXSYMLINKS 10
#if defined(DJGPP) || defined(__CYGWIN32__)
typedef unsigned long u_long;
typedef unsigned int u_int;
typedef unsigned short u_short;
typedef u_long ino_t;
typedef u_long dev_t;
typedef void * caddr_t;
typedef unsigned __int64 u_quad_t;
typedef unsigned long long u_quad_t;
#define inline
struct timespec ;
typedef unsigned long long u_quad_t;
#if defined(__linux__)
#define cdev_t u_quad_t
#if !defined(_UQUAD_T_) && (!defined(__GLIBC__) || __GLIBC__ < 2)
#define _UQUAD_T_ 1
typedef unsigned long long u_quad_t;
typedef unsigned long long u_quad_t;
#define cdev_t dev_t
struct timespec ;
#define __BIT_TYPES_DEFINED__
typedef signed char	      int8_t;
typedef unsigned char	    u_int8_t;
typedef short		     int16_t;
typedef unsigned short	   u_int16_t;
typedef int		     int32_t;
typedef unsigned int	   u_int32_t;
#define CODA_MAXNAMLEN   255
#define CODA_MAXPATHLEN  1024
#define CODA_MAXSYMLINK  10
#define	C_O_READ	0x001
#define	C_O_WRITE       0x002
#define C_O_TRUNC       0x010
#define C_O_EXCL	0x100
#define C_O_CREAT	0x200
#define C_M_READ  00400
#define C_M_WRITE 00200
#define C_A_C_OK    8
#define C_A_R_OK    4
#define C_A_W_OK    2
#define C_A_X_OK    1
#define C_A_F_OK    0
#define _VENUS_DIRENT_T_ 1
struct venus_dirent ;
#undef DIRSIZ
#define DIRSIZ(dp)      ((sizeof (struct venus_dirent) - (CODA_MAXNAMLEN+1)) + \
(((dp)->d_namlen+1 + 3) &~ 3))
#define	CDT_UNKNOWN	 0
#define	CDT_FIFO	 1
#define	CDT_CHR		 2
#define	CDT_DIR		 4
#define	CDT_BLK		 6
#define	CDT_REG		 8
#define	CDT_LNK		10
#define	CDT_SOCK	12
#define	CDT_WHT		14
#define	IFTOCDT(mode)	(((mode) & 0170000) >> 12)
#define	CDTTOIF(dirtype)	((dirtype) << 12)
#define _VUID_T_
typedef u_int32_t vuid_t;
typedef u_int32_t vgid_t;
struct CodaFid ;
#define coda_f2i(fid)\
(fid ? (fid->opaque[3] ^ (fid->opaque[2]<<10) ^ (fid->opaque[1]<<20) ^ fid->opaque[0]) : 0)
#define _VENUS_VATTR_T_
enum coda_vtype	;
struct coda_vattr ;
struct coda_statfs ;
#define CODA_ROOT	2
#define CODA_OPEN_BY_FD	3
#define CODA_OPEN	4
#define CODA_CLOSE	5
#define CODA_IOCTL	6
#define CODA_GETATTR	7
#define CODA_SETATTR	8
#define CODA_ACCESS	9
#define CODA_LOOKUP	10
#define CODA_CREATE	11
#define CODA_REMOVE	12
#define CODA_LINK	13
#define CODA_RENAME	14
#define CODA_MKDIR	15
#define CODA_RMDIR	16
#define CODA_SYMLINK	18
#define CODA_READLINK	19
#define CODA_FSYNC	20
#define CODA_VGET	22
#define CODA_SIGNAL	23
#define CODA_REPLACE	 24
#define CODA_FLUSH       25
#define CODA_PURGEUSER   26
#define CODA_ZAPFILE     27
#define CODA_ZAPDIR      28
#define CODA_PURGEFID    30
#define CODA_OPEN_BY_PATH 31
#define CODA_RESOLVE     32
#define CODA_REINTEGRATE 33
#define CODA_STATFS	 34
#define CODA_STORE	 35
#define CODA_RELEASE	 36
#define CODA_NCALLS 37
#define DOWNCALL(opcode) (opcode >= CODA_REPLACE && opcode <= CODA_PURGEFID)
#define VC_MAXDATASIZE	    8192
#define VC_MAXMSGSIZE      sizeof(union inputArgs)+sizeof(union outputArgs) +\
VC_MAXDATASIZE
#define CIOC_KERNEL_VERSION _IOWR('c', 10, size_t)
#define CODA_KERNEL_VERSION 3
struct coda_in_hdr ;
struct coda_out_hdr ;
struct coda_root_out ;
struct coda_root_in ;
struct coda_open_in ;
struct coda_open_out ;
struct coda_store_in ;
struct coda_store_out ;
struct coda_release_in ;
struct coda_release_out ;
struct coda_close_in ;
struct coda_close_out ;
struct coda_ioctl_in ;
struct coda_ioctl_out ;
struct coda_getattr_in ;
struct coda_getattr_out ;
struct coda_setattr_in ;
struct coda_setattr_out ;
struct coda_access_in ;
struct coda_access_out ;
#define CLU_CASE_SENSITIVE     0x01
#define CLU_CASE_INSENSITIVE   0x02
struct  coda_lookup_in ;
struct coda_lookup_out ;
struct coda_create_in ;
struct coda_create_out ;
struct coda_remove_in ;
struct coda_remove_out ;
struct coda_link_in ;
struct coda_link_out ;
struct coda_rename_in ;
struct coda_rename_out ;
struct coda_mkdir_in ;
struct coda_mkdir_out ;
struct coda_rmdir_in ;
struct coda_rmdir_out ;
struct coda_symlink_in ;
struct coda_symlink_out ;
struct coda_readlink_in ;
struct coda_readlink_out ;
struct coda_fsync_in ;
struct coda_fsync_out ;
struct coda_vget_in ;
struct coda_vget_out ;
struct coda_purgeuser_out ;
struct coda_zapfile_out ;
struct coda_zapdir_out ;
struct coda_purgefid_out ;
struct coda_replace_out ;
struct coda_open_by_fd_in ;
struct coda_open_by_fd_out ;
struct coda_open_by_path_in ;
struct coda_open_by_path_out ;
struct coda_statfs_in ;
struct coda_statfs_out ;
#define CODA_NOCACHE          0x80000000
union inputArgs ;
union outputArgs ;
union coda_downcalls ;
#define PIOCPARM_MASK 0x0000ffff
struct ViceIoctl ;
struct PioctlData ;
#define CODA_CONTROL		".CONTROL"
#define CODA_CONTROLLEN		8
#define CTL_INO			-1
#define CODA_MOUNT_VERSION 1
struct coda_mount_data ;
