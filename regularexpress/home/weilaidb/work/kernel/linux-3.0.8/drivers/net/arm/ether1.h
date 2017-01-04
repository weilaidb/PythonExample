#define _LINUX_ether1_H
#define NET_DEBUG 0
#define priv(dev)	((struct ether1_priv *)netdev_priv(dev))
#define REG_PAGE	(priv(dev)->base + 0x0000)
#define REG_CONTROL	(priv(dev)->base + 0x0004)
#define CTRL_RST	0x01
#define CTRL_LOOPBACK	0x02
#define CTRL_CA		0x04
#define CTRL_ACK	0x08
#define ETHER1_RAM	(priv(dev)->base + 0x2000)
#define IDPROM_ADDRESS	(priv(dev)->base + 0x0024)
struct ether1_priv ;
#define I82586_NULL (-1)
typedef struct  tdr_t;
typedef struct  tx_t;
typedef struct  tbd_t;
typedef struct  rfd_t;
typedef struct  rbd_t;
typedef struct  nop_t;
typedef struct  mc_t;
typedef struct  sa_t;
typedef struct  cfg_t;
typedef struct  scb_t;
typedef struct  iscp_t;
typedef struct  scp_t;
#define CMD_NOP			0
#define CMD_SETADDRESS		1
#define CMD_CONFIG		2
#define CMD_SETMULTICAST	3
#define CMD_TX			4
#define CMD_TDR			5
#define CMD_DUMP		6
#define CMD_DIAGNOSE		7
#define CMD_MASK		7
#define CMD_INTR		(1 << 13)
#define CMD_SUSP		(1 << 14)
#define CMD_EOL			(1 << 15)
#define STAT_COLLISIONS		(15)
#define STAT_COLLEXCESSIVE	(1 << 5)
#define STAT_COLLAFTERTX	(1 << 6)
#define STAT_TXDEFERRED		(1 << 7)
#define STAT_TXSLOWDMA		(1 << 8)
#define STAT_TXLOSTCTS		(1 << 9)
#define STAT_NOCARRIER		(1 << 10)
#define STAT_FAIL		(1 << 11)
#define STAT_ABORTED		(1 << 12)
#define STAT_OK			(1 << 13)
#define STAT_BUSY		(1 << 14)
#define STAT_COMPLETE		(1 << 15)
