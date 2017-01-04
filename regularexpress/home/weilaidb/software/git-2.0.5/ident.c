static struct strbuf git_default_name = STRBUF_INIT;
static struct strbuf git_default_email = STRBUF_INIT;
static char git_default_date[50];
#define IDENT_NAME_GIVEN 01
#define IDENT_MAIL_GIVEN 02
#define IDENT_ALL_GIVEN (IDENT_NAME_GIVEN|IDENT_MAIL_GIVEN)
static int committer_ident_explicitly_given;
static int author_ident_explicitly_given;
#define get_gecos(ignored) "&"
#define get_gecos(struct_passwd) ((struct_passwd)->pw_gecos)
static void copy_gecos(const struct passwd *w, struct strbuf *name)
static int add_mailname_host(struct strbuf *buf)
static void add_domainname(struct strbuf *out)
static void copy_email(const struct passwd *pw, struct strbuf *email)
static const char *ident_default_name(void)
const char *ident_default_email(void)
static const char *ident_default_date(void)
static int crud(unsigned char c)
static void strbuf_addstr_without_crud(struct strbuf *sb, const char *src)
int split_ident_line(struct ident_split *split, const char *line, int len)
static const char *env_hint =
"\n"
"*** Please tell me who you are.\n"
"\n"
"Run\n"
"\n"
"  git config --global user.email \"you@example.com\"\n"
"  git config --global user.name \"Your Name\"\n"
"\n"
"to set your account\'s default identity.\n"
"Omit --global to set the identity only in this repository.\n"
"\n";
const char *fmt_ident(const char *name, const char *email,
const char *date_str, int flag)
const char *fmt_name(const char *name, const char *email)
const char *git_author_info(int flag)
const char *git_committer_info(int flag)
static int ident_is_sufficient(int user_ident_explicitly_given)
int committer_ident_sufficiently_given(void)
int author_ident_sufficiently_given(void)
int git_ident_config(const char *var, const char *value, void *data)
static int buf_cmp(const char *a_begin, const char *a_end,
const char *b_begin, const char *b_end)
int ident_cmp(const struct ident_split *a,
const struct ident_split *b)
