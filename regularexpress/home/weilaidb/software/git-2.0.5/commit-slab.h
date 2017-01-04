#define COMMIT_SLAB_H
#define COMMIT_SLAB_SIZE (512*1024-32)
#define MAYBE_UNUSED __attribute__((__unused__))
#define define_commit_slab(slabname, elemtype) 				\
\
struct slabname ;									\
static int stat_ ##slabname## realloc;					\
\
static MAYBE_UNUSED void init_ ##slabname## _with_stride(struct slabname *s, \
unsigned stride)	\
\
\
static MAYBE_UNUSED void init_ ##slabname(struct slabname *s)		\
\
\
static MAYBE_UNUSED void clear_ ##slabname(struct slabname *s)		\
\
\
static MAYBE_UNUSED elemtype *slabname## _at(struct slabname *s,	\
const struct commit *c)		\
\
\
static int stat_ ##slabname## realloc
#define COMMIT_SLAB_INIT(stride, var)
