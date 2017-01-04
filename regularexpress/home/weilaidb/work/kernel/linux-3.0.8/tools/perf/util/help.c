void add_cmdname(struct cmdnames *cmds, const char *name, size_t len)
static void clean_cmdnames(struct cmdnames *cmds)
static int cmdname_compare(const void *a_, const void *b_)
static void uniq(struct cmdnames *cmds)
void exclude_cmds(struct cmdnames *cmds, struct cmdnames *excludes)
static void pretty_print_string_list(struct cmdnames *cmds, int longest)
static int is_executable(const char *name)
static void list_commands_in_dir(struct cmdnames *cmds,
const char *path,
const char *prefix)
void load_command_list(const char *prefix,
struct cmdnames *main_cmds,
struct cmdnames *other_cmds)
void list_commands(const char *title, struct cmdnames *main_cmds,
struct cmdnames *other_cmds)
int is_in_cmdlist(struct cmdnames *c, const char *s)
static int autocorrect;
static struct cmdnames aliases;
static int perf_unknown_cmd_config(const char *var, const char *value, void *cb)
static int levenshtein_compare(const void *p1, const void *p2)
static void add_cmd_list(struct cmdnames *cmds, struct cmdnames *old)
const char *help_unknown_cmd(const char *cmd)
int cmd_version(int argc __used, const char **argv __used, const char *prefix __used)
