extern u32 bcom_gen_bd_rx_task[];
extern u32 bcom_gen_bd_tx_task[];
struct bcom_gen_bd_rx_var ;
struct bcom_gen_bd_rx_inc ;
struct bcom_gen_bd_tx_var ;
struct bcom_gen_bd_tx_inc ;
struct bcom_gen_bd_priv ;
struct bcom_task *
bcom_gen_bd_rx_init(int queue_len, phys_addr_t fifo,
int initiator, int ipr, int maxbufsize)
EXPORT_SYMBOL_GPL(bcom_gen_bd_rx_init);
int
bcom_gen_bd_rx_reset(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_gen_bd_rx_reset);
void
bcom_gen_bd_rx_release(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_gen_bd_rx_release);
extern struct bcom_task *
bcom_gen_bd_tx_init(int queue_len, phys_addr_t fifo,
int initiator, int ipr)
EXPORT_SYMBOL_GPL(bcom_gen_bd_tx_init);
int
bcom_gen_bd_tx_reset(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_gen_bd_tx_reset);
void
bcom_gen_bd_tx_release(struct bcom_task *tsk)
EXPORT_SYMBOL_GPL(bcom_gen_bd_tx_release);
static struct bcom_psc_params  bcom_psc_params[] = ;
struct bcom_task * bcom_psc_gen_bd_rx_init(unsigned psc_num, int queue_len,
phys_addr_t fifo, int maxbufsize)
EXPORT_SYMBOL_GPL(bcom_psc_gen_bd_rx_init);
struct bcom_task *
bcom_psc_gen_bd_tx_init(unsigned psc_num, int queue_len, phys_addr_t fifo)
EXPORT_SYMBOL_GPL(bcom_psc_gen_bd_tx_init);
MODULE_DESCRIPTION("BestComm General Buffer Descriptor tasks driver");
MODULE_AUTHOR("Jeff Gibbons <jeff.gibbons@appspec.com>");
MODULE_LICENSE("GPL v2");
