static inline int bad_ref_char(int ch)
static int check_refname_component(const char *refname, int flags)
{
const char *cp;
char last = '\0';
for (cp = refname; ; cp++)
int check_refname_format(const char *refname, int flags)
struct ref_entry;
struct ref_value ;
struct ref_cache;
struct ref_dir ;
#define REF_KNOWS_PEELED 0x08
#define REF_DIR 0x10
#define REF_INCOMPLETE 0x20
struct ref_entry ;
static void read_loose_refs(const char *dirname, struct ref_dir *dir);
static struct ref_dir *get_ref_dir(struct ref_entry *entry)
static struct ref_entry *create_ref_entry(const char *refname,
const unsigned char *sha1, int flag,
int check_name)
static void clear_ref_dir(struct ref_dir *dir);
static void free_ref_entry(struct ref_entry *entry)
static void add_entry_to_dir(struct ref_dir *dir, struct ref_entry *entry)
static void clear_ref_dir(struct ref_dir *dir)
static struct ref_entry *create_dir_entry(struct ref_cache *ref_cache,
const char *dirname, size_t len,
int incomplete)
static int ref_entry_cmp(const void *a, const void *b)
static void sort_ref_dir(struct ref_dir *dir);
struct string_slice ;
static int ref_entry_cmp_sslice(const void *key_, const void *ent_)
static int search_ref_dir(struct ref_dir *dir, const char *refname, size_t len)
static struct ref_dir *search_for_subdir(struct ref_dir *dir,
const char *subdirname, size_t len,
int mkdir)
static struct ref_dir *find_containing_dir(struct ref_dir *dir,
const char *refname, int mkdir)
static struct ref_entry *find_ref(struct ref_dir *dir, const char *refname)
static int remove_entry(struct ref_dir *dir, const char *refname)
static int add_ref(struct ref_dir *dir, struct ref_entry *ref)
static int is_dup_ref(const struct ref_entry *ref1, const struct ref_entry *ref2)
static void sort_ref_dir(struct ref_dir *dir)
#define DO_FOR_EACH_INCLUDE_BROKEN 0x01
static int ref_resolves_to_object(struct ref_entry *entry)
static struct ref_entry *current_ref;
typedef int each_ref_entry_fn(struct ref_entry *entry, void *cb_data);
struct ref_entry_cb ;
static int do_one_ref(struct ref_entry *entry, void *cb_data)
static int do_for_each_entry_in_dir(struct ref_dir *dir, int offset,
each_ref_entry_fn fn, void *cb_data)
static int do_for_each_entry_in_dirs(struct ref_dir *dir1,
struct ref_dir *dir2,
each_ref_entry_fn fn, void *cb_data)
static void prime_ref_dir(struct ref_dir *dir)
static int names_conflict(const char *refname1, const char *refname2)
struct name_conflict_cb ;
static int name_conflict_fn(struct ref_entry *entry, void *cb_data)
static int is_refname_available(const char *refname, const char *oldrefname,
struct ref_dir *dir)
struct packed_ref_cache ;
static struct ref_cache  ref_cache, *submodule_ref_caches;
static struct lock_file packlock;
static void acquire_packed_ref_cache(struct packed_ref_cache *packed_refs)
static int release_packed_ref_cache(struct packed_ref_cache *packed_refs)
static void clear_packed_ref_cache(struct ref_cache *refs)
static void clear_loose_ref_cache(struct ref_cache *refs)
static struct ref_cache *create_ref_cache(const char *submodule)
static struct ref_cache *get_ref_cache(const char *submodule)
#define PEELED_LINE_LENGTH 42
static const char PACKED_REFS_HEADER[] =
"# pack-refs with: peeled fully-peeled \n";
static const char *parse_ref_line(char *line, unsigned char *sha1)
static void read_packed_refs(FILE *f, struct ref_dir *dir)
static struct packed_ref_cache *get_packed_ref_cache(struct ref_cache *refs)
static struct ref_dir *get_packed_ref_dir(struct packed_ref_cache *packed_ref_cache)
static struct ref_dir *get_packed_refs(struct ref_cache *refs)
void add_packed_ref(const char *refname, const unsigned char *sha1)
static void read_loose_refs(const char *dirname, struct ref_dir *dir)
static struct ref_dir *get_loose_refs(struct ref_cache *refs)
#define MAXDEPTH 5
#define MAXREFLEN (1024)
static int resolve_gitlink_packed_ref(struct ref_cache *refs,
const char *refname, unsigned char *sha1)
static int resolve_gitlink_ref_recursive(struct ref_cache *refs,
const char *refname, unsigned char *sha1,
int recursion)
int resolve_gitlink_ref(const char *path, const char *refname, unsigned char *sha1)
static struct ref_entry *get_packed_ref(const char *refname)
static const char *handle_missing_loose_ref(const char *refname,
unsigned char *sha1,
int reading,
int *flag)
const char *resolve_ref_unsafe(const char *refname, unsigned char *sha1, int reading, int *flag)
char *resolve_refdup(const char *ref, unsigned char *sha1, int reading, int *flag)
struct ref_filter ;
int read_ref_full(const char *refname, unsigned char *sha1, int reading, int *flags)
int read_ref(const char *refname, unsigned char *sha1)
int ref_exists(const char *refname)
static int filter_refs(const char *refname, const unsigned char *sha1, int flags,
void *data)
enum peel_status ;
static enum peel_status peel_object(const unsigned char *name, unsigned char *sha1)
static enum peel_status peel_entry(struct ref_entry *entry, int repeel)
int peel_ref(const char *refname, unsigned char *sha1)
struct warn_if_dangling_data ;
static int warn_if_dangling_symref(const char *refname, const unsigned char *sha1,
int flags, void *cb_data)
void warn_dangling_symref(FILE *fp, const char *msg_fmt, const char *refname)
void warn_dangling_symrefs(FILE *fp, const char *msg_fmt, const struct string_list *refnames)
static int do_for_each_entry(struct ref_cache *refs, const char *base,
each_ref_entry_fn fn, void *cb_data)
static int do_for_each_ref(struct ref_cache *refs, const char *base,
each_ref_fn fn, int trim, int flags, void *cb_data)
static int do_head_ref(const char *submodule, each_ref_fn fn, void *cb_data)
int head_ref(each_ref_fn fn, void *cb_data)
int head_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data)
int for_each_ref(each_ref_fn fn, void *cb_data)
int for_each_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data)
int for_each_ref_in(const char *prefix, each_ref_fn fn, void *cb_data)
int for_each_ref_in_submodule(const char *submodule, const char *prefix,
each_ref_fn fn, void *cb_data)
int for_each_tag_ref(each_ref_fn fn, void *cb_data)
int for_each_tag_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data)
int for_each_branch_ref(each_ref_fn fn, void *cb_data)
int for_each_branch_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data)
int for_each_remote_ref(each_ref_fn fn, void *cb_data)
int for_each_remote_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data)
int for_each_replace_ref(each_ref_fn fn, void *cb_data)
int head_ref_namespaced(each_ref_fn fn, void *cb_data)
int for_each_namespaced_ref(each_ref_fn fn, void *cb_data)
int for_each_glob_ref_in(each_ref_fn fn, const char *pattern,
const char *prefix, void *cb_data)
int for_each_glob_ref(each_ref_fn fn, const char *pattern, void *cb_data)
int for_each_rawref(each_ref_fn fn, void *cb_data)
const char *prettify_refname(const char *name)
static const char *ref_rev_parse_rules[] = ;
int refname_match(const char *abbrev_name, const char *full_name)
static struct ref_lock *verify_lock(struct ref_lock *lock,
const unsigned char *old_sha1, int mustexist)
static int remove_empty_directories(const char *file)
static char *substitute_branch_name(const char **string, int *len)
int dwim_ref(const char *str, int len, unsigned char *sha1, char **ref)
int dwim_log(const char *str, int len, unsigned char *sha1, char **log)
static struct ref_lock *lock_ref_sha1_basic(const char *refname,
const unsigned char *old_sha1,
int flags, int *type_p)
struct ref_lock *lock_ref_sha1(const char *refname, const unsigned char *old_sha1)
struct ref_lock *lock_any_ref_for_update(const char *refname,
const unsigned char *old_sha1,
int flags, int *type_p)
static void write_packed_entry(int fd, char *refname, unsigned char *sha1,
unsigned char *peeled)
static int write_packed_entry_fn(struct ref_entry *entry, void *cb_data)
int lock_packed_refs(int flags)
int commit_packed_refs(void)
void rollback_packed_refs(void)
struct ref_to_prune ;
struct pack_refs_cb_data ;
static int pack_if_possible_fn(struct ref_entry *entry, void *cb_data)
static void try_remove_empty_parents(char *name)
static void prune_ref(struct ref_to_prune *r)
static void prune_refs(struct ref_to_prune *r)
int pack_refs(unsigned int flags)
static int curate_packed_ref_fn(struct ref_entry *entry, void *cb_data)
int repack_without_refs(const char **refnames, int n)
static int repack_without_ref(const char *refname)
static int delete_ref_loose(struct ref_lock *lock, int flag)
int delete_ref(const char *refname, const unsigned char *sha1, int delopt)
#define TMP_RENAMED_LOG  "logs/refs/.tmp-renamed-log"
static int rename_tmp_log(const char *newrefname)
int rename_ref(const char *oldrefname, const char *newrefname, const char *logmsg)
int close_ref(struct ref_lock *lock)
int commit_ref(struct ref_lock *lock)
void unlock_ref(struct ref_lock *lock)
static int copy_msg(char *buf, const char *msg)
int log_ref_setup(const char *refname, char *logfile, int bufsize)
static int log_ref_write(const char *refname, const unsigned char *old_sha1,
const unsigned char *new_sha1, const char *msg)
static int is_branch(const char *refname)
int write_ref_sha1(struct ref_lock *lock,
const unsigned char *sha1, const char *logmsg)
int create_symref(const char *ref_target, const char *refs_heads_master,
const char *logmsg)
static char *ref_msg(const char *line, const char *endp)
int read_ref_at(const char *refname, unsigned long at_time, int cnt,
unsigned char *sha1, char **msg,
unsigned long *cutoff_time, int *cutoff_tz, int *cutoff_cnt)
static int show_one_reflog_ent(struct strbuf *sb, each_reflog_ent_fn fn, void *cb_data)
static char *find_beginning_of_line(char *bob, char *scan)
int for_each_reflog_ent_reverse(const char *refname, each_reflog_ent_fn fn, void *cb_data)
int for_each_reflog_ent(const char *refname, each_reflog_ent_fn fn, void *cb_data)
static int do_for_each_reflog(struct strbuf *name, each_ref_fn fn, void *cb_data)
int for_each_reflog(each_ref_fn fn, void *cb_data)
static struct ref_lock *update_ref_lock(const char *refname,
const unsigned char *oldval,
int flags, int *type_p,
enum action_on_err onerr)
static int update_ref_write(const char *action, const char *refname,
const unsigned char *sha1, struct ref_lock *lock,
enum action_on_err onerr)
int update_ref(const char *action, const char *refname,
const unsigned char *sha1, const unsigned char *oldval,
int flags, enum action_on_err onerr)
static int ref_update_compare(const void *r1, const void *r2)
static int ref_update_reject_duplicates(struct ref_update **updates, int n,
enum action_on_err onerr)
int update_refs(const char *action, const struct ref_update **updates_orig,
int n, enum action_on_err onerr)
char *shorten_unambiguous_ref(const char *refname, int strict)
static struct string_list *hide_refs;
int parse_hide_refs_config(const char *var, const char *value, const char *section)
int ref_is_hidden(const char *refname)
