u32 ath5k_hw_num_tx_pending(struct ath5k_hw *ah, unsigned int queue)
void ath5k_hw_release_tx_queue(struct ath5k_hw *ah, unsigned int queue)
static u16 ath5k_cw_validate(u16 cw_req)
int ath5k_hw_get_tx_queueprops(struct ath5k_hw *ah, int queue,
struct ath5k_txq_info *queue_info)
int ath5k_hw_set_tx_queueprops(struct ath5k_hw *ah, int queue,
const struct ath5k_txq_info *qinfo)
int ath5k_hw_setup_tx_queue(struct ath5k_hw *ah, enum ath5k_tx_queue queue_type,
struct ath5k_txq_info *queue_info)
void ath5k_hw_set_tx_retry_limits(struct ath5k_hw *ah,
unsigned int queue)
int ath5k_hw_reset_tx_queue(struct ath5k_hw *ah, unsigned int queue)
int ath5k_hw_set_ifs_intervals(struct ath5k_hw *ah, unsigned int slot_time)
int ath5k_hw_init_queues(struct ath5k_hw *ah)
