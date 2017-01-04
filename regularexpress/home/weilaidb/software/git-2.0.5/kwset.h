struct kwsmatch
;
struct kwset_t;
typedef struct kwset_t* kwset_t;
extern kwset_t kwsalloc(char const *);
extern const char *kwsincr(kwset_t, char const *, size_t);
extern const char *kwsprep(kwset_t);
extern size_t kwsexec(kwset_t, char const *, size_t, struct kwsmatch *);
extern void kwsfree(kwset_t);
