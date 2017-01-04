regex_t		parent_regex;
const char	default_parent_pattern[] = "^sys_|^do_page_fault";
const char	*parent_pattern = default_parent_pattern;
const char	default_sort_order[] = "comm,dso,symbol";
const char	*sort_order = default_sort_order;
int		sort__need_collapse = 0;
int		sort__has_parent = 0;
enum sort_type	sort__first_dimension;
char * field_sep;
LIST_HEAD(hist_entry__sort_list);
static int hist_entry__thread_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width);
static int hist_entry__comm_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width);
static int hist_entry__dso_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width);
static int hist_entry__sym_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width);
static int hist_entry__parent_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width);
static int hist_entry__cpu_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width);
struct sort_entry sort_thread = ;
struct sort_entry sort_comm = ;
struct sort_entry sort_dso = ;
struct sort_entry sort_sym = ;
struct sort_entry sort_parent = ;
struct sort_entry sort_cpu = ;
struct sort_dimension ;
static struct sort_dimension sort_dimensions[] = ;
int64_t cmp_null(void *l, void *r)
int64_t
sort__thread_cmp(struct hist_entry *left, struct hist_entry *right)
static int repsep_snprintf(char *bf, size_t size, const char *fmt, ...)
static int hist_entry__thread_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width)
static int hist_entry__comm_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width)
int64_t
sort__dso_cmp(struct hist_entry *left, struct hist_entry *right)
static int hist_entry__dso_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width)
int64_t
sort__sym_cmp(struct hist_entry *left, struct hist_entry *right)
static int hist_entry__sym_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width __used)
int64_t
sort__comm_cmp(struct hist_entry *left, struct hist_entry *right)
int64_t
sort__comm_collapse(struct hist_entry *left, struct hist_entry *right)
int64_t
sort__parent_cmp(struct hist_entry *left, struct hist_entry *right)
static int hist_entry__parent_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width)
int64_t
sort__cpu_cmp(struct hist_entry *left, struct hist_entry *right)
static int hist_entry__cpu_snprintf(struct hist_entry *self, char *bf,
size_t size, unsigned int width)
int sort_dimension__add(const char *tok)
void setup_sorting(const char * const usagestr[], const struct option *opts)
void sort_entry__setup_elide(struct sort_entry *self, struct strlist *list,
const char *list_name, FILE *fp)
