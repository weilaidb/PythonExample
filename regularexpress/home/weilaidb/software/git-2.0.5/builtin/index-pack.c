static const char index_pack_usage[] =
"git index-pack [-v] [-o <index-file>] [--keep | --keep=<msg>] [--verify] [--strict] (<pack-file> | --stdin [--fix-thin] [<pack-file>])";
struct object_entry ;
union delta_base ;
struct base_data ;
struct thread_local ;
#define UNION_BASE_SZ	20
#define FLAG_LINK (1u<<20)
#define FLAG_CHECKED (1u<<21)
struct delta_entry ;
static struct object_entry *objects;
static struct delta_entry *deltas;
static struct thread_local nothread_data;
static int nr_objects;
static int nr_deltas;
static int nr_resolved_deltas;
static int nr_threads;
static int from_stdin;
static int strict;
static int do_fsck_object;
static int verbose;
static int show_stat;
static int check_self_contained_and_connected;
static struct progress *progress;
static unsigned char input_buffer[4096];
static unsigned int input_offset, input_len;
static off_t consumed_bytes;
static unsigned deepest_delta;
static git_SHA_CTX input_ctx;
static uint32_t input_crc32;
static int input_fd, output_fd;
static const char *curr_pack;
static struct thread_local *thread_data;
static int nr_dispatched;
static int threads_active;
static pthread_mutex_t read_mutex;
#define read_lock()		lock_mutex(&read_mutex)
#define read_unlock()		unlock_mutex(&read_mutex)
static pthread_mutex_t counter_mutex;
#define counter_lock()		lock_mutex(&counter_mutex)
#define counter_unlock()	unlock_mutex(&counter_mutex)
static pthread_mutex_t work_mutex;
#define work_lock()		lock_mutex(&work_mutex)
#define work_unlock()		unlock_mutex(&work_mutex)
static pthread_mutex_t deepest_delta_mutex;
#define deepest_delta_lock()	lock_mutex(&deepest_delta_mutex)
#define deepest_delta_unlock()	unlock_mutex(&deepest_delta_mutex)
static pthread_key_t key;
static inline void lock_mutex(pthread_mutex_t *mutex)
static inline void unlock_mutex(pthread_mutex_t *mutex)
static void init_thread(void)
static void cleanup_thread(void)
#define read_lock()
#define read_unlock()
#define counter_lock()
#define counter_unlock()
#define work_lock()
#define work_unlock()
#define deepest_delta_lock()
#define deepest_delta_unlock()
static int mark_link(struct object *obj, int type, void *data)
static unsigned check_object(struct object *obj)
static unsigned check_objects(void)
static void flush(void)
static void *fill(int min)
static void use(int bytes)
static const char *open_pack_file(const char *pack_name)
static void parse_pack_header(void)
static NORETURN void bad_object(unsigned long offset, const char *format,
...) __attribute__((format (printf, 2, 3)));
static NORETURN void bad_object(unsigned long offset, const char *format, ...)
static inline struct thread_local *get_thread_data(void)
static void set_thread_data(struct thread_local *data)
static struct base_data *alloc_base_data(void)
static void free_base_data(struct base_data *c)
static void prune_base_data(struct base_data *retain)
static void link_base_data(struct base_data *base, struct base_data *c)
static void unlink_base_data(struct base_data *c)
static int is_delta_type(enum object_type type)
static void *unpack_entry_data(unsigned long offset, unsigned long size,
enum object_type type, unsigned char *sha1)
static void *unpack_raw_entry(struct object_entry *obj,
union delta_base *delta_base,
unsigned char *sha1)
static void *unpack_data(struct object_entry *obj,
int (*consume)(const unsigned char *, unsigned long, void *),
void *cb_data)
static void *get_data_from_pack(struct object_entry *obj)
static int compare_delta_bases(const union delta_base *base1,
const union delta_base *base2,
enum object_type type1,
enum object_type type2)
static int find_delta(const union delta_base *base, enum object_type type)
static void find_delta_children(const union delta_base *base,
int *first_index, int *last_index,
enum object_type type)
struct compare_data ;
static int compare_objects(const unsigned char *buf, unsigned long size,
void *cb_data)
static int check_collison(struct object_entry *entry)
static void sha1_object(const void *data, struct object_entry *obj_entry,
unsigned long size, enum object_type type,
const unsigned char *sha1)
static void *get_base_data(struct base_data *c)
static void resolve_delta(struct object_entry *delta_obj,
struct base_data *base, struct base_data *result)
static struct base_data *find_unresolved_deltas_1(struct base_data *base,
struct base_data *prev_base)
static void find_unresolved_deltas(struct base_data *base)
static int compare_delta_entry(const void *a, const void *b)
static void resolve_base(struct object_entry *obj)
static void *threaded_second_pass(void *data)
static void parse_pack_objects(unsigned char *sha1)
static void resolve_deltas(void)
static void fix_unresolved_deltas(struct sha1file *f, int nr_unresolved);
static void conclude_pack(int fix_thin_pack, const char *curr_pack, unsigned char *pack_sha1)
static int write_compressed(struct sha1file *f, void *in, unsigned int size)
static struct object_entry *append_obj_to_pack(struct sha1file *f,
const unsigned char *sha1, void *buf,
unsigned long size, enum object_type type)
static int delta_pos_compare(const void *_a, const void *_b)
static void fix_unresolved_deltas(struct sha1file *f, int nr_unresolved)
static void final(const char *final_pack_name, const char *curr_pack_name,
const char *final_index_name, const char *curr_index_name,
const char *keep_name, const char *keep_msg,
unsigned char *sha1)
static int git_index_pack_config(const char *k, const char *v, void *cb)
static int cmp_uint32(const void *a_, const void *b_)
static void read_v2_anomalous_offsets(struct packed_git *p,
struct pack_idx_option *opts)
static void read_idx_option(struct pack_idx_option *opts, const char *pack_name)
static void show_pack_info(int stat_only)
int cmd_index_pack(int argc, const char **argv, const char *prefix)
