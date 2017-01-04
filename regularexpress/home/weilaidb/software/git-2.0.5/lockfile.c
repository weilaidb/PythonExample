static struct lock_file *lock_file_list;
static const char *alternate_index_output;
static void remove_lock_file(void)
static void remove_lock_file_on_signal(int signo)
static char *last_path_elm(char *p)
#define MAXDEPTH 5
static char *resolve_symlink(char *p, size_t s)
static int lock_file(struct lock_file *lk, const char *path, int flags)
static char *unable_to_lock_message(const char *path, int err)
int unable_to_lock_error(const char *path, int err)
NORETURN void unable_to_lock_index_die(const char *path, int err)
int hold_lock_file_for_update(struct lock_file *lk, const char *path, int flags)
int hold_lock_file_for_append(struct lock_file *lk, const char *path, int flags)
int close_lock_file(struct lock_file *lk)
int commit_lock_file(struct lock_file *lk)
int hold_locked_index(struct lock_file *lk, int die_on_error)
void set_alternate_index_output(const char *name)
int commit_locked_index(struct lock_file *lk)
void rollback_lock_file(struct lock_file *lk)
