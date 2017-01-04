static const char * const prune_packed_usage[] = ;
static struct progress *progress;
static void prune_dir(int i, DIR *dir, struct strbuf *pathname, int opts)
void prune_packed_objects(int opts)
int cmd_prune_packed(int argc, const char **argv, const char *prefix)
