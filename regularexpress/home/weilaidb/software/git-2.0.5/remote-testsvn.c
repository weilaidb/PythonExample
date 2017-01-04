static const char *url;
static int dump_from_file;
static const char *private_ref;
static const char *remote_ref = "refs/heads/master";
static const char *marksfilename, *notes_ref;
struct rev_note ;
static int cmd_capabilities(const char *line);
static int cmd_import(const char *line);
static int cmd_list(const char *line);
typedef int (*input_command_handler)(const char *);
struct input_command_entry ;
static const struct input_command_entry input_command_list[] = ;
static int cmd_capabilities(const char *line)
static void terminate_batch(void)
static char *read_ref_note(const unsigned char sha1[20])
static int parse_rev_note(const char *msg, struct rev_note *res)
static int note2mark_cb(const unsigned char *object_sha1,
const unsigned char *note_sha1, char *note_path,
void *cb_data)
static void regenerate_marks(void)
static void check_or_regenerate_marks(int latestrev)
static int cmd_import(const char *line)
static int cmd_list(const char *line)
static int do_command(struct strbuf *line)
int main(int argc, char **argv)
else
strbuf_addf(&private_ref_sb, "refs/svn/%s/master", remote->name);
private_ref = private_ref_sb.buf;
strbuf_addf(&notes_ref_sb, "refs/notes/%s/revs", remote->name);
notes_ref = notes_ref_sb.buf;
strbuf_addf(&marksfilename_sb, "%s/info/fast-import/remote-svn/%s.marks",
get_git_dir(), remote->name);
marksfilename = marksfilename_sb.buf;
while (1)
strbuf_release(&buf);
strbuf_release(&url_sb);
strbuf_release(&private_ref_sb);
strbuf_release(&notes_ref_sb);
strbuf_release(&marksfilename_sb);
return 0;
}
