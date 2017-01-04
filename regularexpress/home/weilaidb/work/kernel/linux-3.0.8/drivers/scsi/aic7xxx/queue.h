#define	_SYS_QUEUE_H_
#define	SLIST_HEAD(name, type)						\
struct name
#define	SLIST_HEAD_INITIALIZER(head)					\
#define	SLIST_ENTRY(type)						\
struct
#define	SLIST_EMPTY(head)	((head)->slh_first == NULL)
#define	SLIST_FIRST(head)	((head)->slh_first)
#define	SLIST_FOREACH(var, head, field)					\
for ((var) = SLIST_FIRST((head));				\
(var);							\
(var) = SLIST_NEXT((var), field))
#define	SLIST_INIT(head) do  while (0)
#define	SLIST_INSERT_AFTER(slistelm, elm, field) do  while (0)
#define	SLIST_INSERT_HEAD(head, elm, field) do  while (0)
#define	SLIST_NEXT(elm, field)	((elm)->field.sle_next)
#define	SLIST_REMOVE(head, elm, type, field) do  while (0)
#define	SLIST_REMOVE_HEAD(head, field) do  while (0)
#define	STAILQ_HEAD(name, type)						\
struct name
#define	STAILQ_HEAD_INITIALIZER(head)					\
#define	STAILQ_ENTRY(type)						\
struct
#define	STAILQ_EMPTY(head)	((head)->stqh_first == NULL)
#define	STAILQ_FIRST(head)	((head)->stqh_first)
#define	STAILQ_FOREACH(var, head, field)				\
for((var) = STAILQ_FIRST((head));				\
(var);							\
(var) = STAILQ_NEXT((var), field))
#define	STAILQ_INIT(head) do  while (0)
#define	STAILQ_INSERT_AFTER(head, tqelm, elm, field) do  while (0)
#define	STAILQ_INSERT_HEAD(head, elm, field) do  while (0)
#define	STAILQ_INSERT_TAIL(head, elm, field) do  while (0)
#define	STAILQ_LAST(head)	(*(head)->stqh_last)
#define	STAILQ_NEXT(elm, field)	((elm)->field.stqe_next)
#define	STAILQ_REMOVE(head, elm, type, field) do  while (0)
#define	STAILQ_REMOVE_HEAD(head, field) do  while (0)
#define	STAILQ_REMOVE_HEAD_UNTIL(head, elm, field) do  while (0)
#define	LIST_HEAD(name, type)						\
struct name
#define	LIST_HEAD_INITIALIZER(head)					\
#define	LIST_ENTRY(type)						\
struct
#define	LIST_EMPTY(head)	((head)->lh_first == NULL)
#define	LIST_FIRST(head)	((head)->lh_first)
#define	LIST_FOREACH(var, head, field)					\
for ((var) = LIST_FIRST((head));				\
(var);							\
(var) = LIST_NEXT((var), field))
#define	LIST_INIT(head) do  while (0)
#define	LIST_INSERT_AFTER(listelm, elm, field) do  while (0)
#define	LIST_INSERT_BEFORE(listelm, elm, field) do  while (0)
#define	LIST_INSERT_HEAD(head, elm, field) do  while (0)
#define	LIST_NEXT(elm, field)	((elm)->field.le_next)
#define	LIST_REMOVE(elm, field) do  while (0)
#define	TAILQ_HEAD(name, type)						\
struct name
#define	TAILQ_HEAD_INITIALIZER(head)					\
#define	TAILQ_ENTRY(type)						\
struct
#define	TAILQ_EMPTY(head)	((head)->tqh_first == NULL)
#define	TAILQ_FIRST(head)	((head)->tqh_first)
#define	TAILQ_FOREACH(var, head, field)					\
for ((var) = TAILQ_FIRST((head));				\
(var);							\
(var) = TAILQ_NEXT((var), field))
#define	TAILQ_FOREACH_REVERSE(var, head, headname, field)		\
for ((var) = TAILQ_LAST((head), headname);			\
(var);							\
(var) = TAILQ_PREV((var), headname, field))
#define	TAILQ_INIT(head) do  while (0)
#define	TAILQ_INSERT_AFTER(head, listelm, elm, field) do  while (0)
#define	TAILQ_INSERT_BEFORE(listelm, elm, field) do  while (0)
#define	TAILQ_INSERT_HEAD(head, elm, field) do  while (0)
#define	TAILQ_INSERT_TAIL(head, elm, field) do  while (0)
#define	TAILQ_LAST(head, headname)					\
(*(((struct headname *)((head)->tqh_last))->tqh_last))
#define	TAILQ_NEXT(elm, field) ((elm)->field.tqe_next)
#define	TAILQ_PREV(elm, headname, field)				\
(*(((struct headname *)((elm)->field.tqe_prev))->tqh_last))
#define	TAILQ_REMOVE(head, elm, field) do  while (0)
#define	CIRCLEQ_HEAD(name, type)					\
struct name
#define	CIRCLEQ_HEAD_INITIALIZER(head)					\
#define	CIRCLEQ_ENTRY(type)						\
struct
#define	CIRCLEQ_EMPTY(head)	((head)->cqh_first == (void *)(head))
#define	CIRCLEQ_FIRST(head)	((head)->cqh_first)
#define	CIRCLEQ_FOREACH(var, head, field)				\
for ((var) = CIRCLEQ_FIRST((head));				\
(var) != (void *)(head);					\
(var) = CIRCLEQ_NEXT((var), field))
#define	CIRCLEQ_FOREACH_REVERSE(var, head, field)			\
for ((var) = CIRCLEQ_LAST((head));				\
(var) != (void *)(head);					\
(var) = CIRCLEQ_PREV((var), field))
#define	CIRCLEQ_INIT(head) do  while (0)
#define	CIRCLEQ_INSERT_AFTER(head, listelm, elm, field) do  while (0)
#define	CIRCLEQ_INSERT_BEFORE(head, listelm, elm, field) do  while (0)
#define	CIRCLEQ_INSERT_HEAD(head, elm, field) do  while (0)
#define	CIRCLEQ_INSERT_TAIL(head, elm, field) do  while (0)
#define	CIRCLEQ_LAST(head)	((head)->cqh_last)
#define	CIRCLEQ_NEXT(elm,field)	((elm)->field.cqe_next)
#define	CIRCLEQ_PREV(elm,field)	((elm)->field.cqe_prev)
#define	CIRCLEQ_REMOVE(head, elm, field) do  while (0)
