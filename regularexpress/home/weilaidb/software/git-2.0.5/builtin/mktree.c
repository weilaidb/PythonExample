static struct treeent  **entries;
static int alloc, used;
static void append_to_tree(unsigned mode, unsigned char *sha1, char *path)
static int ent_compare(const void *a_, const void *b_)
static void write_tree(unsigned char *sha1)
static const char *mktree_usage[] = ;
static void mktree_line(char *buf, size_t len, int line_termination, int allow_missing)
int cmd_mktree(int ac, const char **av, const char *prefix)
