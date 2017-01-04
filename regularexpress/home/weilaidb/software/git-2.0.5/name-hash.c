#define NO_THE_INDEX_COMPATIBILITY_MACROS
struct dir_entry ;
static int dir_entry_cmp(const struct dir_entry *e1,
const struct dir_entry *e2, const char *name)
static struct dir_entry *find_dir_entry(struct index_state *istate,
const char *name, unsigned int namelen)
static struct dir_entry *hash_dir_entry(struct index_state *istate,
struct cache_entry *ce, int namelen)
static void add_dir_entry(struct index_state *istate, struct cache_entry *ce)
static void remove_dir_entry(struct index_state *istate, struct cache_entry *ce)
static void hash_index_entry(struct index_state *istate, struct cache_entry *ce)
static int cache_entry_cmp(const struct cache_entry *ce1,
const struct cache_entry *ce2, const void *remove)
static void lazy_init_name_hash(struct index_state *istate)
void add_name_hash(struct index_state *istate, struct cache_entry *ce)
void remove_name_hash(struct index_state *istate, struct cache_entry *ce)
static int slow_same_name(const char *name1, int len1, const char *name2, int len2)
static int same_name(const struct cache_entry *ce, const char *name, int namelen, int icase)
struct cache_entry *index_dir_exists(struct index_state *istate, const char *name, int namelen)
struct cache_entry *index_file_exists(struct index_state *istate, const char *name, int namelen, int icase)
void free_name_hash(struct index_state *istate)
