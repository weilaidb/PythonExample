static const char * const git_notes_usage[] = ;
static const char * const git_notes_list_usage[] = ;
static const char * const git_notes_add_usage[] = ;
static const char * const git_notes_copy_usage[] = ;
static const char * const git_notes_append_usage[] = ;
static const char * const git_notes_edit_usage[] = ;
static const char * const git_notes_show_usage[] = ;
static const char * const git_notes_merge_usage[] = ;
static const char * const git_notes_remove_usage[] = ;
static const char * const git_notes_prune_usage[] = ;
static const char * const git_notes_get_ref_usage[] = ;
static const char note_template[] =
"\nWrite/edit the notes for the following object:\n";
struct msg_arg ;
static int list_each_note(const unsigned char *object_sha1,
const unsigned char *note_sha1, char *note_path,
void *cb_data)
static void write_note_data(int fd, const unsigned char *sha1)
static void write_commented_object(int fd, const unsigned char *object)
static void create_note(const unsigned char *object, struct msg_arg *msg,
int append_only, const unsigned char *prev,
unsigned char *result)
static int parse_msg_arg(const struct option *opt, const char *arg, int unset)
static int parse_file_arg(const struct option *opt, const char *arg, int unset)
static int parse_reuse_arg(const struct option *opt, const char *arg, int unset)
static int parse_reedit_arg(const struct option *opt, const char *arg, int unset)
static int notes_copy_from_stdin(int force, const char *rewrite_cmd)
static struct notes_tree *init_notes_check(const char *subcommand)
static int list(int argc, const char **argv, const char *prefix)
static int append_edit(int argc, const char **argv, const char *prefix);
static int add(int argc, const char **argv, const char *prefix)
static int copy(int argc, const char **argv, const char *prefix)
static int append_edit(int argc, const char **argv, const char *prefix)
static int show(int argc, const char **argv, const char *prefix)
static int merge_abort(struct notes_merge_options *o)
static int merge_commit(struct notes_merge_options *o)
static int merge(int argc, const char **argv, const char *prefix)
#define IGNORE_MISSING 1
static int remove_one_note(struct notes_tree *t, const char *name, unsigned flag)
static int remove_cmd(int argc, const char **argv, const char *prefix)
static int prune(int argc, const char **argv, const char *prefix)
static int get_ref(int argc, const char **argv, const char *prefix)
int cmd_notes(int argc, const char **argv, const char *prefix)
