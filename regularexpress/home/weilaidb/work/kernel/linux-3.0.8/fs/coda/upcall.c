static int coda_upcall(struct venus_comm *vc, int inSize, int *outSize,
union inputArgs *buffer);
static void *alloc_upcall(int opcode, int size)
#define UPARG(op)\
do  while (0)
#define INSIZE(tag) sizeof(struct coda_ ## tag ## _in)
#define OUTSIZE(tag) sizeof(struct coda_ ## tag ## _out)
#define SIZE(tag)  max_t(unsigned int, INSIZE(tag), OUTSIZE(tag))
int venus_rootfid(struct super_block *sb, struct CodaFid *fidp)
int venus_getattr(struct super_block *sb, struct CodaFid *fid,
struct coda_vattr *attr)
int venus_setattr(struct super_block *sb, struct CodaFid *fid,
struct coda_vattr *vattr)
int venus_lookup(struct super_block *sb, struct CodaFid *fid,
const char *name, int length, int * type,
struct CodaFid *resfid)
int venus_close(struct super_block *sb, struct CodaFid *fid, int flags,
vuid_t uid)
int venus_open(struct super_block *sb, struct CodaFid *fid,
int flags, struct file **fh)
int venus_mkdir(struct super_block *sb, struct CodaFid *dirfid,
const char *name, int length,
struct CodaFid *newfid, struct coda_vattr *attrs)
int venus_rename(struct super_block *sb, struct CodaFid *old_fid,
struct CodaFid *new_fid, size_t old_length,
size_t new_length, const char *old_name,
const char *new_name)
int venus_create(struct super_block *sb, struct CodaFid *dirfid,
const char *name, int length, int excl, int mode,
struct CodaFid *newfid, struct coda_vattr *attrs)
int venus_rmdir(struct super_block *sb, struct CodaFid *dirfid,
const char *name, int length)
int venus_remove(struct super_block *sb, struct CodaFid *dirfid,
const char *name, int length)
int venus_readlink(struct super_block *sb, struct CodaFid *fid,
char *buffer, int *length)
int venus_link(struct super_block *sb, struct CodaFid *fid,
struct CodaFid *dirfid, const char *name, int len )
int venus_symlink(struct super_block *sb, struct CodaFid *fid,
const char *name, int len,
const char *symname, int symlen)
int venus_fsync(struct super_block *sb, struct CodaFid *fid)
int venus_access(struct super_block *sb, struct CodaFid *fid, int mask)
int venus_pioctl(struct super_block *sb, struct CodaFid *fid,
unsigned int cmd, struct PioctlData *data)
int venus_statfs(struct dentry *dentry, struct kstatfs *sfs)
static void coda_block_signals(sigset_t *old)
static void coda_unblock_signals(sigset_t *old)
#define CODA_INTERRUPTIBLE(r) (!coda_hard && \
(((r)->uc_opcode != CODA_CLOSE && \
(r)->uc_opcode != CODA_STORE && \
(r)->uc_opcode != CODA_RELEASE) || \
(r)->uc_flags & CODA_REQ_READ))
static inline void coda_waitfor_upcall(struct venus_comm *vcp,
struct upc_req *req)
static int coda_upcall(struct venus_comm *vcp,
int inSize, int *outSize,
union inputArgs *buffer)
int coda_downcall(struct venus_comm *vcp, int opcode, union outputArgs *out)
