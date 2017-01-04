#define pr_fmt(fmt) KBUILD_MODNAME ":" fmt
#define NR_TX_BUF		6
#define NR_RX_BUF		6
#define TX_BUF_SZ		0x2000
#define RX_BUF_SZ		0x2000
#define CAIF_NEEDED_HEADROOM	32
#define CAIF_FLOW_ON		1
#define CAIF_FLOW_OFF		0
#define LOW_WATERMARK		3
#define HIGH_WATERMARK		4
#define SHM_MAX_FRMS_PER_BUF	10
#define SHM_CAIF_DESC_SIZE	((SHM_MAX_FRMS_PER_BUF + 1) * \
sizeof(struct shm_pck_desc))
#define SHM_CAIF_FRM_OFS	(SHM_CAIF_DESC_SIZE + (SHM_CAIF_DESC_SIZE % 32))
#define SHM_HDR_LEN		1
#define SHM_FRM_PAD_LEN		4
#define CAIF_MAX_MTU		4096
#define SHM_SET_FULL(x)	(((x+1) & 0x0F) << 0)
#define SHM_GET_FULL(x)	(((x >> 0) & 0x0F) - 1)
#define SHM_SET_EMPTY(x)	(((x+1) & 0x0F) << 4)
#define SHM_GET_EMPTY(x)	(((x >> 4) & 0x0F) - 1)
#define SHM_FULL_MASK		(0x0F << 0)
#define SHM_EMPTY_MASK		(0x0F << 4)
struct shm_pck_desc ;
struct buf_list ;
struct shm_caif_frm ;
struct shmdrv_layer ;
static int shm_netdev_open(struct net_device *shm_netdev)
static int shm_netdev_close(struct net_device *shm_netdev)
int caif_shmdrv_rx_cb(u32 mbx_msg, void *priv)
static void shm_rx_work_func(struct work_struct *rx_work)
static void shm_tx_work_func(struct work_struct *tx_work)
static int shm_netdev_tx(struct sk_buff *skb, struct net_device *shm_netdev)
static const struct net_device_ops netdev_ops = ;
static void shm_netdev_setup(struct net_device *pshm_netdev)
int caif_shmcore_probe(struct shmdev_layer *pshm_dev)
void caif_shmcore_remove(struct net_device *pshm_netdev)
