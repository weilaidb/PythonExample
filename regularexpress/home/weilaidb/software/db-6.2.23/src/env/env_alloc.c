typedef SH_TAILQ_HEAD(__sizeq) SIZEQ_HEAD;
typedef struct __alloc_layout  ALLOC_LAYOUT;
typedef struct __alloc_element  ALLOC_ELEMENT;
#define	SHALLOC_FRAGMENT	(sizeof(ALLOC_ELEMENT) + 64)
#undef	SET_QUEUE_FOR_SIZE
#define	SET_QUEUE_FOR_SIZE(head, q, i, len) do  while (0)
static void __env_size_insert __P((ALLOC_LAYOUT *, ALLOC_ELEMENT *));
void
__env_alloc_init(infop, size)
REGINFO *infop;
size_t size;
#define	DB_ALLOC_SIZE(len)						\
(size_t)DB_ALIGN((len) + sizeof(ALLOC_ELEMENT) + 1, sizeof(uintmax_t))
#define	DB_ALLOC_SIZE(len)						\
(size_t)DB_ALIGN((len) + sizeof(ALLOC_ELEMENT), sizeof(uintmax_t))
size_t
__env_alloc_overhead()
size_t
__env_alloc_size(len)
size_t len;
int
__env_alloc(infop, len, retp)
REGINFO *infop;
size_t len;
void *retp;
void
__env_alloc_free(infop, ptr)
REGINFO *infop;
void *ptr;
int
__env_alloc_extend(infop, ptr, lenp)
REGINFO *infop;
void *ptr;
size_t *lenp;
static void
__env_size_insert(head, elp)
ALLOC_LAYOUT *head;
ALLOC_ELEMENT *elp;
int
__env_region_extend(env, infop)
ENV *env;
REGINFO *infop;
uintmax_t
__env_elem_size(env, p)
ENV *env;
void *p;
void *
__env_get_chunk(infop, nextp, sizep)
REGINFO *infop;
void **nextp;
uintmax_t *sizep;
void
__env_alloc_print(infop, flags)
REGINFO *infop;
u_int32_t flags;
