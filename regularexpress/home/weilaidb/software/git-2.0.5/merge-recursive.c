static struct tree *shift_tree_object(struct tree *one, struct tree *two,
const char *subtree_shift)
static struct commit *make_virtual_commit(struct tree *tree, const char *comment)
static int sha_eq(const unsigned char *a, const unsigned char *b)
enum rename_type ;
struct rename_conflict_info ;
struct stage_data ;
static inline void setup_rename_conflict_info(enum rename_type rename_type,
struct diff_filepair *pair1,
struct diff_filepair *pair2,
const char *branch1,
const char *branch2,
struct stage_data *dst_entry1,
struct stage_data *dst_entry2,
struct merge_options *o,
struct stage_data *src_entry1,
struct stage_data *src_entry2)
static int show(struct merge_options *o, int v)
static void flush_output(struct merge_options *o)
__attribute__((format (printf, 3, 4)))
static void output(struct merge_options *o, int v, const char *fmt, ...)
static void output_commit_title(struct merge_options *o, struct commit *commit)
static int add_cacheinfo(unsigned int mode, const unsigned char *sha1,
const char *path, int stage, int refresh, int options)
static void init_tree_desc_from_tree(struct tree_desc *desc, struct tree *tree)
static int git_merge_trees(int index_only,
struct tree *common,
struct tree *head,
struct tree *merge)
struct tree *write_tree_from_memory(struct merge_options *o)
static int save_files_dirs(const unsigned char *sha1,
const char *base, int baselen, const char *path,
unsigned int mode, int stage, void *context)
static int get_files_dirs(struct merge_options *o, struct tree *tree)
static struct stage_data *insert_stage_data(const char *path,
struct tree *o, struct tree *a, struct tree *b,
struct string_list *entries)
static struct string_list *get_unmerged(void)
static int string_list_df_name_compare(const void *a, const void *b)
static void record_df_conflict_files(struct merge_options *o,
struct string_list *entries)
struct rename ;
static struct string_list *get_renames(struct merge_options *o,
struct tree *tree,
struct tree *o_tree,
struct tree *a_tree,
struct tree *b_tree,
struct string_list *entries)
static int update_stages(const char *path, const struct diff_filespec *o,
const struct diff_filespec *a,
const struct diff_filespec *b)
static void update_entry(struct stage_data *entry,
struct diff_filespec *o,
struct diff_filespec *a,
struct diff_filespec *b)
static int remove_file(struct merge_options *o, int clean,
const char *path, int no_wd)
static char *unique_path(struct merge_options *o, const char *path, const char *branch)
static int dir_in_way(const char *path, int check_working_copy)
static int was_tracked(const char *path)
static int would_lose_untracked(const char *path)
static int make_room_for_path(struct merge_options *o, const char *path)
static void update_file_flags(struct merge_options *o,
const unsigned char *sha,
unsigned mode,
const char *path,
int update_cache,
int update_wd)
static void update_file(struct merge_options *o,
int clean,
const unsigned char *sha,
unsigned mode,
const char *path)
struct merge_file_info ;
static int merge_3way(struct merge_options *o,
mmbuffer_t *result_buf,
const struct diff_filespec *one,
const struct diff_filespec *a,
const struct diff_filespec *b,
const char *branch1,
const char *branch2)
static struct merge_file_info merge_file_1(struct merge_options *o,
const struct diff_filespec *one,
const struct diff_filespec *a,
const struct diff_filespec *b,
const char *branch1,
const char *branch2)
static struct merge_file_info
merge_file_special_markers(struct merge_options *o,
const struct diff_filespec *one,
const struct diff_filespec *a,
const struct diff_filespec *b,
const char *branch1,
const char *filename1,
const char *branch2,
const char *filename2)
static struct merge_file_info merge_file_one(struct merge_options *o,
const char *path,
const unsigned char *o_sha, int o_mode,
const unsigned char *a_sha, int a_mode,
const unsigned char *b_sha, int b_mode,
const char *branch1,
const char *branch2)
static void handle_change_delete(struct merge_options *o,
const char *path,
const unsigned char *o_sha, int o_mode,
const unsigned char *a_sha, int a_mode,
const unsigned char *b_sha, int b_mode,
const char *change, const char *change_past)
static void conflict_rename_delete(struct merge_options *o,
struct diff_filepair *pair,
const char *rename_branch,
const char *other_branch)
static struct diff_filespec *filespec_from_entry(struct diff_filespec *target,
struct stage_data *entry,
int stage)
static void handle_file(struct merge_options *o,
struct diff_filespec *rename,
int stage,
struct rename_conflict_info *ci)
static void conflict_rename_rename_1to2(struct merge_options *o,
struct rename_conflict_info *ci)
static void conflict_rename_rename_2to1(struct merge_options *o,
struct rename_conflict_info *ci)
static int process_renames(struct merge_options *o,
struct string_list *a_renames,
struct string_list *b_renames)
static unsigned char *stage_sha(const unsigned char *sha, unsigned mode)
static int read_sha1_strbuf(const unsigned char *sha1, struct strbuf *dst)
static int blob_unchanged(const unsigned char *o_sha,
const unsigned char *a_sha,
int renormalize, const char *path)
static void handle_modify_delete(struct merge_options *o,
const char *path,
unsigned char *o_sha, int o_mode,
unsigned char *a_sha, int a_mode,
unsigned char *b_sha, int b_mode)
static int merge_content(struct merge_options *o,
const char *path,
unsigned char *o_sha, int o_mode,
unsigned char *a_sha, int a_mode,
unsigned char *b_sha, int b_mode,
struct rename_conflict_info *rename_conflict_info)
static int process_entry(struct merge_options *o,
const char *path, struct stage_data *entry)
int merge_trees(struct merge_options *o,
struct tree *head,
struct tree *merge,
struct tree *common,
struct tree **result)
static struct commit_list *reverse_commit_list(struct commit_list *list)
int merge_recursive(struct merge_options *o,
struct commit *h1,
struct commit *h2,
struct commit_list *ca,
struct commit **result)
static struct commit *get_ref(const unsigned char *sha1, const char *name)
int merge_recursive_generic(struct merge_options *o,
const unsigned char *head,
const unsigned char *merge,
int num_base_list,
const unsigned char **base_list,
struct commit **result)
static int merge_recursive_config(const char *var, const char *value, void *cb)
void init_merge_options(struct merge_options *o)
int parse_merge_opt(struct merge_options *o, const char *s)
