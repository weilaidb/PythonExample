#define _FS_CEPH_AUTH_NONE_H
struct ceph_none_authorizer ;
struct ceph_auth_none_info ;
extern int ceph_auth_none_init(struct ceph_auth_client *ac);
