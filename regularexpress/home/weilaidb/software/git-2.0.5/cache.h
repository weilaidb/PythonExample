#define CACHE_H
#define git_SHA_CTX	SHA_CTX
#define git_SHA1_Init	SHA1_Init
#define git_SHA1_Update	SHA1_Update
#define git_SHA1_Final	SHA1_Final
typedef struct git_zstream  git_zstream;
void git_inflate_init(git_zstream *);
void git_inflate_init_gzip_only(git_zstream *);
void git_inflate_end(git_zstream *);
int git_inflate(git_zstream *, int flush);
void git_deflate_init(git_zstream *, int level);
void git_deflate_init_gzip(git_zstream *, int level);
void git_deflate_init_raw(git_zstream *, int level);
void git_deflate_end(git_zstream *);
int git_deflate_abort(git_zstream *);
int git_deflate_end_gently(git_zstream *);
int git_deflate(git_zstream *, int flush);
unsigned long git_deflate_bound(git_zstream *, unsigned long);
#if defined(DT_UNKNOWN) && !defined(NO_D_TYPE_IN_DIRENT)
#define DTYPE(de)	((de)->d_type)
#undef DT_UNKNOWN
#undef DT_DIR
#undef DT_REG
#undef DT_LNK
#define DT_UNKNOWN	0
#define DT_DIR		1
#define DT_REG		2
#define DT_LNK		3
#define DTYPE(de)	DT_UNKNOWN
#define S_IFINVALID     0030000
#define S_IFGITLINK	0160000
#define S_ISGITLINK(m)	(((m) & S_IFMT) == S_IFGITLINK)
#define DEFAULT_GIT_PORT 9418
#define CACHE_SIGNATURE 0x44495243
struct cache_header ;
#define INDEX_FORMAT_LB 2
#define INDEX_FORMAT_UB 4
struct cache_time ;
struct stat_data ;
struct cache_entry ;
#define CE_STAGEMASK (0x3000)
#define CE_EXTENDED  (0x4000)
#define CE_VALID     (0x8000)
#define CE_STAGESHIFT 12
#define CE_UPDATE            (1 << 16)
#define CE_REMOVE            (1 << 17)
#define CE_UPTODATE          (1 << 18)
#define CE_ADDED             (1 << 19)
#define CE_HASHED            (1 << 20)
#define CE_WT_REMOVE         (1 << 22)
#define CE_CONFLICTED        (1 << 23)
#define CE_UNPACKED          (1 << 24)
#define CE_NEW_SKIP_WORKTREE (1 << 25)
#define CE_MATCHED           (1 << 26)
#define CE_INTENT_TO_ADD     (1 << 29)
#define CE_SKIP_WORKTREE     (1 << 30)
#define CE_EXTENDED2         (1 << 31)
#define CE_EXTENDED_FLAGS (CE_INTENT_TO_ADD | CE_SKIP_WORKTREE)
#if CE_EXTENDED_FLAGS & 0x803FFFFF
#error "CE_EXTENDED_FLAGS out of range"
struct pathspec;
static inline void copy_cache_entry(struct cache_entry *dst,
const struct cache_entry *src)
static inline unsigned create_ce_flags(unsigned stage)
#define ce_namelen(ce) ((ce)->ce_namelen)
#define ce_size(ce) cache_entry_size(ce_namelen(ce))
#define ce_stage(ce) ((CE_STAGEMASK & (ce)->ce_flags) >> CE_STAGESHIFT)
#define ce_uptodate(ce) ((ce)->ce_flags & CE_UPTODATE)
#define ce_skip_worktree(ce) ((ce)->ce_flags & CE_SKIP_WORKTREE)
#define ce_mark_uptodate(ce) ((ce)->ce_flags |= CE_UPTODATE)
#define ce_permissions(mode) (((mode) & 0100) ? 0755 : 0644)
static inline unsigned int create_ce_mode(unsigned int mode)
static inline unsigned int ce_mode_from_stat(const struct cache_entry *ce,
unsigned int mode)
static inline int ce_to_dtype(const struct cache_entry *ce)
static inline unsigned int canon_mode(unsigned int mode)
#define cache_entry_size(len) (offsetof(struct cache_entry,name) + (len) + 1)
struct index_state ;
extern struct index_state the_index;
extern void add_name_hash(struct index_state *istate, struct cache_entry *ce);
extern void remove_name_hash(struct index_state *istate, struct cache_entry *ce);
extern void free_name_hash(struct index_state *istate);
#define active_cache (the_index.cache)
#define active_nr (the_index.cache_nr)
#define active_alloc (the_index.cache_alloc)
#define active_cache_changed (the_index.cache_changed)
#define active_cache_tree (the_index.cache_tree)
#define read_cache() read_index(&the_index)
#define read_cache_from(path) read_index_from(&the_index, (path))
#define read_cache_preload(pathspec) read_index_preload(&the_index, (pathspec))
#define is_cache_unborn() is_index_unborn(&the_index)
#define read_cache_unmerged() read_index_unmerged(&the_index)
#define write_cache(newfd, cache, entries) write_index(&the_index, (newfd))
#define discard_cache() discard_index(&the_index)
#define unmerged_cache() unmerged_index(&the_index)
#define cache_name_pos(name, namelen) index_name_pos(&the_index,(name),(namelen))
#define add_cache_entry(ce, option) add_index_entry(&the_index, (ce), (option))
#define rename_cache_entry_at(pos, new_name) rename_index_entry_at(&the_index, (pos), (new_name))
#define remove_cache_entry_at(pos) remove_index_entry_at(&the_index, (pos))
#define remove_file_from_cache(path) remove_file_from_index(&the_index, (path))
#define add_to_cache(path, st, flags) add_to_index(&the_index, (path), (st), (flags))
#define add_file_to_cache(path, flags) add_file_to_index(&the_index, (path), (flags))
#define refresh_cache(flags) refresh_index(&the_index, (flags), NULL, NULL, NULL)
#define ce_match_stat(ce, st, options) ie_match_stat(&the_index, (ce), (st), (options))
#define ce_modified(ce, st, options) ie_modified(&the_index, (ce), (st), (options))
#define cache_dir_exists(name, namelen) index_dir_exists(&the_index, (name), (namelen))
#define cache_file_exists(name, namelen, igncase) index_file_exists(&the_index, (name), (namelen), (igncase))
#define cache_name_is_other(name, namelen) index_name_is_other(&the_index, (name), (namelen))
#define resolve_undo_clear() resolve_undo_clear_index(&the_index)
#define unmerge_cache_entry_at(at) unmerge_index_entry_at(&the_index, at)
#define unmerge_cache(pathspec) unmerge_index(&the_index, pathspec)
#define read_blob_data_from_cache(path, sz) read_blob_data_from_index(&the_index, (path), (sz))
enum object_type ;
static inline enum object_type object_type(unsigned int mode)
#define GIT_DIR_ENVIRONMENT "GIT_DIR"
#define GIT_NAMESPACE_ENVIRONMENT "GIT_NAMESPACE"
#define GIT_WORK_TREE_ENVIRONMENT "GIT_WORK_TREE"
#define GIT_PREFIX_ENVIRONMENT "GIT_PREFIX"
#define DEFAULT_GIT_DIR_ENVIRONMENT ".git"
#define DB_ENVIRONMENT "GIT_OBJECT_DIRECTORY"
#define INDEX_ENVIRONMENT "GIT_INDEX_FILE"
#define GRAFT_ENVIRONMENT "GIT_GRAFT_FILE"
#define GIT_SHALLOW_FILE_ENVIRONMENT "GIT_SHALLOW_FILE"
#define TEMPLATE_DIR_ENVIRONMENT "GIT_TEMPLATE_DIR"
#define CONFIG_ENVIRONMENT "GIT_CONFIG"
#define CONFIG_DATA_ENVIRONMENT "GIT_CONFIG_PARAMETERS"
#define EXEC_PATH_ENVIRONMENT "GIT_EXEC_PATH"
#define CEILING_DIRECTORIES_ENVIRONMENT "GIT_CEILING_DIRECTORIES"
#define NO_REPLACE_OBJECTS_ENVIRONMENT "GIT_NO_REPLACE_OBJECTS"
#define GITATTRIBUTES_FILE ".gitattributes"
#define INFOATTRIBUTES_FILE "info/attributes"
#define ATTRIBUTE_MACRO_PREFIX "[attr]"
#define GIT_NOTES_REF_ENVIRONMENT "GIT_NOTES_REF"
#define GIT_NOTES_DEFAULT_REF "refs/notes/commits"
#define GIT_NOTES_DISPLAY_REF_ENVIRONMENT "GIT_NOTES_DISPLAY_REF"
#define GIT_NOTES_REWRITE_REF_ENVIRONMENT "GIT_NOTES_REWRITE_REF"
#define GIT_NOTES_REWRITE_MODE_ENVIRONMENT "GIT_NOTES_REWRITE_MODE"
#define GIT_LITERAL_PATHSPECS_ENVIRONMENT "GIT_LITERAL_PATHSPECS"
#define GIT_GLOB_PATHSPECS_ENVIRONMENT "GIT_GLOB_PATHSPECS"
#define GIT_NOGLOB_PATHSPECS_ENVIRONMENT "GIT_NOGLOB_PATHSPECS"
#define GIT_ICASE_PATHSPECS_ENVIRONMENT "GIT_ICASE_PATHSPECS"
#define GIT_IMPLICIT_WORK_TREE_ENVIRONMENT "GIT_IMPLICIT_WORK_TREE"
extern const char * const local_repo_env[];
extern int is_bare_repository_cfg;
extern int is_bare_repository(void);
extern int is_inside_git_dir(void);
extern char *git_work_tree_cfg;
extern int is_inside_work_tree(void);
extern const char *get_git_dir(void);
extern int is_git_directory(const char *path);
extern char *get_object_directory(void);
extern char *get_index_file(void);
extern char *get_graft_file(void);
extern int set_git_dir(const char *path);
extern const char *get_git_namespace(void);
extern const char *strip_namespace(const char *namespaced_ref);
extern const char *get_git_work_tree(void);
extern const char *read_gitfile(const char *path);
extern const char *resolve_gitdir(const char *suspect);
extern void set_git_work_tree(const char *tree);
#define ALTERNATE_DB_ENVIRONMENT "GIT_ALTERNATE_OBJECT_DIRECTORIES"
extern const char **get_pathspec(const char *prefix, const char **pathspec);
extern void setup_work_tree(void);
extern const char *setup_git_directory_gently(int *);
extern const char *setup_git_directory(void);
extern char *prefix_path(const char *prefix, int len, const char *path);
extern char *prefix_path_gently(const char *prefix, int len, int *remaining, const char *path);
extern const char *prefix_filename(const char *prefix, int len, const char *path);
extern int check_filename(const char *prefix, const char *name);
extern void verify_filename(const char *prefix,
const char *name,
int diagnose_misspelt_rev);
extern void verify_non_filename(const char *prefix, const char *name);
extern int path_inside_repo(const char *prefix, const char *path);
#define INIT_DB_QUIET 0x0001
extern int set_git_dir_init(const char *git_dir, const char *real_git_dir, int);
extern int init_db(const char *template_dir, unsigned int flags);
extern void sanitize_stdfds(void);
extern int daemonize(void);
#define alloc_nr(x) (((x)+16)*3/2)
#define ALLOC_GROW(x, nr, alloc) \
do  while (0)
extern int read_index(struct index_state *);
extern int read_index_preload(struct index_state *, const struct pathspec *pathspec);
extern int read_index_from(struct index_state *, const char *path);
extern int is_index_unborn(struct index_state *);
extern int read_index_unmerged(struct index_state *);
extern int write_index(struct index_state *, int newfd);
extern int discard_index(struct index_state *);
extern int unmerged_index(const struct index_state *);
extern int verify_path(const char *path);
extern struct cache_entry *index_dir_exists(struct index_state *istate, const char *name, int namelen);
extern struct cache_entry *index_file_exists(struct index_state *istate, const char *name, int namelen, int igncase);
extern int index_name_pos(const struct index_state *, const char *name, int namelen);
#define ADD_CACHE_OK_TO_ADD 1
#define ADD_CACHE_OK_TO_REPLACE 2
#define ADD_CACHE_SKIP_DFCHECK 4
#define ADD_CACHE_JUST_APPEND 8
#define ADD_CACHE_NEW_ONLY 16
extern int add_index_entry(struct index_state *, struct cache_entry *ce, int option);
extern void rename_index_entry_at(struct index_state *, int pos, const char *new_name);
extern int remove_index_entry_at(struct index_state *, int pos);
extern void remove_marked_cache_entries(struct index_state *istate);
extern int remove_file_from_index(struct index_state *, const char *path);
#define ADD_CACHE_VERBOSE 1
#define ADD_CACHE_PRETEND 2
#define ADD_CACHE_IGNORE_ERRORS	4
#define ADD_CACHE_IGNORE_REMOVAL 8
#define ADD_CACHE_INTENT 16
extern int add_to_index(struct index_state *, const char *path, struct stat *, int flags);
extern int add_file_to_index(struct index_state *, const char *path, int flags);
extern struct cache_entry *make_cache_entry(unsigned int mode, const unsigned char *sha1, const char *path, int stage, unsigned int refresh_options);
extern int ce_same_name(const struct cache_entry *a, const struct cache_entry *b);
extern void set_object_name_for_intent_to_add_entry(struct cache_entry *ce);
extern int index_name_is_other(const struct index_state *, const char *, int);
extern void *read_blob_data_from_index(struct index_state *, const char *, unsigned long *);
#define CE_MATCH_IGNORE_VALID		01
#define CE_MATCH_RACY_IS_DIRTY		02
#define CE_MATCH_IGNORE_SKIP_WORKTREE	04
#define CE_MATCH_IGNORE_MISSING		0x08
#define CE_MATCH_REFRESH		0x10
extern int ie_match_stat(const struct index_state *, const struct cache_entry *, struct stat *, unsigned int);
extern int ie_modified(const struct index_state *, const struct cache_entry *, struct stat *, unsigned int);
#define HASH_WRITE_OBJECT 1
#define HASH_FORMAT_CHECK 2
extern int index_fd(unsigned char *sha1, int fd, struct stat *st, enum object_type type, const char *path, unsigned flags);
extern int index_path(unsigned char *sha1, const char *path, struct stat *st, unsigned flags);
extern void fill_stat_data(struct stat_data *sd, struct stat *st);
extern int match_stat_data(const struct stat_data *sd, struct stat *st);
extern void fill_stat_cache_info(struct cache_entry *ce, struct stat *st);
#define REFRESH_REALLY		0x0001
#define REFRESH_UNMERGED	0x0002
#define REFRESH_QUIET		0x0004
#define REFRESH_IGNORE_MISSING	0x0008
#define REFRESH_IGNORE_SUBMODULES	0x0010
#define REFRESH_IN_PORCELAIN	0x0020
extern int refresh_index(struct index_state *, unsigned int flags, const struct pathspec *pathspec, char *seen, const char *header_msg);
struct lock_file ;
#define LOCK_DIE_ON_ERROR 1
#define LOCK_NODEREF 2
extern int unable_to_lock_error(const char *path, int err);
extern NORETURN void unable_to_lock_index_die(const char *path, int err);
extern int hold_lock_file_for_update(struct lock_file *, const char *path, int);
extern int hold_lock_file_for_append(struct lock_file *, const char *path, int);
extern int commit_lock_file(struct lock_file *);
extern void update_index_if_able(struct index_state *, struct lock_file *);
extern int hold_locked_index(struct lock_file *, int);
extern int commit_locked_index(struct lock_file *);
extern void set_alternate_index_output(const char *);
extern int close_lock_file(struct lock_file *);
extern void rollback_lock_file(struct lock_file *);
extern int delete_ref(const char *, const unsigned char *sha1, int delopt);
extern int trust_executable_bit;
extern int trust_ctime;
extern int check_stat;
extern int quote_path_fully;
extern int has_symlinks;
extern int minimum_abbrev, default_abbrev;
extern int ignore_case;
extern int assume_unchanged;
extern int prefer_symlink_refs;
extern int log_all_ref_updates;
extern int warn_ambiguous_refs;
extern int warn_on_object_refname_ambiguity;
extern int shared_repository;
extern const char *apply_default_whitespace;
extern const char *apply_default_ignorewhitespace;
extern const char *git_attributes_file;
extern int zlib_compression_level;
extern int core_compression_level;
extern int core_compression_seen;
extern size_t packed_git_window_size;
extern size_t packed_git_limit;
extern size_t delta_base_cache_limit;
extern unsigned long big_file_threshold;
extern unsigned long pack_size_limit_cfg;
extern int check_replace_refs;
extern int fsync_object_files;
extern int core_preload_index;
extern int core_apply_sparse_checkout;
extern int precomposed_unicode;
extern int protect_hfs;
extern int protect_ntfs;
extern char comment_line_char;
enum branch_track ;
enum rebase_setup_type ;
enum push_default_type ;
extern enum branch_track git_branch_track;
extern enum rebase_setup_type autorebase;
extern enum push_default_type push_default;
enum object_creation_mode ;
extern enum object_creation_mode object_creation_mode;
extern char *notes_ref_name;
extern int grafts_replace_parents;
#define GIT_REPO_VERSION 0
extern int repository_format_version;
extern int check_repository_format(void);
#define MTIME_CHANGED	0x0001
#define CTIME_CHANGED	0x0002
#define OWNER_CHANGED	0x0004
#define MODE_CHANGED    0x0008
#define INODE_CHANGED   0x0010
#define DATA_CHANGED    0x0020
#define TYPE_CHANGED    0x0040
extern char *mksnpath(char *buf, size_t n, const char *fmt, ...)
__attribute__((format (printf, 3, 4)));
extern char *git_snpath(char *buf, size_t n, const char *fmt, ...)
__attribute__((format (printf, 3, 4)));
extern char *git_pathdup(const char *fmt, ...)
__attribute__((format (printf, 1, 2)));
extern char *mkpathdup(const char *fmt, ...)
__attribute__((format (printf, 1, 2)));
extern char *mkpath(const char *fmt, ...) __attribute__((format (printf, 1, 2)));
extern char *git_path(const char *fmt, ...) __attribute__((format (printf, 1, 2)));
extern char *git_path_submodule(const char *path, const char *fmt, ...)
__attribute__((format (printf, 2, 3)));
extern const char *sha1_file_name(const unsigned char *sha1);
extern char *sha1_pack_name(const unsigned char *sha1);
extern char *sha1_pack_index_name(const unsigned char *sha1);
extern const char *find_unique_abbrev(const unsigned char *sha1, int);
extern const unsigned char null_sha1[20];
static inline int hashcmp(const unsigned char *sha1, const unsigned char *sha2)
static inline int is_null_sha1(const unsigned char *sha1)
static inline void hashcpy(unsigned char *sha_dst, const unsigned char *sha_src)
static inline void hashclr(unsigned char *hash)
#define EMPTY_TREE_SHA1_HEX \
"4b825dc642cb6eb9a060e54bf8d69288fbee4904"
#define EMPTY_TREE_SHA1_BIN_LITERAL \
"\x4b\x82\x5d\xc6\x42\xcb\x6e\xb9\xa0\x60" \
"\xe5\x4b\xf8\xd6\x92\x88\xfb\xee\x49\x04"
#define EMPTY_TREE_SHA1_BIN \
((const unsigned char *) EMPTY_TREE_SHA1_BIN_LITERAL)
#define EMPTY_BLOB_SHA1_HEX \
"e69de29bb2d1d6434b8b29ae775ad8c2e48c5391"
#define EMPTY_BLOB_SHA1_BIN_LITERAL \
"\xe6\x9d\xe2\x9b\xb2\xd1\xd6\x43\x4b\x8b" \
"\x29\xae\x77\x5a\xd8\xc2\xe4\x8c\x53\x91"
#define EMPTY_BLOB_SHA1_BIN \
((const unsigned char *) EMPTY_BLOB_SHA1_BIN_LITERAL)
static inline int is_empty_blob_sha1(const unsigned char *sha1)
int git_mkstemp(char *path, size_t n, const char *template);
int git_mkstemps(char *path, size_t n, const char *template, int suffix_len);
int git_mkstemps_mode(char *pattern, int suffix_len, int mode);
int git_mkstemp_mode(char *pattern, int mode);
enum sharedrepo ;
int git_config_perm(const char *var, const char *value);
int adjust_shared_perm(const char *path);
enum scld_error ;
enum scld_error safe_create_leading_directories(char *path);
enum scld_error safe_create_leading_directories_const(const char *path);
int mkdir_in_gitdir(const char *path);
extern void home_config_paths(char **global, char **xdg, char *file);
extern char *expand_user_path(const char *path);
const char *enter_repo(const char *path, int strict);
static inline int is_absolute_path(const char *path)
int is_directory(const char *);
const char *real_path(const char *path);
const char *real_path_if_valid(const char *path);
const char *absolute_path(const char *path);
const char *remove_leading_path(const char *in, const char *prefix);
const char *relative_path(const char *in, const char *prefix, struct strbuf *sb);
int normalize_path_copy_len(char *dst, const char *src, int *prefix_len);
int normalize_path_copy(char *dst, const char *src);
int longest_ancestor_length(const char *path, struct string_list *prefixes);
char *strip_path_suffix(const char *path, const char *suffix);
int daemon_avoid_alias(const char *path);
int offset_1st_component(const char *path);
extern int is_ntfs_dotgit(const char *name);
#define LOOKUP_REPLACE_OBJECT 1
extern void *read_sha1_file_extended(const unsigned char *sha1, enum object_type *type, unsigned long *size, unsigned flag);
static inline void *read_sha1_file(const unsigned char *sha1, enum object_type *type, unsigned long *size)
extern const unsigned char *do_lookup_replace_object(const unsigned char *sha1);
static inline const unsigned char *lookup_replace_object(const unsigned char *sha1)
static inline const unsigned char *lookup_replace_object_extended(const unsigned char *sha1, unsigned flag)
extern int sha1_object_info(const unsigned char *, unsigned long *);
extern int hash_sha1_file(const void *buf, unsigned long len, const char *type, unsigned char *sha1);
extern int write_sha1_file(const void *buf, unsigned long len, const char *type, unsigned char *return_sha1);
extern int pretend_sha1_file(void *, unsigned long, enum object_type, unsigned char *);
extern int force_object_loose(const unsigned char *sha1, time_t mtime);
extern int git_open_noatime(const char *name);
extern void *map_sha1_file(const unsigned char *sha1, unsigned long *size);
extern int unpack_sha1_header(git_zstream *stream, unsigned char *map, unsigned long mapsize, void *buffer, unsigned long bufsiz);
extern int parse_sha1_header(const char *hdr, unsigned long *sizep);
extern int do_check_packed_object_crc;
extern int check_sha1_signature(const unsigned char *sha1, void *buf, unsigned long size, const char *type);
extern int move_temp_to_file(const char *tmpfile, const char *filename);
extern int has_sha1_pack(const unsigned char *sha1);
extern int has_sha1_file(const unsigned char *sha1);
extern int has_loose_object_nonlocal(const unsigned char *sha1);
extern int has_pack_index(const unsigned char *sha1);
extern void assert_sha1_type(const unsigned char *sha1, enum object_type expect);
extern const signed char hexval_table[256];
static inline unsigned int hexval(unsigned char c)
#define MINIMUM_ABBREV minimum_abbrev
#define DEFAULT_ABBREV default_abbrev
struct object_context ;
#define GET_SHA1_QUIETLY        01
#define GET_SHA1_COMMIT         02
#define GET_SHA1_COMMITTISH     04
#define GET_SHA1_TREE          010
#define GET_SHA1_TREEISH       020
#define GET_SHA1_BLOB	       040
#define GET_SHA1_ONLY_TO_DIE 04000
extern int get_sha1(const char *str, unsigned char *sha1);
extern int get_sha1_commit(const char *str, unsigned char *sha1);
extern int get_sha1_committish(const char *str, unsigned char *sha1);
extern int get_sha1_tree(const char *str, unsigned char *sha1);
extern int get_sha1_treeish(const char *str, unsigned char *sha1);
extern int get_sha1_blob(const char *str, unsigned char *sha1);
extern void maybe_die_on_misspelt_object_name(const char *name, const char *prefix);
extern int get_sha1_with_context(const char *str, unsigned flags, unsigned char *sha1, struct object_context *orc);
typedef int each_abbrev_fn(const unsigned char *sha1, void *);
extern int for_each_abbrev(const char *prefix, each_abbrev_fn, void *);
extern int get_sha1_hex(const char *hex, unsigned char *sha1);
extern char *sha1_to_hex(const unsigned char *sha1);
extern int read_ref_full(const char *refname, unsigned char *sha1,
int reading, int *flags);
extern int read_ref(const char *refname, unsigned char *sha1);
extern const char *resolve_ref_unsafe(const char *ref, unsigned char *sha1, int reading, int *flag);
extern char *resolve_refdup(const char *ref, unsigned char *sha1, int reading, int *flag);
extern int dwim_ref(const char *str, int len, unsigned char *sha1, char **ref);
extern int dwim_log(const char *str, int len, unsigned char *sha1, char **ref);
extern int interpret_branch_name(const char *str, int len, struct strbuf *);
extern int get_sha1_mb(const char *str, unsigned char *sha1);
extern int refname_match(const char *abbrev_name, const char *full_name);
extern int create_symref(const char *ref, const char *refs_heads_master, const char *logmsg);
extern int validate_headref(const char *ref);
extern int base_name_compare(const char *name1, int len1, int mode1, const char *name2, int len2, int mode2);
extern int df_name_compare(const char *name1, int len1, int mode1, const char *name2, int len2, int mode2);
extern int cache_name_compare(const char *name1, int len1, const char *name2, int len2);
extern int cache_name_stage_compare(const char *name1, int len1, int stage1, const char *name2, int len2, int stage2);
extern void *read_object_with_reference(const unsigned char *sha1,
const char *required_type,
unsigned long *size,
unsigned char *sha1_ret);
extern struct object *peel_to_type(const char *name, int namelen,
struct object *o, enum object_type);
enum date_mode ;
const char *show_date(unsigned long time, int timezone, enum date_mode mode);
void show_date_relative(unsigned long time, int tz, const struct timeval *now,
struct strbuf *timebuf);
int parse_date(const char *date, char *buf, int bufsize);
int parse_date_basic(const char *date, unsigned long *timestamp, int *offset);
int parse_expiry_date(const char *date, unsigned long *timestamp);
void datestamp(char *buf, int bufsize);
#define approxidate(s) approxidate_careful((s), NULL)
unsigned long approxidate_careful(const char *, int *);
unsigned long approxidate_relative(const char *date, const struct timeval *now);
enum date_mode parse_date_format(const char *format);
int date_overflows(unsigned long date);
#define IDENT_STRICT	       1
#define IDENT_NO_DATE	       2
#define IDENT_NO_NAME	       4
extern const char *git_author_info(int);
extern const char *git_committer_info(int);
extern const char *fmt_ident(const char *name, const char *email, const char *date_str, int);
extern const char *fmt_name(const char *name, const char *email);
extern const char *ident_default_email(void);
extern const char *git_editor(void);
extern const char *git_pager(int stdout_is_tty);
extern int git_ident_config(const char *, const char *, void *);
struct ident_split ;
extern int split_ident_line(struct ident_split *, const char *, int);
extern int ident_cmp(const struct ident_split *, const struct ident_split *);
struct checkout ;
#define TEMPORARY_FILENAME_LENGTH 25
extern int checkout_entry(struct cache_entry *ce, const struct checkout *state, char *topath);
struct cache_def ;
extern int has_symlink_leading_path(const char *name, int len);
extern int threaded_has_symlink_leading_path(struct cache_def *, const char *, int);
extern int check_leading_path(const char *name, int len);
extern int has_dirs_only_path(const char *name, int len, int prefix_len);
extern void schedule_dir_for_removal(const char *name, int len);
extern void remove_scheduled_dirs(void);
extern struct alternate_object_database  *alt_odb_list;
extern void prepare_alt_odb(void);
extern void read_info_alternates(const char * relative_base, int depth);
extern void add_to_alternates_file(const char *reference);
typedef int alt_odb_fn(struct alternate_object_database *, void *);
extern void foreach_alt_odb(alt_odb_fn, void*);
struct pack_window ;
extern struct packed_git  *packed_git;
struct pack_entry ;
extern struct packed_git *parse_pack_index(unsigned char *sha1, const char *idx_path);
extern void (*report_garbage)(const char *desc, const char *path);
extern void prepare_packed_git(void);
extern void reprepare_packed_git(void);
extern void install_packed_git(struct packed_git *pack);
extern struct packed_git *find_sha1_pack(const unsigned char *sha1,
struct packed_git *packs);
extern void pack_report(void);
extern int open_pack_index(struct packed_git *);
extern void close_pack_index(struct packed_git *);
extern unsigned char *use_pack(struct packed_git *, struct pack_window **, off_t, unsigned long *);
extern void close_pack_windows(struct packed_git *);
extern void unuse_pack(struct pack_window **);
extern void free_pack_by_name(const char *);
extern void clear_delta_base_cache(void);
extern struct packed_git *add_packed_git(const char *, int, int);
extern const unsigned char *nth_packed_object_sha1(struct packed_git *, uint32_t n);
extern off_t nth_packed_object_offset(const struct packed_git *, uint32_t n);
extern off_t find_pack_entry_one(const unsigned char *sha1, struct packed_git *);
extern int is_pack_valid(struct packed_git *);
extern void *unpack_entry(struct packed_git *, off_t, enum object_type *, unsigned long *);
extern unsigned long unpack_object_header_buffer(const unsigned char *buf, unsigned long len, enum object_type *type, unsigned long *sizep);
extern unsigned long get_size_from_delta(struct packed_git *, struct pack_window **, off_t);
extern int unpack_object_header(struct packed_git *, struct pack_window **, off_t *, unsigned long *);
struct object_info ;
extern int sha1_object_info_extended(const unsigned char *, struct object_info *, unsigned flags);
extern int update_server_info(int);
#define CONFIG_INVALID_KEY 1
#define CONFIG_NO_SECTION_OR_NAME 2
#define CONFIG_NO_LOCK -1
#define CONFIG_INVALID_FILE 3
#define CONFIG_NO_WRITE 4
#define CONFIG_NOTHING_SET 5
#define CONFIG_INVALID_PATTERN 6
#define CONFIG_GENERIC_ERROR 7
struct git_config_source ;
typedef int (*config_fn_t)(const char *, const char *, void *);
extern int git_default_config(const char *, const char *, void *);
extern int git_config_from_file(config_fn_t fn, const char *, void *);
extern int git_config_from_buf(config_fn_t fn, const char *name,
const char *buf, size_t len, void *data);
extern void git_config_push_parameter(const char *text);
extern int git_config_from_parameters(config_fn_t fn, void *data);
extern int git_config(config_fn_t fn, void *);
extern int git_config_with_options(config_fn_t fn, void *,
struct git_config_source *config_source,
int respect_includes);
extern int git_config_early(config_fn_t fn, void *, const char *repo_config);
extern int git_parse_ulong(const char *, unsigned long *);
extern int git_config_int(const char *, const char *);
extern int64_t git_config_int64(const char *, const char *);
extern unsigned long git_config_ulong(const char *, const char *);
extern int git_config_bool_or_int(const char *, const char *, int *);
extern int git_config_bool(const char *, const char *);
extern int git_config_maybe_bool(const char *, const char *);
extern int git_config_string(const char **, const char *, const char *);
extern int git_config_pathname(const char **, const char *, const char *);
extern int git_config_set_in_file(const char *, const char *, const char *);
extern int git_config_set(const char *, const char *);
extern int git_config_parse_key(const char *, char **, int *);
extern int git_config_set_multivar(const char *, const char *, const char *, int);
extern int git_config_set_multivar_in_file(const char *, const char *, const char *, const char *, int);
extern int git_config_rename_section(const char *, const char *);
extern int git_config_rename_section_in_file(const char *, const char *, const char *);
extern const char *git_etc_gitconfig(void);
extern int check_repository_format_version(const char *var, const char *value, void *cb);
extern int git_env_bool(const char *, int);
extern int git_config_system(void);
extern int config_error_nonbool(const char *);
#if defined(__GNUC__) && ! defined(__clang__)
#define config_error_nonbool(s) (config_error_nonbool(s), -1)
extern const char *get_log_output_encoding(void);
extern const char *get_commit_output_encoding(void);
extern int git_config_parse_parameter(const char *, config_fn_t fn, void *data);
struct config_include_data ;
#define CONFIG_INCLUDE_INIT
extern int git_config_include(const char *name, const char *value, void *data);
extern int parse_config_key(const char *var,
const char *section,
const char **subsection, int *subsection_len,
const char **key);
extern int committer_ident_sufficiently_given(void);
extern int author_ident_sufficiently_given(void);
extern const char *git_commit_encoding;
extern const char *git_log_output_encoding;
extern const char *git_mailmap_file;
extern const char *git_mailmap_blob;
extern void maybe_flush_or_die(FILE *, const char *);
extern int copy_fd(int ifd, int ofd);
extern int copy_file(const char *dst, const char *src, int mode);
extern int copy_file_with_time(const char *dst, const char *src, int mode);
extern void write_or_die(int fd, const void *buf, size_t count);
extern int write_or_whine(int fd, const void *buf, size_t count, const char *msg);
extern int write_or_whine_pipe(int fd, const void *buf, size_t count, const char *msg);
extern void fsync_or_die(int fd, const char *);
extern ssize_t read_in_full(int fd, void *buf, size_t count);
extern ssize_t write_in_full(int fd, const void *buf, size_t count);
extern ssize_t pread_in_full(int fd, void *buf, size_t count, off_t offset);
static inline ssize_t write_str_in_full(int fd, const char *str)
extern void setup_pager(void);
extern const char *pager_program;
extern int pager_in_use(void);
extern int pager_use_color;
extern int term_columns(void);
extern int decimal_width(int);
extern int check_pager_config(const char *cmd);
extern const char *editor_program;
extern const char *askpass_program;
extern const char *excludes_file;
int decode_85(char *dst, const char *line, int linelen);
void encode_85(char *buf, const unsigned char *data, int bytes);
extern void *alloc_blob_node(void);
extern void *alloc_tree_node(void);
extern void *alloc_commit_node(void);
extern void *alloc_tag_node(void);
extern void *alloc_object_node(void);
extern void alloc_report(void);
extern unsigned int alloc_commit_index(void);
__attribute__((format (printf, 1, 2)))
extern void trace_printf(const char *format, ...);
__attribute__((format (printf, 2, 3)))
extern void trace_argv_printf(const char **argv, const char *format, ...);
extern void trace_repo_setup(const char *prefix);
extern int trace_want(const char *key);
__attribute__((format (printf, 2, 3)))
extern void trace_printf_key(const char *key, const char *fmt, ...);
extern void trace_strbuf(const char *key, const struct strbuf *buf);
void packet_trace_identity(const char *prog);
int add_files_to_cache(const char *prefix, const struct pathspec *pathspec, int flags);
extern int diff_auto_refresh_index;
void shift_tree(const unsigned char *, const unsigned char *, unsigned char *, int);
void shift_tree_by(const unsigned char *, const unsigned char *, unsigned char *, const char *);
#define WS_BLANK_AT_EOL         0100
#define WS_SPACE_BEFORE_TAB     0200
#define WS_INDENT_WITH_NON_TAB  0400
#define WS_CR_AT_EOL           01000
#define WS_BLANK_AT_EOF        02000
#define WS_TAB_IN_INDENT       04000
#define WS_TRAILING_SPACE      (WS_BLANK_AT_EOL|WS_BLANK_AT_EOF)
#define WS_DEFAULT_RULE (WS_TRAILING_SPACE|WS_SPACE_BEFORE_TAB|8)
#define WS_TAB_WIDTH_MASK        077
extern unsigned whitespace_rule_cfg;
extern unsigned whitespace_rule(const char *);
extern unsigned parse_whitespace_rule(const char *);
extern unsigned ws_check(const char *line, int len, unsigned ws_rule);
extern void ws_check_emit(const char *line, int len, unsigned ws_rule, FILE *stream, const char *set, const char *reset, const char *ws);
extern char *whitespace_error_string(unsigned ws);
extern void ws_fix_copy(struct strbuf *, const char *, int, unsigned, int *);
extern int ws_blank_line(const char *line, int len, unsigned ws_rule);
#define ws_tab_width(rule)     ((rule) & WS_TAB_WIDTH_MASK)
int report_path_error(const char *ps_matched, const struct pathspec *pathspec, const char *prefix);
void overlay_tree_on_cache(const char *tree_name, const char *prefix);
char *alias_lookup(const char *alias);
int split_cmdline(char *cmdline, const char ***argv);
const char *split_cmdline_strerror(int cmdline_errno);
struct startup_info ;
extern struct startup_info *startup_info;
struct commit_list;
int try_merge_command(const char *strategy, size_t xopts_nr,
const char **xopts, struct commit_list *common,
const char *head_arg, struct commit_list *remotes);
int checkout_fast_forward(const unsigned char *from,
const unsigned char *to,
int overwrite_ignore);
int sane_execvp(const char *file, char *const argv[]);
struct stat_validity ;
void stat_validity_clear(struct stat_validity *sv);
int stat_validity_check(struct stat_validity *sv, const char *path);
void stat_validity_update(struct stat_validity *sv, int fd);
int versioncmp(const char *s1, const char *s2);
