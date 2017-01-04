extern u32 bcom_fec_rx_task[];
extern u32 bcom_fec_tx_task[];
struct bcom_fec_rx_var ;
struct bcom_fec_rx_inc ;
struct bcom_fec_tx_var ;
struct bcom_fec_tx_inc ;
struct bcom_fec_priv ;
struct bcom_task *
bcom_fec_rx_init(int queue_len, phys_addr_t fifo, int maxbufsize)
EXPORT_SYMBOL_GPL(bcom_fec_rx_init);
int
bcom_fec_rx_reset(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_fec_rx_reset);
void
bcom_fec_rx_release(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_fec_rx_release);
static u32 *self_modified_drd(int tasknum)
struct bcom_task *
bcom_fec_tx_init(int queue_len, phys_addr_t fifo)
EXPORT_SYMBOL_GPL(bcom_fec_tx_init);
int
bcom_fec_tx_reset(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_fec_tx_reset);
void
bcom_fec_tx_release(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_fec_tx_release);
MODULE_DESCRIPTION("BestComm FEC tasks driver");
MODULE_AUTHOR("Dale Farnsworth <dfarnsworth@mvista.com>");
MODULE_LICENSE("GPL v2");
