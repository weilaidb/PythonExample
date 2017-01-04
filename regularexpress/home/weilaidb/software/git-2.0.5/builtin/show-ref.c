static const char * const show_ref_usage[] = ;
static int deref_tags, show_head, tags_only, heads_only, found_match, verify,
quiet, hash_only, abbrev, exclude_arg;
static const char **pattern;
static const char *exclude_existing_arg;
static void show_one(const char *refname, const unsigned char *sha1)
static int show_ref(const char *refname, const unsigned char *sha1, int flag, void *cbdata)
static int add_existing(const char *refname, const unsigned char *sha1, int flag, void *cbdata)
static int exclude_existing(const char *match)
static int hash_callback(const struct option *opt, const char *arg, int unset)
static int exclude_existing_callback(const struct option *opt, const char *arg,
int unset)
static int help_callback(const struct option *opt, const char *arg, int unset)
static const struct option show_ref_options[] = ;
int cmd_show_ref(int argc, const char **argv, const char *prefix)
