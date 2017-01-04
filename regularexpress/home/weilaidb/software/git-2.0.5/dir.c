struct path_simplify ;
enum path_treatment ;
static enum path_treatment read_directory_recursive(struct dir_struct *dir,
const char *path, int len,
int check_only, const struct path_simplify *simplify);
static int get_dtype(struct dirent *de, const char *path, int len);
int strcmp_icase(const char *a, const char *b)
int strncmp_icase(const char *a, const char *b, size_t count)
int fnmatch_icase(const char *pattern, const char *string, int flags)
int git_fnmatch(const struct pathspec_item *item,
const char *pattern, const char *string,
int prefix)
static int fnmatch_icase_mem(const char *pattern, int patternlen,
const char *string, int stringlen,
int flags)
static size_t common_prefix_len(const struct pathspec *pathspec)
char *common_prefix(const struct pathspec *pathspec)
int fill_directory(struct dir_struct *dir, const struct pathspec *pathspec)
int within_depth(const char *name, int namelen,
int depth, int max_depth)
#define DO_MATCH_EXCLUDE   1
#define DO_MATCH_DIRECTORY 2
static int match_pathspec_item(const struct pathspec_item *item, int prefix,
const char *name, int namelen, unsigned flags)
static int do_match_pathspec(const struct pathspec *ps,
const char *name, int namelen,
int prefix, char *seen,
unsigned flags)
int match_pathspec(const struct pathspec *ps,
const char *name, int namelen,
int prefix, char *seen, int is_dir)
int simple_length(const char *match)
int no_wildcard(const char *string)
void parse_exclude_pattern(const char **pattern,
int *patternlen,
int *flags,
int *nowildcardlen)
void add_exclude(const char *string, const char *base,
int baselen, struct exclude_list *el, int srcpos)
static void *read_skip_worktree_file_from_index(const char *path, size_t *size)
void clear_exclude_list(struct exclude_list *el)
static void trim_trailing_spaces(char *buf)
int add_excludes_from_file_to_list(const char *fname,
const char *base,
int baselen,
struct exclude_list *el,
int check_index)
struct exclude_list *add_exclude_list(struct dir_struct *dir,
int group_type, const char *src)
void add_excludes_from_file(struct dir_struct *dir, const char *fname)
int match_basename(const char *basename, int basenamelen,
const char *pattern, int prefix, int patternlen,
int flags)
int match_pathname(const char *pathname, int pathlen,
const char *base, int baselen,
const char *pattern, int prefix, int patternlen,
int flags)
static struct exclude *last_exclude_matching_from_list(const char *pathname,
int pathlen,
const char *basename,
int *dtype,
struct exclude_list *el)
int is_excluded_from_list(const char *pathname,
int pathlen, const char *basename, int *dtype,
struct exclude_list *el)
static struct exclude *last_exclude_matching_from_lists(struct dir_struct *dir,
const char *pathname, int pathlen, const char *basename,
int *dtype_p)
static void prep_exclude(struct dir_struct *dir, const char *base, int baselen)
struct exclude *last_exclude_matching(struct dir_struct *dir,
const char *pathname,
int *dtype_p)
int is_excluded(struct dir_struct *dir, const char *pathname, int *dtype_p)
static struct dir_entry *dir_entry_new(const char *pathname, int len)
static struct dir_entry *dir_add_name(struct dir_struct *dir, const char *pathname, int len)
struct dir_entry *dir_add_ignored(struct dir_struct *dir, const char *pathname, int len)
enum exist_status ;
static enum exist_status directory_exists_in_index_icase(const char *dirname, int len)
static enum exist_status directory_exists_in_index(const char *dirname, int len)
static enum path_treatment treat_directory(struct dir_struct *dir,
const char *dirname, int len, int exclude,
const struct path_simplify *simplify)
static int simplify_away(const char *path, int pathlen, const struct path_simplify *simplify)
static int exclude_matches_pathspec(const char *path, int len,
const struct path_simplify *simplify)
static int get_index_dtype(const char *path, int len)
static int get_dtype(struct dirent *de, const char *path, int len)
static enum path_treatment treat_one_path(struct dir_struct *dir,
struct strbuf *path,
const struct path_simplify *simplify,
int dtype, struct dirent *de)
static enum path_treatment treat_path(struct dir_struct *dir,
struct dirent *de,
struct strbuf *path,
int baselen,
const struct path_simplify *simplify)
static enum path_treatment read_directory_recursive(struct dir_struct *dir,
const char *base, int baselen,
int check_only,
const struct path_simplify *simplify)
static int cmp_name(const void *p1, const void *p2)
static struct path_simplify *create_simplify(const char **pathspec)
static void free_simplify(struct path_simplify *simplify)
static int treat_leading_path(struct dir_struct *dir,
const char *path, int len,
const struct path_simplify *simplify)
int read_directory(struct dir_struct *dir, const char *path, int len, const struct pathspec *pathspec)
int file_exists(const char *f)
int dir_inside_of(const char *subdir, const char *dir)
int is_inside_dir(const char *dir)
int is_empty_dir(const char *path)
static int remove_dir_recurse(struct strbuf *path, int flag, int *kept_up)
int remove_dir_recursively(struct strbuf *path, int flag)
void setup_standard_excludes(struct dir_struct *dir)
int remove_path(const char *name)
void clear_directory(struct dir_struct *dir)
