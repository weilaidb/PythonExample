static const char fetch_pack_usage[] =
"git fetch-pack [--all] [--stdin] [--quiet|-q] [--keep|-k] [--thin] "
"[--include-tag] [--upload-pack=<git-upload-pack>] [--depth=<n>] "
"[--no-progress] [--diag-url] [-v] [<host>:]<directory> [<refs>...]";
static void add_sought_entry_mem(struct ref ***sought, int *nr, int *alloc,
const char *name, int namelen)
static void add_sought_entry(struct ref ***sought, int *nr, int *alloc,
const char *string)
int cmd_fetch_pack(int argc, const char **argv, const char *prefix)
