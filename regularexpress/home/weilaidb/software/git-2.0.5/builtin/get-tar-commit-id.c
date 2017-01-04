static const char builtin_get_tar_commit_id_usage[] =
"git get-tar-commit-id < <tarfile>";
#define RECORDSIZE	(512)
#define HEADERSIZE (2 * RECORDSIZE)
int cmd_get_tar_commit_id(int argc, const char **argv, const char *prefix)
