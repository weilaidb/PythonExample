static int git_use_color_default = GIT_COLOR_AUTO;
int color_stdout_is_tty = -1;
const char *column_colors_ansi[] = ;
const int column_colors_ansi_max = ARRAY_SIZE(column_colors_ansi) - 1;
static int parse_color(const char *name, int len)
static int parse_attr(const char *name, int len)
void color_parse(const char *value, const char *var, char *dst)
void color_parse_mem(const char *value, int value_len, const char *var,
char *dst)
int git_config_colorbool(const char *var, const char *value)
static int check_auto_color(void)
int want_color(int var)
int git_color_config(const char *var, const char *value, void *cb)
int git_color_default_config(const char *var, const char *value, void *cb)
void color_print_strbuf(FILE *fp, const char *color, const struct strbuf *sb)
static int color_vfprintf(FILE *fp, const char *color, const char *fmt,
va_list args, const char *trail)
int color_fprintf(FILE *fp, const char *color, const char *fmt, ...)
int color_fprintf_ln(FILE *fp, const char *color, const char *fmt, ...)
int color_is_nil(const char *c)
