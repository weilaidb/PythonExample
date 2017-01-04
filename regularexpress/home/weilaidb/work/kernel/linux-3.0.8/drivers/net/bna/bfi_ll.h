#define __BFI_LL_H__
enum  ;
enum  ;
struct bfi_ll_mac_addr_req ;
struct bfi_ll_mcast_filter_req ;
struct bfi_ll_mcast_del_all_req ;
struct bfi_ll_q_stop_req ;
struct bfi_ll_stats_req ;
#define BFI_LL_STATS_MAC	(1 << 0)
#define BFI_LL_STATS_BPC	(1 << 1)
#define BFI_LL_STATS_RAD	(1 << 2)
#define BFI_LL_STATS_RX_FC	(1 << 3)
#define BFI_LL_STATS_TX_FC	(1 << 4)
#define BFI_LL_STATS_ALL	0x1f
struct bfi_ll_port_admin_req ;
struct bfi_ll_rxf_req ;
struct bfi_ll_rxf_multi_req ;
enum ;
struct bfi_ll_set_pause_req ;
struct bfi_ll_mtu_info_req ;
struct bfi_ll_rsp ;
struct bfi_ll_aen ;
enum  ;
#define BFI_LL_TXF_ID_MAX  	64
#define BFI_LL_RXF_ID_MAX  	64
struct bfi_ll_stats_txf ;
struct bfi_ll_stats_rxf ;
struct bfi_ll_stats_fc_tx ;
struct bfi_ll_stats_fc_rx ;
struct bfi_ll_stats_rad ;
struct bfi_ll_stats_bpc ;
struct bfi_ll_stats_mac ;
struct bfi_ll_stats ;
