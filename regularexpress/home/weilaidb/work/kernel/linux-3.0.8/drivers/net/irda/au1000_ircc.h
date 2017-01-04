#define AU1000_IRCC_H
#define NUM_IR_IFF          1
#define NUM_IR_DESC        64
#define RING_SIZE_4       0x0
#define RING_SIZE_16      0x3
#define RING_SIZE_64      0xF
#define MAX_NUM_IR_DESC    64
#define MAX_BUF_SIZE     2048
#define BPS_115200          0
#define BPS_57600           1
#define BPS_38400           2
#define BPS_19200           5
#define BPS_9600           11
#define BPS_2400           47
#define AU_OWN           (1<<7)
#define IR_DIS_CRC       (1<<6)
#define IR_BAD_CRC       (1<<5)
#define IR_NEED_PULSE    (1<<4)
#define IR_FORCE_UNDER   (1<<3)
#define IR_DISABLE_TX    (1<<2)
#define IR_HW_UNDER      (1<<0)
#define IR_TX_ERROR      (IR_DIS_CRC|IR_BAD_CRC|IR_HW_UNDER)
#define IR_PHY_ERROR     (1<<6)
#define IR_CRC_ERROR     (1<<5)
#define IR_MAX_LEN       (1<<4)
#define IR_FIFO_OVER     (1<<3)
#define IR_SIR_ERROR     (1<<2)
#define IR_RX_ERROR      (IR_PHY_ERROR|IR_CRC_ERROR| \
IR_MAX_LEN|IR_FIFO_OVER|IR_SIR_ERROR)
typedef struct db_dest  db_dest_t;
typedef struct ring_desc  ring_dest_t;
struct au1k_private ;
