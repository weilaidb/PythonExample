volatile show_early_output_fn_t show_early_output;
char *path_name(const struct name_path *path, const char *name)
static int show_path_component_truncated(FILE *out, const char *name, int len)
static int show_path_truncated(FILE *out, const struct name_path *path)
void show_object_with_name(FILE *out, struct object *obj,
const struct name_path *path, const char *component)
void add_object(struct object *obj,
struct object_array *p,
struct name_path *path,
const char *name)
static void mark_blob_uninteresting(struct blob *blob)
static void mark_tree_contents_uninteresting(struct tree *tree)
void mark_tree_uninteresting(struct tree *tree)
void mark_parents_uninteresting(struct commit *commit)
static void add_pending_object_with_mode(struct rev_info *revs,
struct object *obj,
const char *name, unsigned mode)
void add_pending_object(struct rev_info *revs,
struct object *obj, const char *name)
void add_head_to_pending(struct rev_info *revs)
static struct object *get_reference(struct rev_info *revs, const char *name,
const unsigned char *sha1,
unsigned int flags)
void add_pending_sha1(struct rev_info *revs, const char *name,
const unsigned char *sha1, unsigned int flags)
static struct commit *handle_commit(struct rev_info *revs,
struct object *object, const char *name)
static int everybody_uninteresting(struct commit_list *orig)
static inline int relevant_commit(struct commit *commit)
static struct commit *one_relevant_parent(const struct rev_info *revs,
struct commit_list *orig)
static int tree_difference = REV_TREE_SAME;
static void file_add_remove(struct diff_options *options,
int addremove, unsigned mode,
const unsigned char *sha1,
int sha1_valid,
const char *fullpath, unsigned dirty_submodule)
static void file_change(struct diff_options *options,
unsigned old_mode, unsigned new_mode,
const unsigned char *old_sha1,
const unsigned char *new_sha1,
int old_sha1_valid, int new_sha1_valid,
const char *fullpath,
unsigned old_dirty_submodule, unsigned new_dirty_submodule)
static int rev_compare_tree(struct rev_info *revs,
struct commit *parent, struct commit *commit)
static int rev_same_tree_as_empty(struct rev_info *revs, struct commit *commit)
struct treesame_state ;
static struct treesame_state *initialise_treesame(struct rev_info *revs, struct commit *commit)
static int compact_treesame(struct rev_info *revs, struct commit *commit, unsigned nth_parent)
static unsigned update_treesame(struct rev_info *revs, struct commit *commit)
static inline int limiting_can_increase_treesame(const struct rev_info *revs)
static void try_to_simplify_commit(struct rev_info *revs, struct commit *commit)
static void commit_list_insert_by_date_cached(struct commit *p, struct commit_list **head,
struct commit_list *cached_base, struct commit_list **cache)
static int add_parents_to_list(struct rev_info *revs, struct commit *commit,
struct commit_list **list, struct commit_list **cache_ptr)
static void cherry_pick_list(struct commit_list *list, struct rev_info *revs)
#define SLOP 5
static int still_interesting(struct commit_list *src, unsigned long date, int slop)
static void limit_to_ancestry(struct commit_list *bottom, struct commit_list *list)
static struct commit_list *collect_bottom_commits(struct commit_list *list)
static void limit_left_right(struct commit_list *list, struct rev_info *revs)
static int limit_list(struct rev_info *revs)
static void add_rev_cmdline(struct rev_info *revs,
struct object *item,
const char *name,
int whence,
unsigned flags)
static void add_rev_cmdline_list(struct rev_info *revs,
struct commit_list *commit_list,
int whence,
unsigned flags)
struct all_refs_cb ;
int ref_excluded(struct string_list *ref_excludes, const char *path)
static int handle_one_ref(const char *path, const unsigned char *sha1, int flag, void *cb_data)
static void init_all_refs_cb(struct all_refs_cb *cb, struct rev_info *revs,
unsigned flags)
void clear_ref_exclusion(struct string_list **ref_excludes_p)
void add_ref_exclusion(struct string_list **ref_excludes_p, const char *exclude)
static void handle_refs(const char *submodule, struct rev_info *revs, unsigned flags,
int (*for_each)(const char *, each_ref_fn, void *))
static void handle_one_reflog_commit(unsigned char *sha1, void *cb_data)
static int handle_one_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static int handle_one_reflog(const char *path, const unsigned char *sha1, int flag, void *cb_data)
static void handle_reflog(struct rev_info *revs, unsigned flags)
static int add_parents_only(struct rev_info *revs, const char *arg_, int flags)
void init_revisions(struct rev_info *revs, const char *prefix)
static void add_pending_commit_list(struct rev_info *revs,
struct commit_list *commit_list,
unsigned int flags)
static void prepare_show_merge(struct rev_info *revs)
int handle_revision_arg(const char *arg_, struct rev_info *revs, int flags, unsigned revarg_opt)
struct cmdline_pathspec ;
static void append_prune_data(struct cmdline_pathspec *prune, const char **av)
static void read_pathspec_from_stdin(struct rev_info *revs, struct strbuf *sb,
struct cmdline_pathspec *prune)
static void read_revisions_from_stdin(struct rev_info *revs,
struct cmdline_pathspec *prune)
static void add_grep(struct rev_info *revs, const char *ptn, enum grep_pat_token what)
static void add_header_grep(struct rev_info *revs, enum grep_header_field field, const char *pattern)
static void add_message_grep(struct rev_info *revs, const char *pattern)
static int handle_revision_opt(struct rev_info *revs, int argc, const char **argv,
int *unkc, const char **unkv)
void parse_revision_opt(struct rev_info *revs, struct parse_opt_ctx_t *ctx,
const struct option *options,
const char * const usagestr[])
static int for_each_bad_bisect_ref(const char *submodule, each_ref_fn fn, void *cb_data)
static int for_each_good_bisect_ref(const char *submodule, each_ref_fn fn, void *cb_data)
static int handle_revision_pseudo_opt(const char *submodule,
struct rev_info *revs,
int argc, const char **argv, int *flags)
int setup_revisions(int argc, const char **argv, struct rev_info *revs, struct setup_revision_opt *opt)
static void add_child(struct rev_info *revs, struct commit *parent, struct commit *child)
static int remove_duplicate_parents(struct rev_info *revs, struct commit *commit)
struct merge_simplify_state ;
static struct merge_simplify_state *locate_simplify_state(struct rev_info *revs, struct commit *commit)
static int mark_redundant_parents(struct rev_info *revs, struct commit *commit)
static int mark_treesame_root_parents(struct rev_info *revs, struct commit *commit)
static int leave_one_treesame_to_parent(struct rev_info *revs, struct commit *commit)
static int remove_marked_parents(struct rev_info *revs, struct commit *commit)
static struct commit_list **simplify_one(struct rev_info *revs, struct commit *commit, struct commit_list **tail)
static void simplify_merges(struct rev_info *revs)
static void set_children(struct rev_info *revs)
void reset_revision_walk(void)
int prepare_revision_walk(struct rev_info *revs)
static enum rewrite_result rewrite_one(struct rev_info *revs, struct commit **pp)
int rewrite_parents(struct rev_info *revs, struct commit *commit,
rewrite_parent_fn_t rewrite_parent)
static int commit_rewrite_person(struct strbuf *buf, const char *what, struct string_list *mailmap)
static int commit_match(struct commit *commit, struct rev_info *opt)
static inline int want_ancestry(const struct rev_info *revs)
enum commit_action get_commit_action(struct rev_info *revs, struct commit *commit)
enum commit_action simplify_commit(struct rev_info *revs, struct commit *commit)
static void track_linear(struct rev_info *revs, struct commit *commit)
static struct commit *get_revision_1(struct rev_info *revs)
static int entry_unshown(struct object_array_entry *entry, void *cb_data_unused)
static void gc_boundary(struct object_array *array)
static void create_boundary_commit_list(struct rev_info *revs)
static struct commit *get_revision_internal(struct rev_info *revs)
struct commit *get_revision(struct rev_info *revs)
char *get_revision_mark(const struct rev_info *revs, const struct commit *commit)
void put_revision_mark(const struct rev_info *revs, const struct commit *commit)
define_commit_slab(saved_parents, struct commit_list *);
#define EMPTY_PARENT_LIST ((struct commit_list *)-1)
void save_parents(struct rev_info *revs, struct commit *commit)
struct commit_list *get_saved_parents(struct rev_info *revs, const struct commit *commit)
void free_saved_parents(struct rev_info *revs)
