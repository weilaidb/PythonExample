#define _RTL8712_RECV_H_
#define NR_RECVBUFF (8)
#define NR_PREALLOC_RECV_SKB (8)
#define RXDESC_SIZE	24
#define RXDESC_OFFSET RXDESC_SIZE
#define RECV_BLK_SZ 512
#define RECV_BLK_CNT 16
#define RECV_BLK_TH RECV_BLK_CNT
#define MAX_RECVBUF_SZ (30720)
#define RECVBUFF_ALIGN_SZ 512
#define RSVD_ROOM_SZ (0)
#define SN_LESS(a, b)		(((a-b) & 0x800) != 0)
#define SN_EQUAL(a, b)	(a == b)
#define REORDER_WAIT_TIME	30
struct recv_stat ;
struct phy_cck_rx_status ;
struct phy_stat ;
#define PHY_STAT_GAIN_TRSW_SHT 0
#define PHY_STAT_PWDB_ALL_SHT 4
#define PHY_STAT_CFOSHO_SHT 5
#define PHY_STAT_CCK_AGC_RPT_SHT 5
#define PHY_STAT_CFOTAIL_SHT 9
#define PHY_STAT_RXEVM_SHT 13
#define PHY_STAT_RXSNR_SHT 15
#define PHY_STAT_PDSNR_SHT 19
#define PHY_STAT_CSI_CURRENT_SHT 21
#define PHY_STAT_CSI_TARGET_SHT 23
#define PHY_STAT_SIGEVM_SHT 25
#define PHY_STAT_MAX_EX_PWR_SHT 26
union recvstat ;
struct recv_buf ;
struct recv_frame_hdr ;
union recv_frame ;
int r8712_init_recvbuf(struct _adapter *padapter, struct recv_buf *precvbuf);
void r8712_rxcmd_event_hdl(struct _adapter *padapter, void *prxcmdbuf);
s32 r8712_signal_scale_mapping(s32 cur_sig);
void r8712_reordering_ctrl_timeout_handler(void *pcontext);
