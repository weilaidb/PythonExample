#define _LINUX_GETOPT_H
#define OPT_NOPARAM	1
#define OPT_INT		2
#define OPT_STRING	4
struct ncp_option ;
extern int ncp_getopt(const char *caller, char **options, const struct ncp_option *opts,
char **optopt, char **optarg, unsigned long *value);
