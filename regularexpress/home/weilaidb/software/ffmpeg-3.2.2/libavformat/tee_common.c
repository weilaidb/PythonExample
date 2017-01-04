static const char *const slave_opt_open  = "[";
static const char *const slave_opt_close = "]";
static const char *const slave_opt_delim = ":]";
int ff_tee_parse_slave_options(void *log, char *slave,
AVDictionary **options, char **filename)
