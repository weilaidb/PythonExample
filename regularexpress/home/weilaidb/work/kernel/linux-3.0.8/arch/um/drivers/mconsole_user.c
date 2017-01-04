static struct mconsole_command commands[] = ;
char mconsole_socket_name[256];
static int mconsole_reply_v0(struct mc_request *req, char *reply)
static struct mconsole_command *mconsole_parse(struct mc_request *req)
#define MIN(a,b) ((a)<(b) ? (a):(b))
#define STRINGX(x) #x
#define STRING(x) STRINGX(x)
int mconsole_get_request(int fd, struct mc_request *req)
int mconsole_reply_len(struct mc_request *req, const char *str, int total,
int err, int more)
int mconsole_reply(struct mc_request *req, const char *str, int err, int more)
int mconsole_unlink_socket(void)
static int notify_sock = -1;
int mconsole_notify(char *sock_name, int type, const void *data, int len)
