static const char * const prune_usage[] = ;
static int show_only;
static int verbose;
static unsigned long expire;
static int show_progress = -1;
static int prune_tmp_file(const char *fullpath)
static int prune_object(const char *fullpath, const unsigned char *sha1)
static int prune_dir(int i, struct strbuf *path)
static void prune_object_dir(const char *path)
static void remove_temporary_files(const char *path)
int cmd_prune(int argc, const char **argv, const char *prefix)
