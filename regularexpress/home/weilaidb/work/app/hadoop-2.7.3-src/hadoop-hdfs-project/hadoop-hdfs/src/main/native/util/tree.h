#define	_SYS_TREE_H_
#define SPLAY_HEAD(name, type)						\
struct name
#define SPLAY_INITIALIZER(root)						\
#define SPLAY_INIT(root) do  while ( 0)
#define SPLAY_ENTRY(type)						\
struct
#define SPLAY_LEFT(elm, field)		(elm)->field.spe_left
#define SPLAY_RIGHT(elm, field)		(elm)->field.spe_right
#define SPLAY_ROOT(head)		(head)->sph_root
#define SPLAY_EMPTY(head)		(SPLAY_ROOT(head) == NULL)
#define SPLAY_ROTATE_RIGHT(head, tmp, field) do  while ( 0)
#define SPLAY_ROTATE_LEFT(head, tmp, field) do  while ( 0)
#define SPLAY_LINKLEFT(head, tmp, field) do  while ( 0)
#define SPLAY_LINKRIGHT(head, tmp, field) do  while ( 0)
#define SPLAY_ASSEMBLE(head, node, left, right, field) do  while ( 0)
#define SPLAY_PROTOTYPE(name, type, field, cmp)				\
void name##_SPLAY(struct name *, struct type *);			\
void name##_SPLAY_MINMAX(struct name *, int);				\
struct type *name##_SPLAY_INSERT(struct name *, struct type *);		\
struct type *name##_SPLAY_REMOVE(struct name *, struct type *);		\
\				\
static __inline struct type *						\
name##_SPLAY_FIND(struct name *head, struct type *elm)			\
\
\
static __inline struct type *						\
name##_SPLAY_NEXT(struct name *head, struct type *elm)			\
\
\
static __inline struct type *						\
name##_SPLAY_MIN_MAX(struct name *head, int val)			\
#define SPLAY_GENERATE(name, type, field, cmp)				\
struct type *								\
name##_SPLAY_INSERT(struct name *head, struct type *elm)		\
\
\
struct type *								\
name##_SPLAY_REMOVE(struct name *head, struct type *elm)		\
\
\
void									\
name##_SPLAY(struct name *head, struct type *elm)			\
\
\									\
void name##_SPLAY_MINMAX(struct name *head, int __comp) \
#define SPLAY_NEGINF	-1
#define SPLAY_INF	1
#define SPLAY_INSERT(name, x, y)	name##_SPLAY_INSERT(x, y)
#define SPLAY_REMOVE(name, x, y)	name##_SPLAY_REMOVE(x, y)
#define SPLAY_FIND(name, x, y)		name##_SPLAY_FIND(x, y)
#define SPLAY_NEXT(name, x, y)		name##_SPLAY_NEXT(x, y)
#define SPLAY_MIN(name, x)		(SPLAY_EMPTY(x) ? NULL	\
: name##_SPLAY_MIN_MAX(x, SPLAY_NEGINF))
#define SPLAY_MAX(name, x)		(SPLAY_EMPTY(x) ? NULL	\
: name##_SPLAY_MIN_MAX(x, SPLAY_INF))
#define SPLAY_FOREACH(x, name, head)					\
for ((x) = SPLAY_MIN(name, head);				\
(x) != NULL;						\
(x) = SPLAY_NEXT(name, head, x))
#define RB_HEAD(name, type)						\
struct name
#define RB_INITIALIZER(root)						\
#define RB_INIT(root) do  while ( 0)
#define RB_BLACK	0
#define RB_RED		1
#define RB_ENTRY(type)							\
struct
#define RB_LEFT(elm, field)		(elm)->field.rbe_left
#define RB_RIGHT(elm, field)		(elm)->field.rbe_right
#define RB_PARENT(elm, field)		(elm)->field.rbe_parent
#define RB_COLOR(elm, field)		(elm)->field.rbe_color
#define RB_ROOT(head)			(head)->rbh_root
#define RB_EMPTY(head)			(RB_ROOT(head) == NULL)
#define RB_SET(elm, parent, field) do  while ( 0)
#define RB_SET_BLACKRED(black, red, field) do  while ( 0)
#define RB_AUGMENT(x)	do  while (0)
#define RB_ROTATE_LEFT(head, elm, tmp, field) do  while ( 0)
#define RB_ROTATE_RIGHT(head, elm, tmp, field) do  while ( 0)
#define	RB_PROTOTYPE(name, type, field, cmp)				\
RB_PROTOTYPE_INTERNAL(name, type, field, cmp,)
#define	RB_PROTOTYPE_STATIC(name, type, field, cmp)			\
RB_PROTOTYPE_INTERNAL(name, type, field, cmp, __unused static)
#define RB_PROTOTYPE_INTERNAL(name, type, field, cmp, attr)		\
attr void name##_RB_INSERT_COLOR(struct name *, struct type *);		\
attr void name##_RB_REMOVE_COLOR(struct name *, struct type *, struct type *);\
attr struct type *name##_RB_REMOVE(struct name *, struct type *);	\
attr struct type *name##_RB_INSERT(struct name *, struct type *);	\
attr struct type *name##_RB_FIND(struct name *, struct type *);		\
attr struct type *name##_RB_NFIND(struct name *, struct type *);	\
attr struct type *name##_RB_NEXT(struct type *);			\
attr struct type *name##_RB_PREV(struct type *);			\
attr struct type *name##_RB_MINMAX(struct name *, int);			\
\
#define	RB_GENERATE(name, type, field, cmp)				\
RB_GENERATE_INTERNAL(name, type, field, cmp,)
#define	RB_GENERATE_STATIC(name, type, field, cmp)			\
RB_GENERATE_INTERNAL(name, type, field, cmp, __unused static)
#define RB_GENERATE_INTERNAL(name, type, field, cmp, attr)		\
attr void								\
name##_RB_INSERT_COLOR(struct name *head, struct type *elm)		\
\
\
attr void								\
name##_RB_REMOVE_COLOR(struct name *head, struct type *parent, struct type *elm) \
\
\
attr struct type *							\
name##_RB_REMOVE(struct name *head, struct type *elm)			\
\
\					\
attr struct type *							\
name##_RB_INSERT(struct name *head, struct type *elm)			\
\
\				\
attr struct type *							\
name##_RB_FIND(struct name *head, struct type *elm)			\
\
\	\
attr struct type *							\
name##_RB_NFIND(struct name *head, struct type *elm)			\
\
\								\
attr struct type *							\
name##_RB_NEXT(struct type *elm)					\
\
\								\
attr struct type *							\
name##_RB_PREV(struct type *elm)					\
\
\
attr struct type *							\
name##_RB_MINMAX(struct name *head, int val)				\
#define RB_NEGINF	-1
#define RB_INF	1
#define RB_INSERT(name, x, y)	name##_RB_INSERT(x, y)
#define RB_REMOVE(name, x, y)	name##_RB_REMOVE(x, y)
#define RB_FIND(name, x, y)	name##_RB_FIND(x, y)
#define RB_NFIND(name, x, y)	name##_RB_NFIND(x, y)
#define RB_NEXT(name, x, y)	name##_RB_NEXT(y)
#define RB_PREV(name, x, y)	name##_RB_PREV(y)
#define RB_MIN(name, x)		name##_RB_MINMAX(x, RB_NEGINF)
#define RB_MAX(name, x)		name##_RB_MINMAX(x, RB_INF)
#define RB_FOREACH(x, name, head)					\
for ((x) = RB_MIN(name, head);					\
(x) != NULL;						\
(x) = name##_RB_NEXT(x))
#define RB_FOREACH_FROM(x, name, y)					\
for ((x) = (y);							\
((x) != NULL) && ((y) = name##_RB_NEXT(x), (x) != NULL);	\
(x) = (y))
#define RB_FOREACH_SAFE(x, name, head, y)				\
for ((x) = RB_MIN(name, head);					\
((x) != NULL) && ((y) = name##_RB_NEXT(x), (x) != NULL);	\
(x) = (y))
#define RB_FOREACH_REVERSE(x, name, head)				\
for ((x) = RB_MAX(name, head);					\
(x) != NULL;						\
(x) = name##_RB_PREV(x))
#define RB_FOREACH_REVERSE_FROM(x, name, y)				\
for ((x) = (y);							\
((x) != NULL) && ((y) = name##_RB_PREV(x), (x) != NULL);	\
(x) = (y))
#define RB_FOREACH_REVERSE_SAFE(x, name, head, y)			\
for ((x) = RB_MAX(name, head);					\
((x) != NULL) && ((y) = name##_RB_PREV(x), (x) != NULL);	\
(x) = (y))
