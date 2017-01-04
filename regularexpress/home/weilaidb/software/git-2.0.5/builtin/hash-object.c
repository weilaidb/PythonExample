static void hash_fd(int fd, const char *type, int write_object, const char *path)
static void hash_object(const char *path, const char *type, int write_object,
const char *vpath)
static int no_filters;
static void hash_stdin_paths(const char *type, int write_objects)
static const char * const hash_object_usage[] = ;
static const char *type;
static int write_object;
static int hashstdin;
static int stdin_paths;
static const char *vpath;
static const struct option hash_object_options[] = ;
int cmd_hash_object(int argc, const char **argv, const char *prefix)
