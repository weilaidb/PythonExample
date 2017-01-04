#define TREE_WALK_H
struct name_entry ;
struct tree_desc ;
static inline const unsigned char *tree_entry_extract(struct tree_desc *desc, const char **pathp, unsigned int *modep)
static inline int tree_entry_len(const struct name_entry *ne)
void update_tree_entry(struct tree_desc *);
void init_tree_desc(struct tree_desc *desc, const void *buf, unsigned long size);
int tree_entry(struct tree_desc *, struct name_entry *);
void *fill_tree_descriptor(struct tree_desc *desc, const unsigned char *sha1);
struct traverse_info;
typedef int (*traverse_callback_t)(int n, unsigned long mask, unsigned long dirmask, struct name_entry *entry, struct traverse_info *);
int traverse_trees(int n, struct tree_desc *t, struct traverse_info *info);
struct traverse_info ;
int get_tree_entry(const unsigned char *, const char *, unsigned char *, unsigned *);
extern char *make_traverse_path(char *path, const struct traverse_info *info, const struct name_entry *n);
extern void setup_traverse_info(struct traverse_info *info, const char *base);
static inline int traverse_path_len(const struct traverse_info *info, const struct name_entry *n)
enum interesting ;
extern enum interesting tree_entry_interesting(const struct name_entry *,
struct strbuf *, int,
const struct pathspec *ps);
