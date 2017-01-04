enum ;
static const match_table_t tokens = ;
inline int p9_is_proto_dotl(struct p9_client *clnt)
EXPORT_SYMBOL(p9_is_proto_dotl);
inline int p9_is_proto_dotu(struct p9_client *clnt)
EXPORT_SYMBOL(p9_is_proto_dotu);
static int get_protocol_version(const substring_t *name)
static int parse_opts(char *opts, struct p9_client *clnt)
static struct p9_req_t *p9_tag_alloc(struct p9_client *c, u16 tag)
struct p9_req_t *p9_tag_lookup(struct p9_client *c, u16 tag)
EXPORT_SYMBOL(p9_tag_lookup);
static int p9_tag_init(struct p9_client *c)
static void p9_tag_cleanup(struct p9_client *c)
static void p9_free_req(struct p9_client *c, struct p9_req_t *r)
void p9_client_cb(struct p9_client *c, struct p9_req_t *req)
EXPORT_SYMBOL(p9_client_cb);
int
p9_parse_header(struct p9_fcall *pdu, int32_t *size, int8_t *type, int16_t *tag,
int rewind)
EXPORT_SYMBOL(p9_parse_header);
static int p9_check_errors(struct p9_client *c, struct p9_req_t *req)
static struct p9_req_t *
p9_client_rpc(struct p9_client *c, int8_t type, const char *fmt, ...);
static int p9_client_flush(struct p9_client *c, struct p9_req_t *oldreq)
static struct p9_req_t *
p9_client_rpc(struct p9_client *c, int8_t type, const char *fmt, ...)
static struct p9_fid *p9_fid_create(struct p9_client *clnt)
static void p9_fid_destroy(struct p9_fid *fid)
static int p9_client_version(struct p9_client *c)
struct p9_client *p9_client_create(const char *dev_name, char *options)
EXPORT_SYMBOL(p9_client_create);
void p9_client_destroy(struct p9_client *clnt)
EXPORT_SYMBOL(p9_client_destroy);
void p9_client_disconnect(struct p9_client *clnt)
EXPORT_SYMBOL(p9_client_disconnect);
void p9_client_begin_disconnect(struct p9_client *clnt)
EXPORT_SYMBOL(p9_client_begin_disconnect);
struct p9_fid *p9_client_attach(struct p9_client *clnt, struct p9_fid *afid,
char *uname, u32 n_uname, char *aname)
EXPORT_SYMBOL(p9_client_attach);
struct p9_fid *p9_client_walk(struct p9_fid *oldfid, uint16_t nwname,
char **wnames, int clone)
EXPORT_SYMBOL(p9_client_walk);
int p9_client_open(struct p9_fid *fid, int mode)
EXPORT_SYMBOL(p9_client_open);
int p9_client_create_dotl(struct p9_fid *ofid, char *name, u32 flags, u32 mode,
gid_t gid, struct p9_qid *qid)
EXPORT_SYMBOL(p9_client_create_dotl);
int p9_client_fcreate(struct p9_fid *fid, char *name, u32 perm, int mode,
char *extension)
EXPORT_SYMBOL(p9_client_fcreate);
int p9_client_symlink(struct p9_fid *dfid, char *name, char *symtgt, gid_t gid,
struct p9_qid *qid)
EXPORT_SYMBOL(p9_client_symlink);
int p9_client_link(struct p9_fid *dfid, struct p9_fid *oldfid, char *newname)
EXPORT_SYMBOL(p9_client_link);
int p9_client_fsync(struct p9_fid *fid, int datasync)
EXPORT_SYMBOL(p9_client_fsync);
int p9_client_clunk(struct p9_fid *fid)
EXPORT_SYMBOL(p9_client_clunk);
int p9_client_remove(struct p9_fid *fid)
EXPORT_SYMBOL(p9_client_remove);
int
p9_client_read(struct p9_fid *fid, char *data, char __user *udata, u64 offset,
u32 count)
EXPORT_SYMBOL(p9_client_read);
int
p9_client_write(struct p9_fid *fid, char *data, const char __user *udata,
u64 offset, u32 count)
EXPORT_SYMBOL(p9_client_write);
struct p9_wstat *p9_client_stat(struct p9_fid *fid)
EXPORT_SYMBOL(p9_client_stat);
struct p9_stat_dotl *p9_client_getattr_dotl(struct p9_fid *fid,
u64 request_mask)
EXPORT_SYMBOL(p9_client_getattr_dotl);
static int p9_client_statsize(struct p9_wstat *wst, int proto_version)
int p9_client_wstat(struct p9_fid *fid, struct p9_wstat *wst)
EXPORT_SYMBOL(p9_client_wstat);
int p9_client_setattr(struct p9_fid *fid, struct p9_iattr_dotl *p9attr)
EXPORT_SYMBOL(p9_client_setattr);
int p9_client_statfs(struct p9_fid *fid, struct p9_rstatfs *sb)
EXPORT_SYMBOL(p9_client_statfs);
int p9_client_rename(struct p9_fid *fid, struct p9_fid *newdirfid, char *name)
EXPORT_SYMBOL(p9_client_rename);
struct p9_fid *p9_client_xattrwalk(struct p9_fid *file_fid,
const char *attr_name, u64 *attr_size)
EXPORT_SYMBOL_GPL(p9_client_xattrwalk);
int p9_client_xattrcreate(struct p9_fid *fid, const char *name,
u64 attr_size, int flags)
EXPORT_SYMBOL_GPL(p9_client_xattrcreate);
int p9_client_readdir(struct p9_fid *fid, char *data, u32 count, u64 offset)
EXPORT_SYMBOL(p9_client_readdir);
int p9_client_mknod_dotl(struct p9_fid *fid, char *name, int mode,
dev_t rdev, gid_t gid, struct p9_qid *qid)
EXPORT_SYMBOL(p9_client_mknod_dotl);
int p9_client_mkdir_dotl(struct p9_fid *fid, char *name, int mode,
gid_t gid, struct p9_qid *qid)
EXPORT_SYMBOL(p9_client_mkdir_dotl);
int p9_client_lock_dotl(struct p9_fid *fid, struct p9_flock *flock, u8 *status)
EXPORT_SYMBOL(p9_client_lock_dotl);
int p9_client_getlock_dotl(struct p9_fid *fid, struct p9_getlock *glock)
EXPORT_SYMBOL(p9_client_getlock_dotl);
int p9_client_readlink(struct p9_fid *fid, char **target)
EXPORT_SYMBOL(p9_client_readlink);
