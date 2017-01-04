static const char *parse_loc(const char *spec, nth_line_fn_t nth_line,
void *data, long lines, long begin, long *ret)
static int match_funcname(xdemitconf_t *xecfg, const char *bol, const char *eol)
static const char *find_funcname_matching_regexp(xdemitconf_t *xecfg, const char *start,
regex_t *regexp)
static const char *parse_range_funcname(const char *arg, nth_line_fn_t nth_line_cb,
void *cb_data, long lines, long anchor, long *begin, long *end,
const char *path)
int parse_range_arg(const char *arg, nth_line_fn_t nth_line_cb,
void *cb_data, long lines, long anchor,
long *begin, long *end, const char *path)
const char *skip_range_arg(const char *arg)
