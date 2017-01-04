#define __FS_CEPH_AUTH_X_PROTOCOL
#define CEPHX_GET_AUTH_SESSION_KEY      0x0100
#define CEPHX_GET_PRINCIPAL_SESSION_KEY 0x0200
#define CEPHX_GET_ROTATING_KEY          0x0400
struct ceph_x_ticket_blob  __attribute__ ((packed));
struct ceph_x_request_header  __attribute__ ((packed));
struct ceph_x_reply_header  __attribute__ ((packed));
struct ceph_x_server_challenge  __attribute__ ((packed));
struct ceph_x_authenticate  __attribute__ ((packed));
struct ceph_x_service_ticket_request  __attribute__ ((packed));
struct ceph_x_challenge_blob  __attribute__ ((packed));
struct ceph_x_authorize_a  __attribute__ ((packed));
struct ceph_x_authorize_b  __attribute__ ((packed));
struct ceph_x_authorize_reply  __attribute__ ((packed));
#define CEPHX_ENC_MAGIC 0xff009cad8826aa55ull
struct ceph_x_encrypt_header  __attribute__ ((packed));
