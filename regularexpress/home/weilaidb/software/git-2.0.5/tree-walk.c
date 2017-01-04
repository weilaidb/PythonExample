static const char *get_mode(const char *str, unsigned int *modep)
static void decode_tree_entry(struct tree_desc *desc, const char *buf, unsigned long size)
void init_tree_desc(struct tree_desc *desc, const void *buffer, unsigned long size)
void *fill_tree_descriptor(struct tree_desc *desc, const unsigned char *sha1)
static void entry_clear(struct name_entry *a)
static void entry_extract(struct tree_desc *t, struct name_entry *a)
void update_tree_entry(struct tree_desc *desc)
int tree_entry(struct tree_desc *desc, struct name_entry *entry)
void setup_traverse_info(struct traverse_info *info, const char *base)
char *make_traverse_path(char *path, const struct traverse_info *info, const struct name_entry *n)
struct tree_desc_skip ;
struct tree_desc_x ;
static int name_compare(const char *a, int a_len,
const char *b, int b_len)
static int check_entry_match(const char *a, int a_len, const char *b, int b_len)
static void extended_entry_extract(struct tree_desc_x *t,
struct name_entry *a,
const char *first,
int first_len)
static void update_extended_entry(struct tree_desc_x *t, struct name_entry *a)
static void free_extended_entry(struct tree_desc_x *t)
static inline int prune_traversal(struct name_entry *e,
struct traverse_info *info,
struct strbuf *base,
int still_interesting)
int traverse_trees(int n, struct tree_desc *t, struct traverse_info *info)
static int find_tree_entry(struct tree_desc *t, const char *name, unsigned char *result, unsigned *mode)
int get_tree_entry(const unsigned char *tree_sha1, const char *name, unsigned char *sha1, unsigned *mode)
static int match_entry(const struct pathspec_item *item,
const struct name_entry *entry, int pathlen,
const char *match, int matchlen,
enum interesting *never_interesting)
static int basecmp(const struct pathspec_item *item,
const char *base, const char *match, int len)
static int match_dir_prefix(const struct pathspec_item *item,
const char *base,
const char *match, int matchlen)
static int match_wildcard_base(const struct pathspec_item *item,
const char *base, int baselen,
int *matched)
static enum interesting do_match(const struct name_entry *entry,
struct strbuf *base, int base_offset,
const struct pathspec *ps,
int exclude)
enum interesting tree_entry_interesting(const struct name_entry *entry,
struct strbuf *base, int base_offset,
const struct pathspec *ps)
