#define NET_9P_CLIENT_H
#define P9_ROW_MAXTAG 255
enum p9_proto_versions;
enum p9_trans_status ;
enum p9_req_status_t ;
struct p9_req_t ;
struct p9_client ;
struct p9_fid ;
struct p9_dirent ;
int p9_client_statfs(struct p9_fid *fid, struct p9_rstatfs *sb);
int p9_client_rename(struct p9_fid *fid, struct p9_fid *newdirfid, char *name);
struct p9_client *p9_client_create(const char *dev_name, char *options);
void p9_client_destroy(struct p9_client *clnt);
void p9_client_disconnect(struct p9_client *clnt);
void p9_client_begin_disconnect(struct p9_client *clnt);
struct p9_fid *p9_client_attach(struct p9_client *clnt, struct p9_fid *afid,
char *uname, u32 n_uname, char *aname);
struct p9_fid *p9_client_walk(struct p9_fid *oldfid, uint16_t nwname,
char **wnames, int clone);
int p9_client_open(struct p9_fid *fid, int mode);
int p9_client_fcreate(struct p9_fid *fid, char *name, u32 perm, int mode,
char *extension);
int p9_client_link(struct p9_fid *fid, struct p9_fid *oldfid, char *newname);
int p9_client_symlink(struct p9_fid *fid, char *name, char *symname, gid_t gid,
struct p9_qid *qid);
int p9_client_create_dotl(struct p9_fid *ofid, char *name, u32 flags, u32 mode,
gid_t gid, struct p9_qid *qid);
int p9_client_clunk(struct p9_fid *fid);
int p9_client_fsync(struct p9_fid *fid, int datasync);
int p9_client_remove(struct p9_fid *fid);
int p9_client_read(struct p9_fid *fid, char *data, char __user *udata,
u64 offset, u32 count);
int p9_client_write(struct p9_fid *fid, char *data, const char __user *udata,
u64 offset, u32 count);
int p9_client_readdir(struct p9_fid *fid, char *data, u32 count, u64 offset);
int p9dirent_read(char *buf, int len, struct p9_dirent *dirent,
int proto_version);
struct p9_wstat *p9_client_stat(struct p9_fid *fid);
int p9_client_wstat(struct p9_fid *fid, struct p9_wstat *wst);
int p9_client_setattr(struct p9_fid *fid, struct p9_iattr_dotl *attr);
struct p9_stat_dotl *p9_client_getattr_dotl(struct p9_fid *fid,
u64 request_mask);
int p9_client_mknod_dotl(struct p9_fid *oldfid, char *name, int mode,
dev_t rdev, gid_t gid, struct p9_qid *);
int p9_client_mkdir_dotl(struct p9_fid *fid, char *name, int mode,
gid_t gid, struct p9_qid *);
int p9_client_lock_dotl(struct p9_fid *fid, struct p9_flock *flock, u8 *status);
int p9_client_getlock_dotl(struct p9_fid *fid, struct p9_getlock *fl);
struct p9_req_t *p9_tag_lookup(struct p9_client *, u16);
void p9_client_cb(struct p9_client *c, struct p9_req_t *req);
int p9_parse_header(struct p9_fcall *, int32_t *, int8_t *, int16_t *, int);
int p9stat_read(char *, int, struct p9_wstat *, int);
void p9stat_free(struct p9_wstat *);
int p9_is_proto_dotu(struct p9_client *clnt);
int p9_is_proto_dotl(struct p9_client *clnt);
struct p9_fid *p9_client_xattrwalk(struct p9_fid *, const char *, u64 *);
int p9_client_xattrcreate(struct p9_fid *, const char *, u64, int);
int p9_client_readlink(struct p9_fid *fid, char **target);
