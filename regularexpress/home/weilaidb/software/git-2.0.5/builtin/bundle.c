static const char builtin_bundle_usage[] =
"git bundle create <file> <git-rev-list args>\n"
"   or: git bundle verify <file>\n"
"   or: git bundle list-heads <file> [<refname>...]\n"
"   or: git bundle unbundle <file> [<refname>...]";
int cmd_bundle(int argc, const char **argv, const char *prefix)
