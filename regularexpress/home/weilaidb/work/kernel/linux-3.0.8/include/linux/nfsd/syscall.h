#define NFSD_SYSCALL_H
#define NFSCTL_VERSION		0x0201
#define NFSCTL_SVC		0
#define NFSCTL_ADDCLIENT	1
#define NFSCTL_DELCLIENT	2
#define NFSCTL_EXPORT		3
#define NFSCTL_UNEXPORT		4
#define NFSCTL_GETFD		7
#define	NFSCTL_GETFS		8
struct nfsctl_svc ;
struct nfsctl_client ;
struct nfsctl_export ;
struct nfsctl_fdparm ;
struct nfsctl_fsparm ;
struct nfsctl_arg ;
union nfsctl_res ;
extern int		exp_addclient(struct nfsctl_client *ncp);
extern int		exp_delclient(struct nfsctl_client *ncp);
extern int		exp_export(struct nfsctl_export *nxp);
extern int		exp_unexport(struct nfsctl_export *nxp);
