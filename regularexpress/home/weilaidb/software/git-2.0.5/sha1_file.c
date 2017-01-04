#if defined(__linux__) && (defined(__i386__) || defined(__PPC__))
#define O_NOATIME 01000000
#define O_NOATIME 0
#define SZ_FMT PRIuMAX
static inline uintmax_t sz_fmt(size_t s)
const unsigned char null_sha1[20];
static const char *no_log_pack_access = "no_log_pack_access";
static const char *log_pack_access;
static struct cached_object  *cached_objects;
static int cached_object_nr, cached_object_alloc;
static struct cached_object empty_tree = ;
static struct packed_git *last_found_pack;
static struct cached_object *find_cached_object(const unsigned char *sha1)
int mkdir_in_gitdir(const char *path)
enum scld_error safe_create_leading_directories(char *path)
enum scld_error safe_create_leading_directories_const(const char *path)
static void fill_sha1_path(char *pathbuf, const unsigned char *sha1)
const char *sha1_file_name(const unsigned char *sha1)
static char *sha1_get_pack_name(const unsigned char *sha1,
char **name, char **base, const char *which)
char *sha1_pack_name(const unsigned char *sha1)
char *sha1_pack_index_name(const unsigned char *sha1)
struct alternate_object_database *alt_odb_list;
static struct alternate_object_database **alt_odb_tail;
static int link_alt_odb_entry(const char *entry, const char *relative_base, int depth)
static void link_alt_odb_entries(const char *alt, int len, int sep,
const char *relative_base, int depth)
void read_info_alternates(const char * relative_base, int depth)
void add_to_alternates_file(const char *reference)
void foreach_alt_odb(alt_odb_fn fn, void *cb)
void prepare_alt_odb(void)
static int has_loose_object_local(const unsigned char *sha1)
int has_loose_object_nonlocal(const unsigned char *sha1)
static int has_loose_object(const unsigned char *sha1)
static unsigned int pack_used_ctr;
static unsigned int pack_mmap_calls;
static unsigned int peak_pack_open_windows;
static unsigned int pack_open_windows;
static unsigned int pack_open_fds;
static unsigned int pack_max_fds;
static size_t peak_pack_mapped;
static size_t pack_mapped;
struct packed_git *packed_git;
void pack_report(void)
static int check_packed_git_idx(const char *path, struct packed_git *p)
int open_pack_index(struct packed_git *p)
static void scan_windows(struct packed_git *p,
struct packed_git **lru_p,
struct pack_window **lru_w,
struct pack_window **lru_l)
static int unuse_one_window(struct packed_git *current)
void release_pack_memory(size_t need)
void *xmmap(void *start, size_t length,
int prot, int flags, int fd, off_t offset)
void close_pack_windows(struct packed_git *p)
static void find_lru_pack(struct packed_git *p, struct packed_git **lru_p, struct pack_window **mru_w, int *accept_windows_inuse)
static int close_one_pack(void)
void unuse_pack(struct pack_window **w_cursor)
void close_pack_index(struct packed_git *p)
void free_pack_by_name(const char *pack_name)
static unsigned int get_max_fd_limit(void)
static int open_packed_git_1(struct packed_git *p)
static int open_packed_git(struct packed_git *p)
static int in_window(struct pack_window *win, off_t offset)
unsigned char *use_pack(struct packed_git *p,
struct pack_window **w_cursor,
off_t offset,
unsigned long *left)
static struct packed_git *alloc_packed_git(int extra)
static void try_to_free_pack_memory(size_t size)
struct packed_git *add_packed_git(const char *path, int path_len, int local)
struct packed_git *parse_pack_index(unsigned char *sha1, const char *idx_path)
void install_packed_git(struct packed_git *pack)
void (*report_garbage)(const char *desc, const char *path);
static void report_helper(const struct string_list *list,
int seen_bits, int first, int last)
static void report_pack_garbage(struct string_list *list)
static void prepare_packed_git_one(char *objdir, int local)
static int sort_pack(const void *a_, const void *b_)
static void rearrange_packed_git(void)
static int prepare_packed_git_run_once = 0;
void prepare_packed_git(void)
void reprepare_packed_git(void)
static void mark_bad_packed_object(struct packed_git *p,
const unsigned char *sha1)
static const struct packed_git *has_packed_and_bad(const unsigned char *sha1)
int check_sha1_signature(const unsigned char *sha1, void *map,
unsigned long size, const char *type)
int git_open_noatime(const char *name)
static int stat_sha1_file(const unsigned char *sha1, struct stat *st)
static int open_sha1_file(const unsigned char *sha1)
void *map_sha1_file(const unsigned char *sha1, unsigned long *size)
unsigned long unpack_object_header_buffer(const unsigned char *buf,
unsigned long len, enum object_type *type, unsigned long *sizep)
int unpack_sha1_header(git_zstream *stream, unsigned char *map, unsigned long mapsize, void *buffer, unsigned long bufsiz)
static void *unpack_sha1_rest(git_zstream *stream, void *buffer, unsigned long size, const unsigned char *sha1)
int parse_sha1_header(const char *hdr, unsigned long *sizep)
static void *unpack_sha1_file(void *map, unsigned long mapsize, enum object_type *type, unsigned long *size, const unsigned char *sha1)
unsigned long get_size_from_delta(struct packed_git *p,
struct pack_window **w_curs,
off_t curpos)
static off_t get_delta_base(struct packed_git *p,
struct pack_window **w_curs,
off_t *curpos,
enum object_type type,
off_t delta_obj_offset)
static const unsigned char *get_delta_base_sha1(struct packed_git *p,
struct pack_window **w_curs,
off_t curpos,
enum object_type type,
off_t delta_obj_offset)
int unpack_object_header(struct packed_git *p,
struct pack_window **w_curs,
off_t *curpos,
unsigned long *sizep)
static int retry_bad_packed_offset(struct packed_git *p, off_t obj_offset)
#define POI_STACK_PREALLOC 64
static enum object_type packed_to_object_type(struct packed_git *p,
off_t obj_offset,
enum object_type type,
struct pack_window **w_curs,
off_t curpos)
static int packed_object_info(struct packed_git *p, off_t obj_offset,
struct object_info *oi)
static void *unpack_compressed_entry(struct packed_git *p,
struct pack_window **w_curs,
off_t curpos,
unsigned long size)
#define MAX_DELTA_CACHE (256)
static size_t delta_base_cached;
static struct delta_base_cache_lru_list  delta_base_cache_lru = ;
static struct delta_base_cache_entry  delta_base_cache[MAX_DELTA_CACHE];
static unsigned long pack_entry_hash(struct packed_git *p, off_t base_offset)
static struct delta_base_cache_entry *
get_delta_base_cache_entry(struct packed_git *p, off_t base_offset)
static int eq_delta_base_cache_entry(struct delta_base_cache_entry *ent,
struct packed_git *p, off_t base_offset)
static int in_delta_base_cache(struct packed_git *p, off_t base_offset)
static void clear_delta_base_cache_entry(struct delta_base_cache_entry *ent)
static void *cache_or_unpack_entry(struct packed_git *p, off_t base_offset,
unsigned long *base_size, enum object_type *type, int keep_cache)
static inline void release_delta_base_cache(struct delta_base_cache_entry *ent)
void clear_delta_base_cache(void)
static void add_delta_base_cache(struct packed_git *p, off_t base_offset,
void *base, unsigned long base_size, enum object_type type)
static void *read_object(const unsigned char *sha1, enum object_type *type,
unsigned long *size);
static void write_pack_access_log(struct packed_git *p, off_t obj_offset)
int do_check_packed_object_crc;
#define UNPACK_ENTRY_STACK_PREALLOC 64
struct unpack_entry_stack_ent ;
void *unpack_entry(struct packed_git *p, off_t obj_offset,
enum object_type *final_type, unsigned long *final_size)
const unsigned char *nth_packed_object_sha1(struct packed_git *p,
uint32_t n)
off_t nth_packed_object_offset(const struct packed_git *p, uint32_t n)
off_t find_pack_entry_one(const unsigned char *sha1,
struct packed_git *p)
int is_pack_valid(struct packed_git *p)
static int fill_pack_entry(const unsigned char *sha1,
struct pack_entry *e,
struct packed_git *p)
static int find_pack_entry(const unsigned char *sha1, struct pack_entry *e)
struct packed_git *find_sha1_pack(const unsigned char *sha1,
struct packed_git *packs)
static int sha1_loose_object_info(const unsigned char *sha1,
struct object_info *oi)
int sha1_object_info_extended(const unsigned char *sha1, struct object_info *oi, unsigned flags)
int sha1_object_info(const unsigned char *sha1, unsigned long *sizep)
static void *read_packed_sha1(const unsigned char *sha1,
enum object_type *type, unsigned long *size)
int pretend_sha1_file(void *buf, unsigned long len, enum object_type type,
unsigned char *sha1)
static void *read_object(const unsigned char *sha1, enum object_type *type,
unsigned long *size)
void *read_sha1_file_extended(const unsigned char *sha1,
enum object_type *type,
unsigned long *size,
unsigned flag)
void *read_object_with_reference(const unsigned char *sha1,
const char *required_type_name,
unsigned long *size,
unsigned char *actual_sha1_return)
static void write_sha1_file_prepare(const void *buf, unsigned long len,
const char *type, unsigned char *sha1,
char *hdr, int *hdrlen)
int move_temp_to_file(const char *tmpfile, const char *filename)
static int write_buffer(int fd, const void *buf, size_t len)
int hash_sha1_file(const void *buf, unsigned long len, const char *type,
unsigned char *sha1)
static void close_sha1_file(int fd)
static inline int directory_size(const char *filename)
static int create_tmpfile(char *buffer, size_t bufsiz, const char *filename)
static int write_loose_object(const unsigned char *sha1, char *hdr, int hdrlen,
const void *buf, unsigned long len, time_t mtime)
int write_sha1_file(const void *buf, unsigned long len, const char *type, unsigned char *returnsha1)
int force_object_loose(const unsigned char *sha1, time_t mtime)
int has_pack_index(const unsigned char *sha1)
int has_sha1_pack(const unsigned char *sha1)
int has_sha1_file(const unsigned char *sha1)
static void check_tree(const void *buf, size_t size)
static void check_commit(const void *buf, size_t size)
static void check_tag(const void *buf, size_t size)
static int index_mem(unsigned char *sha1, void *buf, size_t size,
enum object_type type,
const char *path, unsigned flags)
static int index_pipe(unsigned char *sha1, int fd, enum object_type type,
const char *path, unsigned flags)
#define SMALL_FILE_SIZE (32*1024)
static int index_core(unsigned char *sha1, int fd, size_t size,
enum object_type type, const char *path,
unsigned flags)
static int index_stream(unsigned char *sha1, int fd, size_t size,
enum object_type type, const char *path,
unsigned flags)
int index_fd(unsigned char *sha1, int fd, struct stat *st,
enum object_type type, const char *path, unsigned flags)
int index_path(unsigned char *sha1, const char *path, struct stat *st, unsigned flags)
int read_pack_header(int fd, struct pack_header *header)
void assert_sha1_type(const unsigned char *sha1, enum object_type expect)
