static char *git_req;
static char *git_req_vhost;
static char *strip_escapes(const char *str, const char *service,
const char **next)
#define MAXARGUMENTS 256
static const char **parse_argv(const char *arg, const char *service)
static void send_git_request(int stdin_fd, const char *serv, const char *repo,
const char *vhost)
static int run_child(const char *arg, const char *service)
#define MAXCOMMAND 4096
static int command_loop(const char *child)
int cmd_remote_ext(int argc, const char **argv, const char *prefix)
