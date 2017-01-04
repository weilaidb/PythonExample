#define COLOR_H
struct strbuf;
#define COLOR_MAXLEN 40
#define GIT_COLOR_NORMAL	""
#define GIT_COLOR_RESET		"\033[m"
#define GIT_COLOR_BOLD		"\033[1m"
#define GIT_COLOR_RED		"\033[31m"
#define GIT_COLOR_GREEN		"\033[32m"
#define GIT_COLOR_YELLOW	"\033[33m"
#define GIT_COLOR_BLUE		"\033[34m"
#define GIT_COLOR_MAGENTA	"\033[35m"
#define GIT_COLOR_CYAN		"\033[36m"
#define GIT_COLOR_BOLD_RED	"\033[1;31m"
#define GIT_COLOR_BOLD_GREEN	"\033[1;32m"
#define GIT_COLOR_BOLD_YELLOW	"\033[1;33m"
#define GIT_COLOR_BOLD_BLUE	"\033[1;34m"
#define GIT_COLOR_BOLD_MAGENTA	"\033[1;35m"
#define GIT_COLOR_BOLD_CYAN	"\033[1;36m"
#define GIT_COLOR_BG_RED	"\033[41m"
#define GIT_COLOR_BG_GREEN	"\033[42m"
#define GIT_COLOR_BG_YELLOW	"\033[43m"
#define GIT_COLOR_BG_BLUE	"\033[44m"
#define GIT_COLOR_BG_MAGENTA	"\033[45m"
#define GIT_COLOR_BG_CYAN	"\033[46m"
#define GIT_COLOR_NIL "NIL"
#define GIT_COLOR_UNKNOWN -1
#define GIT_COLOR_NEVER  0
#define GIT_COLOR_ALWAYS 1
#define GIT_COLOR_AUTO   2
extern const char *column_colors_ansi[];
extern const int column_colors_ansi_max;
extern int color_stdout_is_tty;
int git_color_config(const char *var, const char *value, void *cb);
int git_color_default_config(const char *var, const char *value, void *cb);
int git_config_colorbool(const char *var, const char *value);
int want_color(int var);
void color_parse(const char *value, const char *var, char *dst);
void color_parse_mem(const char *value, int len, const char *var, char *dst);
__attribute__((format (printf, 3, 4)))
int color_fprintf(FILE *fp, const char *color, const char *fmt, ...);
__attribute__((format (printf, 3, 4)))
int color_fprintf_ln(FILE *fp, const char *color, const char *fmt, ...);
void color_print_strbuf(FILE *fp, const char *color, const struct strbuf *sb);
int color_is_nil(const char *color);
