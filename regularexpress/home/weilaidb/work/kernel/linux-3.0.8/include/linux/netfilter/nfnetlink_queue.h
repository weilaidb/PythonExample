#define _NFNETLINK_QUEUE_H
enum nfqnl_msg_types ;
struct nfqnl_msg_packet_hdr  __attribute__ ((packed));
struct nfqnl_msg_packet_hw ;
struct nfqnl_msg_packet_timestamp ;
enum nfqnl_attr_type ;
#define NFQA_MAX (__NFQA_MAX - 1)
struct nfqnl_msg_verdict_hdr ;
enum nfqnl_msg_config_cmds ;
struct nfqnl_msg_config_cmd ;
enum nfqnl_config_mode ;
struct nfqnl_msg_config_params  __attribute__ ((packed));
enum nfqnl_attr_config ;
#define NFQA_CFG_MAX (__NFQA_CFG_MAX-1)
