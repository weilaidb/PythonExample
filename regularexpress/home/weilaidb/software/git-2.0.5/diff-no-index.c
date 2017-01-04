static int read_directory_contents(const char *path, struct string_list *list)
static const char file_from_standard_input[] = "-";
static int get_mode(const char *path, int *mode)
static int populate_from_stdin(struct diff_filespec *s)
static struct diff_filespec *noindex_filespec(const char *name, int mode)
static int queue_diff(struct diff_options *o,
const char *name1, const char *name2)
void diff_no_index(struct rev_info *revs,
int argc, const char **argv,
const char *prefix)
