#define DRIVER_ATM_ZATM_H
#define DEV_LABEL	"zatm"
#define MAX_AAL5_PDU	10240
#define MAX_RX_SIZE_LD	14
#define LOW_MARK	12
#define HIGH_MARK	30
#define OFF_CNG_THRES	5
#define RX_SIZE		2
#define NR_POOLS	32
#define POOL_SIZE	8
#define NR_SHAPERS	16
#define SHAPER_SIZE	4
#define VC_SIZE		32
#define RING_ENTRIES	32
#define RING_WORDS	4
#define RING_SIZE	(sizeof(unsigned long)*(RING_ENTRIES+1)*RING_WORDS)
#define NR_MBX		4
#define MBX_RX_0	0
#define MBX_RX_1	1
#define MBX_TX_0	2
#define MBX_TX_1	3
struct zatm_vcc ;
struct zatm_dev ;
#define ZATM_DEV(d) ((struct zatm_dev *) (d)->dev_data)
#define ZATM_VCC(d) ((struct zatm_vcc *) (d)->dev_data)
struct zatm_skb_prv ;
#define ZATM_PRV_DSC(skb) (((struct zatm_skb_prv *) (skb)->cb)->dsc)
