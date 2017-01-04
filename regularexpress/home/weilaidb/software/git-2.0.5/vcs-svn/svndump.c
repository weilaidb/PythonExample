#define constcmp(s, ref) memcmp(s, ref, sizeof(ref) - 1)
#define REPORT_FILENO 3
#define NODEACT_REPLACE 4
#define NODEACT_DELETE 3
#define NODEACT_ADD 2
#define NODEACT_CHANGE 1
#define NODEACT_UNKNOWN 0
#define DUMP_CTX 0
#define REV_CTX  1
#define NODE_CTX 2
#define INTERNODE_CTX 3
#define DATE_RFC2822_LEN 31
static struct line_buffer input = LINE_BUFFER_INIT;
static struct  node_ctx;
static struct  rev_ctx;
static struct  dump_ctx;
static void reset_node_ctx(char *fname)
static void reset_rev_ctx(uint32_t revision)
static void reset_dump_ctx(const char *url)
static void handle_property(const struct strbuf *key_buf,
struct strbuf *val,
uint32_t *type_set)
static void die_short_read(void)
static void read_props(void)
static void handle_node(void)
static void begin_revision(const char *remote_ref)
static void end_revision(const char *note_ref)
void svndump_read(const char *url, const char *local_ref, const char *notes_ref)
static void init(int report_fd)
int svndump_init(const char *filename)
int svndump_init_fd(int in_fd, int back_fd)
void svndump_deinit(void)
void svndump_reset(void)
