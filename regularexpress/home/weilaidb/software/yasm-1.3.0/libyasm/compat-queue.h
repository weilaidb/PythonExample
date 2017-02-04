#define SYS_QUEUE_H
SLIST_HEAD                                          \
struct name
SLIST_HEAD_INITIALIZER                                    \
SLIST_ENTRY                                               \
struct
SLIST_EMPTY       ((head)->slh_first == NULL)
SLIST_FIRST       ((head)->slh_first)
SLIST_FOREACH                                 \
for ((var) = SLIST_FIRST((head));                               \
(var);                                                      \
(var) = SLIST_NEXT((var), field))
SLIST_FOREACH_SAFE                      \
for ((var) = SLIST_FIRST((head));                               \
(var) && ((tvar) = SLIST_NEXT((var), field), 1);            \
(var) = (tvar))
SLIST_FOREACH_PREVPTR                   \
for ((varp) = &SLIST_FIRST((head));                             \
((var) = *(varp)) != NULL;                                  \
(varp) = &SLIST_NEXT((var), field))
SLIST_INIT do  while (0)
SLIST_INSERT_AFTER do  while (0)
SLIST_INSERT_HEAD do  while (0)
SLIST_NEXT  ((elm)->field.sle_next)
SLIST_REMOVE do  while (0)
SLIST_REMOVE_HEAD do  while (0)
STAILQ_HEAD                                         \
struct name
STAILQ_HEAD_INITIALIZER                                   \
STAILQ_ENTRY                                              \
struct
STAILQ_CONCAT do  while (0)
STAILQ_EMPTY      ((head)->stqh_first == NULL)
STAILQ_FIRST      ((head)->stqh_first)
STAILQ_FOREACH                                \
for((var) = STAILQ_FIRST((head));                               \
(var);                                                       \
(var) = STAILQ_NEXT((var), field))
STAILQ_FOREACH_SAFE                     \
for ((var) = STAILQ_FIRST((head));                              \
(var) && ((tvar) = STAILQ_NEXT((var), field), 1);           \
(var) = (tvar))
STAILQ_INIT do  while (0)
STAILQ_INSERT_AFTER do  while (0)
STAILQ_INSERT_HEAD do  while (0)
STAILQ_INSERT_TAIL do  while (0)
STAILQ_LAST                                  \
(STAILQ_EMPTY((head)) ?                                         \
NULL :                                                  \
((struct type *)                                        \
((char *)((head)->stqh_last) - offsetof(struct type, field))))
STAILQ_NEXT ((elm)->field.stqe_next)
STAILQ_REMOVE do  while (0)
STAILQ_REMOVE_HEAD do  while (0)
STAILQ_REMOVE_HEAD_UNTIL do  while (0)
LIST_HEAD                                           \
struct name
LIST_HEAD_INITIALIZER                                     \
LIST_ENTRY                                                \
struct
LIST_EMPTY        ((head)->lh_first == NULL)
LIST_FIRST        ((head)->lh_first)
LIST_FOREACH                                  \
for ((var) = LIST_FIRST((head));                                \
(var);                                                      \
(var) = LIST_NEXT((var), field))
LIST_FOREACH_SAFE                       \
for ((var) = LIST_FIRST((head));                                \
(var) && ((tvar) = LIST_NEXT((var), field), 1);             \
(var) = (tvar))
LIST_INIT do  while (0)
LIST_INSERT_AFTER do  while (0)
LIST_INSERT_BEFORE do  while (0)
LIST_INSERT_HEAD do  while (0)
LIST_NEXT   ((elm)->field.le_next)
LIST_REMOVE do  while (0)
TAILQ_HEAD                                          \
struct name
TAILQ_HEAD_INITIALIZER                                    \
TAILQ_ENTRY                                               \
struct
TAILQ_CONCAT do  while (0)
TAILQ_EMPTY       ((head)->tqh_first == NULL)
TAILQ_FIRST       ((head)->tqh_first)
TAILQ_FOREACH                                 \
for ((var) = TAILQ_FIRST((head));                               \
(var);                                                      \
(var) = TAILQ_NEXT((var), field))
TAILQ_FOREACH_SAFE                      \
for ((var) = TAILQ_FIRST((head));                               \
(var) && ((tvar) = TAILQ_NEXT((var), field), 1);            \
(var) = (tvar))
TAILQ_FOREACH_REVERSE               \
for ((var) = TAILQ_LAST((head), headname);                      \
(var);                                                      \
(var) = TAILQ_PREV((var), headname, field))
TAILQ_FOREACH_REVERSE_SAFE    \
for ((var) = TAILQ_LAST((head), headname);                      \
(var) && ((tvar) = TAILQ_PREV((var), headname, field), 1);  \
(var) = (tvar))
TAILQ_INIT do  while (0)
TAILQ_INSERT_AFTER do  while (0)
TAILQ_INSERT_BEFORE do  while (0)
TAILQ_INSERT_HEAD do  while (0)
TAILQ_INSERT_TAIL do  while (0)
TAILQ_LAST                                      \
(*(((struct headname *)((head)->tqh_last))->tqh_last))
TAILQ_NEXT ((elm)->field.tqe_next)
TAILQ_PREV                                \
(*(((struct headname *)((elm)->field.tqe_prev))->tqh_last))
TAILQ_REMOVE do  while (0)
