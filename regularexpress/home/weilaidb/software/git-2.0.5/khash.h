#define __AC_KHASH_H
#define AC_VERSION_KHASH_H "0.2.8"
typedef uint32_t khint32_t;
typedef uint64_t khint64_t;
typedef khint32_t khint_t;
typedef khint_t khiter_t;
#define __ac_isempty(flag, i) ((flag[i>>4]>>((i&0xfU)<<1))&2)
#define __ac_isdel(flag, i) ((flag[i>>4]>>((i&0xfU)<<1))&1)
#define __ac_iseither(flag, i) ((flag[i>>4]>>((i&0xfU)<<1))&3)
#define __ac_set_isdel_false(flag, i) (flag[i>>4]&=~(1ul<<((i&0xfU)<<1)))
#define __ac_set_isempty_false(flag, i) (flag[i>>4]&=~(2ul<<((i&0xfU)<<1)))
#define __ac_set_isboth_false(flag, i) (flag[i>>4]&=~(3ul<<((i&0xfU)<<1)))
#define __ac_set_isdel_true(flag, i) (flag[i>>4]|=1ul<<((i&0xfU)<<1))
#define __ac_fsize(m) ((m) < 16? 1 : (m)>>4)
#define kroundup32(x) (--(x), (x)|=(x)>>1, (x)|=(x)>>2, (x)|=(x)>>4, (x)|=(x)>>8, (x)|=(x)>>16, ++(x))
static inline khint_t __ac_X31_hash_string(const char *s)
#define kh_str_hash_func(key) __ac_X31_hash_string(key)
#define kh_str_hash_equal(a, b) (strcmp(a, b) == 0)
static const double __ac_HASH_UPPER = 0.77;
#define __KHASH_TYPE(name, khkey_t, khval_t) \
typedef struct  kh_##name##_t;
#define __KHASH_PROTOTYPES(name, khkey_t, khval_t)	 					\
extern kh_##name##_t *kh_init_##name(void);							\
extern void kh_destroy_##name(kh_##name##_t *h);					\
extern void kh_clear_##name(kh_##name##_t *h);						\
extern khint_t kh_get_##name(const kh_##name##_t *h, khkey_t key); 	\
extern int kh_resize_##name(kh_##name##_t *h, khint_t new_n_buckets); \
extern khint_t kh_put_##name(kh_##name##_t *h, khkey_t key, int *ret); \
extern void kh_del_##name(kh_##name##_t *h, khint_t x);
#define __KHASH_IMPL(name, SCOPE, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal) \
SCOPE kh_##name##_t *kh_init_##name(void) 																	\
SCOPE void kh_destroy_##name(kh_##name##_t *h)						\
\
SCOPE void kh_clear_##name(kh_##name##_t *h)						\
\
SCOPE khint_t kh_get_##name(const kh_##name##_t *h, khkey_t key) 	\
\
SCOPE int kh_resize_##name(kh_##name##_t *h, khint_t new_n_buckets) \
\
SCOPE khint_t kh_put_##name(kh_##name##_t *h, khkey_t key, int *ret) \
\
SCOPE void kh_del_##name(kh_##name##_t *h, khint_t x)				\
#define KHASH_DECLARE(name, khkey_t, khval_t)		 					\
__KHASH_TYPE(name, khkey_t, khval_t) 								\
__KHASH_PROTOTYPES(name, khkey_t, khval_t)
#define KHASH_INIT2(name, SCOPE, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal) \
__KHASH_TYPE(name, khkey_t, khval_t) 								\
__KHASH_IMPL(name, SCOPE, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal)
#define KHASH_INIT(name, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal) \
KHASH_INIT2(name, static inline, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal)
#define kh_exist(h, x) (!__ac_iseither((h)->flags, (x)))
#define kh_key(h, x) ((h)->keys[x])
#define kh_val(h, x) ((h)->vals[x])
#define kh_value(h, x) ((h)->vals[x])
#define kh_begin(h) (khint_t)(0)
#define kh_end(h) ((h)->n_buckets)
#define kh_size(h) ((h)->size)
#define kh_n_buckets(h) ((h)->n_buckets)
#define kh_foreach(h, kvar, vvar, code)
#define kh_foreach_value(h, vvar, code)
static inline khint_t __kh_oid_hash(const unsigned char *oid)
#define __kh_oid_cmp(a, b) (hashcmp(a, b) == 0)
KHASH_INIT(sha1, const unsigned char *, void *, 1, __kh_oid_hash, __kh_oid_cmp)
typedef kh_sha1_t khash_sha1;
KHASH_INIT(sha1_pos, const unsigned char *, int, 1, __kh_oid_hash, __kh_oid_cmp)
typedef kh_sha1_pos_t khash_sha1_pos;
