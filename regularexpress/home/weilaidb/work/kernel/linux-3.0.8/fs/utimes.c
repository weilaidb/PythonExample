SYSCALL_DEFINE2(utime, char __user *, filename, struct utimbuf __user *, times)
static bool nsec_valid(long nsec)
static int utimes_common(struct path *path, struct timespec *times)
long do_utimes(int dfd, const char __user *filename, struct timespec *times,
int flags)
SYSCALL_DEFINE4(utimensat, int, dfd, const char __user *, filename,
struct timespec __user *, utimes, int, flags)
SYSCALL_DEFINE3(futimesat, int, dfd, const char __user *, filename,
struct timeval __user *, utimes)
SYSCALL_DEFINE2(utimes, char __user *, filename,
struct timeval __user *, utimes)
