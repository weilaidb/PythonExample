static const char *socket_path;
static void cleanup_socket(void)
static void cleanup_socket_on_signal(int sig)
struct credential_cache_entry ;
static struct credential_cache_entry *entries;
static int entries_nr;
static int entries_alloc;
static void cache_credential(struct credential *c, int timeout)
static struct credential_cache_entry *lookup_credential(const struct credential *c)
static void remove_credential(const struct credential *c)
static int check_expirations(void)
static int read_request(FILE *fh, struct credential *c,
struct strbuf *action, int *timeout)
static void serve_one_client(FILE *in, FILE *out)
static int serve_cache_loop(int fd)
static void serve_cache(const char *socket_path)
static const char permissions_advice[] =
"The permissions on your socket directory are too loose; other\n"
"users may be able to read your cached credentials. Consider running:\n"
"\n"
"	chmod 0700 %s";
static void check_socket_directory(const char *path)
int main(int argc, const char **argv)
