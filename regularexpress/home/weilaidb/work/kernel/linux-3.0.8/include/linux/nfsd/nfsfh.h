#define _LINUX_NFSD_FH_H
# include <linux/types.h>
# include <linux/sunrpc/svc.h>
struct nfs_fhbase_old ;
struct nfs_fhbase_new ;
struct knfsd_fh ;
#define ofh_dcookie		fh_base.fh_old.fb_dcookie
#define ofh_ino			fh_base.fh_old.fb_ino
#define ofh_dirino		fh_base.fh_old.fb_dirino
#define ofh_dev			fh_base.fh_old.fb_dev
#define ofh_xdev		fh_base.fh_old.fb_xdev
#define ofh_xino		fh_base.fh_old.fb_xino
#define ofh_generation		fh_base.fh_old.fb_generation
#define	fh_version		fh_base.fh_new.fb_version
#define	fh_fsid_type		fh_base.fh_new.fb_fsid_type
#define	fh_auth_type		fh_base.fh_new.fb_auth_type
#define	fh_fileid_type		fh_base.fh_new.fb_fileid_type
#define	fh_auth			fh_base.fh_new.fb_auth
#define	fh_fsid			fh_base.fh_new.fb_auth
static inline __u32 ino_t_to_u32(ino_t ino)
static inline ino_t u32_to_ino_t(__u32 uino)
typedef struct svc_fh  svc_fh;
