#define _IP_SET_AHASH_H
#define AHASH_INIT_SIZE			4
#define AHASH_MAX_SIZE			(3*4)
struct hbucket ;
struct htable ;
#define hbucket(h, i)		&((h)->bucket[i])
struct ip_set_hash_nets ;
struct ip_set_hash ;
static u8
htable_bits(u32 hashsize)
#define SET_HOST_MASK(family)	(family == AF_INET ? 32 : 128)
static void
add_cidr(struct ip_set_hash *h, u8 cidr, u8 host_mask)
static void
del_cidr(struct ip_set_hash *h, u8 cidr, u8 host_mask)
static void
ahash_destroy(struct htable *t)
static size_t
ahash_memsize(const struct ip_set_hash *h, size_t dsize, u8 host_mask)
static void
ip_set_hash_flush(struct ip_set *set)
static void
ip_set_hash_destroy(struct ip_set *set)
#define HKEY(data, initval, htable_bits)				 \
(jhash2((u32 *)(data), sizeof(struct type_pf_elem)/sizeof(u32), initval) \
& jhash_mask(htable_bits))
#define CONCAT(a, b, c)		a##b##c
#define TOKEN(a, b, c)		CONCAT(a, b, c)
#define type_pf_data_equal	TOKEN(TYPE, PF, _data_equal)
#define type_pf_data_isnull	TOKEN(TYPE, PF, _data_isnull)
#define type_pf_data_copy	TOKEN(TYPE, PF, _data_copy)
#define type_pf_data_zero_out	TOKEN(TYPE, PF, _data_zero_out)
#define type_pf_data_netmask	TOKEN(TYPE, PF, _data_netmask)
#define type_pf_data_list	TOKEN(TYPE, PF, _data_list)
#define type_pf_data_tlist	TOKEN(TYPE, PF, _data_tlist)
#define type_pf_elem		TOKEN(TYPE, PF, _elem)
#define type_pf_telem		TOKEN(TYPE, PF, _telem)
#define type_pf_data_timeout	TOKEN(TYPE, PF, _data_timeout)
#define type_pf_data_expired	TOKEN(TYPE, PF, _data_expired)
#define type_pf_data_timeout_set TOKEN(TYPE, PF, _data_timeout_set)
#define type_pf_elem_add	TOKEN(TYPE, PF, _elem_add)
#define type_pf_add		TOKEN(TYPE, PF, _add)
#define type_pf_del		TOKEN(TYPE, PF, _del)
#define type_pf_test_cidrs	TOKEN(TYPE, PF, _test_cidrs)
#define type_pf_test		TOKEN(TYPE, PF, _test)
#define type_pf_elem_tadd	TOKEN(TYPE, PF, _elem_tadd)
#define type_pf_del_telem	TOKEN(TYPE, PF, _ahash_del_telem)
#define type_pf_expire		TOKEN(TYPE, PF, _expire)
#define type_pf_tadd		TOKEN(TYPE, PF, _tadd)
#define type_pf_tdel		TOKEN(TYPE, PF, _tdel)
#define type_pf_ttest_cidrs	TOKEN(TYPE, PF, _ahash_ttest_cidrs)
#define type_pf_ttest		TOKEN(TYPE, PF, _ahash_ttest)
#define type_pf_resize		TOKEN(TYPE, PF, _resize)
#define type_pf_tresize		TOKEN(TYPE, PF, _tresize)
#define type_pf_flush		ip_set_hash_flush
#define type_pf_destroy		ip_set_hash_destroy
#define type_pf_head		TOKEN(TYPE, PF, _head)
#define type_pf_list		TOKEN(TYPE, PF, _list)
#define type_pf_tlist		TOKEN(TYPE, PF, _tlist)
#define type_pf_same_set	TOKEN(TYPE, PF, _same_set)
#define type_pf_kadt		TOKEN(TYPE, PF, _kadt)
#define type_pf_uadt		TOKEN(TYPE, PF, _uadt)
#define type_pf_gc		TOKEN(TYPE, PF, _gc)
#define type_pf_gc_init		TOKEN(TYPE, PF, _gc_init)
#define type_pf_variant		TOKEN(TYPE, PF, _variant)
#define type_pf_tvariant	TOKEN(TYPE, PF, _tvariant)
#define ahash_data(n, i)	\
((struct type_pf_elem *)((n)->value) + (i))
static int
type_pf_elem_add(struct hbucket *n, const struct type_pf_elem *value)
static int
type_pf_resize(struct ip_set *set, bool retried)
static int
type_pf_add(struct ip_set *set, void *value, u32 timeout)
static int
type_pf_del(struct ip_set *set, void *value, u32 timeout)
static int
type_pf_test_cidrs(struct ip_set *set, struct type_pf_elem *d, u32 timeout)
static int
type_pf_test(struct ip_set *set, void *value, u32 timeout)
static int
type_pf_head(struct ip_set *set, struct sk_buff *skb)
static int
type_pf_list(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
type_pf_kadt(struct ip_set *set, const struct sk_buff * skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags);
static int
type_pf_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags);
static const struct ip_set_type_variant type_pf_variant = ;
#define ahash_tdata(n, i) \
(struct type_pf_elem *)((struct type_pf_telem *)((n)->value) + (i))
static inline u32
type_pf_data_timeout(const struct type_pf_elem *data)
static inline bool
type_pf_data_expired(const struct type_pf_elem *data)
static inline void
type_pf_data_timeout_set(struct type_pf_elem *data, u32 timeout)
static int
type_pf_elem_tadd(struct hbucket *n, const struct type_pf_elem *value,
u32 timeout)
static void
type_pf_expire(struct ip_set_hash *h)
static int
type_pf_tresize(struct ip_set *set, bool retried)
static int
type_pf_tadd(struct ip_set *set, void *value, u32 timeout)
static int
type_pf_tdel(struct ip_set *set, void *value, u32 timeout)
static int
type_pf_ttest_cidrs(struct ip_set *set, struct type_pf_elem *d, u32 timeout)
static int
type_pf_ttest(struct ip_set *set, void *value, u32 timeout)
static int
type_pf_tlist(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static const struct ip_set_type_variant type_pf_tvariant = ;
static void
type_pf_gc(unsigned long ul_set)
static void
type_pf_gc_init(struct ip_set *set)
#undef type_pf_data_equal
#undef type_pf_data_isnull
#undef type_pf_data_copy
#undef type_pf_data_zero_out
#undef type_pf_data_list
#undef type_pf_data_tlist
#undef type_pf_elem
#undef type_pf_telem
#undef type_pf_data_timeout
#undef type_pf_data_expired
#undef type_pf_data_netmask
#undef type_pf_data_timeout_set
#undef type_pf_elem_add
#undef type_pf_add
#undef type_pf_del
#undef type_pf_test_cidrs
#undef type_pf_test
#undef type_pf_elem_tadd
#undef type_pf_expire
#undef type_pf_tadd
#undef type_pf_tdel
#undef type_pf_ttest_cidrs
#undef type_pf_ttest
#undef type_pf_resize
#undef type_pf_tresize
#undef type_pf_flush
#undef type_pf_destroy
#undef type_pf_head
#undef type_pf_list
#undef type_pf_tlist
#undef type_pf_same_set
#undef type_pf_kadt
#undef type_pf_uadt
#undef type_pf_gc
#undef type_pf_gc_init
#undef type_pf_variant
#undef type_pf_tvariant
