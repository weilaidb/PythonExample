#define DEBUG(x) fprintf ## x ;
#define DEBUG(x)
int
parse_cmdline(int argc, char **argv, opt_option *options, size_t nopts,
void (*print_error) (const char *fmt, ...))
void
help_msg(const char *msg, const char *tail, opt_option *options, size_t nopts)
