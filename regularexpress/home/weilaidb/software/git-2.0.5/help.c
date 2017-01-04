void add_cmdname(struct cmdnames *cmds, const char *name, int len)
static void clean_cmdnames(struct cmdnames *cmds)
static int cmdname_compare(const void *a_, const void *b_)
static void uniq(struct cmdnames *cmds)
void exclude_cmds(struct cmdnames *cmds, struct cmdnames *excludes)
static void pretty_print_cmdnames(struct cmdnames *cmds, unsigned int colopts)
static int is_executable(const char *name)
static void list_commands_in_dir(struct cmdnames *cmds,
const char *path,
const char *prefix)
void load_command_list(const char *prefix,
struct cmdnames *main_cmds,
struct cmdnames *other_cmds)
void list_commands(unsigned int colopts,
struct cmdnames *main_cmds, struct cmdnames *other_cmds)
void list_common_cmds_help(void)
int is_in_cmdlist(struct cmdnames *c, const char *s)
static int autocorrect;
static struct cmdnames aliases;
static int git_unknown_cmd_config(const char *var, const char *value, void *cb)
static int levenshtein_compare(const void *p1, const void *p2)
static void add_cmd_list(struct cmdnames *cmds, struct cmdnames *old)
#define SIMILARITY_FLOOR 7
#define SIMILAR_ENOUGH(x) ((x) < SIMILARITY_FLOOR)
static const char bad_interpreter_advice[] =
N_("'%s' appears to be a git command, but we were not\n"
"able to execute it. Maybe git-%s is broken?");
const char *help_unknown_cmd(const char *cmd)
int cmd_version(int argc, const char **argv, const char *prefix)
struct similar_ref_cb ;
static int append_similar_ref(const char *refname, const unsigned char *sha1,
int flags, void *cb_data)
static struct string_list guess_refs(const char *ref)
void help_unknown_ref(const char *ref, const char *cmd, const char *error)
