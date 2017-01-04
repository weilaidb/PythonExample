static int mlx4_en_alloc_frag(struct mlx4_en_priv *priv,
struct mlx4_en_rx_desc *rx_desc,
struct skb_frag_struct *skb_frags,
struct mlx4_en_rx_alloc *ring_alloc,
int i)
static int mlx4_en_init_allocator(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring)
static void mlx4_en_destroy_allocator(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring)
static void mlx4_en_init_rx_desc(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring, int index)
static int mlx4_en_prepare_rx_desc(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring, int index)
static inline void mlx4_en_update_rx_prod_db(struct mlx4_en_rx_ring *ring)
static void mlx4_en_free_rx_desc(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring,
int index)
static int mlx4_en_fill_rx_buffers(struct mlx4_en_priv *priv)
static void mlx4_en_free_rx_buf(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring)
int mlx4_en_create_rx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring, u32 size, u16 stride)
int mlx4_en_activate_rx_rings(struct mlx4_en_priv *priv)
void mlx4_en_destroy_rx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring)
void mlx4_en_deactivate_rx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring)
static int mlx4_en_complete_rx_desc(struct mlx4_en_priv *priv,
struct mlx4_en_rx_desc *rx_desc,
struct skb_frag_struct *skb_frags,
struct skb_frag_struct *skb_frags_rx,
struct mlx4_en_rx_alloc *page_alloc,
int length)
static struct sk_buff *mlx4_en_rx_skb(struct mlx4_en_priv *priv,
struct mlx4_en_rx_desc *rx_desc,
struct skb_frag_struct *skb_frags,
struct mlx4_en_rx_alloc *page_alloc,
unsigned int length)
static void validate_loopback(struct mlx4_en_priv *priv, struct sk_buff *skb)
int mlx4_en_process_rx_cq(struct net_device *dev, struct mlx4_en_cq *cq, int budget)
void mlx4_en_rx_irq(struct mlx4_cq *mcq)
int mlx4_en_poll_rx_cq(struct napi_struct *napi, int budget)
static int mlx4_en_last_alloc_offset(struct mlx4_en_priv *priv, u16 stride, u16 align)
static int frag_sizes[] = ;
void mlx4_en_calc_rx_buf(struct net_device *dev)
static int mlx4_en_config_rss_qp(struct mlx4_en_priv *priv, int qpn,
struct mlx4_en_rx_ring *ring,
enum mlx4_qp_state *state,
struct mlx4_qp *qp)
int mlx4_en_config_rss_steer(struct mlx4_en_priv *priv)
void mlx4_en_release_rss_steer(struct mlx4_en_priv *priv)
