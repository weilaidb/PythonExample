static const char *alias_key;
static char *alias_val;
static int alias_lookup_cb(const char *k, const char *v, void *cb __used)
char *alias_lookup(const char *alias)
int split_cmdline(char *cmdline, const char ***argv)
