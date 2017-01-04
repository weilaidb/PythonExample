void ceph_get_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm)
static void __insert_snap_realm(struct rb_root *root,
struct ceph_snap_realm *new)
static struct ceph_snap_realm *ceph_create_snap_realm(
struct ceph_mds_client *mdsc,
u64 ino)
struct ceph_snap_realm *ceph_lookup_snap_realm(struct ceph_mds_client *mdsc,
u64 ino)
static void __put_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm);
static void __destroy_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm)
static void __put_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm)
void ceph_put_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm)
static void __cleanup_empty_realms(struct ceph_mds_client *mdsc)
void ceph_cleanup_empty_realms(struct ceph_mds_client *mdsc)
static int adjust_snap_realm_parent(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm,
u64 parentino)
static int cmpu64_rev(const void *a, const void *b)
static int build_snap_context(struct ceph_snap_realm *realm)
static void rebuild_snap_realms(struct ceph_snap_realm *realm)
static int dup_array(u64 **dst, __le64 *src, int num)
void ceph_queue_cap_snap(struct ceph_inode_info *ci)
int __ceph_finish_cap_snap(struct ceph_inode_info *ci,
struct ceph_cap_snap *capsnap)
static void queue_realm_cap_snaps(struct ceph_snap_realm *realm)
int ceph_update_snap_trace(struct ceph_mds_client *mdsc,
void *p, void *e, bool deletion)
static void flush_snaps(struct ceph_mds_client *mdsc)
void ceph_handle_snap(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
struct ceph_msg *msg)
