#define AR9003_MAC_H
#define AR_DescId	0xffff0000
#define AR_DescId_S	16
#define AR_CtrlStat	0x00004000
#define AR_CtrlStat_S	14
#define AR_TxRxDesc	0x00008000
#define AR_TxRxDesc_S	15
#define AR_TxQcuNum	0x00000f00
#define AR_TxQcuNum_S	8
#define AR_BufLen	0x0fff0000
#define AR_BufLen_S	16
#define AR_TxDescId	0xffff0000
#define AR_TxDescId_S	16
#define AR_TxPtrChkSum	0x0000ffff
#define AR_LowRxChain	0x00004000
#define AR_Not_Sounding	0x20000000
#define AR_PAPRDChainMask	0x00000e00
#define AR_PAPRDChainMask_S	9
#define MAP_ISR_S2_CST          6
#define MAP_ISR_S2_GTT          6
#define MAP_ISR_S2_TIM          3
#define MAP_ISR_S2_CABEND       0
#define MAP_ISR_S2_DTIMSYNC     7
#define MAP_ISR_S2_DTIM         7
#define MAP_ISR_S2_TSFOOR       4
#define MAP_ISR_S2_BB_WATCHDOG  6
#define AR9003TXC_CONST(_ds) ((const struct ar9003_txc *) _ds)
struct ar9003_rxs  __packed __aligned(4);
struct ar9003_txc  __packed __aligned(4);
struct ar9003_txs  __packed __aligned(4);
void ar9003_hw_attach_mac_ops(struct ath_hw *hw);
void ath9k_hw_set_rx_bufsize(struct ath_hw *ah, u16 buf_size);
void ath9k_hw_addrxbuf_edma(struct ath_hw *ah, u32 rxdp,
enum ath9k_rx_qtype qtype);
int ath9k_hw_process_rxdesc_edma(struct ath_hw *ah,
struct ath_rx_status *rxs,
void *buf_addr);
void ath9k_hw_reset_txstatus_ring(struct ath_hw *ah);
void ath9k_hw_setup_statusring(struct ath_hw *ah, void *ts_start,
u32 ts_paddr_start,
u8 size);
