struct compat_mq_attr ;
static inline int get_compat_mq_attr(struct mq_attr *attr,
const struct compat_mq_attr __user *uattr)
static inline int put_compat_mq_attr(const struct mq_attr *attr,
struct compat_mq_attr __user *uattr)
asmlinkage long compat_sys_mq_open(const char __user *u_name,
int oflag, compat_mode_t mode,
struct compat_mq_attr __user *u_attr)
static int compat_prepare_timeout(struct timespec __user * *p,
const struct compat_timespec __user *u)
asmlinkage long compat_sys_mq_timedsend(mqd_t mqdes,
const char __user *u_msg_ptr,
size_t msg_len, unsigned int msg_prio,
const struct compat_timespec __user *u_abs_timeout)
asmlinkage ssize_t compat_sys_mq_timedreceive(mqd_t mqdes,
char __user *u_msg_ptr,
size_t msg_len, unsigned int __user *u_msg_prio,
const struct compat_timespec __user *u_abs_timeout)
asmlinkage long compat_sys_mq_notify(mqd_t mqdes,
const struct compat_sigevent __user *u_notification)
asmlinkage long compat_sys_mq_getsetattr(mqd_t mqdes,
const struct compat_mq_attr __user *u_mqstat,
struct compat_mq_attr __user *u_omqstat)
