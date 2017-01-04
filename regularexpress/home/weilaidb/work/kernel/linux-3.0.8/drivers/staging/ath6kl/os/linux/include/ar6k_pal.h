#define _AR6K_PAL_H_
#define HCI_GET_OP_CODE(p)          (((u16)((p)[1])) << 8) | ((u16)((p)[0]))
#define TX_PACKET_RSV_OFFSET        32
typedef bool (*ar6k_pal_recv_pkt_t)(void *pHciPalInfo, void *skb);
typedef struct ar6k_pal_config_s
ar6k_pal_config_t;
void register_pal_cb(ar6k_pal_config_t *palConfig_p);
