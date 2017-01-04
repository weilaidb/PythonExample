#define _CHECKSUM_H
static inline
__wsum csum_and_copy_from_user (const void __user *src, void *dst,
int len, __wsum sum, int *err_ptr)
static __inline__ __wsum csum_and_copy_to_user
(const void *src, void __user *dst, int len, __wsum sum, int *err_ptr)
static inline __wsum csum_add(__wsum csum, __wsum addend)
static inline __wsum csum_sub(__wsum csum, __wsum addend)
static inline __wsum
csum_block_add(__wsum csum, __wsum csum2, int offset)
static inline __wsum
csum_block_sub(__wsum csum, __wsum csum2, int offset)
static inline __wsum csum_unfold(__sum16 n)
#define CSUM_MANGLED_0 ((__force __sum16)0xffff)
static inline void csum_replace4(__sum16 *sum, __be32 from, __be32 to)
static inline void csum_replace2(__sum16 *sum, __be16 from, __be16 to)
struct sk_buff;
extern void inet_proto_csum_replace4(__sum16 *sum, struct sk_buff *skb,
__be32 from, __be32 to, int pseudohdr);
static inline void inet_proto_csum_replace2(__sum16 *sum, struct sk_buff *skb,
__be16 from, __be16 to,
int pseudohdr)
