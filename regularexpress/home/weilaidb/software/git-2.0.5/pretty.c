static char *user_format;
static struct cmt_fmt_map  *commit_formats;
static size_t builtin_formats_len;
static size_t commit_formats_len;
static size_t commit_formats_alloc;
static struct cmt_fmt_map *find_commit_format(const char *sought);
static void save_user_format(struct rev_info *rev, const char *cp, int is_tformat)
static int git_pretty_formats_config(const char *var, const char *value, void *cb)
static void setup_commit_formats(void)
static struct cmt_fmt_map *find_commit_format_recursive(const char *sought,
const char *original,
int num_redirections)
static struct cmt_fmt_map *find_commit_format(const char *sought)
void get_commit_format(const char *arg, struct rev_info *rev)
static int get_one_line(const char *msg)
static int non_ascii(int ch)
int has_non_ascii(const char *s)
static int is_rfc822_special(char ch)
static int needs_rfc822_quoting(const char *s, int len)
static int last_line_length(struct strbuf *sb)
static void add_rfc822_quoted(struct strbuf *out, const char *s, int len)
enum rfc2047_type ;
static int is_rfc2047_special(char ch, enum rfc2047_type type)
static int needs_rfc2047_encoding(const char *line, int len,
enum rfc2047_type type)
static void add_rfc2047(struct strbuf *sb, const char *line, size_t len,
const char *encoding, enum rfc2047_type type)
static const char *show_ident_date(const struct ident_split *ident,
enum date_mode mode)
void pp_user_info(struct pretty_print_context *pp,
const char *what, struct strbuf *sb,
const char *line, const char *encoding)
static int is_empty_line(const char *line, int *len_p)
static const char *skip_empty_lines(const char *msg)
static void add_merge_info(const struct pretty_print_context *pp,
struct strbuf *sb, const struct commit *commit)
static char *get_header(const struct commit *commit, const char *msg,
const char *key)
static char *replace_encoding_header(char *buf, const char *encoding)
const char *logmsg_reencode(const struct commit *commit,
char **commit_encoding,
const char *output_encoding)
static int mailmap_name(const char **email, size_t *email_len,
const char **name, size_t *name_len)
static size_t format_person_part(struct strbuf *sb, char part,
const char *msg, int len, enum date_mode dmode)
struct chunk ;
enum flush_type ;
enum trunc_type ;
struct format_commit_context ;
static int add_again(struct strbuf *sb, struct chunk *chunk)
static void parse_commit_header(struct format_commit_context *context)
static int istitlechar(char c)
static void format_sanitized_subject(struct strbuf *sb, const char *msg)
const char *format_subject(struct strbuf *sb, const char *msg,
const char *line_separator)
static void parse_commit_message(struct format_commit_context *c)
static void strbuf_wrap(struct strbuf *sb, size_t pos,
size_t width, size_t indent1, size_t indent2)
static void rewrap_message_tail(struct strbuf *sb,
struct format_commit_context *c,
size_t new_width, size_t new_indent1,
size_t new_indent2)
static int format_reflog_person(struct strbuf *sb,
char part,
struct reflog_walk_info *log,
enum date_mode dmode)
static size_t parse_color(struct strbuf *sb,
const char *placeholder,
struct format_commit_context *c)
static size_t parse_padding_placeholder(struct strbuf *sb,
const char *placeholder,
struct format_commit_context *c)
static size_t format_commit_one(struct strbuf *sb,
const char *placeholder,
void *context)
static size_t format_and_pad_commit(struct strbuf *sb,
const char *placeholder,
struct format_commit_context *c)
static size_t format_commit_item(struct strbuf *sb,
const char *placeholder,
void *context)
static size_t userformat_want_item(struct strbuf *sb, const char *placeholder,
void *context)
void userformat_find_requirements(const char *fmt, struct userformat_want *w)
void format_commit_message(const struct commit *commit,
const char *format, struct strbuf *sb,
const struct pretty_print_context *pretty_ctx)
static void pp_header(struct pretty_print_context *pp,
const char *encoding,
const struct commit *commit,
const char **msg_p,
struct strbuf *sb)
void pp_title_line(struct pretty_print_context *pp,
const char **msg_p,
struct strbuf *sb,
const char *encoding,
int need_8bit_cte)
void pp_remainder(struct pretty_print_context *pp,
const char **msg_p,
struct strbuf *sb,
int indent)
void pretty_print_commit(struct pretty_print_context *pp,
const struct commit *commit,
struct strbuf *sb)
void pp_commit_easy(enum cmit_fmt fmt, const struct commit *commit,
struct strbuf *sb)
