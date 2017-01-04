#define _BFIN_MAC_H_
#define BFIN_MAC_CSUM_OFFLOAD
#define TX_RECLAIM_JIFFIES (HZ / 5)
struct dma_descriptor ;
struct status_area_rx ;
struct status_area_tx ;
struct net_dma_desc_rx ;
struct net_dma_desc_tx ;
struct bfin_mac_local ;
extern void bfin_get_ether_addr(char *addr);
