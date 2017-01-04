enum ;
static int inline_thold __read_mostly = MAX_INLINE;
module_param_named(inline_thold, inline_thold, int, 0444);
MODULE_PARM_DESC(inline_thold, "threshold for using inline data");
int mlx4_en_create_tx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring, int qpn, u32 size,
u16 stride)
void mlx4_en_destroy_tx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring)
int mlx4_en_activate_tx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring,
int cq)
void mlx4_en_deactivate_tx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring)
static u32 mlx4_en_free_tx_desc(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring,
int index, u8 owner)
int mlx4_en_free_tx_buf(struct net_device *dev, struct mlx4_en_tx_ring *ring)
static void mlx4_en_process_tx_cq(struct net_device *dev, struct mlx4_en_cq *cq)
void mlx4_en_tx_irq(struct mlx4_cq *mcq)
void mlx4_en_poll_tx_cq(unsigned long data)
static struct mlx4_en_tx_desc *mlx4_en_bounce_to_desc(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring,
u32 index,
unsigned int desc_size)
static inline void mlx4_en_xmit_poll(struct mlx4_en_priv *priv, int tx_ind)
static void *get_frag_ptr(struct sk_buff *skb)
static int is_inline(struct sk_buff *skb, void **pfrag)
static int inline_size(struct sk_buff *skb)
static int get_real_size(struct sk_buff *skb, struct net_device *dev,
int *lso_header_size)
static void build_inline_wqe(struct mlx4_en_tx_desc *tx_desc, struct sk_buff *skb,
int real_size, u16 *vlan_tag, int tx_ind, void *fragptr)
u16 mlx4_en_select_queue(struct net_device *dev, struct sk_buff *skb)
static void mlx4_bf_copy(unsigned long *dst, unsigned long *src, unsigned bytecnt)
netdev_tx_t mlx4_en_xmit(struct sk_buff *skb, struct net_device *dev)
