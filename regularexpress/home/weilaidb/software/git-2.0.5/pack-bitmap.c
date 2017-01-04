struct stored_bitmap ;
static struct bitmap_index  bitmap_git;
static struct ewah_bitmap *lookup_stored_bitmap(struct stored_bitmap *st)
static struct ewah_bitmap *read_bitmap_1(struct bitmap_index *index)
static int load_bitmap_header(struct bitmap_index *index)
static struct stored_bitmap *store_bitmap(struct bitmap_index *index,
struct ewah_bitmap *root,
const unsigned char *sha1,
struct stored_bitmap *xor_with,
int flags)
static int load_bitmap_entries_v1(struct bitmap_index *index)
static int open_pack_bitmap_1(struct packed_git *packfile)
static int load_pack_bitmap(void)
char *pack_bitmap_filename(struct packed_git *p)
static int open_pack_bitmap(void)
int prepare_bitmap_git(void)
struct include_data ;
static inline int bitmap_position_extended(const unsigned char *sha1)
static inline int bitmap_position_packfile(const unsigned char *sha1)
static int bitmap_position(const unsigned char *sha1)
static int ext_index_add_object(struct object *object, const char *name)
static void show_object(struct object *object, const struct name_path *path,
const char *last, void *data)
static void show_commit(struct commit *commit, void *data)
static int add_to_include_set(struct include_data *data,
const unsigned char *sha1,
int bitmap_pos)
static int should_include(struct commit *commit, void *_data)
static struct bitmap *find_objects(struct rev_info *revs,
struct object_list *roots,
struct bitmap *seen)
static void show_extended_objects(struct bitmap *objects,
show_reachable_fn show_reach)
static void show_objects_for_type(
struct bitmap *objects,
struct ewah_bitmap *type_filter,
enum object_type object_type,
show_reachable_fn show_reach)
static int in_bitmapped_pack(struct object_list *roots)
int prepare_bitmap_walk(struct rev_info *revs)
int reuse_partial_packfile_from_bitmap(struct packed_git **packfile,
uint32_t *entries,
off_t *up_to)
void traverse_bitmap_commit_list(show_reachable_fn show_reachable)
static uint32_t count_object_type(struct bitmap *objects,
enum object_type type)
void count_bitmap_commit_list(uint32_t *commits, uint32_t *trees,
uint32_t *blobs, uint32_t *tags)
struct bitmap_test_data ;
static void test_show_object(struct object *object,
const struct name_path *path,
const char *last, void *data)
static void test_show_commit(struct commit *commit, void *data)
void test_bitmap_walk(struct rev_info *revs)
static int rebuild_bitmap(uint32_t *reposition,
struct ewah_bitmap *source,
struct bitmap *dest)
int rebuild_existing_bitmaps(struct packing_data *mapping,
khash_sha1 *reused_bitmaps,
int show_progress)
