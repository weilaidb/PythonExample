#define __LINUX_NODEMASK_H
typedef struct  nodemask_t;
extern nodemask_t _unused_nodemask_arg_;
#define node_set(node, dst) __node_set((node), &(dst))
static inline void __node_set(int node, volatile nodemask_t *dstp)
#define node_clear(node, dst) __node_clear((node), &(dst))
static inline void __node_clear(int node, volatile nodemask_t *dstp)
#define nodes_setall(dst) __nodes_setall(&(dst), MAX_NUMNODES)
static inline void __nodes_setall(nodemask_t *dstp, int nbits)
#define nodes_clear(dst) __nodes_clear(&(dst), MAX_NUMNODES)
static inline void __nodes_clear(nodemask_t *dstp, int nbits)
#define node_isset(node, nodemask) test_bit((node), (nodemask).bits)
#define node_test_and_set(node, nodemask) \
__node_test_and_set((node), &(nodemask))
static inline int __node_test_and_set(int node, nodemask_t *addr)
#define nodes_and(dst, src1, src2) \
__nodes_and(&(dst), &(src1), &(src2), MAX_NUMNODES)
static inline void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_or(dst, src1, src2) \
__nodes_or(&(dst), &(src1), &(src2), MAX_NUMNODES)
static inline void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_xor(dst, src1, src2) \
__nodes_xor(&(dst), &(src1), &(src2), MAX_NUMNODES)
static inline void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_andnot(dst, src1, src2) \
__nodes_andnot(&(dst), &(src1), &(src2), MAX_NUMNODES)
static inline void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_complement(dst, src) \
__nodes_complement(&(dst), &(src), MAX_NUMNODES)
static inline void __nodes_complement(nodemask_t *dstp,
const nodemask_t *srcp, int nbits)
#define nodes_equal(src1, src2) \
__nodes_equal(&(src1), &(src2), MAX_NUMNODES)
static inline int __nodes_equal(const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_intersects(src1, src2) \
__nodes_intersects(&(src1), &(src2), MAX_NUMNODES)
static inline int __nodes_intersects(const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_subset(src1, src2) \
__nodes_subset(&(src1), &(src2), MAX_NUMNODES)
static inline int __nodes_subset(const nodemask_t *src1p,
const nodemask_t *src2p, int nbits)
#define nodes_empty(src) __nodes_empty(&(src), MAX_NUMNODES)
static inline int __nodes_empty(const nodemask_t *srcp, int nbits)
#define nodes_full(nodemask) __nodes_full(&(nodemask), MAX_NUMNODES)
static inline int __nodes_full(const nodemask_t *srcp, int nbits)
#define nodes_weight(nodemask) __nodes_weight(&(nodemask), MAX_NUMNODES)
static inline int __nodes_weight(const nodemask_t *srcp, int nbits)
#define nodes_shift_right(dst, src, n) \
__nodes_shift_right(&(dst), &(src), (n), MAX_NUMNODES)
static inline void __nodes_shift_right(nodemask_t *dstp,
const nodemask_t *srcp, int n, int nbits)
#define nodes_shift_left(dst, src, n) \
__nodes_shift_left(&(dst), &(src), (n), MAX_NUMNODES)
static inline void __nodes_shift_left(nodemask_t *dstp,
const nodemask_t *srcp, int n, int nbits)
#define first_node(src) __first_node(&(src))
static inline int __first_node(const nodemask_t *srcp)
#define next_node(n, src) __next_node((n), &(src))
static inline int __next_node(int n, const nodemask_t *srcp)
static inline void init_nodemask_of_node(nodemask_t *mask, int node)
#define nodemask_of_node(node)						\
()
#define first_unset_node(mask) __first_unset_node(&(mask))
static inline int __first_unset_node(const nodemask_t *maskp)
#define NODE_MASK_LAST_WORD BITMAP_LAST_WORD_MASK(MAX_NUMNODES)
#if MAX_NUMNODES <= BITS_PER_LONG
#define NODE_MASK_ALL							\
((nodemask_t) )
#define NODE_MASK_ALL							\
((nodemask_t) )
#define NODE_MASK_NONE							\
((nodemask_t) )
#define nodes_addr(src) ((src).bits)
#define nodemask_scnprintf(buf, len, src) \
__nodemask_scnprintf((buf), (len), &(src), MAX_NUMNODES)
static inline int __nodemask_scnprintf(char *buf, int len,
const nodemask_t *srcp, int nbits)
#define nodemask_parse_user(ubuf, ulen, dst) \
__nodemask_parse_user((ubuf), (ulen), &(dst), MAX_NUMNODES)
static inline int __nodemask_parse_user(const char __user *buf, int len,
nodemask_t *dstp, int nbits)
#define nodelist_scnprintf(buf, len, src) \
__nodelist_scnprintf((buf), (len), &(src), MAX_NUMNODES)
static inline int __nodelist_scnprintf(char *buf, int len,
const nodemask_t *srcp, int nbits)
#define nodelist_parse(buf, dst) __nodelist_parse((buf), &(dst), MAX_NUMNODES)
static inline int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
#define node_remap(oldbit, old, new) \
__node_remap((oldbit), &(old), &(new), MAX_NUMNODES)
static inline int __node_remap(int oldbit,
const nodemask_t *oldp, const nodemask_t *newp, int nbits)
#define nodes_remap(dst, src, old, new) \
__nodes_remap(&(dst), &(src), &(old), &(new), MAX_NUMNODES)
static inline void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
const nodemask_t *oldp, const nodemask_t *newp, int nbits)
#define nodes_onto(dst, orig, relmap) \
__nodes_onto(&(dst), &(orig), &(relmap), MAX_NUMNODES)
static inline void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
const nodemask_t *relmapp, int nbits)
#define nodes_fold(dst, orig, sz) \
__nodes_fold(&(dst), &(orig), sz, MAX_NUMNODES)
static inline void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
int sz, int nbits)
#if MAX_NUMNODES > 1
#define for_each_node_mask(node, mask)			\
for ((node) = first_node(mask);			\
(node) < MAX_NUMNODES;			\
(node) = next_node((node), (mask)))
#define for_each_node_mask(node, mask)			\
if (!nodes_empty(mask))				\
for ((node) = 0; (node) < 1; (node)++)
enum node_states ;
extern nodemask_t node_states[NR_NODE_STATES];
#if MAX_NUMNODES > 1
static inline int node_state(int node, enum node_states state)
static inline void node_set_state(int node, enum node_states state)
static inline void node_clear_state(int node, enum node_states state)
static inline int num_node_state(enum node_states state)
#define for_each_node_state(__node, __state) \
for_each_node_mask((__node), node_states[__state])
#define first_online_node	first_node(node_states[N_ONLINE])
#define next_online_node(nid)	next_node((nid), node_states[N_ONLINE])
extern int nr_node_ids;
extern int nr_online_nodes;
static inline void node_set_online(int nid)
static inline void node_set_offline(int nid)
static inline int node_state(int node, enum node_states state)
static inline void node_set_state(int node, enum node_states state)
static inline void node_clear_state(int node, enum node_states state)
static inline int num_node_state(enum node_states state)
#define for_each_node_state(node, __state) \
for ( (node) = 0; (node) == 0; (node) = 1)
#define first_online_node	0
#define next_online_node(nid)	(MAX_NUMNODES)
#define nr_node_ids		1
#define nr_online_nodes		1
#define node_set_online(node)	   node_set_state((node), N_ONLINE)
#define node_set_offline(node)	   node_clear_state((node), N_ONLINE)
#define node_online_map 	node_states[N_ONLINE]
#define node_possible_map 	node_states[N_POSSIBLE]
#define num_online_nodes()	num_node_state(N_ONLINE)
#define num_possible_nodes()	num_node_state(N_POSSIBLE)
#define node_online(node)	node_state((node), N_ONLINE)
#define node_possible(node)	node_state((node), N_POSSIBLE)
#define for_each_node(node)	   for_each_node_state(node, N_POSSIBLE)
#define for_each_online_node(node) for_each_node_state(node, N_ONLINE)
#if NODES_SHIFT > 8
#define NODEMASK_ALLOC(type, name, gfp_flags)	\
type *name = kmalloc(sizeof(*name), gfp_flags)
#define NODEMASK_FREE(m)			kfree(m)
#define NODEMASK_ALLOC(type, name, gfp_flags)	type _##name, *name = &_##name
#define NODEMASK_FREE(m)			do  while (0)
struct nodemask_scratch ;
#define NODEMASK_SCRATCH(x)						\
NODEMASK_ALLOC(struct nodemask_scratch, x,	\
GFP_KERNEL | __GFP_NORETRY)
#define NODEMASK_SCRATCH_FREE(x)	NODEMASK_FREE(x)
