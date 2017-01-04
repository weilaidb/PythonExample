static __inline__ int scm_check_creds(struct ucred *creds)
static int scm_fp_copy(struct cmsghdr *cmsg, struct scm_fp_list **fplp)
void __scm_destroy(struct scm_cookie *scm)
EXPORT_SYMBOL(__scm_destroy);
int __scm_send(struct socket *sock, struct msghdr *msg, struct scm_cookie *p)
EXPORT_SYMBOL(__scm_send);
int put_cmsg(struct msghdr * msg, int level, int type, int len, void *data)
EXPORT_SYMBOL(put_cmsg);
void scm_detach_fds(struct msghdr *msg, struct scm_cookie *scm)
EXPORT_SYMBOL(scm_detach_fds);
struct scm_fp_list *scm_fp_dup(struct scm_fp_list *fpl)
EXPORT_SYMBOL(scm_fp_dup);
