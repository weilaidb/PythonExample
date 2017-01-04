#define REG_WRITE_D(_ah, _reg, _val) \
ath9k_hw_common(_ah)->ops->write((_ah), (_val), (_reg))
#define REG_READ_D(_ah, _reg) \
ath9k_hw_common(_ah)->ops->read((_ah), (_reg))
static int ath9k_debugfs_open(struct inode *inode, struct file *file)
static ssize_t ath9k_debugfs_read_buf(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static int ath9k_debugfs_release_buf(struct inode *inode, struct file *file)
static ssize_t read_file_debug(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_debug(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_debug = ;
#define DMA_BUF_LEN 1024
static ssize_t read_file_tx_chainmask(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_tx_chainmask(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_tx_chainmask = ;
static ssize_t read_file_rx_chainmask(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_rx_chainmask(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_rx_chainmask = ;
static ssize_t read_file_dma(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_dma = ;
void ath_debug_stat_interrupt(struct ath_softc *sc, enum ath9k_int status)
static ssize_t read_file_interrupt(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_interrupt = ;
static const char *channel_type_str(enum nl80211_channel_type t)
static ssize_t read_file_wiphy(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_wiphy = ;
#define PR_QNUM(_n) sc->tx.txq_map[_n]->axq_qnum
#define PR(str, elem)							\
do  while(0)
#define PRX(str, elem)							\
do  while(0)
#define PRQLE(str, elem)						\
do  while (0)
static ssize_t read_file_xmit(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t read_file_stations(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t read_file_misc(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
void ath_debug_stat_tx(struct ath_softc *sc, struct ath_buf *bf,
struct ath_tx_status *ts, struct ath_txq *txq)
static const struct file_operations fops_xmit = ;
static const struct file_operations fops_stations = ;
static const struct file_operations fops_misc = ;
static ssize_t read_file_recv(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
void ath_debug_stat_rx(struct ath_softc *sc, struct ath_rx_status *rs)
static const struct file_operations fops_recv = ;
static ssize_t read_file_regidx(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_regidx(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_regidx = ;
static ssize_t read_file_regval(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_regval(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_regval = ;
#define REGDUMP_LINE_SIZE	20
static int open_file_regdump(struct inode *inode, struct file *file)
static const struct file_operations fops_regdump = ;
int ath9k_init_debug(struct ath_hw *ah)
