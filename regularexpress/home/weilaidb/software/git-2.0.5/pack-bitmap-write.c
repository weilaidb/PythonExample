struct bitmapped_commit ;
struct bitmap_writer ;
static struct bitmap_writer writer;
void bitmap_writer_show_progress(int show)
void bitmap_writer_build_type_index(struct pack_idx_entry **index,
uint32_t index_nr)
static struct object **seen_objects;
static unsigned int seen_objects_nr, seen_objects_alloc;
static inline void push_bitmapped_commit(struct commit *commit, struct ewah_bitmap *reused)
static inline void mark_as_seen(struct object *object)
static inline void reset_all_seen(void)
static uint32_t find_object_pos(const unsigned char *sha1)
static void show_object(struct object *object, const struct name_path *path,
const char *last, void *data)
static void show_commit(struct commit *commit, void *data)
static int
add_to_include_set(struct bitmap *base, struct commit *commit)
static int
should_include(struct commit *commit, void *_data)
static void compute_xor_offsets(void)
void bitmap_writer_build(struct packing_data *to_pack)
static inline unsigned int next_commit_index(unsigned int idx)
static int date_compare(const void *_a, const void *_b)
void bitmap_writer_reuse_bitmaps(struct packing_data *to_pack)
static struct ewah_bitmap *find_reused_bitmap(const unsigned char *sha1)
void bitmap_writer_select_commits(struct commit **indexed_commits,
unsigned int indexed_commits_nr,
int max_bitmaps)
static int sha1write_ewah_helper(void *f, const void *buf, size_t len)
static inline void dump_bitmap(struct sha1file *f, struct ewah_bitmap *bitmap)
static const unsigned char *sha1_access(size_t pos, void *table)
static void write_selected_commits_v1(struct sha1file *f,
struct pack_idx_entry **index,
uint32_t index_nr)
static void write_hash_cache(struct sha1file *f,
struct pack_idx_entry **index,
uint32_t index_nr)
void bitmap_writer_set_checksum(unsigned char *sha1)
void bitmap_writer_finish(struct pack_idx_entry **index,
uint32_t index_nr,
const char *filename,
uint16_t options)
