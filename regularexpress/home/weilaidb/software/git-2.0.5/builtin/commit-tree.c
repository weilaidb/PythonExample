static const char commit_tree_usage[] = "git commit-tree [(-p <sha1>)...] [-S[<keyid>]] [-m <message>] [-F <file>] <sha1> <changelog";
static const char *sign_commit;
static void new_parent(struct commit *parent, struct commit_list **parents_p)
static int commit_tree_config(const char *var, const char *value, void *cb)
int cmd_commit_tree(int argc, const char **argv, const char *prefix)
