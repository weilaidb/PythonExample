#define B43_XMIT_H_
#define _b43_declare_plcp_hdr(size) \
struct b43_plcp_hdr##size  __packed
_b43_declare_plcp_hdr(4);
_b43_declare_plcp_hdr(6);
#undef _b43_declare_plcp_hdr
struct b43_txhdr  __packed;
struct b43_tx_legacy_rate_phy_ctl_entry ;
#define B43_TXH_MAC_USEFBR		0x10000000
#define B43_TXH_MAC_KEYIDX		0x0FF00000
#define B43_TXH_MAC_KEYIDX_SHIFT	20
#define B43_TXH_MAC_KEYALG		0x00070000
#define B43_TXH_MAC_KEYALG_SHIFT	16
#define B43_TXH_MAC_AMIC		0x00008000
#define B43_TXH_MAC_RIFS		0x00004000
#define B43_TXH_MAC_LIFETIME		0x00002000
#define B43_TXH_MAC_FRAMEBURST		0x00001000
#define B43_TXH_MAC_SENDCTS		0x00000800
#define B43_TXH_MAC_AMPDU		0x00000600
#define  B43_TXH_MAC_AMPDU_MPDU		0x00000000
#define  B43_TXH_MAC_AMPDU_FIRST	0x00000200
#define  B43_TXH_MAC_AMPDU_INTER	0x00000400
#define  B43_TXH_MAC_AMPDU_LAST		0x00000600
#define B43_TXH_MAC_40MHZ		0x00000100
#define B43_TXH_MAC_5GHZ		0x00000080
#define B43_TXH_MAC_DFCS		0x00000040
#define B43_TXH_MAC_IGNPMQ		0x00000020
#define B43_TXH_MAC_HWSEQ		0x00000010
#define B43_TXH_MAC_STMSDU		0x00000008
#define B43_TXH_MAC_SENDRTS		0x00000004
#define B43_TXH_MAC_LONGFRAME		0x00000002
#define B43_TXH_MAC_ACK			0x00000001
#define B43_TXH_EFT_FB			0x03
#define  B43_TXH_EFT_FB_CCK		0x00
#define  B43_TXH_EFT_FB_OFDM		0x01
#define  B43_TXH_EFT_FB_EWC		0x02
#define  B43_TXH_EFT_FB_N		0x03
#define B43_TXH_EFT_RTS			0x0C
#define  B43_TXH_EFT_RTS_CCK		0x00
#define  B43_TXH_EFT_RTS_OFDM		0x04
#define  B43_TXH_EFT_RTS_EWC		0x08
#define  B43_TXH_EFT_RTS_N		0x0C
#define B43_TXH_EFT_RTSFB		0x30
#define  B43_TXH_EFT_RTSFB_CCK		0x00
#define  B43_TXH_EFT_RTSFB_OFDM		0x10
#define  B43_TXH_EFT_RTSFB_EWC		0x20
#define  B43_TXH_EFT_RTSFB_N		0x30
#define B43_TXH_PHY_ENC			0x0003
#define  B43_TXH_PHY_ENC_CCK		0x0000
#define  B43_TXH_PHY_ENC_OFDM		0x0001
#define  B43_TXH_PHY_ENC_EWC		0x0002
#define  B43_TXH_PHY_ENC_N		0x0003
#define B43_TXH_PHY_SHORTPRMBL		0x0010
#define B43_TXH_PHY_ANT			0x03C0
#define  B43_TXH_PHY_ANT0		0x0000
#define  B43_TXH_PHY_ANT1		0x0040
#define  B43_TXH_PHY_ANT01AUTO		0x00C0
#define  B43_TXH_PHY_ANT2		0x0100
#define  B43_TXH_PHY_ANT3		0x0200
#define B43_TXH_PHY_TXPWR		0xFC00
#define B43_TXH_PHY_TXPWR_SHIFT		10
#define B43_TXH_PHY1_BW			0x0007
#define  B43_TXH_PHY1_BW_10		0x0000
#define  B43_TXH_PHY1_BW_10U		0x0001
#define  B43_TXH_PHY1_BW_20		0x0002
#define  B43_TXH_PHY1_BW_20U		0x0003
#define  B43_TXH_PHY1_BW_40		0x0004
#define  B43_TXH_PHY1_BW_40DUP		0x0005
#define B43_TXH_PHY1_MODE		0x0038
#define  B43_TXH_PHY1_MODE_SISO		0x0000
#define  B43_TXH_PHY1_MODE_CDD		0x0008
#define  B43_TXH_PHY1_MODE_STBC		0x0010
#define  B43_TXH_PHY1_MODE_SDM		0x0018
#define B43_TXH_PHY1_CRATE		0x0700
#define  B43_TXH_PHY1_CRATE_1_2		0x0000
#define  B43_TXH_PHY1_CRATE_2_3		0x0100
#define  B43_TXH_PHY1_CRATE_3_4		0x0200
#define  B43_TXH_PHY1_CRATE_4_5		0x0300
#define  B43_TXH_PHY1_CRATE_5_6		0x0400
#define  B43_TXH_PHY1_CRATE_7_8		0x0600
#define B43_TXH_PHY1_MODUL		0x3800
#define  B43_TXH_PHY1_MODUL_BPSK	0x0000
#define  B43_TXH_PHY1_MODUL_QPSK	0x0800
#define  B43_TXH_PHY1_MODUL_QAM16	0x1000
#define  B43_TXH_PHY1_MODUL_QAM64	0x1800
#define  B43_TXH_PHY1_MODUL_QAM256	0x2000
static inline
bool b43_is_old_txhdr_format(struct b43_wldev *dev)
static inline
size_t b43_txhdr_size(struct b43_wldev *dev)
int b43_generate_txhdr(struct b43_wldev *dev,
u8 * txhdr,
struct sk_buff *skb_frag,
struct ieee80211_tx_info *txctl, u16 cookie);
struct b43_txstatus ;
enum ;
struct b43_rxhdr_fw4  __packed;
#define B43_RX_PHYST0_GAINCTL		0x4000
#define B43_RX_PHYST0_PLCPHCF		0x0200
#define B43_RX_PHYST0_PLCPFV		0x0100
#define B43_RX_PHYST0_SHORTPRMBL	0x0080
#define B43_RX_PHYST0_LCRS		0x0040
#define B43_RX_PHYST0_ANT		0x0020
#define B43_RX_PHYST0_UNSRATE		0x0010
#define B43_RX_PHYST0_CLIP		0x000C
#define B43_RX_PHYST0_CLIP_SHIFT	2
#define B43_RX_PHYST0_FTYPE		0x0003
#define  B43_RX_PHYST0_CCK		0x0000
#define  B43_RX_PHYST0_OFDM		0x0001
#define  B43_RX_PHYST0_PRE_N		0x0002
#define  B43_RX_PHYST0_STD_N		0x0003
#define B43_RX_PHYST2_LNAG		0xC000
#define B43_RX_PHYST2_LNAG_SHIFT	14
#define B43_RX_PHYST2_PNAG		0x3C00
#define B43_RX_PHYST2_PNAG_SHIFT	10
#define B43_RX_PHYST2_FOFF		0x03FF
#define B43_RX_PHYST3_DIGG		0x1800
#define B43_RX_PHYST3_DIGG_SHIFT	11
#define B43_RX_PHYST3_TRSTATE		0x0400
#define B43_RX_MAC_RXST_VALID		0x01000000
#define B43_RX_MAC_TKIP_MICERR		0x00100000
#define B43_RX_MAC_TKIP_MICATT		0x00080000
#define B43_RX_MAC_AGGTYPE		0x00060000
#define B43_RX_MAC_AGGTYPE_SHIFT	17
#define B43_RX_MAC_AMSDU		0x00010000
#define B43_RX_MAC_BEACONSENT		0x00008000
#define B43_RX_MAC_KEYIDX		0x000007E0
#define B43_RX_MAC_KEYIDX_SHIFT		5
#define B43_RX_MAC_DECERR		0x00000010
#define B43_RX_MAC_DEC			0x00000008
#define B43_RX_MAC_PADDING		0x00000004
#define B43_RX_MAC_RESP			0x00000002
#define B43_RX_MAC_FCSERR		0x00000001
#define B43_RX_CHAN_40MHZ		0x1000
#define B43_RX_CHAN_5GHZ		0x0800
#define B43_RX_CHAN_ID			0x07F8
#define B43_RX_CHAN_ID_SHIFT		3
#define B43_RX_CHAN_PHYTYPE		0x0007
u8 b43_plcp_get_ratecode_cck(const u8 bitrate);
u8 b43_plcp_get_ratecode_ofdm(const u8 bitrate);
void b43_generate_plcp_hdr(struct b43_plcp_hdr4 *plcp,
const u16 octets, const u8 bitrate);
void b43_rx(struct b43_wldev *dev, struct sk_buff *skb, const void *_rxhdr);
void b43_handle_txstatus(struct b43_wldev *dev,
const struct b43_txstatus *status);
bool b43_fill_txstatus_report(struct b43_wldev *dev,
struct ieee80211_tx_info *report,
const struct b43_txstatus *status);
void b43_tx_suspend(struct b43_wldev *dev);
void b43_tx_resume(struct b43_wldev *dev);
static inline int b43_new_kidx_api(struct b43_wldev *dev)
static inline u8 b43_kidx_to_fw(struct b43_wldev *dev, u8 raw_kidx)
static inline u8 b43_kidx_to_raw(struct b43_wldev *dev, u8 firmware_kidx)
struct b43_private_tx_info ;
static inline struct b43_private_tx_info *
b43_get_priv_tx_info(struct ieee80211_tx_info *info)
