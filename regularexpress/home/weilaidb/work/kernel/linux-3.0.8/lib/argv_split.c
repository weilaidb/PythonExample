static const char *skip_arg(const char *cp)
static int count_argc(const char *str)
void argv_free(char **argv)
EXPORT_SYMBOL(argv_free);
char **argv_split(gfp_t gfp, const char *str, int *argcp)
EXPORT_SYMBOL(argv_split);
