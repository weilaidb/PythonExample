#define NO_THE_INDEX_COMPATIBILITY_MACROS
const char git_attr__true[] = "(builtin)true";
const char git_attr__false[] = "\0(builtin)false";
static const char git_attr__unknown[] = "(builtin)unknown";
#define ATTR__TRUE git_attr__true
#define ATTR__FALSE git_attr__false
#define ATTR__UNSET NULL
#define ATTR__UNKNOWN git_attr__unknown
#define HASHSIZE 257
#define DEBUG_ATTR 0
struct git_attr ;
static int attr_nr;
static struct git_attr_check *check_all_attr;
static struct git_attr *(git_attr_hash[HASHSIZE]);
char *git_attr_name(struct git_attr *attr)
static unsigned hash_name(const char *name, int namelen)
static int invalid_attr_name(const char *name, int namelen)
static struct git_attr *git_attr_internal(const char *name, int len)
struct git_attr *git_attr(const char *name)
struct attr_state ;
struct pattern ;
struct match_attr ;
static const char blank[] = " \t\r\n";
static const char *parse_attr(const char *src, int lineno, const char *cp,
struct attr_state *e)
static struct match_attr *parse_attr_line(const char *line, const char *src,
int lineno, int macro_ok)
static struct attr_stack  *attr_stack;
static void free_attr_elem(struct attr_stack *e)
static const char *builtin_attr[] = ;
static void handle_attr_line(struct attr_stack *res,
const char *line,
const char *src,
int lineno,
int macro_ok)
static struct attr_stack *read_attr_from_array(const char **list)
static enum git_attr_direction direction;
static struct index_state *use_index;
static struct attr_stack *read_attr_from_file(const char *path, int macro_ok)
static struct attr_stack *read_attr_from_index(const char *path, int macro_ok)
static struct attr_stack *read_attr(const char *path, int macro_ok)
#if DEBUG_ATTR
static void debug_info(const char *what, struct attr_stack *elem)
static void debug_set(const char *what, const char *match, struct git_attr *attr, const void *v)
#define debug_push(a) debug_info("push", (a))
#define debug_pop(a) debug_info("pop", (a))
#define debug_push(a) do  while (0)
#define debug_pop(a) do  while (0)
#define debug_set(a,b,c,d) do  while (0)
static void drop_attr_stack(void)
static const char *git_etc_gitattributes(void)
static int git_attr_system(void)
static void bootstrap_attr_stack(void)
static void prepare_attr_stack(const char *path, int dirlen)
static int path_matches(const char *pathname, int pathlen,
int basename_offset,
const struct pattern *pat,
const char *base, int baselen)
static int macroexpand_one(int attr_nr, int rem);
static int fill_one(const char *what, struct match_attr *a, int rem)
static int fill(const char *path, int pathlen, int basename_offset,
struct attr_stack *stk, int rem)
static int macroexpand_one(int attr_nr, int rem)
static void collect_all_attrs(const char *path)
int git_check_attr(const char *path, int num, struct git_attr_check *check)
int git_all_attrs(const char *path, int *num, struct git_attr_check **check)
void git_attr_set_direction(enum git_attr_direction new, struct index_state *istate)
