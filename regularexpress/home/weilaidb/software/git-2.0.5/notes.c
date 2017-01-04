struct int_node ;
struct leaf_node ;
struct non_note ;
#define PTR_TYPE_NULL     0
#define PTR_TYPE_INTERNAL 1
#define PTR_TYPE_NOTE     2
#define PTR_TYPE_SUBTREE  3
#define GET_PTR_TYPE(ptr)       ((uintptr_t) (ptr) & 3)
#define CLR_PTR_TYPE(ptr)       ((void *) ((uintptr_t) (ptr) & ~3))
#define SET_PTR_TYPE(ptr, type) ((void *) ((uintptr_t) (ptr) | (type)))
#define GET_NIBBLE(n, sha1) (((sha1[(n) >> 1]) >> ((~(n) & 0x01) << 2)) & 0x0f)
#define SUBTREE_SHA1_PREFIXCMP(key_sha1, subtree_sha1) \
(memcmp(key_sha1, subtree_sha1, subtree_sha1[19]))
struct notes_tree default_notes_tree;
static struct string_list display_notes_refs;
static struct notes_tree **display_notes_trees;
static void load_subtree(struct notes_tree *t, struct leaf_node *subtree,
struct int_node *node, unsigned int n);
static void **note_tree_search(struct notes_tree *t, struct int_node **tree,
unsigned char *n, const unsigned char *key_sha1)
static struct leaf_node *note_tree_find(struct notes_tree *t,
struct int_node *tree, unsigned char n,
const unsigned char *key_sha1)
static int note_tree_consolidate(struct int_node *tree,
struct int_node *parent, unsigned char index)
static void note_tree_remove(struct notes_tree *t,
struct int_node *tree, unsigned char n,
struct leaf_node *entry)
static int note_tree_insert(struct notes_tree *t, struct int_node *tree,
unsigned char n, struct leaf_node *entry, unsigned char type,
combine_notes_fn combine_notes)
static void note_tree_free(struct int_node *tree)
static int get_sha1_hex_segment(const char *hex, unsigned int hex_len,
unsigned char *sha1, unsigned int sha1_len)
static int non_note_cmp(const struct non_note *a, const struct non_note *b)
static void add_non_note(struct notes_tree *t, const char *path,
unsigned int mode, const unsigned char *sha1)
static void load_subtree(struct notes_tree *t, struct leaf_node *subtree,
struct int_node *node, unsigned int n)
static unsigned char determine_fanout(struct int_node *tree, unsigned char n,
unsigned char fanout)
static void construct_path_with_fanout(const unsigned char *sha1,
unsigned char fanout, char *path)
static int for_each_note_helper(struct notes_tree *t, struct int_node *tree,
unsigned char n, unsigned char fanout, int flags,
each_note_fn fn, void *cb_data)
struct tree_write_stack ;
static inline int matches_tree_write_stack(struct tree_write_stack *tws,
const char *full_path)
static void write_tree_entry(struct strbuf *buf, unsigned int mode,
const char *path, unsigned int path_len, const
unsigned char *sha1)
static void tree_write_stack_init_subtree(struct tree_write_stack *tws,
const char *path)
static int tree_write_stack_finish_subtree(struct tree_write_stack *tws)
static int write_each_note_helper(struct tree_write_stack *tws,
const char *path, unsigned int mode,
const unsigned char *sha1)
struct write_each_note_data ;
static int write_each_non_note_until(const char *note_path,
struct write_each_note_data *d)
static int write_each_note(const unsigned char *object_sha1,
const unsigned char *note_sha1, char *note_path,
void *cb_data)
struct note_delete_list ;
static int prune_notes_helper(const unsigned char *object_sha1,
const unsigned char *note_sha1, char *note_path,
void *cb_data)
int combine_notes_concatenate(unsigned char *cur_sha1,
const unsigned char *new_sha1)
int combine_notes_overwrite(unsigned char *cur_sha1,
const unsigned char *new_sha1)
int combine_notes_ignore(unsigned char *cur_sha1,
const unsigned char *new_sha1)
static int string_list_add_note_lines(struct string_list *list,
const unsigned char *sha1)
static int string_list_join_lines_helper(struct string_list_item *item,
void *cb_data)
int combine_notes_cat_sort_uniq(unsigned char *cur_sha1,
const unsigned char *new_sha1)
static int string_list_add_one_ref(const char *refname, const unsigned char *sha1,
int flag, void *cb)
void string_list_add_refs_by_glob(struct string_list *list, const char *glob)
void string_list_add_refs_from_colon_sep(struct string_list *list,
const char *globs)
static int notes_display_config(const char *k, const char *v, void *cb)
const char *default_notes_ref(void)
void init_notes(struct notes_tree *t, const char *notes_ref,
combine_notes_fn combine_notes, int flags)
struct notes_tree **load_notes_trees(struct string_list *refs)
void init_display_notes(struct display_notes_opt *opt)
int add_note(struct notes_tree *t, const unsigned char *object_sha1,
const unsigned char *note_sha1, combine_notes_fn combine_notes)
int remove_note(struct notes_tree *t, const unsigned char *object_sha1)
const unsigned char *get_note(struct notes_tree *t,
const unsigned char *object_sha1)
int for_each_note(struct notes_tree *t, int flags, each_note_fn fn,
void *cb_data)
int write_notes_tree(struct notes_tree *t, unsigned char *result)
void prune_notes(struct notes_tree *t, int flags)
void free_notes(struct notes_tree *t)
static void format_note(struct notes_tree *t, const unsigned char *object_sha1,
struct strbuf *sb, const char *output_encoding, int raw)
void format_display_notes(const unsigned char *object_sha1,
struct strbuf *sb, const char *output_encoding, int raw)
int copy_note(struct notes_tree *t,
const unsigned char *from_obj, const unsigned char *to_obj,
int force, combine_notes_fn combine_notes)
void expand_notes_ref(struct strbuf *sb)
