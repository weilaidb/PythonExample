#define DIR_H
struct dir_entry ;
#define EXC_FLAG_NODIR 1
#define EXC_FLAG_ENDSWITH 4
#define EXC_FLAG_MUSTBEDIR 8
#define EXC_FLAG_NEGATIVE 16
struct exclude_list ;
struct exclude_stack ;
struct exclude_list_group ;
struct dir_struct ;
#define MATCHED_RECURSIVELY 1
#define MATCHED_FNMATCH 2
#define MATCHED_EXACTLY 3
extern int simple_length(const char *match);
extern int no_wildcard(const char *string);
extern char *common_prefix(const struct pathspec *pathspec);
extern int match_pathspec(const struct pathspec *pathspec,
const char *name, int namelen,
int prefix, char *seen, int is_dir);
extern int within_depth(const char *name, int namelen, int depth, int max_depth);
extern int fill_directory(struct dir_struct *dir, const struct pathspec *pathspec);
extern int read_directory(struct dir_struct *, const char *path, int len, const struct pathspec *pathspec);
extern int is_excluded_from_list(const char *pathname, int pathlen, const char *basename,
int *dtype, struct exclude_list *el);
struct dir_entry *dir_add_ignored(struct dir_struct *dir, const char *pathname, int len);
extern int match_basename(const char *, int,
const char *, int, int, int);
extern int match_pathname(const char *, int,
const char *, int,
const char *, int, int, int);
extern struct exclude *last_exclude_matching(struct dir_struct *dir,
const char *name, int *dtype);
extern int is_excluded(struct dir_struct *dir, const char *name, int *dtype);
extern struct exclude_list *add_exclude_list(struct dir_struct *dir,
int group_type, const char *src);
extern int add_excludes_from_file_to_list(const char *fname, const char *base, int baselen,
struct exclude_list *el, int check_index);
extern void add_excludes_from_file(struct dir_struct *, const char *fname);
extern void parse_exclude_pattern(const char **string, int *patternlen, int *flags, int *nowildcardlen);
extern void add_exclude(const char *string, const char *base,
int baselen, struct exclude_list *el, int srcpos);
extern void clear_exclude_list(struct exclude_list *el);
extern void clear_directory(struct dir_struct *dir);
extern int file_exists(const char *);
extern int is_inside_dir(const char *dir);
extern int dir_inside_of(const char *subdir, const char *dir);
static inline int is_dot_or_dotdot(const char *name)
extern int is_empty_dir(const char *dir);
extern void setup_standard_excludes(struct dir_struct *dir);
#define REMOVE_DIR_EMPTY_ONLY 01
#define REMOVE_DIR_KEEP_NESTED_GIT 02
#define REMOVE_DIR_KEEP_TOPLEVEL 04
extern int remove_dir_recursively(struct strbuf *path, int flag);
extern int remove_path(const char *path);
extern int strcmp_icase(const char *a, const char *b);
extern int strncmp_icase(const char *a, const char *b, size_t count);
extern int fnmatch_icase(const char *pattern, const char *string, int flags);
struct pathspec_item;
extern int git_fnmatch(const struct pathspec_item *item,
const char *pattern, const char *string,
int prefix);
static inline int ce_path_match(const struct cache_entry *ce,
const struct pathspec *pathspec,
char *seen)
static inline int dir_path_match(const struct dir_entry *ent,
const struct pathspec *pathspec,
int prefix, char *seen)
