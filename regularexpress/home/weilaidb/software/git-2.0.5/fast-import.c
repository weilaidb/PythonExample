#define PACK_ID_BITS 16
#define MAX_PACK_ID ((1<<PACK_ID_BITS)-1)
#define DEPTH_BITS 13
#define MAX_DEPTH ((1<<DEPTH_BITS)-1)
#define NO_DELTA S_ISUID
struct object_entry ;
struct object_entry_pool ;
struct mark_set ;
struct last_object ;
struct mem_pool ;
struct atom_str ;
struct tree_content;
struct tree_entry ;
struct tree_content ;
struct avail_tree_content ;
struct branch ;
struct tag ;
struct hash_list ;
typedef enum  whenspec_type;
struct recent_command ;
static unsigned long max_depth = 10;
static off_t max_packsize;
static int force_update;
static int pack_compression_level = Z_DEFAULT_COMPRESSION;
static int pack_compression_seen;
static uintmax_t alloc_count;
static uintmax_t marks_set_count;
static uintmax_t object_count_by_type[1 << TYPE_BITS];
static uintmax_t duplicate_count_by_type[1 << TYPE_BITS];
static uintmax_t delta_count_by_type[1 << TYPE_BITS];
static uintmax_t delta_count_attempts_by_type[1 << TYPE_BITS];
static unsigned long object_count;
static unsigned long branch_count;
static unsigned long branch_load_count;
static int failure;
static FILE *pack_edges;
static unsigned int show_stats = 1;
static int global_argc;
static char **global_argv;
static size_t mem_pool_alloc = 2*1024*1024 - sizeof(struct mem_pool);
static size_t total_allocd;
static struct mem_pool *mem_pool;
static unsigned int atom_table_sz = 4451;
static unsigned int atom_cnt;
static struct atom_str **atom_table;
static struct pack_idx_option pack_idx_opts;
static unsigned int pack_id;
static struct sha1file *pack_file;
static struct packed_git *pack_data;
static struct packed_git **all_packs;
static off_t pack_size;
static unsigned int object_entry_alloc = 5000;
static struct object_entry_pool *blocks;
static struct object_entry *object_table[1 << 16];
static struct mark_set *marks;
static const char *export_marks_file;
static const char *import_marks_file;
static int import_marks_file_from_stream;
static int import_marks_file_ignore_missing;
static int relative_marks_paths;
static struct last_object last_blob = ;
static unsigned int tree_entry_alloc = 1000;
static void *avail_tree_entry;
static unsigned int avail_tree_table_sz = 100;
static struct avail_tree_content **avail_tree_table;
static struct strbuf old_tree = STRBUF_INIT;
static struct strbuf new_tree = STRBUF_INIT;
static unsigned long max_active_branches = 5;
static unsigned long cur_active_branches;
static unsigned long branch_table_sz = 1039;
static struct branch **branch_table;
static struct branch *active_branches;
static struct tag *first_tag;
static struct tag *last_tag;
static whenspec_type whenspec = WHENSPEC_RAW;
static struct strbuf command_buf = STRBUF_INIT;
static int unread_command_buf;
static struct recent_command cmd_hist = ;
static struct recent_command *cmd_tail = &cmd_hist;
static struct recent_command *rc_free;
static unsigned int cmd_save = 100;
static uintmax_t next_mark;
static struct strbuf new_data = STRBUF_INIT;
static int seen_data_command;
static int require_explicit_termination;
static volatile sig_atomic_t checkpoint_requested;
static int cat_blob_fd = STDOUT_FILENO;
static void parse_argv(void);
static void parse_cat_blob(void);
static void parse_ls(struct branch *b);
static void write_branch_report(FILE *rpt, struct branch *b)
static void dump_marks_helper(FILE *, uintmax_t, struct mark_set *);
static void write_crash_report(const char *err)
static void end_packfile(void);
static void unkeep_all_packs(void);
static void dump_marks(void);
static NORETURN void die_nicely(const char *err, va_list params)
static void set_checkpoint_signal(void)
static void checkpoint_signal(int signo)
static void set_checkpoint_signal(void)
static void alloc_objects(unsigned int cnt)
static struct object_entry *new_object(unsigned char *sha1)
static struct object_entry *find_object(unsigned char *sha1)
static struct object_entry *insert_object(unsigned char *sha1)
static unsigned int hc_str(const char *s, size_t len)
static void *pool_alloc(size_t len)
static void *pool_calloc(size_t count, size_t size)
static char *pool_strdup(const char *s)
static void insert_mark(uintmax_t idnum, struct object_entry *oe)
static struct object_entry *find_mark(uintmax_t idnum)
static struct atom_str *to_atom(const char *s, unsigned short len)
static struct branch *lookup_branch(const char *name)
static struct branch *new_branch(const char *name)
static unsigned int hc_entries(unsigned int cnt)
static struct tree_content *new_tree_content(unsigned int cnt)
static void release_tree_entry(struct tree_entry *e);
static void release_tree_content(struct tree_content *t)
static void release_tree_content_recursive(struct tree_content *t)
static struct tree_content *grow_tree_content(
struct tree_content *t,
int amt)
static struct tree_entry *new_tree_entry(void)
static void release_tree_entry(struct tree_entry *e)
static struct tree_content *dup_tree_content(struct tree_content *s)
static void start_packfile(void)
static const char *create_index(void)
static char *keep_pack(const char *curr_index_name)
static void unkeep_all_packs(void)
static void end_packfile(void)
static void cycle_packfile(void)
static int store_object(
enum object_type type,
struct strbuf *dat,
struct last_object *last,
unsigned char *sha1out,
uintmax_t mark)
static void truncate_pack(struct sha1file_checkpoint *checkpoint)
static void stream_blob(uintmax_t len, unsigned char *sha1out, uintmax_t mark)
static void *gfi_unpack_entry(
struct object_entry *oe,
unsigned long *sizep)
static const char *get_mode(const char *str, uint16_t *modep)
static void load_tree(struct tree_entry *root)
static int tecmp0 (const void *_a, const void *_b)
static int tecmp1 (const void *_a, const void *_b)
static void mktree(struct tree_content *t, int v, struct strbuf *b)
static void store_tree(struct tree_entry *root)
static void tree_content_replace(
struct tree_entry *root,
const unsigned char *sha1,
const uint16_t mode,
struct tree_content *newtree)
static int tree_content_set(
struct tree_entry *root,
const char *p,
const unsigned char *sha1,
const uint16_t mode,
struct tree_content *subtree)
static int tree_content_remove(
struct tree_entry *root,
const char *p,
struct tree_entry *backup_leaf,
int allow_root)
static int tree_content_get(
struct tree_entry *root,
const char *p,
struct tree_entry *leaf,
int allow_root)
static int update_branch(struct branch *b)
static void dump_branches(void)
static void dump_tags(void)
static void dump_marks_helper(FILE *f,
uintmax_t base,
struct mark_set *m)
static void dump_marks(void)
static void read_marks(void)
static int read_next_command(void)
static void skip_optional_lf(void)
static void parse_mark(void)
static int parse_data(struct strbuf *sb, uintmax_t limit, uintmax_t *len_res)
static int validate_raw_date(const char *src, char *result, int maxlen)
static char *parse_ident(const char *buf)
static void parse_and_store_blob(
struct last_object *last,
unsigned char *sha1out,
uintmax_t mark)
static void parse_new_blob(void)
static void unload_one_branch(void)
static void load_branch(struct branch *b)
static unsigned char convert_num_notes_to_fanout(uintmax_t num_notes)
static void construct_path_with_fanout(const char *hex_sha1,
unsigned char fanout, char *path)
static uintmax_t do_change_note_fanout(
struct tree_entry *orig_root, struct tree_entry *root,
char *hex_sha1, unsigned int hex_sha1_len,
char *fullpath, unsigned int fullpath_len,
unsigned char fanout)
static uintmax_t change_note_fanout(struct tree_entry *root,
unsigned char fanout)
static uintmax_t parse_mark_ref(const char *p, char **endptr)
static uintmax_t parse_mark_ref_eol(const char *p)
static uintmax_t parse_mark_ref_space(const char **p)
static void file_change_m(struct branch *b)
static void file_change_d(struct branch *b)
static void file_change_cr(struct branch *b, int rename)
static void note_change_n(struct branch *b, unsigned char *old_fanout)
static void file_change_deleteall(struct branch *b)
static void parse_from_commit(struct branch *b, char *buf, unsigned long size)
static void parse_from_existing(struct branch *b)
static int parse_from(struct branch *b)
static struct hash_list *parse_merge(unsigned int *count)
static void parse_new_commit(void)
static void parse_new_tag(void)
static void parse_reset_branch(void)
static void cat_blob_write(const char *buf, unsigned long size)
static void cat_blob(struct object_entry *oe, unsigned char sha1[20])
static void parse_cat_blob(void)
static struct object_entry *dereference(struct object_entry *oe,
unsigned char sha1[20])
static struct object_entry *parse_treeish_dataref(const char **p)
static void print_ls(int mode, const unsigned char *sha1, const char *path)
static void parse_ls(struct branch *b)
static void checkpoint(void)
static void parse_checkpoint(void)
static void parse_progress(void)
static char* make_fast_import_path(const char *path)
static void option_import_marks(const char *marks,
int from_stream, int ignore_missing)
static void option_date_format(const char *fmt)
static unsigned long ulong_arg(const char *option, const char *arg)
static void option_depth(const char *depth)
static void option_active_branches(const char *branches)
static void option_export_marks(const char *marks)
static void option_cat_blob_fd(const char *fd)
static void option_export_pack_edges(const char *edges)
static int parse_one_option(const char *option)
static int parse_one_feature(const char *feature, int from_stream)
static void parse_feature(void)
static void parse_option(void)
static int git_pack_config(const char *k, const char *v, void *cb)
static const char fast_import_usage[] =
"git fast-import [--date-format=<f>] [--max-pack-size=<n>] [--big-file-threshold=<n>] [--depth=<n>] [--active-branches=<n>] [--export-marks=<marks.file>]";
static void parse_argv(void)
int main(int argc, char **argv)
