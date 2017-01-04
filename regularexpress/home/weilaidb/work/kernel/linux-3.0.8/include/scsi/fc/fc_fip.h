#define _FC_FIP_H_
#define FIP_DEF_PRI	128
#define FIP_DEF_FC_MAP	0x0efc00
#define FIP_DEF_FKA	8000
#define FIP_VN_KA_PERIOD 90000
#define FIP_FCF_FUZZ	100
#define FIP_VN_FC_MAP	0x0efd00
#define FIP_VN_PROBE_WAIT 100
#define FIP_VN_ANN_WAIT 400
#define FIP_VN_RLIM_INT 10000
#define FIP_VN_RLIM_COUNT 10
#define FIP_VN_BEACON_INT 8000
#define FIP_VN_BEACON_FUZZ 100
#define FIP_ALL_FCOE_MACS	((__u8[6]) )
#define FIP_ALL_ENODE_MACS	((__u8[6]) )
#define FIP_ALL_FCF_MACS	((__u8[6]) )
#define FIP_ALL_VN2VN_MACS	((__u8[6]) )
#define FIP_ALL_P2P_MACS	((__u8[6]) )
#define FIP_VER		1
struct fip_header  __attribute__((packed));
#define FIP_VER_SHIFT	4
#define FIP_VER_ENCAPS(v) ((v) << FIP_VER_SHIFT)
#define FIP_VER_DECAPS(v) ((v) >> FIP_VER_SHIFT)
#define FIP_BPW		4
enum fip_opcode ;
enum fip_disc_subcode ;
enum fip_trans_subcode ;
enum fip_reset_subcode ;
enum fip_vlan_subcode ;
enum fip_vn2vn_subcode ;
enum fip_flag ;
struct fip_desc ;
enum fip_desc_type ;
struct fip_pri_desc  __attribute__((packed));
struct fip_mac_desc  __attribute__((packed));
struct fip_map_desc  __attribute__((packed));
struct fip_wwn_desc  __attribute__((packed));
struct fip_fab_desc  __attribute__((packed));
struct fip_size_desc  __attribute__((packed));
struct fip_encaps  __attribute__((packed));
struct fip_vn_desc  __attribute__((packed));
struct fip_fka_desc  __attribute__((packed));
enum fip_fka_flags ;
struct fip_fc4_feat  __attribute__((packed));
struct fip_vendor_desc  __attribute__((packed));
