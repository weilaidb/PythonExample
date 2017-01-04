#define _FS_CEPH_MDS_CLIENT_H
struct ceph_fs_client;
struct ceph_cap;
struct ceph_mds_reply_info_in ;
struct ceph_mds_reply_info_parsed ;
#define CEPH_CAPS_PER_RELEASE ((PAGE_CACHE_SIZE -			\
sizeof(struct ceph_mds_cap_release)) /	\
sizeof(struct ceph_mds_cap_item))
enum ;
struct ceph_mds_session ;
enum ;
struct ceph_mds_request;
struct ceph_mds_client;
typedef void (*ceph_mds_request_callback_t) (struct ceph_mds_client *mdsc,
struct ceph_mds_request *req);
struct ceph_mds_request ;
struct ceph_mds_client ;
extern const char *ceph_mds_op_name(int op);
extern struct ceph_mds_session *
__ceph_lookup_mds_session(struct ceph_mds_client *, int mds);
static inline struct ceph_mds_session *
ceph_get_mds_session(struct ceph_mds_session *s)
extern void ceph_put_mds_session(struct ceph_mds_session *s);
extern int ceph_send_msg_mds(struct ceph_mds_client *mdsc,
struct ceph_msg *msg, int mds);
extern int ceph_mdsc_init(struct ceph_fs_client *fsc);
extern void ceph_mdsc_close_sessions(struct ceph_mds_client *mdsc);
extern void ceph_mdsc_destroy(struct ceph_fs_client *fsc);
extern void ceph_mdsc_sync(struct ceph_mds_client *mdsc);
extern void ceph_mdsc_lease_release(struct ceph_mds_client *mdsc,
struct inode *inode,
struct dentry *dn, int mask);
extern void ceph_invalidate_dir_request(struct ceph_mds_request *req);
extern struct ceph_mds_request *
ceph_mdsc_create_request(struct ceph_mds_client *mdsc, int op, int mode);
extern void ceph_mdsc_submit_request(struct ceph_mds_client *mdsc,
struct ceph_mds_request *req);
extern int ceph_mdsc_do_request(struct ceph_mds_client *mdsc,
struct inode *dir,
struct ceph_mds_request *req);
static inline void ceph_mdsc_get_request(struct ceph_mds_request *req)
extern void ceph_mdsc_release_request(struct kref *kref);
static inline void ceph_mdsc_put_request(struct ceph_mds_request *req)
extern int ceph_add_cap_releases(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session);
extern void ceph_send_cap_releases(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session);
extern void ceph_mdsc_pre_umount(struct ceph_mds_client *mdsc);
extern char *ceph_mdsc_build_path(struct dentry *dentry, int *plen, u64 *base,
int stop_on_nosnap);
extern void __ceph_mdsc_drop_dentry_lease(struct dentry *dentry);
extern void ceph_mdsc_lease_send_msg(struct ceph_mds_session *session,
struct inode *inode,
struct dentry *dentry, char action,
u32 seq);
extern void ceph_mdsc_handle_map(struct ceph_mds_client *mdsc,
struct ceph_msg *msg);
extern void ceph_mdsc_open_export_target_sessions(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session);
