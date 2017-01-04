static int show_merge_base(struct commit **rev, int rev_nr, int show_all)
static const char * const merge_base_usage[] = ;
static struct commit *get_commit_reference(const char *arg)
static int handle_independent(int count, const char **args)
static int handle_octopus(int count, const char **args, int show_all)
static int handle_is_ancestor(int argc, const char **argv)
struct rev_collect ;
static void add_one_commit(unsigned char *sha1, struct rev_collect *revs)
static int collect_one_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
const char *ident, unsigned long timestamp,
int tz, const char *message, void *cbdata)
static int handle_fork_point(int argc, const char **argv)
int cmd_merge_base(int argc, const char **argv, const char *prefix)
