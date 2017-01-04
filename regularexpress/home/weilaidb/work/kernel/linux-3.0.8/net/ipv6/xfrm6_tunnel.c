#define XFRM6_TUNNEL_SPI_BYADDR_HSIZE 256
#define XFRM6_TUNNEL_SPI_BYSPI_HSIZE 256
#define XFRM6_TUNNEL_SPI_MIN	1
#define XFRM6_TUNNEL_SPI_MAX	0xffffffff
struct xfrm6_tunnel_net ;
static int xfrm6_tunnel_net_id __read_mostly;
static inline struct xfrm6_tunnel_net *xfrm6_tunnel_pernet(struct net *net)
struct xfrm6_tunnel_spi ;
static DEFINE_SPINLOCK(xfrm6_tunnel_spi_lock);
static struct kmem_cache *xfrm6_tunnel_spi_kmem __read_mostly;
static inline unsigned xfrm6_tunnel_spi_hash_byaddr(const xfrm_address_t *addr)
static inline unsigned xfrm6_tunnel_spi_hash_byspi(u32 spi)
static struct xfrm6_tunnel_spi *__xfrm6_tunnel_spi_lookup(struct net *net, const xfrm_address_t *saddr)
__be32 xfrm6_tunnel_spi_lookup(struct net *net, const xfrm_address_t *saddr)
EXPORT_SYMBOL(xfrm6_tunnel_spi_lookup);
static int __xfrm6_tunnel_spi_check(struct net *net, u32 spi)
static u32 __xfrm6_tunnel_alloc_spi(struct net *net, xfrm_address_t *saddr)
__be32 xfrm6_tunnel_alloc_spi(struct net *net, xfrm_address_t *saddr)
EXPORT_SYMBOL(xfrm6_tunnel_alloc_spi);
static void x6spi_destroy_rcu(struct rcu_head *head)
static void xfrm6_tunnel_free_spi(struct net *net, xfrm_address_t *saddr)
static int xfrm6_tunnel_output(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm6_tunnel_input(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm6_tunnel_rcv(struct sk_buff *skb)
static int xfrm6_tunnel_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static int xfrm6_tunnel_init_state(struct xfrm_state *x)
static void xfrm6_tunnel_destroy(struct xfrm_state *x)
static const struct xfrm_type xfrm6_tunnel_type = ;
static struct xfrm6_tunnel xfrm6_tunnel_handler __read_mostly = ;
static struct xfrm6_tunnel xfrm46_tunnel_handler __read_mostly = ;
static int __net_init xfrm6_tunnel_net_init(struct net *net)
static void __net_exit xfrm6_tunnel_net_exit(struct net *net)
static struct pernet_operations xfrm6_tunnel_net_ops = ;
static int __init xfrm6_tunnel_init(void)
static void __exit xfrm6_tunnel_fini(void)
module_init(xfrm6_tunnel_init);
module_exit(xfrm6_tunnel_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET6, XFRM_PROTO_IPV6);
