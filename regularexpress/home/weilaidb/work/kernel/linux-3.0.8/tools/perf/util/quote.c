static inline int need_bs_quote(char c)
static void sq_quote_buf(struct strbuf *dst, const char *src)
void sq_quote_argv(struct strbuf *dst, const char** argv, size_t maxlen)
