#define __FS_CEPH_MESSENGER_H
struct ceph_msg;
struct ceph_connection;
extern struct workqueue_struct *ceph_msgr_wq;
struct ceph_connection_operations ;
#define ENTITY_NAME(n) ceph_entity_type_name((n).type), le64_to_cpu((n).num)
struct ceph_messenger ;
struct ceph_msg ;
struct ceph_msg_pos ;
#define BASE_DELAY_INTERVAL	(HZ/2)
#define MAX_DELAY_INTERVAL	(5 * 60 * HZ)
#define LOSSYTX         0
#define CONNECTING	1
#define NEGOTIATING	2
#define KEEPALIVE_PENDING      3
#define WRITE_PENDING	4
#define STANDBY		8
#define CLOSED		10
#define SOCK_CLOSED	11
#define OPENING         13
#define DEAD            14
#define BACKOFF         15
struct ceph_connection ;
extern const char *ceph_pr_addr(const struct sockaddr_storage *ss);
extern int ceph_parse_ips(const char *c, const char *end,
struct ceph_entity_addr *addr,
int max_count, int *count);
extern int ceph_msgr_init(void);
extern void ceph_msgr_exit(void);
extern void ceph_msgr_flush(void);
extern struct ceph_messenger *ceph_messenger_create(
struct ceph_entity_addr *myaddr,
u32 features, u32 required);
extern void ceph_messenger_destroy(struct ceph_messenger *);
extern void ceph_con_init(struct ceph_messenger *msgr,
struct ceph_connection *con);
extern void ceph_con_open(struct ceph_connection *con,
struct ceph_entity_addr *addr);
extern bool ceph_con_opened(struct ceph_connection *con);
extern void ceph_con_close(struct ceph_connection *con);
extern void ceph_con_send(struct ceph_connection *con, struct ceph_msg *msg);
extern void ceph_con_revoke(struct ceph_connection *con, struct ceph_msg *msg);
extern void ceph_con_revoke_message(struct ceph_connection *con,
struct ceph_msg *msg);
extern void ceph_con_keepalive(struct ceph_connection *con);
extern struct ceph_connection *ceph_con_get(struct ceph_connection *con);
extern void ceph_con_put(struct ceph_connection *con);
extern struct ceph_msg *ceph_msg_new(int type, int front_len, gfp_t flags);
extern void ceph_msg_kfree(struct ceph_msg *m);
static inline struct ceph_msg *ceph_msg_get(struct ceph_msg *msg)
extern void ceph_msg_last_put(struct kref *kref);
static inline void ceph_msg_put(struct ceph_msg *msg)
extern void ceph_msg_dump(struct ceph_msg *msg);
