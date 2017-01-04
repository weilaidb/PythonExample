static void create_directories(const char *path, int path_len,
const struct checkout *state)
static void remove_subtree(struct strbuf *path)
static int create_file(const char *path, unsigned int mode)
static void *read_blob_entry(const struct cache_entry *ce, unsigned long *size)
static int open_output_fd(char *path, const struct cache_entry *ce, int to_tempfile)
static int fstat_output(int fd, const struct checkout *state, struct stat *st)
static int streaming_write_entry(const struct cache_entry *ce, char *path,
struct stream_filter *filter,
const struct checkout *state, int to_tempfile,
int *fstat_done, struct stat *statbuf)
static int write_entry(struct cache_entry *ce,
char *path, const struct checkout *state, int to_tempfile)
static int check_path(const char *path, int len, struct stat *st, int skiplen)
int checkout_entry(struct cache_entry *ce,
const struct checkout *state, char *topath)
