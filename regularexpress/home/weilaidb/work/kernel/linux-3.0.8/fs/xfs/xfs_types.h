#define	__XFS_TYPES_H__
typedef signed char		__int8_t;
typedef unsigned char		__uint8_t;
typedef signed short int	__int16_t;
typedef unsigned short int	__uint16_t;
typedef signed int		__int32_t;
typedef unsigned int		__uint32_t;
typedef signed long long int	__int64_t;
typedef unsigned long long int	__uint64_t;
typedef enum 	boolean_t;
typedef __uint32_t		prid_t;
typedef __uint32_t		inst_t;
typedef __s64			xfs_off_t;
typedef unsigned long long	xfs_ino_t;
typedef __s64			xfs_daddr_t;
typedef char *			xfs_caddr_t;
typedef __u32			xfs_dev_t;
typedef __u32			xfs_nlink_t;
#if (BITS_PER_LONG == 32)
typedef __int32_t __psint_t;
typedef __uint32_t __psunsigned_t;
#elif (BITS_PER_LONG == 64)
typedef __int64_t __psint_t;
typedef __uint64_t __psunsigned_t;
#error BITS_PER_LONG must be 32 or 64
typedef __uint32_t	xfs_agblock_t;
typedef	__uint32_t	xfs_extlen_t;
typedef	__uint32_t	xfs_agnumber_t;
typedef __int32_t	xfs_extnum_t;
typedef __int16_t	xfs_aextnum_t;
typedef	__int64_t	xfs_fsize_t;
typedef __uint64_t	xfs_ufsize_t;
typedef	__int32_t	xfs_suminfo_t;
typedef	__int32_t	xfs_rtword_t;
typedef	__int64_t	xfs_lsn_t;
typedef	__int32_t	xfs_tid_t;
typedef	__uint32_t	xfs_dablk_t;
typedef	__uint32_t	xfs_dahash_t;
typedef __uint64_t	xfs_dfsbno_t;
typedef __uint64_t	xfs_drfsbno_t;
typedef	__uint64_t	xfs_drtbno_t;
typedef	__uint64_t	xfs_dfiloff_t;
typedef	__uint64_t	xfs_dfilblks_t;
#if XFS_BIG_BLKNOS
typedef	__uint64_t	xfs_fsblock_t;
typedef __uint64_t	xfs_rfsblock_t;
typedef __uint64_t	xfs_rtblock_t;
typedef	__int64_t	xfs_srtblock_t;
typedef	__uint32_t	xfs_fsblock_t;
typedef __uint32_t	xfs_rfsblock_t;
typedef __uint32_t	xfs_rtblock_t;
typedef	__int32_t	xfs_srtblock_t;
typedef __uint64_t	xfs_fileoff_t;
typedef __int64_t	xfs_sfiloff_t;
typedef __uint64_t	xfs_filblks_t;
#define	NULLDFSBNO	((xfs_dfsbno_t)-1)
#define	NULLDRFSBNO	((xfs_drfsbno_t)-1)
#define	NULLDRTBNO	((xfs_drtbno_t)-1)
#define	NULLDFILOFF	((xfs_dfiloff_t)-1)
#define	NULLFSBLOCK	((xfs_fsblock_t)-1)
#define	NULLRFSBLOCK	((xfs_rfsblock_t)-1)
#define	NULLRTBLOCK	((xfs_rtblock_t)-1)
#define	NULLFILEOFF	((xfs_fileoff_t)-1)
#define	NULLAGBLOCK	((xfs_agblock_t)-1)
#define	NULLAGNUMBER	((xfs_agnumber_t)-1)
#define	NULLEXTNUM	((xfs_extnum_t)-1)
#define NULLCOMMITLSN	((xfs_lsn_t)-1)
#define	MAXEXTLEN	((xfs_extlen_t)0x001fffff)
#define	MAXEXTNUM	((xfs_extnum_t)0x7fffffff)
#define	MAXAEXTNUM	((xfs_aextnum_t)0x7fff)
#define MINDBTPTRS	3
#define MINABTPTRS	2
#define MAXNAMELEN	256
typedef enum  xfs_lookup_t;
typedef enum  xfs_btnum_t;
struct xfs_name ;
