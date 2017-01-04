static unsigned long garbage;
static off_t size_garbage;
static void real_report_garbage(const char *desc, const char *path)
static void count_objects(DIR *d, char *path, int len, int verbose,
unsigned long *loose,
off_t *loose_size,
unsigned long *packed_loose)
static char const * const count_objects_usage[] = ;
int cmd_count_objects(int argc, const char **argv, const char *prefix)
