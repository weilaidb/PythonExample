#define PATHSPEC_H
#define PATHSPEC_FROMTOP	(1<<0)
#define PATHSPEC_MAXDEPTH	(1<<1)
#define PATHSPEC_LITERAL	(1<<2)
#define PATHSPEC_GLOB		(1<<3)
#define PATHSPEC_ICASE		(1<<4)
#define PATHSPEC_EXCLUDE	(1<<5)
#define PATHSPEC_ALL_MAGIC	  \
(PATHSPEC_FROMTOP	| \
PATHSPEC_MAXDEPTH	| \
PATHSPEC_LITERAL	| \
PATHSPEC_GLOB		| \
PATHSPEC_ICASE		| \
PATHSPEC_EXCLUDE)
#define PATHSPEC_ONESTAR 1
struct pathspec ;
#define GUARD_PATHSPEC(ps, mask) \
do  while (0)
#define PATHSPEC_PREFER_CWD (1<<0)
#define PATHSPEC_PREFER_FULL (1<<1)
#define PATHSPEC_MAXDEPTH_VALID (1<<2)
#define PATHSPEC_STRIP_SUBMODULE_SLASH_CHEAP (1<<3)
#define PATHSPEC_SYMLINK_LEADING_PATH (1<<4)
#define PATHSPEC_STRIP_SUBMODULE_SLASH_EXPENSIVE (1<<5)
#define PATHSPEC_PREFIX_ORIGIN (1<<6)
#define PATHSPEC_KEEP_ORDER (1<<7)
#define PATHSPEC_LITERAL_PATH (1<<8)
extern void parse_pathspec(struct pathspec *pathspec,
unsigned magic_mask,
unsigned flags,
const char *prefix,
const char **args);
extern void copy_pathspec(struct pathspec *dst, const struct pathspec *src);
extern void free_pathspec(struct pathspec *);
static inline int ps_strncmp(const struct pathspec_item *item,
const char *s1, const char *s2, size_t n)
static inline int ps_strcmp(const struct pathspec_item *item,
const char *s1, const char *s2)
extern char *find_pathspecs_matching_against_index(const struct pathspec *pathspec);
extern void add_pathspec_matches_against_index(const struct pathspec *pathspec, char *seen);
extern const char *check_path_for_gitlink(const char *path);
extern void die_if_path_beyond_symlink(const char *path, const char *prefix);
