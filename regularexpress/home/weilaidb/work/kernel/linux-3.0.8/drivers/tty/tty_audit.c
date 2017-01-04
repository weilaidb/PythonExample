struct tty_audit_buf ;
static struct tty_audit_buf *tty_audit_buf_alloc(int major, int minor,
int icanon)
static void tty_audit_buf_free(struct tty_audit_buf *buf)
static void tty_audit_buf_put(struct tty_audit_buf *buf)
static void tty_audit_log(const char *description, struct task_struct *tsk,
uid_t loginuid, unsigned sessionid, int major,
int minor, unsigned char *data, size_t size)
static void tty_audit_buf_push(struct task_struct *tsk, uid_t loginuid,
unsigned int sessionid,
struct tty_audit_buf *buf)
static void tty_audit_buf_push_current(struct tty_audit_buf *buf)
void tty_audit_exit(void)
void tty_audit_fork(struct signal_struct *sig)
void tty_audit_tiocsti(struct tty_struct *tty, char ch)
int tty_audit_push_task(struct task_struct *tsk, uid_t loginuid, u32 sessionid)
static struct tty_audit_buf *tty_audit_buf_get(struct tty_struct *tty)
void tty_audit_add_data(struct tty_struct *tty, unsigned char *data,
size_t size)
void tty_audit_push(struct tty_struct *tty)
