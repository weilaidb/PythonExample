#define NOTES_H
typedef int (*combine_notes_fn)(unsigned char *cur_sha1, const unsigned char *new_sha1);
int combine_notes_concatenate(unsigned char *cur_sha1, const unsigned char *new_sha1);
int combine_notes_overwrite(unsigned char *cur_sha1, const unsigned char *new_sha1);
int combine_notes_ignore(unsigned char *cur_sha1, const unsigned char *new_sha1);
int combine_notes_cat_sort_uniq(unsigned char *cur_sha1, const unsigned char *new_sha1);
extern struct notes_tree  default_notes_tree;
const char *default_notes_ref(void);
#define NOTES_INIT_EMPTY 1
void init_notes(struct notes_tree *t, const char *notes_ref,
combine_notes_fn combine_notes, int flags);
int add_note(struct notes_tree *t, const unsigned char *object_sha1,
const unsigned char *note_sha1, combine_notes_fn combine_notes);
int remove_note(struct notes_tree *t, const unsigned char *object_sha1);
const unsigned char *get_note(struct notes_tree *t,
const unsigned char *object_sha1);
int copy_note(struct notes_tree *t,
const unsigned char *from_obj, const unsigned char *to_obj,
int force, combine_notes_fn combine_notes);
#define FOR_EACH_NOTE_DONT_UNPACK_SUBTREES 1
#define FOR_EACH_NOTE_YIELD_SUBTREES 2
typedef int each_note_fn(const unsigned char *object_sha1,
const unsigned char *note_sha1, char *note_path,
void *cb_data);
int for_each_note(struct notes_tree *t, int flags, each_note_fn fn,
void *cb_data);
int write_notes_tree(struct notes_tree *t, unsigned char *result);
#define NOTES_PRUNE_VERBOSE 1
#define NOTES_PRUNE_DRYRUN 2
void prune_notes(struct notes_tree *t, int flags);
void free_notes(struct notes_tree *t);
struct string_list;
struct display_notes_opt ;
void init_display_notes(struct display_notes_opt *opt);
void format_display_notes(const unsigned char *object_sha1,
struct strbuf *sb, const char *output_encoding, int raw);
struct notes_tree **load_notes_trees(struct string_list *refs);
void string_list_add_refs_by_glob(struct string_list *list, const char *glob);
void string_list_add_refs_from_colon_sep(struct string_list *list,
const char *globs);
void expand_notes_ref(struct strbuf *sb);
