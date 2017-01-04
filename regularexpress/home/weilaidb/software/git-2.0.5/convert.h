#define CONVERT_H
enum safe_crlf ;
extern enum safe_crlf safe_crlf;
enum auto_crlf ;
extern enum auto_crlf auto_crlf;
enum eol ;
extern enum eol core_eol;
extern int convert_to_git(const char *path, const char *src, size_t len,
struct strbuf *dst, enum safe_crlf checksafe);
extern int convert_to_working_tree(const char *path, const char *src,
size_t len, struct strbuf *dst);
extern int renormalize_buffer(const char *path, const char *src, size_t len,
struct strbuf *dst);
static inline int would_convert_to_git(const char *path, const char *src,
size_t len, enum safe_crlf checksafe)
struct stream_filter;
extern struct stream_filter *get_stream_filter(const char *path, const unsigned char *);
extern void free_stream_filter(struct stream_filter *);
extern int is_null_stream_filter(struct stream_filter *);
extern int stream_filter(struct stream_filter *,
const char *input, size_t *isize_p,
char *output, size_t *osize_p);
