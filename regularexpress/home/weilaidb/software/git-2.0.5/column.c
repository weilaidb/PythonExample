#define XY2LINEAR(d, x, y) (COL_LAYOUT((d)->colopts) == COL_COLUMN ? \
(x) * (d)->rows + (y) : \
(y) * (d)->cols + (x))
struct column_data ;
static int item_length(unsigned int colopts, const char *s)
static void layout(struct column_data *data, int *width)
static void compute_column_width(struct column_data *data)
static void shrink_columns(struct column_data *data)
static void display_plain(const struct string_list *list,
const char *indent, const char *nl)
static int display_cell(struct column_data *data, int initial_width,
const char *empty_cell, int x, int y)
static void display_table(const struct string_list *list,
unsigned int colopts,
const struct column_options *opts)
void print_columns(const struct string_list *list, unsigned int colopts,
const struct column_options *opts)
int finalize_colopts(unsigned int *colopts, int stdout_is_tty)
struct colopt ;
#define LAYOUT_SET 1
#define ENABLE_SET 2
static int parse_option(const char *arg, int len, unsigned int *colopts,
int *group_set)
static int parse_config(unsigned int *colopts, const char *value)
static int column_config(const char *var, const char *value,
const char *key, unsigned int *colopts)
int git_column_config(const char *var, const char *value,
const char *command, unsigned int *colopts)
int parseopt_column_callback(const struct option *opt,
const char *arg, int unset)
static int fd_out = -1;
static struct child_process column_process;
int run_column_filter(int colopts, const struct column_options *opts)
int stop_column_filter(void)
