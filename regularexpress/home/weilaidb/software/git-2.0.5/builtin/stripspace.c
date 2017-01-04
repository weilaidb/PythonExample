static size_t cleanup(char *line, size_t len)
void stripspace(struct strbuf *sb, int skip_comments)
static void comment_lines(struct strbuf *buf)
static const char *usage_msg = "\n"
"  git stripspace [-s | --strip-comments] < input\n"
"  git stripspace [-c | --comment-lines] < input";
int cmd_stripspace(int argc, const char **argv, const char *prefix)
