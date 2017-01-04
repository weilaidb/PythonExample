static const char upload_pack_usage[] = "git upload-pack [--strict] [--timeout=<n>] <dir>";
#define THEY_HAVE	(1u << 11)
#define OUR_REF		(1u << 12)
#define WANTED		(1u << 13)
#define COMMON_KNOWN	(1u << 14)
#define REACHABLE	(1u << 15)
#define SHALLOW		(1u << 16)
#define NOT_SHALLOW	(1u << 17)
#define CLIENT_SHALLOW	(1u << 18)
#define HIDDEN_REF	(1u << 19)
static unsigned long oldest_have;
static int multi_ack;
static int no_done;
static int use_thin_pack, use_ofs_delta, use_include_tag;
static int no_progress, daemon_mode;
static int allow_tip_sha1_in_want;
static int shallow_nr;
static struct object_array have_obj;
static struct object_array want_obj;
static struct object_array extra_edge_obj;
static unsigned int timeout;
static int keepalive = 5;
static int use_sideband;
static int advertise_refs;
static int stateless_rpc;
static void reset_timeout(void)
static ssize_t send_client_data(int fd, const char *data, ssize_t sz)
static int write_one_shallow(const struct commit_graft *graft, void *cb_data)
static void create_pack_file(void)
static int got_sha1(char *hex, unsigned char *sha1)
static int reachable(struct commit *want)
static int ok_to_give_up(void)
static int get_common_commits(void)
static int is_our_ref(struct object *o)
static void check_non_tip(void)
static void receive_needs(void)
static int mark_our_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static void format_symref_info(struct strbuf *buf, struct string_list *symref)
static int send_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int find_symref(const char *refname, const unsigned char *sha1, int flag,
void *cb_data)
static void upload_pack(void)
static int upload_pack_config(const char *var, const char *value, void *unused)
int main(int argc, char **argv)
