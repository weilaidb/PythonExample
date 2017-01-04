#define TASM_OPTIONS_H
typedef struct opt_option_s
opt_option;
int not_an_option_handler(char *param);
int parse_cmdline(int argc, char **argv, opt_option *options, size_t nopts,
void (*print_error) (const char *fmt, ...));
void help_msg(const char *msg, const char *tail, opt_option *options,
size_t nopts);
