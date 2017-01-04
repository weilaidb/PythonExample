#define _XFRM_HASH_H
static inline unsigned int __xfrm4_addr_hash(const xfrm_address_t *addr)
static inline unsigned int __xfrm6_addr_hash(const xfrm_address_t *addr)
static inline unsigned int __xfrm4_daddr_saddr_hash(const xfrm_address_t *daddr,
const xfrm_address_t *saddr)
static inline unsigned int __xfrm6_daddr_saddr_hash(const xfrm_address_t *daddr,
const xfrm_address_t *saddr)
static inline unsigned int __xfrm_dst_hash(const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
u32 reqid, unsigned short family,
unsigned int hmask)
static inline unsigned __xfrm_src_hash(const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
unsigned short family,
unsigned int hmask)
static inline unsigned int
__xfrm_spi_hash(const xfrm_address_t *daddr, __be32 spi, u8 proto,
unsigned short family, unsigned int hmask)
static inline unsigned int __idx_hash(u32 index, unsigned int hmask)
static inline unsigned int __sel_hash(const struct xfrm_selector *sel,
unsigned short family, unsigned int hmask)
static inline unsigned int __addr_hash(const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
unsigned short family, unsigned int hmask)
extern struct hlist_head *xfrm_hash_alloc(unsigned int sz);
extern void xfrm_hash_free(struct hlist_head *n, unsigned int sz);
