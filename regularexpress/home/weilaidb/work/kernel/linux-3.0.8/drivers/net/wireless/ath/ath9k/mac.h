#define MAC_H
#define RXSTATUS_RATE(ah, ads) (AR_SREV_5416_20_OR_LATER(ah) ?		\
MS(ads->ds_rxstatus0, AR_RxRate) :	\
(ads->ds_rxstatus3 >> 2) & 0xFF)
#define set11nTries(_series, _index) \
(SM((_series)[_index].Tries, AR_XmitDataTries##_index))
#define set11nRate(_series, _index) \
(SM((_series)[_index].Rate, AR_XmitRate##_index))
#define set11nPktDurRTSCTS(_series, _index)				\
(SM((_series)[_index].PktDuration, AR_PacketDur##_index) |	\
((_series)[_index].RateFlags & ATH9K_RATESERIES_RTS_CTS   ?	\
AR_RTSCTSQual##_index : 0))
#define set11nRateFlags(_series, _index)				\
(((_series)[_index].RateFlags & ATH9K_RATESERIES_2040 ?		\
AR_2040_##_index : 0)						\
|((_series)[_index].RateFlags & ATH9K_RATESERIES_HALFGI ?	\
AR_GI##_index : 0)						\
|((_series)[_index].RateFlags & ATH9K_RATESERIES_STBC ?	\
AR_STBC##_index : 0)						\
|SM((_series)[_index].ChSel, AR_ChainSel##_index))
#define CCK_SIFS_TIME        10
#define CCK_PREAMBLE_BITS   144
#define CCK_PLCP_BITS        48
#define OFDM_SIFS_TIME        16
#define OFDM_PREAMBLE_TIME    20
#define OFDM_PLCP_BITS        22
#define OFDM_SYMBOL_TIME      4
#define OFDM_SIFS_TIME_HALF     32
#define OFDM_PREAMBLE_TIME_HALF 40
#define OFDM_PLCP_BITS_HALF     22
#define OFDM_SYMBOL_TIME_HALF   8
#define OFDM_SIFS_TIME_QUARTER      64
#define OFDM_PREAMBLE_TIME_QUARTER  80
#define OFDM_PLCP_BITS_QUARTER      22
#define OFDM_SYMBOL_TIME_QUARTER    16
#define INIT_AIFS       2
#define INIT_CWMIN      15
#define INIT_CWMIN_11B  31
#define INIT_CWMAX      1023
#define INIT_SH_RETRY   10
#define INIT_LG_RETRY   10
#define INIT_SSH_RETRY  32
#define INIT_SLG_RETRY  32
#define ATH9K_SLOT_TIME_6 6
#define ATH9K_SLOT_TIME_9 9
#define ATH9K_SLOT_TIME_20 20
#define ATH9K_TXERR_XRETRY         0x01
#define ATH9K_TXERR_FILT           0x02
#define ATH9K_TXERR_FIFO           0x04
#define ATH9K_TXERR_XTXOP          0x08
#define ATH9K_TXERR_TIMER_EXPIRED  0x10
#define ATH9K_TX_ACKED		   0x20
#define ATH9K_TXERR_MASK						\
(ATH9K_TXERR_XRETRY | ATH9K_TXERR_FILT | ATH9K_TXERR_FIFO |	\
ATH9K_TXERR_XTXOP | ATH9K_TXERR_TIMER_EXPIRED)
#define ATH9K_TX_BA                0x01
#define ATH9K_TX_PWRMGMT           0x02
#define ATH9K_TX_DESC_CFG_ERR      0x04
#define ATH9K_TX_DATA_UNDERRUN     0x08
#define ATH9K_TX_DELIM_UNDERRUN    0x10
#define ATH9K_TX_SW_FILTERED       0x80
#define MIN_TX_FIFO_THRESHOLD   0x1
#define MAX_TX_FIFO_THRESHOLD   ((4096 / 64) - 1)
struct ath_tx_status ;
struct ath_rx_status ;
struct ath_htc_rx_status ;
#define ATH9K_RXERR_CRC           0x01
#define ATH9K_RXERR_PHY           0x02
#define ATH9K_RXERR_FIFO          0x04
#define ATH9K_RXERR_DECRYPT       0x08
#define ATH9K_RXERR_MIC           0x10
#define ATH9K_RX_MORE             0x01
#define ATH9K_RX_MORE_AGGR        0x02
#define ATH9K_RX_GI               0x04
#define ATH9K_RX_2040             0x08
#define ATH9K_RX_DELIM_CRC_PRE    0x10
#define ATH9K_RX_DELIM_CRC_POST   0x20
#define ATH9K_RX_DECRYPT_BUSY     0x40
#define ATH9K_RXKEYIX_INVALID	((u8)-1)
#define ATH9K_TXKEYIX_INVALID	((u32)-1)
enum ath9k_phyerr ;
struct ath_desc  __packed __aligned(4);
#define ATH9K_TXDESC_NOACK		0x0002
#define ATH9K_TXDESC_RTSENA		0x0004
#define ATH9K_TXDESC_CTSENA		0x0008
#define ATH9K_TXDESC_INTREQ		0x0010
#define ATH9K_TXDESC_VEOL		0x0020
#define ATH9K_TXDESC_EXT_ONLY		0x0040
#define ATH9K_TXDESC_EXT_AND_CTL	0x0080
#define ATH9K_TXDESC_VMF		0x0100
#define ATH9K_TXDESC_FRAG_IS_ON 	0x0200
#define ATH9K_TXDESC_LOWRXCHAIN		0x0400
#define ATH9K_TXDESC_LDPC		0x00010000
#define ATH9K_RXDESC_INTREQ		0x0020
struct ar5416_desc  __packed __aligned(4);
#define AR5416DESC(_ds)         ((struct ar5416_desc *)(_ds))
#define AR5416DESC_CONST(_ds)   ((const struct ar5416_desc *)(_ds))
#define ds_ctl2     u.tx.ctl2
#define ds_ctl3     u.tx.ctl3
#define ds_ctl4     u.tx.ctl4
#define ds_ctl5     u.tx.ctl5
#define ds_ctl6     u.tx.ctl6
#define ds_ctl7     u.tx.ctl7
#define ds_ctl8     u.tx.ctl8
#define ds_ctl9     u.tx.ctl9
#define ds_ctl10    u.tx.ctl10
#define ds_ctl11    u.tx.ctl11
#define ds_txstatus0    u.tx.status0
#define ds_txstatus1    u.tx.status1
#define ds_txstatus2    u.tx.status2
#define ds_txstatus3    u.tx.status3
#define ds_txstatus4    u.tx.status4
#define ds_txstatus5    u.tx.status5
#define ds_txstatus6    u.tx.status6
#define ds_txstatus7    u.tx.status7
#define ds_txstatus8    u.tx.status8
#define ds_txstatus9    u.tx.status9
#define ds_rxstatus0    u.rx.status0
#define ds_rxstatus1    u.rx.status1
#define ds_rxstatus2    u.rx.status2
#define ds_rxstatus3    u.rx.status3
#define ds_rxstatus4    u.rx.status4
#define ds_rxstatus5    u.rx.status5
#define ds_rxstatus6    u.rx.status6
#define ds_rxstatus7    u.rx.status7
#define ds_rxstatus8    u.rx.status8
#define AR_FrameLen         0x00000fff
#define AR_VirtMoreFrag     0x00001000
#define AR_TxCtlRsvd00      0x0000e000
#define AR_XmitPower        0x003f0000
#define AR_XmitPower_S      16
#define AR_RTSEnable        0x00400000
#define AR_VEOL             0x00800000
#define AR_ClrDestMask      0x01000000
#define AR_TxCtlRsvd01      0x1e000000
#define AR_TxIntrReq        0x20000000
#define AR_DestIdxValid     0x40000000
#define AR_CTSEnable        0x80000000
#define AR_TxMore           0x00001000
#define AR_DestIdx          0x000fe000
#define AR_DestIdx_S        13
#define AR_FrameType        0x00f00000
#define AR_FrameType_S      20
#define AR_NoAck            0x01000000
#define AR_InsertTS         0x02000000
#define AR_CorruptFCS       0x04000000
#define AR_ExtOnly          0x08000000
#define AR_ExtAndCtl        0x10000000
#define AR_MoreAggr         0x20000000
#define AR_IsAggr           0x40000000
#define AR_BurstDur         0x00007fff
#define AR_BurstDur_S       0
#define AR_DurUpdateEna     0x00008000
#define AR_XmitDataTries0   0x000f0000
#define AR_XmitDataTries0_S 16
#define AR_XmitDataTries1   0x00f00000
#define AR_XmitDataTries1_S 20
#define AR_XmitDataTries2   0x0f000000
#define AR_XmitDataTries2_S 24
#define AR_XmitDataTries3   0xf0000000
#define AR_XmitDataTries3_S 28
#define AR_XmitRate0        0x000000ff
#define AR_XmitRate0_S      0
#define AR_XmitRate1        0x0000ff00
#define AR_XmitRate1_S      8
#define AR_XmitRate2        0x00ff0000
#define AR_XmitRate2_S      16
#define AR_XmitRate3        0xff000000
#define AR_XmitRate3_S      24
#define AR_PacketDur0       0x00007fff
#define AR_PacketDur0_S     0
#define AR_RTSCTSQual0      0x00008000
#define AR_PacketDur1       0x7fff0000
#define AR_PacketDur1_S     16
#define AR_RTSCTSQual1      0x80000000
#define AR_PacketDur2       0x00007fff
#define AR_PacketDur2_S     0
#define AR_RTSCTSQual2      0x00008000
#define AR_PacketDur3       0x7fff0000
#define AR_PacketDur3_S     16
#define AR_RTSCTSQual3      0x80000000
#define AR_AggrLen          0x0000ffff
#define AR_AggrLen_S        0
#define AR_TxCtlRsvd60      0x00030000
#define AR_PadDelim         0x03fc0000
#define AR_PadDelim_S       18
#define AR_EncrType         0x0c000000
#define AR_EncrType_S       26
#define AR_TxCtlRsvd61      0xf0000000
#define AR_LDPC             0x80000000
#define AR_2040_0           0x00000001
#define AR_GI0              0x00000002
#define AR_ChainSel0        0x0000001c
#define AR_ChainSel0_S      2
#define AR_2040_1           0x00000020
#define AR_GI1              0x00000040
#define AR_ChainSel1        0x00000380
#define AR_ChainSel1_S      7
#define AR_2040_2           0x00000400
#define AR_GI2              0x00000800
#define AR_ChainSel2        0x00007000
#define AR_ChainSel2_S      12
#define AR_2040_3           0x00008000
#define AR_GI3              0x00010000
#define AR_ChainSel3        0x000e0000
#define AR_ChainSel3_S      17
#define AR_RTSCTSRate       0x0ff00000
#define AR_RTSCTSRate_S     20
#define AR_STBC0            0x10000000
#define AR_STBC1            0x20000000
#define AR_STBC2            0x40000000
#define AR_STBC3            0x80000000
#define AR_TxRSSIAnt00      0x000000ff
#define AR_TxRSSIAnt00_S    0
#define AR_TxRSSIAnt01      0x0000ff00
#define AR_TxRSSIAnt01_S    8
#define AR_TxRSSIAnt02      0x00ff0000
#define AR_TxRSSIAnt02_S    16
#define AR_TxStatusRsvd00   0x3f000000
#define AR_TxBaStatus       0x40000000
#define AR_TxStatusRsvd01   0x80000000
#define AR_FrmXmitOK            0x00000001
#define AR_ExcessiveRetries     0x00000002
#define AR_FIFOUnderrun         0x00000004
#define AR_Filtered             0x00000008
#define AR_RTSFailCnt           0x000000f0
#define AR_RTSFailCnt_S         4
#define AR_DataFailCnt          0x00000f00
#define AR_DataFailCnt_S        8
#define AR_VirtRetryCnt         0x0000f000
#define AR_VirtRetryCnt_S       12
#define AR_TxDelimUnderrun      0x00010000
#define AR_TxDataUnderrun       0x00020000
#define AR_DescCfgErr           0x00040000
#define AR_TxTimerExpired       0x00080000
#define AR_TxStatusRsvd10       0xfff00000
#define AR_SendTimestamp    ds_txstatus2
#define AR_BaBitmapLow      ds_txstatus3
#define AR_BaBitmapHigh     ds_txstatus4
#define AR_TxRSSIAnt10      0x000000ff
#define AR_TxRSSIAnt10_S    0
#define AR_TxRSSIAnt11      0x0000ff00
#define AR_TxRSSIAnt11_S    8
#define AR_TxRSSIAnt12      0x00ff0000
#define AR_TxRSSIAnt12_S    16
#define AR_TxRSSICombined   0xff000000
#define AR_TxRSSICombined_S 24
#define AR_TxTid	0xf0000000
#define AR_TxTid_S	28
#define AR_TxEVM0           ds_txstatus5
#define AR_TxEVM1           ds_txstatus6
#define AR_TxEVM2           ds_txstatus7
#define AR_TxDone           0x00000001
#define AR_SeqNum           0x00001ffe
#define AR_SeqNum_S         1
#define AR_TxStatusRsvd80   0x0001e000
#define AR_TxOpExceeded     0x00020000
#define AR_TxStatusRsvd81   0x001c0000
#define AR_FinalTxIdx       0x00600000
#define AR_FinalTxIdx_S     21
#define AR_TxStatusRsvd82   0x01800000
#define AR_PowerMgmt        0x02000000
#define AR_TxStatusRsvd83   0xfc000000
#define AR_RxCTLRsvd00  0xffffffff
#define AR_RxCtlRsvd00  0x00001000
#define AR_RxIntrReq    0x00002000
#define AR_RxCtlRsvd01  0xffffc000
#define AR_RxRSSIAnt00      0x000000ff
#define AR_RxRSSIAnt00_S    0
#define AR_RxRSSIAnt01      0x0000ff00
#define AR_RxRSSIAnt01_S    8
#define AR_RxRSSIAnt02      0x00ff0000
#define AR_RxRSSIAnt02_S    16
#define AR_RxRate           0xff000000
#define AR_RxRate_S         24
#define AR_RxStatusRsvd00   0xff000000
#define AR_DataLen          0x00000fff
#define AR_RxMore           0x00001000
#define AR_NumDelim         0x003fc000
#define AR_NumDelim_S       14
#define AR_RxStatusRsvd10   0xff800000
#define AR_RcvTimestamp     ds_rxstatus2
#define AR_GI               0x00000001
#define AR_2040             0x00000002
#define AR_Parallel40       0x00000004
#define AR_Parallel40_S     2
#define AR_RxStatusRsvd30   0x000000f8
#define AR_RxAntenna	    0xffffff00
#define AR_RxAntenna_S	    8
#define AR_RxRSSIAnt10            0x000000ff
#define AR_RxRSSIAnt10_S          0
#define AR_RxRSSIAnt11            0x0000ff00
#define AR_RxRSSIAnt11_S          8
#define AR_RxRSSIAnt12            0x00ff0000
#define AR_RxRSSIAnt12_S          16
#define AR_RxRSSICombined         0xff000000
#define AR_RxRSSICombined_S       24
#define AR_RxEVM0           ds_rxstatus4
#define AR_RxEVM1           ds_rxstatus5
#define AR_RxEVM2           ds_rxstatus6
#define AR_RxDone           0x00000001
#define AR_RxFrameOK        0x00000002
#define AR_CRCErr           0x00000004
#define AR_DecryptCRCErr    0x00000008
#define AR_PHYErr           0x00000010
#define AR_MichaelErr       0x00000020
#define AR_PreDelimCRCErr   0x00000040
#define AR_RxStatusRsvd70   0x00000080
#define AR_RxKeyIdxValid    0x00000100
#define AR_KeyIdx           0x0000fe00
#define AR_KeyIdx_S         9
#define AR_PHYErrCode       0x0000ff00
#define AR_PHYErrCode_S     8
#define AR_RxMoreAggr       0x00010000
#define AR_RxAggr           0x00020000
#define AR_PostDelimCRCErr  0x00040000
#define AR_RxStatusRsvd71   0x3ff80000
#define AR_DecryptBusyErr   0x40000000
#define AR_KeyMiss          0x80000000
enum ath9k_tx_queue ;
#define	ATH9K_NUM_TX_QUEUES 10
#define ATH9K_WME_UPSD	4
enum ath9k_tx_queue_flags ;
#define ATH9K_TXQ_USEDEFAULT ((u32) -1)
#define ATH9K_TXQ_USE_LOCKOUT_BKOFF_DIS 0x00000001
#define ATH9K_DECOMP_MASK_SIZE     128
#define ATH9K_READY_TIME_LO_BOUND  50
#define ATH9K_READY_TIME_HI_BOUND  96
enum ath9k_pkt_type ;
struct ath9k_tx_queue_info ;
enum ath9k_rx_filter ;
#define ATH9K_RATESERIES_RTS_CTS  0x0001
#define ATH9K_RATESERIES_2040     0x0002
#define ATH9K_RATESERIES_HALFGI   0x0004
#define ATH9K_RATESERIES_STBC     0x0008
struct ath9k_11n_rate_series ;
enum ath9k_key_type ;
struct ath_hw;
struct ath9k_channel;
enum ath9k_int;
u32 ath9k_hw_gettxbuf(struct ath_hw *ah, u32 q);
void ath9k_hw_puttxbuf(struct ath_hw *ah, u32 q, u32 txdp);
void ath9k_hw_txstart(struct ath_hw *ah, u32 q);
void ath9k_hw_cleartxdesc(struct ath_hw *ah, void *ds);
u32 ath9k_hw_numtxpending(struct ath_hw *ah, u32 q);
bool ath9k_hw_updatetxtriglevel(struct ath_hw *ah, bool bIncTrigLevel);
bool ath9k_hw_stop_dma_queue(struct ath_hw *ah, u32 q);
void ath9k_hw_abort_tx_dma(struct ath_hw *ah);
void ath9k_hw_gettxintrtxqs(struct ath_hw *ah, u32 *txqs);
bool ath9k_hw_set_txq_props(struct ath_hw *ah, int q,
const struct ath9k_tx_queue_info *qinfo);
bool ath9k_hw_get_txq_props(struct ath_hw *ah, int q,
struct ath9k_tx_queue_info *qinfo);
int ath9k_hw_setuptxqueue(struct ath_hw *ah, enum ath9k_tx_queue type,
const struct ath9k_tx_queue_info *qinfo);
bool ath9k_hw_releasetxqueue(struct ath_hw *ah, u32 q);
bool ath9k_hw_resettxqueue(struct ath_hw *ah, u32 q);
int ath9k_hw_rxprocdesc(struct ath_hw *ah, struct ath_desc *ds,
struct ath_rx_status *rs, u64 tsf);
void ath9k_hw_setuprxdesc(struct ath_hw *ah, struct ath_desc *ds,
u32 size, u32 flags);
bool ath9k_hw_setrxabort(struct ath_hw *ah, bool set);
void ath9k_hw_putrxbuf(struct ath_hw *ah, u32 rxdp);
void ath9k_hw_startpcureceive(struct ath_hw *ah, bool is_scanning);
void ath9k_hw_abortpcurecv(struct ath_hw *ah);
bool ath9k_hw_stopdmarecv(struct ath_hw *ah, bool *reset);
int ath9k_hw_beaconq_setup(struct ath_hw *ah);
bool ath9k_hw_intrpend(struct ath_hw *ah);
void ath9k_hw_set_interrupts(struct ath_hw *ah, enum ath9k_int ints);
void ath9k_hw_enable_interrupts(struct ath_hw *ah);
void ath9k_hw_disable_interrupts(struct ath_hw *ah);
void ar9002_hw_attach_mac_ops(struct ath_hw *ah);
