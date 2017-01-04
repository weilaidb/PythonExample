struct ceph_reconnect_state ;
static void __wake_requests(struct ceph_mds_client *mdsc,
struct list_head *head);
static const struct ceph_connection_operations mds_con_ops;
static int parse_reply_info_in(void **p, void *end,
struct ceph_mds_reply_info_in *info,
int features)
static int parse_reply_info_trace(void **p, void *end,
struct ceph_mds_reply_info_parsed *info,
int features)
static int parse_reply_info_dir(void **p, void *end,
struct ceph_mds_reply_info_parsed *info,
int features)
static int parse_reply_info_filelock(void **p, void *end,
struct ceph_mds_reply_info_parsed *info,
int features)
static int parse_reply_info_extra(void **p, void *end,
struct ceph_mds_reply_info_parsed *info,
int features)
static int parse_reply_info(struct ceph_msg *msg,
struct ceph_mds_reply_info_parsed *info,
int features)
static void destroy_reply_info(struct ceph_mds_reply_info_parsed *info)
static const char *session_state_name(int s)
static struct ceph_mds_session *get_session(struct ceph_mds_session *s)
void ceph_put_mds_session(struct ceph_mds_session *s)
struct ceph_mds_session *__ceph_lookup_mds_session(struct ceph_mds_client *mdsc,
int mds)
static bool __have_session(struct ceph_mds_client *mdsc, int mds)
static int __verify_registered_session(struct ceph_mds_client *mdsc,
struct ceph_mds_session *s)
static struct ceph_mds_session *register_session(struct ceph_mds_client *mdsc,
int mds)
static void __unregister_session(struct ceph_mds_client *mdsc,
struct ceph_mds_session *s)
static void put_request_session(struct ceph_mds_request *req)
void ceph_mdsc_release_request(struct kref *kref)
static struct ceph_mds_request *__lookup_request(struct ceph_mds_client *mdsc,
u64 tid)
static void __insert_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *new)
static void __register_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req,
struct inode *dir)
static void __unregister_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req)
struct dentry *get_nonsnap_parent(struct dentry *dentry)
static int __choose_mds(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req)
static struct ceph_msg *create_session_msg(u32 op, u64 seq)
static int __open_session(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static void __open_export_target_sessions(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
void ceph_mdsc_open_export_target_sessions(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static void cleanup_cap_releases(struct ceph_mds_session *session)
static int iterate_session_caps(struct ceph_mds_session *session,
int (*cb)(struct inode *, struct ceph_cap *,
void *), void *arg)
static int remove_session_caps_cb(struct inode *inode, struct ceph_cap *cap,
void *arg)
static void remove_session_caps(struct ceph_mds_session *session)
static int wake_up_session_cb(struct inode *inode, struct ceph_cap *cap,
void *arg)
static void wake_up_session_caps(struct ceph_mds_session *session,
int reconnect)
static int send_renew_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static void renewed_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session, int is_renew)
static int request_close_session(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static int __close_session(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static int trim_caps_cb(struct inode *inode, struct ceph_cap *cap, void *arg)
static int trim_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
int max_caps)
int ceph_add_cap_releases(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static int check_cap_flush(struct ceph_mds_client *mdsc, u64 want_flush_seq)
void ceph_send_cap_releases(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static void discard_cap_releases(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
struct ceph_mds_request *
ceph_mdsc_create_request(struct ceph_mds_client *mdsc, int op, int mode)
static struct ceph_mds_request *__get_oldest_req(struct ceph_mds_client *mdsc)
static u64 __get_oldest_tid(struct ceph_mds_client *mdsc)
char *ceph_mdsc_build_path(struct dentry *dentry, int *plen, u64 *base,
int stop_on_nosnap)
static int build_dentry_path(struct dentry *dentry,
const char **ppath, int *ppathlen, u64 *pino,
int *pfreepath)
static int build_inode_path(struct inode *inode,
const char **ppath, int *ppathlen, u64 *pino,
int *pfreepath)
static int set_request_path_attr(struct inode *rinode, struct dentry *rdentry,
const char *rpath, u64 rino,
const char **ppath, int *pathlen,
u64 *ino, int *freepath)
static struct ceph_msg *create_request_message(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req,
int mds)
static void complete_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req)
static int __prepare_send_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req,
int mds)
static int __do_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req)
static void __wake_requests(struct ceph_mds_client *mdsc,
struct list_head *head)
static void kick_requests(struct ceph_mds_client *mdsc, int mds)
void ceph_mdsc_submit_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req)
int ceph_mdsc_do_request(struct ceph_mds_client *mdsc,
struct inode *dir,
struct ceph_mds_request *req)
void ceph_invalidate_dir_request(struct ceph_mds_request *req)
static void handle_reply(struct ceph_mds_session *session, struct ceph_msg *msg)
static void handle_forward(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
struct ceph_msg *msg)
static void handle_session(struct ceph_mds_session *session,
struct ceph_msg *msg)
static void replay_unsafe_requests(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static int encode_caps_cb(struct inode *inode, struct ceph_cap *cap,
void *arg)
static void send_mds_reconnect(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static void check_new_map(struct ceph_mds_client *mdsc,
struct ceph_mdsmap *newmap,
struct ceph_mdsmap *oldmap)
void __ceph_mdsc_drop_dentry_lease(struct dentry *dentry)
static void handle_lease(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
struct ceph_msg *msg)
void ceph_mdsc_lease_send_msg(struct ceph_mds_session *session,
struct inode *inode,
struct dentry *dentry, char action,
u32 seq)
void ceph_mdsc_lease_release(struct ceph_mds_client *mdsc, struct inode *inode,
struct dentry *dentry, int mask)
static void drop_leases(struct ceph_mds_client *mdsc)
static void schedule_delayed(struct ceph_mds_client *mdsc)
static void delayed_work(struct work_struct *work)
int ceph_mdsc_init(struct ceph_fs_client *fsc)
static void wait_requests(struct ceph_mds_client *mdsc)
void ceph_mdsc_pre_umount(struct ceph_mds_client *mdsc)
static void wait_unsafe_requests(struct ceph_mds_client *mdsc, u64 want_tid)
void ceph_mdsc_sync(struct ceph_mds_client *mdsc)
bool done_closing_sessions(struct ceph_mds_client *mdsc)
void ceph_mdsc_close_sessions(struct ceph_mds_client *mdsc)
static void ceph_mdsc_stop(struct ceph_mds_client *mdsc)
void ceph_mdsc_destroy(struct ceph_fs_client *fsc)
void ceph_mdsc_handle_map(struct ceph_mds_client *mdsc, struct ceph_msg *msg)
static struct ceph_connection *con_get(struct ceph_connection *con)
static void con_put(struct ceph_connection *con)
static void peer_reset(struct ceph_connection *con)
static void dispatch(struct ceph_connection *con, struct ceph_msg *msg)
static int get_authorizer(struct ceph_connection *con,
void **buf, int *len, int *proto,
void **reply_buf, int *reply_len, int force_new)
static int verify_authorizer_reply(struct ceph_connection *con, int len)
static int invalidate_authorizer(struct ceph_connection *con)
static const struct ceph_connection_operations mds_con_ops = ;
