int perf_use_color_default = -1;
static int parse_color(const char *name, int len)
static int parse_attr(const char *name, int len)
void color_parse(const char *value, const char *var, char *dst)
void color_parse_mem(const char *value, int value_len, const char *var,
char *dst)
int perf_config_colorbool(const char *var, const char *value, int stdout_is_tty)
int perf_color_default_config(const char *var, const char *value, void *cb)
static int __color_vsnprintf(char *bf, size_t size, const char *color,
const char *fmt, va_list args, const char *trail)
static int __color_vfprintf(FILE *fp, const char *color, const char *fmt,
va_list args, const char *trail)
int color_vsnprintf(char *bf, size_t size, const char *color,
const char *fmt, va_list args)
int color_vfprintf(FILE *fp, const char *color, const char *fmt, va_list args)
int color_snprintf(char *bf, size_t size, const char *color,
const char *fmt, ...)
int color_fprintf(FILE *fp, const char *color, const char *fmt, ...)
int color_fprintf_ln(FILE *fp, const char *color, const char *fmt, ...)
int color_fwrite_lines(FILE *fp, const char *color,
size_t count, const char *buf)
const char *get_percent_color(double percent)
int percent_color_fprintf(FILE *fp, const char *fmt, double percent)
int percent_color_snprintf(char *bf, size_t size, const char *fmt, double percent)
