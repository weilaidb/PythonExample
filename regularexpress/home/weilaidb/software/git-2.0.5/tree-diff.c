static void show_entry(struct diff_options *opt, const char *prefix,
struct tree_desc *desc, struct strbuf *base);
static int compare_tree_entry(struct tree_desc *t1, struct tree_desc *t2,
struct strbuf *base, struct diff_options *opt)
static void show_tree(struct diff_options *opt, const char *prefix,
struct tree_desc *desc, struct strbuf *base)
static void show_entry(struct diff_options *opt, const char *prefix,
struct tree_desc *desc, struct strbuf *base)
static void skip_uninteresting(struct tree_desc *t, struct strbuf *base,
struct diff_options *opt,
enum interesting *match)
int diff_tree(struct tree_desc *t1, struct tree_desc *t2,
const char *base_str, struct diff_options *opt)
static inline int diff_might_be_rename(void)
static void try_to_follow_renames(struct tree_desc *t1, struct tree_desc *t2, const char *base, struct diff_options *opt)
int diff_tree_sha1(const unsigned char *old, const unsigned char *new, const char *base, struct diff_options *opt)
int diff_root_tree_sha1(const unsigned char *new, const char *base, struct diff_options *opt)
