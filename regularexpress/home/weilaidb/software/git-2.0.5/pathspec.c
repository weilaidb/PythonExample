void add_pathspec_matches_against_index(const struct pathspec *pathspec,
char *seen)
char *find_pathspecs_matching_against_index(const struct pathspec *pathspec)
static struct pathspec_magic  pathspec_magic[] = ;
static void prefix_short_magic(struct strbuf *sb, int prefixlen,
unsigned short_magic)
static unsigned prefix_pathspec(struct pathspec_item *item,
unsigned *p_short_magic,
const char **raw, unsigned flags,
const char *prefix, int prefixlen,
const char *elt)
static int pathspec_item_cmp(const void *a_, const void *b_)
static void NORETURN unsupported_magic(const char *pattern,
unsigned magic,
unsigned short_magic)
void parse_pathspec(struct pathspec *pathspec,
unsigned magic_mask, unsigned flags,
const char *prefix, const char **argv)
const char **get_pathspec(const char *prefix, const char **pathspec)
void copy_pathspec(struct pathspec *dst, const struct pathspec *src)
void free_pathspec(struct pathspec *pathspec)
