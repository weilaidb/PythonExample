#define _LINUX_NFS_H
#define NFS_PROGRAM	100003
#define NFS_PORT	2049
#define NFS_MAXDATA	8192
#define NFS_MAXPATHLEN	1024
#define NFS_MAXNAMLEN	255
#define NFS_MAXGROUPS	16
#define NFS_FHSIZE	32
#define NFS_COOKIESIZE	4
#define NFS_FIFO_DEV	(-1)
#define NFSMODE_FMT	0170000
#define NFSMODE_DIR	0040000
#define NFSMODE_CHR	0020000
#define NFSMODE_BLK	0060000
#define NFSMODE_REG	0100000
#define NFSMODE_LNK	0120000
#define NFSMODE_SOCK	0140000
#define NFSMODE_FIFO	0010000
#define NFS_MNT_PROGRAM		100005
#define NFS_MNT_VERSION		1
#define NFS_MNT3_VERSION	3
enum nfs_stat ;
enum nfs_ftype ;
#define NFS_MAXFHSIZE		128
struct nfs_fh ;
static inline int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
static inline void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
#define NFS_OFFSET_MAX		((__s64)((~(__u64)0) >> 1))
enum nfs3_stable_how ;
