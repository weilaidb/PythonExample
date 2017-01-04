static const char *alias_key;
static char *alias_val;
static int alias_lookup_cb(const char *k, const char *v, void *cb)
char *alias_lookup(const char *alias)
#define SPLIT_CMDLINE_BAD_ENDING 1
#define SPLIT_CMDLINE_UNCLOSED_QUOTE 2
static const char *split_cmdline_errors[] = ;
int split_cmdline(char *cmdline, const char ***argv)
const char *split_cmdline_strerror(int split_cmdline_errno)
