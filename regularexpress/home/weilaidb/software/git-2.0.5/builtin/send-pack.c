static const char send_pack_usage[] =
"git send-pack [--all | --mirror] [--dry-run] [--force] [--receive-pack=<git-receive-pack>] [--verbose] [--thin] [<host>:]<directory> [<ref>...]\n"
"  --all and explicit <ref> specification are mutually exclusive.";
static struct send_pack_args args;
static void print_helper_status(struct ref *ref)
int cmd_send_pack(int argc, const char **argv, const char *prefix)
