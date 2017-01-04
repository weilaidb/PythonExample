#define _AMD8131_EDAC_H_
#define DEVFN_PCIX_BRIDGE_NORTH_A	8
#define DEVFN_PCIX_BRIDGE_NORTH_B	16
#define DEVFN_PCIX_BRIDGE_SOUTH_A	24
#define DEVFN_PCIX_BRIDGE_SOUTH_B	32
#define REG_STS_CMD	0x04
enum sts_cmd_bits ;
#define REG_INT_CTLR	0x3c
enum int_ctlr_bits ;
#define REG_MEM_LIM	0x1c
enum mem_limit_bits ;
#define REG_LNK_CTRL_A	0xc4
#define REG_LNK_CTRL_B  0xc8
enum lnk_ctrl_bits ;
enum pcix_bridge_inst ;
struct amd8131_dev_info ;
struct amd8131_info ;
