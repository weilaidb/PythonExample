static const char *pack_usage[] = ;
static struct packing_data to_pack;
static struct pack_idx_entry **written_list;
static uint32_t nr_result, nr_written;
static int non_empty;
static int reuse_delta = 1, reuse_object = 1;
static int keep_unreachable, unpack_unreachable, include_tag;
static unsigned long unpack_unreachable_expiration;
static int local;
static int incremental;
static int ignore_packed_keep;
static int allow_ofs_delta;
static struct pack_idx_option pack_idx_opts;
static const char *base_name;
static int progress = 1;
static int window = 10;
static unsigned long pack_size_limit;
static int depth = 50;
static int delta_search_threads;
static int pack_to_stdout;
static int num_preferred_base;
static struct progress *progress_state;
static int pack_compression_level = Z_DEFAULT_COMPRESSION;
static int pack_compression_seen;
static struct packed_git *reuse_packfile;
static uint32_t reuse_packfile_objects;
static off_t reuse_packfile_offset;
static int use_bitmap_index = 1;
static int write_bitmap_index;
static uint16_t write_bitmap_options;
static unsigned long delta_cache_size = 0;
static unsigned long max_delta_cache_size = 256 * 1024 * 1024;
static unsigned long cache_max_small_delta_size = 1000;
static unsigned long window_memory_limit = 0;
static uint32_t written, written_delta;
static uint32_t reused, reused_delta;
static struct commit **indexed_commits;
static unsigned int indexed_commits_nr;
static unsigned int indexed_commits_alloc;
static void index_commit_for_bitmap(struct commit *commit)
static void *get_delta(struct object_entry *entry)
static unsigned long do_compress(void **pptr, unsigned long size)
static unsigned long write_large_blob_data(struct git_istream *st, struct sha1file *f,
const unsigned char *sha1)
static int check_pack_inflate(struct packed_git *p,
struct pack_window **w_curs,
off_t offset,
off_t len,
unsigned long expect)
static void copy_pack_data(struct sha1file *f,
struct packed_git *p,
struct pack_window **w_curs,
off_t offset,
off_t len)
static unsigned long write_no_reuse_object(struct sha1file *f, struct object_entry *entry,
unsigned long limit, int usable_delta)
static unsigned long write_reuse_object(struct sha1file *f, struct object_entry *entry,
unsigned long limit, int usable_delta)
static unsigned long write_object(struct sha1file *f,
struct object_entry *entry,
off_t write_offset)
enum write_one_status ;
static enum write_one_status write_one(struct sha1file *f,
struct object_entry *e,
off_t *offset)
static int mark_tagged(const char *path, const unsigned char *sha1, int flag,
void *cb_data)
static inline void add_to_write_order(struct object_entry **wo,
unsigned int *endp,
struct object_entry *e)
static void add_descendants_to_write_order(struct object_entry **wo,
unsigned int *endp,
struct object_entry *e)
static void add_family_to_write_order(struct object_entry **wo,
unsigned int *endp,
struct object_entry *e)
static struct object_entry **compute_write_order(void)
static off_t write_reused_pack(struct sha1file *f)
static void write_pack_file(void)
static void setup_delta_attr_check(struct git_attr_check *check)
static int no_try_delta(const char *path)
static int have_duplicate_entry(const unsigned char *sha1,
int exclude,
uint32_t *index_pos)
static int want_object_in_pack(const unsigned char *sha1,
int exclude,
struct packed_git **found_pack,
off_t *found_offset)
static void create_object_entry(const unsigned char *sha1,
enum object_type type,
uint32_t hash,
int exclude,
int no_try_delta,
uint32_t index_pos,
struct packed_git *found_pack,
off_t found_offset)
static const char no_closure_warning[] = N_(
"disabling bitmap writing, as some objects are not being packed"
);
static int add_object_entry(const unsigned char *sha1, enum object_type type,
const char *name, int exclude)
static int add_object_entry_from_bitmap(const unsigned char *sha1,
enum object_type type,
int flags, uint32_t name_hash,
struct packed_git *pack, off_t offset)
struct pbase_tree_cache ;
static struct pbase_tree_cache *(pbase_tree_cache[256]);
static int pbase_tree_cache_ix(const unsigned char *sha1)
static int pbase_tree_cache_ix_incr(int ix)
static struct pbase_tree  *pbase_tree;
static struct pbase_tree_cache *pbase_tree_get(const unsigned char *sha1)
static void pbase_tree_put(struct pbase_tree_cache *cache)
static int name_cmp_len(const char *name)
static void add_pbase_object(struct tree_desc *tree,
const char *name,
int cmplen,
const char *fullname)
static unsigned *done_pbase_paths;
static int done_pbase_paths_num;
static int done_pbase_paths_alloc;
static int done_pbase_path_pos(unsigned hash)
static int check_pbase_path(unsigned hash)
static void add_preferred_base_object(const char *name)
static void add_preferred_base(unsigned char *sha1)
static void cleanup_preferred_base(void)
static void check_object(struct object_entry *entry)
static int pack_offset_sort(const void *_a, const void *_b)
static void get_object_details(void)
static int type_size_sort(const void *_a, const void *_b)
struct unpacked ;
static int delta_cacheable(unsigned long src_size, unsigned long trg_size,
unsigned long delta_size)
static pthread_mutex_t read_mutex;
#define read_lock()		pthread_mutex_lock(&read_mutex)
#define read_unlock()		pthread_mutex_unlock(&read_mutex)
static pthread_mutex_t cache_mutex;
#define cache_lock()		pthread_mutex_lock(&cache_mutex)
#define cache_unlock()		pthread_mutex_unlock(&cache_mutex)
static pthread_mutex_t progress_mutex;
#define progress_lock()		pthread_mutex_lock(&progress_mutex)
#define progress_unlock()	pthread_mutex_unlock(&progress_mutex)
#define read_lock()		(void)0
#define read_unlock()		(void)0
#define cache_lock()		(void)0
#define cache_unlock()		(void)0
#define progress_lock()		(void)0
#define progress_unlock()	(void)0
static int try_delta(struct unpacked *trg, struct unpacked *src,
unsigned max_depth, unsigned long *mem_usage)
static unsigned int check_delta_limit(struct object_entry *me, unsigned int n)
static unsigned long free_unpacked(struct unpacked *n)
static void find_deltas(struct object_entry **list, unsigned *list_size,
int window, int depth, unsigned *processed)
static void try_to_free_from_threads(size_t size)
static try_to_free_t old_try_to_free_routine;
struct thread_params ;
static pthread_cond_t progress_cond;
static void init_threaded_search(void)
static void cleanup_threaded_search(void)
static void *threaded_find_deltas(void *arg)
static void ll_find_deltas(struct object_entry **list, unsigned list_size,
int window, int depth, unsigned *processed)
#define ll_find_deltas(l, s, w, d, p)	find_deltas(l, &s, w, d, p)
static int add_ref_tag(const char *path, const unsigned char *sha1, int flag, void *cb_data)
static void prepare_pack(int window, int depth)
static int git_pack_config(const char *k, const char *v, void *cb)
static void read_object_list_from_stdin(void)
#define OBJECT_ADDED (1u<<20)
static void show_commit(struct commit *commit, void *data)
static void show_object(struct object *obj,
const struct name_path *path, const char *last,
void *data)
static void show_edge(struct commit *commit)
struct in_pack_object ;
struct in_pack ;
static void mark_in_pack_object(struct object *object, struct packed_git *p, struct in_pack *in_pack)
static int ofscmp(const void *a_, const void *b_)
static void add_objects_in_unpacked_packs(struct rev_info *revs)
static int has_sha1_pack_kept_or_nonlocal(const unsigned char *sha1)
static void loosen_unused_packed_objects(struct rev_info *revs)
static int pack_options_allow_reuse(void)
static int get_object_list_from_bitmap(struct rev_info *revs)
static void get_object_list(int ac, const char **av)
static int option_parse_index_version(const struct option *opt,
const char *arg, int unset)
static int option_parse_unpack_unreachable(const struct option *opt,
const char *arg, int unset)
static int option_parse_ulong(const struct option *opt,
const char *arg, int unset)
#define OPT_ULONG(s, l, v, h) \
int cmd_pack_objects(int argc, const char **argv, const char *prefix)
