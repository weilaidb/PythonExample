#define __LINUX_NET_SCM_H
#define SCM_MAX_FD	253
struct scm_fp_list ;
struct scm_cookie ;
extern void scm_detach_fds(struct msghdr *msg, struct scm_cookie *scm);
extern void scm_detach_fds_compat(struct msghdr *msg, struct scm_cookie *scm);
extern int __scm_send(struct socket *sock, struct msghdr *msg, struct scm_cookie *scm);
extern void __scm_destroy(struct scm_cookie *scm);
extern struct scm_fp_list * scm_fp_dup(struct scm_fp_list *fpl);
static __inline__ void unix_get_peersec_dgram(struct socket *sock, struct scm_cookie *scm)
static __inline__ void unix_get_peersec_dgram(struct socket *sock, struct scm_cookie *scm)
static __inline__ void scm_set_cred(struct scm_cookie *scm,
struct pid *pid, const struct cred *cred)
static __inline__ void scm_destroy_cred(struct scm_cookie *scm)
static __inline__ void scm_destroy(struct scm_cookie *scm)
static __inline__ int scm_send(struct socket *sock, struct msghdr *msg,
struct scm_cookie *scm)
static inline void scm_passec(struct socket *sock, struct msghdr *msg, struct scm_cookie *scm)
static inline void scm_passec(struct socket *sock, struct msghdr *msg, struct scm_cookie *scm)
static __inline__ void scm_recv(struct socket *sock, struct msghdr *msg,
struct scm_cookie *scm, int flags)
