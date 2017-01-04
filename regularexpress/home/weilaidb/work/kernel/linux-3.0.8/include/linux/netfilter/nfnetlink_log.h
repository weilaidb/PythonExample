#define _NFNETLINK_LOG_H
enum nfulnl_msg_types ;
struct nfulnl_msg_packet_hdr ;
struct nfulnl_msg_packet_hw ;
struct nfulnl_msg_packet_timestamp ;
enum nfulnl_attr_type ;
#define NFULA_MAX (__NFULA_MAX - 1)
enum nfulnl_msg_config_cmds ;
struct nfulnl_msg_config_cmd  __attribute__ ((packed));
struct nfulnl_msg_config_mode  __attribute__ ((packed));
enum nfulnl_attr_config ;
#define NFULA_CFG_MAX (__NFULA_CFG_MAX -1)
#define NFULNL_COPY_NONE	0x00
#define NFULNL_COPY_META	0x01
#define NFULNL_COPY_PACKET	0x02
#define NFULNL_CFG_F_SEQ	0x0001
#define NFULNL_CFG_F_SEQ_GLOBAL	0x0002
