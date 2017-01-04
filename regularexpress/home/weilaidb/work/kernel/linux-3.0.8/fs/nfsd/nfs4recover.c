#define NFSDDBG_FACILITY                NFSDDBG_PROC
static struct file *rec_file;
static int
nfs4_save_creds(const struct cred **original_creds)
static void
nfs4_reset_creds(const struct cred *original)
static void
md5_to_hex(char *out, char *md5)
__be32
nfs4_make_rec_clidname(char *dname, struct xdr_netobj *clname)
int
nfsd4_create_clid_dir(struct nfs4_client *clp)
typedef int (recdir_func)(struct dentry *, struct dentry *);
struct name_list ;
static int
nfsd4_build_namelist(void *arg, const char *name, int namlen,
loff_t offset, u64 ino, unsigned int d_type)
static int
nfsd4_list_rec_dir(struct dentry *dir, recdir_func *f)
static int
nfsd4_unlink_clid_dir(char *name, int namlen)
void
nfsd4_remove_clid_dir(struct nfs4_client *clp)
static int
purge_old(struct dentry *parent, struct dentry *child)
void
nfsd4_recdir_purge_old(void)
static int
load_recdir(struct dentry *parent, struct dentry *child)
int
nfsd4_recdir_load(void)
void
nfsd4_init_recdir(char *rec_dirname)
void
nfsd4_shutdown_recdir(void)
