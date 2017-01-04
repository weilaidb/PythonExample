#define DRIVER_ATM_ENI_H
#define DEV_LABEL	"eni"
#define UBR_BUFFER	(128*1024)
#define RX_DMA_BUF	  8
#define TX_DMA_BUF	100
#define DEFAULT_RX_MULT	300
#define DEFAULT_TX_MULT	300
#define ENI_ZEROES_SIZE	  4
struct eni_free ;
struct eni_tx ;
struct eni_vcc ;
struct eni_dev ;
#define ENI_DEV(d) ((struct eni_dev *) (d)->dev_data)
#define ENI_VCC(d) ((struct eni_vcc *) (d)->dev_data)
struct eni_skb_prv ;
#define ENI_PRV_SIZE(skb) (((struct eni_skb_prv *) (skb)->cb)->size)
#define ENI_PRV_POS(skb) (((struct eni_skb_prv *) (skb)->cb)->pos)
#define ENI_PRV_PADDR(skb) (((struct eni_skb_prv *) (skb)->cb)->paddr)
