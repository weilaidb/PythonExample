static struct whitespace_rule  whitespace_rule_names[] = ;
unsigned parse_whitespace_rule(const char *string)
static void setup_whitespace_attr_check(struct git_attr_check *check)
unsigned whitespace_rule(const char *pathname)
char *whitespace_error_string(unsigned ws)
static unsigned ws_check_emit_1(const char *line, int len, unsigned ws_rule,
FILE *stream, const char *set,
const char *reset, const char *ws)
void ws_check_emit(const char *line, int len, unsigned ws_rule,
FILE *stream, const char *set,
const char *reset, const char *ws)
unsigned ws_check(const char *line, int len, unsigned ws_rule)
int ws_blank_line(const char *line, int len, unsigned ws_rule)
void ws_fix_copy(struct strbuf *dst, const char *src, int len, unsigned ws_rule, int *error_count)
