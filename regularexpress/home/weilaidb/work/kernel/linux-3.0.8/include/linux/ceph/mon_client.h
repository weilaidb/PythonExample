#define _FS_CEPH_MON_CLIENT_H
struct ceph_client;
struct ceph_mount_args;
struct ceph_auth_client;
struct ceph_monmap ;
struct ceph_mon_client;
struct ceph_mon_generic_request;
typedef void (*ceph_monc_request_func_t)(struct ceph_mon_client *monc,
int newmon);
struct ceph_mon_request ;
struct ceph_mon_generic_request ;
struct ceph_mon_client ;
extern struct ceph_monmap *ceph_monmap_decode(void *p, void *end);
extern int ceph_monmap_contains(struct ceph_monmap *m,
struct ceph_entity_addr *addr);
extern int ceph_monc_init(struct ceph_mon_client *monc, struct ceph_client *cl);
extern void ceph_monc_stop(struct ceph_mon_client *monc);
extern int ceph_monc_got_mdsmap(struct ceph_mon_client *monc, u32 have);
extern int ceph_monc_got_osdmap(struct ceph_mon_client *monc, u32 have);
extern void ceph_monc_request_next_osdmap(struct ceph_mon_client *monc);
extern int ceph_monc_do_statfs(struct ceph_mon_client *monc,
struct ceph_statfs *buf);
extern int ceph_monc_open_session(struct ceph_mon_client *monc);
extern int ceph_monc_validate_auth(struct ceph_mon_client *monc);
extern int ceph_monc_create_snapid(struct ceph_mon_client *monc,
u32 pool, u64 *snapid);
extern int ceph_monc_delete_snapid(struct ceph_mon_client *monc,
u32 pool, u64 snapid);
