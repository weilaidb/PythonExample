static const char *pgm;
static int one_shot, quiet;
static int err;
static int merge_entry(int pos, const char *path)
static void merge_one_path(const char *path)
static void merge_all(void)
int cmd_merge_index(int argc, const char **argv, const char *prefix)
