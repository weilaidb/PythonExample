static autofs_wqt_t autofs4_next_wait_queue = 1;
#define SHUTDOWN_SIGS	(sigmask(SIGKILL) | sigmask(SIGINT) | sigmask(SIGQUIT))
void autofs4_catatonic_mode(struct autofs_sb_info *sbi)
static int autofs4_write(struct file *file, const void *addr, int bytes)
static void autofs4_notify_daemon(struct autofs_sb_info *sbi,
struct autofs_wait_queue *wq,
int type)
static int autofs4_getpath(struct autofs_sb_info *sbi,
struct dentry *dentry, char **name)
static struct autofs_wait_queue *
autofs4_find_wait(struct autofs_sb_info *sbi, struct qstr *qstr)
static int validate_request(struct autofs_wait_queue **wait,
struct autofs_sb_info *sbi,
struct qstr *qstr,
struct dentry*dentry, enum autofs_notify notify)
int autofs4_wait(struct autofs_sb_info *sbi, struct dentry *dentry,
enum autofs_notify notify)
int autofs4_wait_release(struct autofs_sb_info *sbi, autofs_wqt_t wait_queue_token, int status)
