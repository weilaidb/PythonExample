static FILE *cmitmsg, *patchfile, *fin, *fout;
static int keep_subject;
static int keep_non_patch_brackets_in_subject;
static const char *metainfo_charset;
static struct strbuf line = STRBUF_INIT;
static struct strbuf name = STRBUF_INIT;
static struct strbuf email = STRBUF_INIT;
static enum   transfer_encoding;
static struct strbuf charset = STRBUF_INIT;
static int patch_lines;
static struct strbuf **p_hdr_data, **s_hdr_data;
static int use_scissors;
static int use_inbody_headers = 1;
#define MAX_HDR_PARSED 10
#define MAX_BOUNDARIES 5
static void cleanup_space(struct strbuf *sb);
static void get_sane_name(struct strbuf *out, struct strbuf *name, struct strbuf *email)
static void parse_bogus_from(const struct strbuf *line)
static void handle_from(const struct strbuf *from)
static void handle_header(struct strbuf **out, const struct strbuf *line)
static int slurp_attr(const char *line, const char *name, struct strbuf *attr)
static struct strbuf *content[MAX_BOUNDARIES];
static struct strbuf **content_top = content;
static void handle_content_type(struct strbuf *line)
static void handle_content_transfer_encoding(const struct strbuf *line)
static int is_multipart_boundary(const struct strbuf *line)
static void cleanup_subject(struct strbuf *subject)
static void cleanup_space(struct strbuf *sb)
static void decode_header(struct strbuf *line);
static const char *header[MAX_HDR_PARSED] = ;
static inline int cmp_header(const struct strbuf *line, const char *hdr)
static int check_header(const struct strbuf *line,
struct strbuf *hdr_data[], int overwrite)
static int is_rfc2822_header(const struct strbuf *line)
static int read_one_header_line(struct strbuf *line, FILE *in)
static struct strbuf *decode_q_segment(const struct strbuf *q_seg, int rfc2047)
static struct strbuf *decode_b_segment(const struct strbuf *b_seg)
static void convert_to_utf8(struct strbuf *line, const char *charset)
static int decode_header_bq(struct strbuf *it)
static void decode_header(struct strbuf *it)
static void decode_transfer_encoding(struct strbuf *line)
static void handle_filter(struct strbuf *line);
static int find_boundary(void)
static int handle_boundary(void)
static inline int patchbreak(const struct strbuf *line)
static int is_scissors_line(const struct strbuf *line)
static int handle_commit_msg(struct strbuf *line)
static void handle_patch(const struct strbuf *line)
static void handle_filter(struct strbuf *line)
static void handle_body(void)
static void output_header_lines(FILE *fout, const char *hdr, const struct strbuf *data)
static void handle_info(void)
static int mailinfo(FILE *in, FILE *out, const char *msg, const char *patch)
static int git_mailinfo_config(const char *var, const char *value, void *unused)
static const char mailinfo_usage[] =
"git mailinfo [-k|-b] [-u | --encoding=<encoding> | -n] [--scissors | --no-scissors] msg patch < mail >info";
int cmd_mailinfo(int argc, const char **argv, const char *prefix)
