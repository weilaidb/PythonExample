#define SYM_MISC_H
typedef struct sym_quehead  SYM_QUEHEAD;
#define sym_que_init(ptr) do  while (0)
static inline struct sym_quehead *sym_que_first(struct sym_quehead *head)
static inline struct sym_quehead *sym_que_last(struct sym_quehead *head)
static inline void __sym_que_add(struct sym_quehead * new,
struct sym_quehead * blink,
struct sym_quehead * flink)
static inline void __sym_que_del(struct sym_quehead * blink,
struct sym_quehead * flink)
static inline int sym_que_empty(struct sym_quehead *head)
static inline void sym_que_splice(struct sym_quehead *list,
struct sym_quehead *head)
static inline void sym_que_move(struct sym_quehead *orig,
struct sym_quehead *dest)
#define sym_que_entry(ptr, type, member) container_of(ptr, type, member)
#define sym_insque(new, pos)		__sym_que_add(new, pos, (pos)->flink)
#define sym_remque(el)			__sym_que_del((el)->blink, (el)->flink)
#define sym_insque_head(new, head)	__sym_que_add(new, head, (head)->flink)
static inline struct sym_quehead *sym_remque_head(struct sym_quehead *head)
#define sym_insque_tail(new, head)	__sym_que_add(new, (head)->blink, head)
static inline struct sym_quehead *sym_remque_tail(struct sym_quehead *head)
#define FOR_EACH_QUEUED_ELEMENT(head, qp) \
for (qp = (head)->flink; qp != (head); qp = qp->flink)
#define sym_qptr(p)	((struct sym_quehead *) (p))
#define sym_set_bit(p, n)	(((u32 *)(p))[(n)>>5] |=  (1<<((n)&0x1f)))
#define sym_clr_bit(p, n)	(((u32 *)(p))[(n)>>5] &= ~(1<<((n)&0x1f)))
#define sym_is_bit(p, n)	(((u32 *)(p))[(n)>>5] &   (1<<((n)&0x1f)))
#define _U_(a,m)	(a)<=(1<<m)?m:
#define _LGRU16_(a) \
( \
_U_(a, 0)_U_(a, 1)_U_(a, 2)_U_(a, 3)_U_(a, 4)_U_(a, 5)_U_(a, 6)_U_(a, 7) \
_U_(a, 8)_U_(a, 9)_U_(a,10)_U_(a,11)_U_(a,12)_U_(a,13)_U_(a,14)_U_(a,15) \
16)
