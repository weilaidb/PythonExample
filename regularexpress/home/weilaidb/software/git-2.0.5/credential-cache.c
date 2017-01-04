#define FLAG_SPAWN 0x1
#define FLAG_RELAY 0x2
static int send_request(const char *socket, const struct strbuf *out)
static void spawn_daemon(const char *socket)
static void do_cache(const char *socket, const char *action, int timeout,
int flags)
int main(int argc, const char **argv)
