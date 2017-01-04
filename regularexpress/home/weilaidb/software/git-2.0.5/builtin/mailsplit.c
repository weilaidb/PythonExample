static const char git_mailsplit_usage[] =
"git mailsplit [-d<prec>] [-f<n>] [-b] [--keep-cr] -o<directory> [(<mbox>|<Maildir>)...]";
static int is_from_line(const char *line, int len)
static struct strbuf buf = STRBUF_INIT;
static int keep_cr;
static int split_one(FILE *mbox, const char *name, int allow_bare)
static int populate_maildir_list(struct string_list *list, const char *path)
static int maildir_filename_cmp(const char *a, const char *b)
static int split_maildir(const char *maildir, const char *dir,
int nr_prec, int skip)
static int split_mbox(const char *file, const char *dir, int allow_bare,
int nr_prec, int skip)
int cmd_mailsplit(int argc, const char **argv, const char *prefix)
