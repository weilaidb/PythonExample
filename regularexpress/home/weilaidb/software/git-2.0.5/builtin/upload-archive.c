static const char upload_archive_usage[] =
"git upload-archive <repo>";
static const char deadchild[] =
"git upload-archive: archiver died with error";
#define MAX_ARGS (64)
int cmd_upload_archive_writer(int argc, const char **argv, const char *prefix)
__attribute__((format (printf, 1, 2)))
static void error_clnt(const char *fmt, ...)
static ssize_t process_input(int child_fd, int band)
int cmd_upload_archive(int argc, const char **argv, const char *prefix)
