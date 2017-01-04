static void ath9k_hw_set_txq_interrupts(struct ath_hw *ah,
struct ath9k_tx_queue_info *qi)
u32 ath9k_hw_gettxbuf(struct ath_hw *ah, u32 q)
EXPORT_SYMBOL(ath9k_hw_gettxbuf);
void ath9k_hw_puttxbuf(struct ath_hw *ah, u32 q, u32 txdp)
EXPORT_SYMBOL(ath9k_hw_puttxbuf);
void ath9k_hw_txstart(struct ath_hw *ah, u32 q)
EXPORT_SYMBOL(ath9k_hw_txstart);
void ath9k_hw_cleartxdesc(struct ath_hw *ah, void *ds)
EXPORT_SYMBOL(ath9k_hw_cleartxdesc);
u32 ath9k_hw_numtxpending(struct ath_hw *ah, u32 q)
EXPORT_SYMBOL(ath9k_hw_numtxpending);
bool ath9k_hw_updatetxtriglevel(struct ath_hw *ah, bool bIncTrigLevel)
EXPORT_SYMBOL(ath9k_hw_updatetxtriglevel);
void ath9k_hw_abort_tx_dma(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_abort_tx_dma);
bool ath9k_hw_stop_dma_queue(struct ath_hw *ah, u32 q)
EXPORT_SYMBOL(ath9k_hw_stop_dma_queue);
void ath9k_hw_gettxintrtxqs(struct ath_hw *ah, u32 *txqs)
EXPORT_SYMBOL(ath9k_hw_gettxintrtxqs);
bool ath9k_hw_set_txq_props(struct ath_hw *ah, int q,
const struct ath9k_tx_queue_info *qinfo)
EXPORT_SYMBOL(ath9k_hw_set_txq_props);
bool ath9k_hw_get_txq_props(struct ath_hw *ah, int q,
struct ath9k_tx_queue_info *qinfo)
EXPORT_SYMBOL(ath9k_hw_get_txq_props);
int ath9k_hw_setuptxqueue(struct ath_hw *ah, enum ath9k_tx_queue type,
const struct ath9k_tx_queue_info *qinfo)
EXPORT_SYMBOL(ath9k_hw_setuptxqueue);
bool ath9k_hw_releasetxqueue(struct ath_hw *ah, u32 q)
EXPORT_SYMBOL(ath9k_hw_releasetxqueue);
bool ath9k_hw_resettxqueue(struct ath_hw *ah, u32 q)
EXPORT_SYMBOL(ath9k_hw_resettxqueue);
int ath9k_hw_rxprocdesc(struct ath_hw *ah, struct ath_desc *ds,
struct ath_rx_status *rs, u64 tsf)
EXPORT_SYMBOL(ath9k_hw_rxprocdesc);
bool ath9k_hw_setrxabort(struct ath_hw *ah, bool set)
EXPORT_SYMBOL(ath9k_hw_setrxabort);
void ath9k_hw_putrxbuf(struct ath_hw *ah, u32 rxdp)
EXPORT_SYMBOL(ath9k_hw_putrxbuf);
void ath9k_hw_startpcureceive(struct ath_hw *ah, bool is_scanning)
EXPORT_SYMBOL(ath9k_hw_startpcureceive);
void ath9k_hw_abortpcurecv(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_abortpcurecv);
bool ath9k_hw_stopdmarecv(struct ath_hw *ah, bool *reset)
EXPORT_SYMBOL(ath9k_hw_stopdmarecv);
int ath9k_hw_beaconq_setup(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_beaconq_setup);
bool ath9k_hw_intrpend(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_intrpend);
void ath9k_hw_disable_interrupts(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_disable_interrupts);
void ath9k_hw_enable_interrupts(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_enable_interrupts);
void ath9k_hw_set_interrupts(struct ath_hw *ah, enum ath9k_int ints)
EXPORT_SYMBOL(ath9k_hw_set_interrupts);
