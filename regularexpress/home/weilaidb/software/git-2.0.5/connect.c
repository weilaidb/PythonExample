static char *server_capabilities;
static const char *parse_feature_value(const char *, const char *, int *);
static int check_ref(const char *name, int len, unsigned int flags)
int check_ref_type(const struct ref *ref, int flags)
static void die_initial_contact(int got_at_least_one_head)
static void parse_one_symref_info(struct string_list *symref, const char *val, int len)
static void annotate_refs_with_symref_info(struct ref *ref)
struct ref **get_remote_heads(int in, char *src_buf, size_t src_len,
struct ref **list, unsigned int flags,
struct sha1_array *extra_have,
struct sha1_array *shallow_points)
static const char *parse_feature_value(const char *feature_list, const char *feature, int *lenp)
int parse_feature_request(const char *feature_list, const char *feature)
const char *server_feature_value(const char *feature, int *len)
int server_supports(const char *feature)
enum protocol ;
int url_is_local_not_ssh(const char *url)
static const char *prot_name(enum protocol protocol)
static enum protocol get_protocol(const char *name)
#define STR_(s)	# s
#define STR(s)	STR_(s)
static void get_host_and_port(char **host, const char **port)
static void enable_keepalive(int sockfd)
static const char *ai_name(const struct addrinfo *ai)
static int git_tcp_connect_sock(char *host, int flags)
static int git_tcp_connect_sock(char *host, int flags)
static void git_tcp_connect(int fd[2], char *host, int flags)
static char *git_proxy_command;
static int git_proxy_command_options(const char *var, const char *value,
void *cb)
static int git_use_proxy(const char *host)
static struct child_process *git_proxy_connect(int fd[2], char *host)
static const char *get_port_numeric(const char *p)
static enum protocol parse_connect_url(const char *url_orig, char **ret_host,
char **ret_path)
static struct child_process no_fork;
struct child_process *git_connect(int fd[2], const char *url,
const char *prog, int flags)
int git_connection_is_socket(struct child_process *conn)
int finish_connect(struct child_process *conn)
