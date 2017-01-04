#define HOST_NAME_MAX 256
#define initgroups(x, y) (0)
static int log_syslog;
static int verbose;
static int reuseaddr;
static int informative_errors;
static const char daemon_usage[] =
"git daemon [--verbose] [--syslog] [--export-all]\n"
"           [--timeout=<n>] [--init-timeout=<n>] [--max-connections=<n>]\n"
"           [--strict-paths] [--base-path=<path>] [--base-path-relaxed]\n"
"           [--user-path | --user-path=<path>]\n"
"           [--interpolated-path=<path>]\n"
"           [--reuseaddr] [--pid-file=<file>]\n"
"           [--(enable|disable|allow-override|forbid-override)=<service>]\n"
"           [--access-hook=<path>]\n"
"           [--inetd | [--listen=<host_or_ipaddr>] [--port=<n>]\n"
"                      [--detach] [--user=<user> [--group=<group>]]\n"
"           [<directory>...]";
static char **ok_paths;
static int strict_paths;
static int export_all_trees;
static char *base_path;
static char *interpolated_path;
static int base_path_relaxed;
static int saw_extended_args;
static const char *user_path;
static unsigned int timeout;
static unsigned int init_timeout;
static char *hostname;
static char *canon_hostname;
static char *ip_address;
static char *tcp_port;
static void logreport(int priority, const char *err, va_list params)
__attribute__((format (printf, 1, 2)))
static void logerror(const char *err, ...)
__attribute__((format (printf, 1, 2)))
static void loginfo(const char *err, ...)
static void NORETURN daemon_die(const char *err, va_list params)
static const char *path_ok(char *directory)
typedef int (*daemon_service_fn)(void);
struct daemon_service ;
static struct daemon_service *service_looking_at;
static int service_enabled;
static int git_daemon_config(const char *var, const char *value, void *cb)
static int daemon_error(const char *dir, const char *msg)
static char *access_hook;
static int run_access_hook(struct daemon_service *service, const char *dir, const char *path)
static int run_service(char *dir, struct daemon_service *service)
static void copy_to_log(int fd)
static int run_service_command(const char **argv)
static int upload_pack(void)
static int upload_archive(void)
static int receive_pack(void)
static struct daemon_service daemon_service[] = ;
static void enable_service(const char *name, int ena)
static void make_service_overridable(const char *name, int ena)
static char *xstrdup_tolower(const char *str)
static void parse_host_and_port(char *hostport, char **host,
char **port)
static void parse_host_arg(char *extra_args, int buflen)
static int execute(void)
static int addrcmp(const struct sockaddr_storage *s1,
const struct sockaddr_storage *s2)
static int max_connections = 32;
static unsigned int live_children;
static struct child  *firstborn;
static void add_child(struct child_process *cld, struct sockaddr *addr, socklen_t addrlen)
static void kill_some_child(void)
static void check_dead_children(void)
static char **cld_argv;
static void handle(int incoming, struct sockaddr *addr, socklen_t addrlen)
static void child_handler(int signo)
static int set_reuse_addr(int sockfd)
struct socketlist ;
static const char *ip2str(int family, struct sockaddr *sin, socklen_t len)
static int setup_named_sock(char *listen_addr, int listen_port, struct socketlist *socklist)
static int setup_named_sock(char *listen_addr, int listen_port, struct socketlist *socklist)
static void socksetup(struct string_list *listen_addr, int listen_port, struct socketlist *socklist)
static int service_loop(struct socketlist *socklist)
struct credentials;
static void drop_privileges(struct credentials *cred)
static struct credentials *prepare_credentials(const char *user_name,
const char *group_name)
struct credentials ;
static void drop_privileges(struct credentials *cred)
static struct credentials *prepare_credentials(const char *user_name,
const char *group_name)
static void store_pid(const char *path)
static int serve(struct string_list *listen_addr, int listen_port,
struct credentials *cred)
int main(int argc, char **argv)
