#define _MWIFIEX_DECL_H_
#undef pr_fmt
#define pr_fmt(fmt)	KBUILD_MODNAME ": " fmt
#define MWIFIEX_MAX_BSS_NUM         (1)
#define MWIFIEX_MIN_DATA_HEADER_LEN 32
#define MWIFIEX_MAX_TX_BASTREAM_SUPPORTED	2
#define MWIFIEX_MAX_RX_BASTREAM_SUPPORTED	16
#define MWIFIEX_AMPDU_DEF_TXWINSIZE        32
#define MWIFIEX_AMPDU_DEF_RXWINSIZE        16
#define MWIFIEX_DEFAULT_BLOCK_ACK_TIMEOUT  0xffff
#define MWIFIEX_RATE_INDEX_HRDSSS0 0
#define MWIFIEX_RATE_INDEX_HRDSSS3 3
#define MWIFIEX_RATE_INDEX_OFDM0   4
#define MWIFIEX_RATE_INDEX_OFDM7   11
#define MWIFIEX_RATE_INDEX_MCS0    12
#define MWIFIEX_RATE_BITMAP_OFDM0  16
#define MWIFIEX_RATE_BITMAP_OFDM7  23
#define MWIFIEX_RATE_BITMAP_MCS0   32
#define MWIFIEX_RATE_BITMAP_MCS127 159
#define MWIFIEX_RX_DATA_BUF_SIZE     (4 * 1024)
#define MWIFIEX_RTS_MIN_VALUE              (0)
#define MWIFIEX_RTS_MAX_VALUE              (2347)
#define MWIFIEX_FRAG_MIN_VALUE             (256)
#define MWIFIEX_FRAG_MAX_VALUE             (2346)
#define MWIFIEX_SDIO_BLOCK_SIZE            256
#define MWIFIEX_BUF_FLAG_REQUEUED_PKT      BIT(0)
enum mwifiex_bss_type ;
enum mwifiex_bss_role ;
#define BSS_ROLE_BIT_MASK    BIT(0)
#define GET_BSS_ROLE(priv)   ((priv)->bss_role & BSS_ROLE_BIT_MASK)
enum mwifiex_data_frame_type ;
struct mwifiex_fw_image ;
struct mwifiex_802_11_ssid ;
struct mwifiex_wait_queue ;
struct mwifiex_rxinfo ;
struct mwifiex_txinfo ;
struct mwifiex_bss_attr ;
enum mwifiex_wmm_ac_e  __packed;
