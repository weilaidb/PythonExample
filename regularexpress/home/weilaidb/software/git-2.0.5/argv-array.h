#define ARGV_ARRAY_H
extern const char *empty_argv[];
struct argv_array ;
#define ARGV_ARRAY_INIT
void argv_array_init(struct argv_array *);
void argv_array_push(struct argv_array *, const char *);
__attribute__((format (printf,2,3)))
void argv_array_pushf(struct argv_array *, const char *fmt, ...);
LAST_ARG_MUST_BE_NULL
void argv_array_pushl(struct argv_array *, ...);
void argv_array_pop(struct argv_array *);
void argv_array_clear(struct argv_array *);
const char **argv_array_detach(struct argv_array *array, int *argc);
void argv_array_free_detached(const char **argv);
