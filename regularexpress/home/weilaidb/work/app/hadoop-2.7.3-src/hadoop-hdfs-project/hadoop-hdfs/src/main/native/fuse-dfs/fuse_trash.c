#define TRASH_RENAME_TRIES  100
#define ALREADY_IN_TRASH_ERR 9000
static int get_parent_dir(const char *abs_path, char **pcomp,
char **parent_dir)
static int get_trash_base(char **trash_base)
int move_to_trash(const char *abs_path, hdfsFS userFS)
int hdfsDeleteWithTrash(hdfsFS userFS, const char *path, int useTrash)
