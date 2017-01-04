static const char rev_list_usage[] =
"git rev-list [OPTION] <commit-id>... [ -- paths... ]\n"
"  limiting output:\n"
"    --max-count=<n>\n"
"    --max-age=<epoch>\n"
"    --min-age=<epoch>\n"
"    --sparse\n"
"    --no-merges\n"
"    --min-parents=<n>\n"
"    --no-min-parents\n"
"    --max-parents=<n>\n"
"    --no-max-parents\n"
"    --remove-empty\n"
"    --all\n"
"    --branches\n"
"    --tags\n"
"    --remotes\n"
"    --stdin\n"
"    --quiet\n"
"  ordering output:\n"
"    --topo-order\n"
"    --date-order\n"
"    --reverse\n"
"  formatting output:\n"
"    --parents\n"
"    --children\n"
"    --objects | --objects-edge\n"
"    --unpacked\n"
"    --header | --pretty\n"
"    --abbrev=<n> | --no-abbrev\n"
"    --abbrev-commit\n"
"    --left-right\n"
"  special purpose:\n"
"    --bisect\n"
"    --bisect-vars\n"
"    --bisect-all"
;
static void finish_commit(struct commit *commit, void *data);
static void show_commit(struct commit *commit, void *data)
static void finish_commit(struct commit *commit, void *data)
static void finish_object(struct object *obj,
const struct name_path *path, const char *name,
void *cb_data)
static void show_object(struct object *obj,
const struct name_path *path, const char *component,
void *cb_data)
static void show_edge(struct commit *commit)
static void print_var_str(const char *var, const char *val)
static void print_var_int(const char *var, int val)
static int show_bisect_vars(struct rev_list_info *info, int reaches, int all)
static int show_object_fast(
const unsigned char *sha1,
enum object_type type,
int exclude,
uint32_t name_hash,
struct packed_git *found_pack,
off_t found_offset)
int cmd_rev_list(int argc, const char **argv, const char *prefix)
