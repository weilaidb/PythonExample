static int
ath5k_hw_setup_2word_tx_desc(struct ath5k_hw *ah, struct ath5k_desc *desc,
unsigned int pkt_len, unsigned int hdr_len, int padsize,
enum ath5k_pkt_type type,
unsigned int tx_power, unsigned int tx_rate0, unsigned int tx_tries0,
unsigned int key_index, unsigned int antenna_mode, unsigned int flags,
unsigned int rtscts_rate, unsigned int rtscts_duration)
static int ath5k_hw_setup_4word_tx_desc(struct ath5k_hw *ah,
struct ath5k_desc *desc, unsigned int pkt_len, unsigned int hdr_len,
int padsize,
enum ath5k_pkt_type type, unsigned int tx_power, unsigned int tx_rate0,
unsigned int tx_tries0, unsigned int key_index,
unsigned int antenna_mode, unsigned int flags,
unsigned int rtscts_rate,
unsigned int rtscts_duration)
int
ath5k_hw_setup_mrr_tx_desc(struct ath5k_hw *ah, struct ath5k_desc *desc,
unsigned int tx_rate1, u_int tx_tries1, u_int tx_rate2,
u_int tx_tries2, unsigned int tx_rate3, u_int tx_tries3)
static int ath5k_hw_proc_2word_tx_status(struct ath5k_hw *ah,
struct ath5k_desc *desc, struct ath5k_tx_status *ts)
static int ath5k_hw_proc_4word_tx_status(struct ath5k_hw *ah,
struct ath5k_desc *desc, struct ath5k_tx_status *ts)
int ath5k_hw_setup_rx_desc(struct ath5k_hw *ah, struct ath5k_desc *desc,
u32 size, unsigned int flags)
static int ath5k_hw_proc_5210_rx_status(struct ath5k_hw *ah,
struct ath5k_desc *desc, struct ath5k_rx_status *rs)
static int ath5k_hw_proc_5212_rx_status(struct ath5k_hw *ah,
struct ath5k_desc *desc,
struct ath5k_rx_status *rs)
int ath5k_hw_init_desc_functions(struct ath5k_hw *ah)
