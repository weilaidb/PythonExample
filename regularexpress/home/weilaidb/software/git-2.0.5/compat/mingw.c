static const int delay[] = ;
int err_win_to_posix(DWORD winerr)
static inline int is_file_in_use_error(DWORD errcode)
static int read_yes_no_answer(void)
static int ask_yes_no_if_possible(const char *format, ...)
#undef unlink
int mingw_unlink(const char *pathname)
static int is_dir_empty(const char *path)
#undef rmdir
int mingw_rmdir(const char *pathname)
#undef open
int mingw_open (const char *filename, int oflags, ...)
static BOOL WINAPI ctrl_ignore(DWORD type)
#undef fgetc
int mingw_fgetc(FILE *stream)
#undef fopen
FILE *mingw_fopen (const char *filename, const char *otype)
#undef freopen
FILE *mingw_freopen (const char *filename, const char *otype, FILE *stream)
#undef fflush
int mingw_fflush(FILE *stream)
static inline long long filetime_to_hnsec(const FILETIME *ft)
static inline time_t filetime_to_time_t(const FILETIME *ft)
static int do_lstat(int follow, const char *file_name, struct stat *buf)
static int do_stat_internal(int follow, const char *file_name, struct stat *buf)
int mingw_lstat(const char *file_name, struct stat *buf)
int mingw_stat(const char *file_name, struct stat *buf)
int mingw_fstat(int fd, struct stat *buf)
static inline void time_t_to_filetime(time_t t, FILETIME *ft)
int mingw_utime (const char *file_name, const struct utimbuf *times)
unsigned int sleep (unsigned int seconds)
int mkstemp(char *template)
int gettimeofday(struct timeval *tv, void *tz)
int pipe(int filedes[2])
struct tm *gmtime_r(const time_t *timep, struct tm *result)
struct tm *localtime_r(const time_t *timep, struct tm *result)
#undef getcwd
char *mingw_getcwd(char *pointer, int len)
static const char *quote_arg(const char *arg)
{
int len = 0, n = 0;
int force_quotes = 0;
char *q, *d;
const char *p = arg;
if (!*p) force_quotes = 1;
while (*p)
static const char *parse_interpreter(const char *cmd)
static char **get_path_split(void)
static void free_path_split(char **path)
static char *lookup_prog(const char *dir, const char *cmd, int isexe, int exe_only)
static char *path_lookup(const char *cmd, char **path, int exe_only)
static int env_compare(const void *a, const void *b)
struct pinfo_t ;
static struct pinfo_t *pinfo = NULL;
CRITICAL_SECTION pinfo_cs;
static pid_t mingw_spawnve_fd(const char *cmd, const char **argv, char **env,
const char *dir,
int prepend_cmd, int fhin, int fhout, int fherr)
static pid_t mingw_spawnve(const char *cmd, const char **argv, char **env,
int prepend_cmd)
pid_t mingw_spawnvpe(const char *cmd, const char **argv, char **env,
const char *dir,
int fhin, int fhout, int fherr)
static int try_shell_exec(const char *cmd, char *const *argv, char **env)
static void mingw_execve(const char *cmd, char *const *argv, char *const *env)
int mingw_execvp(const char *cmd, char *const *argv)
int mingw_execv(const char *cmd, char *const *argv)
int mingw_kill(pid_t pid, int sig)
static char **copy_environ(void)
void free_environ(char **env)
static int lookup_env(char **env, const char *name, size_t nmln)
static char **env_setenv(char **env, const char *name)
char **make_augmented_environ(const char *const *vars)
#undef getenv
static char *getenv_cs(const char *name)
char *mingw_getenv(const char *name)
static int WSAAPI getaddrinfo_stub(const char *node, const char *service,
const struct addrinfo *hints,
struct addrinfo **res)
static void WSAAPI freeaddrinfo_stub(struct addrinfo *res)
static int WSAAPI getnameinfo_stub(const struct sockaddr *sa, socklen_t salen,
char *host, DWORD hostlen,
char *serv, DWORD servlen, int flags)
static HMODULE ipv6_dll = NULL;
static void (WSAAPI *ipv6_freeaddrinfo)(struct addrinfo *res);
static int (WSAAPI *ipv6_getaddrinfo)(const char *node, const char *service,
const struct addrinfo *hints,
struct addrinfo **res);
static int (WSAAPI *ipv6_getnameinfo)(const struct sockaddr *sa, socklen_t salen,
char *host, DWORD hostlen,
char *serv, DWORD servlen, int flags);
static void socket_cleanup(void)
static void ensure_socket_initialization(void)
#undef gethostname
int mingw_gethostname(char *name, int namelen)
#undef gethostbyname
struct hostent *mingw_gethostbyname(const char *host)
void mingw_freeaddrinfo(struct addrinfo *res)
int mingw_getaddrinfo(const char *node, const char *service,
const struct addrinfo *hints, struct addrinfo **res)
int mingw_getnameinfo(const struct sockaddr *sa, socklen_t salen,
char *host, DWORD hostlen, char *serv, DWORD servlen,
int flags)
int mingw_socket(int domain, int type, int protocol)
#undef connect
int mingw_connect(int sockfd, struct sockaddr *sa, size_t sz)
#undef bind
int mingw_bind(int sockfd, struct sockaddr *sa, size_t sz)
#undef setsockopt
int mingw_setsockopt(int sockfd, int lvl, int optname, void *optval, int optlen)
#undef shutdown
int mingw_shutdown(int sockfd, int how)
#undef listen
int mingw_listen(int sockfd, int backlog)
#undef accept
int mingw_accept(int sockfd1, struct sockaddr *sa, socklen_t *sz)
#undef rename
int mingw_rename(const char *pold, const char *pnew)
int mingw_getpagesize(void)
struct passwd *getpwuid(int uid)
static HANDLE timer_event;
static HANDLE timer_thread;
static int timer_interval;
static int one_shot;
static sig_handler_t timer_fn = SIG_DFL, sigint_fn = SIG_DFL;
static unsigned __stdcall ticktack(void *dummy)
static int start_timer_thread(void)
static void stop_timer_thread(void)
static inline int is_timeval_eq(const struct timeval *i1, const struct timeval *i2)
int setitimer(int type, struct itimerval *in, struct itimerval *out)
int sigaction(int sig, struct sigaction *in, struct sigaction *out)
#undef signal
sig_handler_t mingw_signal(int sig, sig_handler_t handler)
#undef raise
int mingw_raise(int sig)
static const char *make_backslash_path(const char *path)
void mingw_open_html(const char *unixpath)
int link(const char *oldpath, const char *newpath)
pid_t waitpid(pid_t pid, int *status, int options)
