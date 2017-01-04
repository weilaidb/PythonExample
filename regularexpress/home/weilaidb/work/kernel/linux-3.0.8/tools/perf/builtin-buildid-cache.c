static char const *add_name_list_str, *remove_name_list_str;
static const char * const buildid_cache_usage[] = ;
static const struct option buildid_cache_options[] = ;
static int build_id_cache__add_file(const char *filename, const char *debugdir)
static int build_id_cache__remove_file(const char *filename __used,
const char *debugdir __used)
static int __cmd_buildid_cache(void)
int cmd_buildid_cache(int argc, const char **argv, const char *prefix __used)
