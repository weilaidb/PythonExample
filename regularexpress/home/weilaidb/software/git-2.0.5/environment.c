int trust_executable_bit = 1;
int trust_ctime = 1;
int check_stat = 1;
int has_symlinks = 1;
int minimum_abbrev = 4, default_abbrev = 7;
int ignore_case;
int assume_unchanged;
int prefer_symlink_refs;
int is_bare_repository_cfg = -1;
int log_all_ref_updates = -1;
int warn_ambiguous_refs = 1;
int warn_on_object_refname_ambiguity = 1;
int repository_format_version;
const char *git_commit_encoding;
const char *git_log_output_encoding;
int shared_repository = PERM_UMASK;
const char *apply_default_whitespace;
const char *apply_default_ignorewhitespace;
const char *git_attributes_file;
int zlib_compression_level = Z_BEST_SPEED;
int core_compression_level;
int core_compression_seen;
int fsync_object_files;
size_t packed_git_window_size = DEFAULT_PACKED_GIT_WINDOW_SIZE;
size_t packed_git_limit = DEFAULT_PACKED_GIT_LIMIT;
size_t delta_base_cache_limit = 16 * 1024 * 1024;
unsigned long big_file_threshold = 512 * 1024 * 1024;
const char *pager_program;
int pager_use_color = 1;
const char *editor_program;
const char *askpass_program;
const char *excludes_file;
enum auto_crlf auto_crlf = AUTO_CRLF_FALSE;
int check_replace_refs = 1;
enum eol core_eol = EOL_UNSET;
enum safe_crlf safe_crlf = SAFE_CRLF_WARN;
unsigned whitespace_rule_cfg = WS_DEFAULT_RULE;
enum branch_track git_branch_track = BRANCH_TRACK_REMOTE;
enum rebase_setup_type autorebase = AUTOREBASE_NEVER;
enum push_default_type push_default = PUSH_DEFAULT_UNSPECIFIED;
#define OBJECT_CREATION_MODE OBJECT_CREATION_USES_HARDLINKS
enum object_creation_mode object_creation_mode = OBJECT_CREATION_MODE;
char *notes_ref_name;
int grafts_replace_parents = 1;
int core_apply_sparse_checkout;
int merge_log_config = -1;
int precomposed_unicode = -1;
struct startup_info *startup_info;
unsigned long pack_size_limit_cfg;
#define PROTECT_HFS_DEFAULT 0
int protect_hfs = PROTECT_HFS_DEFAULT;
#define PROTECT_NTFS_DEFAULT 0
int protect_ntfs = PROTECT_NTFS_DEFAULT;
char comment_line_char = '#';
int core_preload_index = 0;
char *git_work_tree_cfg;
static char *work_tree;
static const char *namespace;
static size_t namespace_len;
static const char *git_dir;
static char *git_object_dir, *git_index_file, *git_graft_file;
const char * const local_repo_env[] = ;
static char *expand_namespace(const char *raw_namespace)
static void setup_git_env(void)
int is_bare_repository(void)
const char *get_git_dir(void)
const char *get_git_namespace(void)
const char *strip_namespace(const char *namespaced_ref)
static int git_work_tree_initialized;
void set_git_work_tree(const char *new_work_tree)
const char *get_git_work_tree(void)
char *get_object_directory(void)
int odb_mkstemp(char *template, size_t limit, const char *pattern)
int odb_pack_keep(char *name, size_t namesz, const unsigned char *sha1)
char *get_index_file(void)
char *get_graft_file(void)
int set_git_dir(const char *path)
const char *get_log_output_encoding(void)
const char *get_commit_output_encoding(void)
