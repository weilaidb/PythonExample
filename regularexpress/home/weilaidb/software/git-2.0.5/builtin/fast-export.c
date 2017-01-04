static const char *fast_export_usage[] = ;
static int progress;
static enum  signed_tag_mode = ABORT;
static enum  tag_of_filtered_mode = ERROR;
static int fake_missing_tagger;
static int use_done_feature;
static int no_data;
static int full_tree;
static struct string_list extra_refs = STRING_LIST_INIT_NODUP;
static int parse_opt_signed_tag_mode(const struct option *opt,
const char *arg, int unset)
static int parse_opt_tag_of_filtered_mode(const struct option *opt,
const char *arg, int unset)
static struct decoration idnums;
static uint32_t last_idnum;
static int has_unshown_parent(struct commit *commit)
static inline uint32_t *mark_to_ptr(uint32_t mark)
static inline uint32_t ptr_to_mark(void * mark)
static inline void mark_object(struct object *object, uint32_t mark)
static inline void mark_next_object(struct object *object)
static int get_object_mark(struct object *object)
static void show_progress(void)
static void export_blob(const unsigned char *sha1)
static int depth_first(const void *a_, const void *b_)
static void print_path(const char *path)
static void show_filemodify(struct diff_queue_struct *q,
struct diff_options *options, void *data)
static const char *find_encoding(const char *begin, const char *end)
static void handle_commit(struct commit *commit, struct rev_info *rev)
static void handle_tail(struct object_array *commits, struct rev_info *revs)
static void handle_tag(const char *name, struct tag *tag)
static struct commit *get_commit(struct rev_cmdline_entry *e, char *full_name)
static void get_tags_and_duplicates(struct rev_cmdline_info *info)
static void handle_tags_and_duplicates(void)
static void export_marks(char *file)
static void import_marks(char *input_file)
int cmd_fast_export(int argc, const char **argv, const char *prefix)
