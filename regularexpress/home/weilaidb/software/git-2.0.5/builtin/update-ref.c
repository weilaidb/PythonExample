static const char * const git_update_ref_usage[] = ;
static int updates_alloc;
static int updates_count;
static const struct ref_update **updates;
static char line_termination = '\n';
static int update_flags;
static struct ref_update *update_alloc(void)
static void update_store_ref_name(struct ref_update *update,
const char *ref_name)
static void update_store_new_sha1(struct ref_update *update,
const char *newvalue)
static void update_store_old_sha1(struct ref_update *update,
const char *oldvalue)
static const char *parse_arg(const char *next, struct strbuf *arg)
static const char *parse_first_arg(const char *next, struct strbuf *arg)
static const char *parse_next_arg(const char *next, struct strbuf *arg)
static void parse_cmd_update(const char *next)
static void parse_cmd_create(const char *next)
static void parse_cmd_delete(const char *next)
static void parse_cmd_verify(const char *next)
static void parse_cmd_option(const char *next)
static void update_refs_stdin(void)
int cmd_update_ref(int argc, const char **argv, const char *prefix)
