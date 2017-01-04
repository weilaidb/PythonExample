static struct remote *remote;
static struct strbuf url = STRBUF_INIT;
struct options ;
static struct options options;
static struct string_list cas_options = STRING_LIST_INIT_DUP;
static int set_option(const char *name, const char *value)
struct discovery ;
static struct discovery *last_discovery;
static struct ref *parse_git_refs(struct discovery *heads, int for_push)
static struct ref *parse_info_refs(struct discovery *heads)
static void free_discovery(struct discovery *d)
static int show_http_message(struct strbuf *type, struct strbuf *msg)
static struct discovery* discover_refs(const char *service, int for_push)
static struct ref *get_refs(int for_push)
static void output_refs(struct ref *refs)
struct rpc_state ;
static size_t rpc_out(void *ptr, size_t eltsize,
size_t nmemb, void *buffer_)
static curlioerr rpc_ioctl(CURL *handle, int cmd, void *clientp)
static size_t rpc_in(char *ptr, size_t eltsize,
size_t nmemb, void *buffer_)
static int run_slot(struct active_request_slot *slot,
struct slot_results *results)
static int probe_rpc(struct rpc_state *rpc, struct slot_results *results)
static int post_rpc(struct rpc_state *rpc)
static int rpc_service(struct rpc_state *rpc, struct discovery *heads)
static int fetch_dumb(int nr_heads, struct ref **to_fetch)
static int fetch_git(struct discovery *heads,
int nr_heads, struct ref **to_fetch)
static int fetch(int nr_heads, struct ref **to_fetch)
static void parse_fetch(struct strbuf *buf)
static int push_dav(int nr_spec, char **specs)
static int push_git(struct discovery *heads, int nr_spec, char **specs)
static int push(int nr_spec, char **specs)
static void parse_push(struct strbuf *buf)
int main(int argc, const char **argv)
