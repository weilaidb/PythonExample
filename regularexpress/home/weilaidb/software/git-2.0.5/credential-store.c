static struct lock_file credential_lock;
static void parse_credential_file(const char *fn,
struct credential *c,
void (*match_cb)(struct credential *),
void (*other_cb)(struct strbuf *))
static void print_entry(struct credential *c)
static void print_line(struct strbuf *buf)
static void rewrite_credential_file(const char *fn, struct credential *c,
struct strbuf *extra)
static void store_credential(const char *fn, struct credential *c)
static void remove_credential(const char *fn, struct credential *c)
static int lookup_credential(const char *fn, struct credential *c)
int main(int argc, char **argv)
