#define NO_THE_INDEX_COMPATIBILITY_MACROS
static struct cache_entry *refresh_cache_entry(struct cache_entry *ce,
unsigned int options);
#define CE_NAMEMASK  (0x0fff)
#define CACHE_EXT(s) ( (s[0]<<24)|(s[1]<<16)|(s[2]<<8)|(s[3]) )
#define CACHE_EXT_TREE 0x54524545
#define CACHE_EXT_RESOLVE_UNDO 0x52455543
struct index_state the_index;
static void set_index_entry(struct index_state *istate, int nr, struct cache_entry *ce)
static void replace_index_entry(struct index_state *istate, int nr, struct cache_entry *ce)
void rename_index_entry_at(struct index_state *istate, int nr, const char *new_name)
void fill_stat_data(struct stat_data *sd, struct stat *st)
int match_stat_data(const struct stat_data *sd, struct stat *st)
void fill_stat_cache_info(struct cache_entry *ce, struct stat *st)
static int ce_compare_data(const struct cache_entry *ce, struct stat *st)
static int ce_compare_link(const struct cache_entry *ce, size_t expected_size)
static int ce_compare_gitlink(const struct cache_entry *ce)
static int ce_modified_check_fs(const struct cache_entry *ce, struct stat *st)
static int ce_match_stat_basic(const struct cache_entry *ce, struct stat *st)
static int is_racy_timestamp(const struct index_state *istate,
const struct cache_entry *ce)
int ie_match_stat(const struct index_state *istate,
const struct cache_entry *ce, struct stat *st,
unsigned int options)
int ie_modified(const struct index_state *istate,
const struct cache_entry *ce,
struct stat *st, unsigned int options)
int base_name_compare(const char *name1, int len1, int mode1,
const char *name2, int len2, int mode2)
int df_name_compare(const char *name1, int len1, int mode1,
const char *name2, int len2, int mode2)
int cache_name_stage_compare(const char *name1, int len1, int stage1, const char *name2, int len2, int stage2)
int cache_name_compare(const char *name1, int len1, const char *name2, int len2)
static int index_name_stage_pos(const struct index_state *istate, const char *name, int namelen, int stage)
int index_name_pos(const struct index_state *istate, const char *name, int namelen)
int remove_index_entry_at(struct index_state *istate, int pos)
void remove_marked_cache_entries(struct index_state *istate)
int remove_file_from_index(struct index_state *istate, const char *path)
static int compare_name(struct cache_entry *ce, const char *path, int namelen)
static int index_name_pos_also_unmerged(struct index_state *istate,
const char *path, int namelen)
static int different_name(struct cache_entry *ce, struct cache_entry *alias)
static struct cache_entry *create_alias_ce(struct cache_entry *ce, struct cache_entry *alias)
void set_object_name_for_intent_to_add_entry(struct cache_entry *ce)
int add_to_index(struct index_state *istate, const char *path, struct stat *st, int flags)
int add_file_to_index(struct index_state *istate, const char *path, int flags)
struct cache_entry *make_cache_entry(unsigned int mode,
const unsigned char *sha1, const char *path, int stage,
unsigned int refresh_options)
int ce_same_name(const struct cache_entry *a, const struct cache_entry *b)
static int verify_dotfile(const char *rest)
int verify_path(const char *path)
static int has_file_name(struct index_state *istate,
const struct cache_entry *ce, int pos, int ok_to_replace)
static int has_dir_name(struct index_state *istate,
const struct cache_entry *ce, int pos, int ok_to_replace)
static int check_file_directory_conflict(struct index_state *istate,
const struct cache_entry *ce,
int pos, int ok_to_replace)
static int add_index_entry_with_check(struct index_state *istate, struct cache_entry *ce, int option)
int add_index_entry(struct index_state *istate, struct cache_entry *ce, int option)
static struct cache_entry *refresh_cache_ent(struct index_state *istate,
struct cache_entry *ce,
unsigned int options, int *err,
int *changed_ret)
static void show_file(const char * fmt, const char * name, int in_porcelain,
int * first, const char *header_msg)
int refresh_index(struct index_state *istate, unsigned int flags,
const struct pathspec *pathspec,
char *seen, const char *header_msg)
static struct cache_entry *refresh_cache_entry(struct cache_entry *ce,
unsigned int options)
#define INDEX_FORMAT_DEFAULT 3
static int index_format_config(const char *var, const char *value, void *cb)
static unsigned int get_index_format_default(void)
struct ondisk_cache_entry ;
struct ondisk_cache_entry_extended ;
#define align_flex_name(STRUCT,len) ((offsetof(struct STRUCT,name) + (len) + 8) & ~7)
#define ondisk_cache_entry_size(len) align_flex_name(ondisk_cache_entry,len)
#define ondisk_cache_entry_extended_size(len) align_flex_name(ondisk_cache_entry_extended,len)
#define ondisk_ce_size(ce) (((ce)->ce_flags & CE_EXTENDED) ? \
ondisk_cache_entry_extended_size(ce_namelen(ce)) : \
ondisk_cache_entry_size(ce_namelen(ce)))
static int verify_hdr(struct cache_header *hdr, unsigned long size)
static int read_index_extension(struct index_state *istate,
const char *ext, void *data, unsigned long sz)
int read_index(struct index_state *istate)
static struct cache_entry *cache_entry_from_ondisk(struct ondisk_cache_entry *ondisk,
unsigned int flags,
const char *name,
size_t len)
static unsigned long expand_name_field(struct strbuf *name, const char *cp_)
static struct cache_entry *create_from_disk(struct ondisk_cache_entry *ondisk,
unsigned long *ent_size,
struct strbuf *previous_name)
int read_index_from(struct index_state *istate, const char *path)
int is_index_unborn(struct index_state *istate)
int discard_index(struct index_state *istate)
int unmerged_index(const struct index_state *istate)
#define WRITE_BUFFER_SIZE 8192
static unsigned char write_buffer[WRITE_BUFFER_SIZE];
static unsigned long write_buffer_len;
static int ce_write_flush(git_SHA_CTX *context, int fd)
static int ce_write(git_SHA_CTX *context, int fd, void *data, unsigned int len)
static int write_index_ext_header(git_SHA_CTX *context, int fd,
unsigned int ext, unsigned int sz)
static int ce_flush(git_SHA_CTX *context, int fd)
static void ce_smudge_racily_clean_entry(struct cache_entry *ce)
static char *copy_cache_entry_to_ondisk(struct ondisk_cache_entry *ondisk,
struct cache_entry *ce)
static int ce_write_entry(git_SHA_CTX *c, int fd, struct cache_entry *ce,
struct strbuf *previous_name)
static int verify_index_from(const struct index_state *istate, const char *path)
static int verify_index(const struct index_state *istate)
static int has_racy_timestamp(struct index_state *istate)
void update_index_if_able(struct index_state *istate, struct lock_file *lockfile)
int write_index(struct index_state *istate, int newfd)
int read_index_unmerged(struct index_state *istate)
int index_name_is_other(const struct index_state *istate, const char *name,
int namelen)
void *read_blob_data_from_index(struct index_state *istate, const char *path, unsigned long *size)
void stat_validity_clear(struct stat_validity *sv)
int stat_validity_check(struct stat_validity *sv, const char *path)
void stat_validity_update(struct stat_validity *sv, int fd)
