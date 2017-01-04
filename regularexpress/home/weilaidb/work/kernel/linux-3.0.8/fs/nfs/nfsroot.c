#define NFSDBG_FACILITY NFSDBG_ROOT
#define NFS_ROOT		"/tftpboot/%s"
#define NFS_DEF_OPTIONS		"vers=2,udp,rsize=4096,wsize=4096"
static char nfs_root_parms[256] __initdata = "";
static char nfs_root_options[256] __initdata = NFS_DEF_OPTIONS;
static __be32 servaddr __initdata = htonl(INADDR_NONE);
static char nfs_export_path[NFS_MAXPATHLEN + 1] __initdata = "";
static char nfs_root_device[NFS_MAXPATHLEN + 1] __initdata = "";
static int __init nfs_root_debug(char *__unused)
__setup("nfsrootdebug", nfs_root_debug);
static int __init nfs_root_setup(char *line)
__setup("nfsroot=", nfs_root_setup);
static int __init root_nfs_copy(char *dest, const char *src,
const size_t destlen)
static int __init root_nfs_cat(char *dest, const char *src,
const size_t destlen)
static int __init root_nfs_parse_options(char *incoming, char *exppath,
const size_t exppathlen)
static int __init root_nfs_data(char *cmdline)
int __init nfs_root_data(char **root_device, char **root_data)
