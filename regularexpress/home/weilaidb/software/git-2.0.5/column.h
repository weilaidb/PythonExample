#define COLUMN_H
#define COL_LAYOUT_MASK   0x000F
#define COL_ENABLE_MASK   0x0030
#define COL_PARSEOPT      0x0040
#define COL_DENSE         0x0080
#define COL_DISABLED      0x0000
#define COL_ENABLED       0x0010
#define COL_AUTO          0x0020
#define COL_LAYOUT(c) ((c) & COL_LAYOUT_MASK)
#define COL_COLUMN             0
#define COL_ROW                1
#define COL_PLAIN             15
#define explicitly_enable_column(c) \
(((c) & COL_PARSEOPT) && column_active(c))
struct column_options ;
struct option;
extern int parseopt_column_callback(const struct option *, const char *, int);
extern int git_column_config(const char *var, const char *value,
const char *command, unsigned int *colopts);
extern int finalize_colopts(unsigned int *colopts, int stdout_is_tty);
static inline int column_active(unsigned int colopts)
extern void print_columns(const struct string_list *list, unsigned int colopts,
const struct column_options *opts);
extern int run_column_filter(int colopts, const struct column_options *);
extern int stop_column_filter(void);
