#define _NATFEAT_H
long nf_get_id(const char *feature_name);
long nf_call(long id, ...);
void nf_init(void);
void nf_shutdown(void);
void nfprint(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
# endif
