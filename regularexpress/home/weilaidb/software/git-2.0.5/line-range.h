#define LINE_RANGE_H
typedef const char *(*nth_line_fn_t)(void *data, long lno);
extern int parse_range_arg(const char *arg,
nth_line_fn_t nth_line_cb,
void *cb_data, long lines, long anchor,
long *begin, long *end,
const char *path);
extern const char *skip_range_arg(const char *arg);
