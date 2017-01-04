#define __LINUX_BRIDGE_EBT_AMONG_H
#define EBT_AMONG_DST 0x01
#define EBT_AMONG_SRC 0x02
struct ebt_mac_wormhash_tuple ;
struct ebt_mac_wormhash ;
#define ebt_mac_wormhash_size(x) ((x) ? sizeof(struct ebt_mac_wormhash) \
+ (x)->poolsize * sizeof(struct ebt_mac_wormhash_tuple) : 0)
struct ebt_among_info ;
#define EBT_AMONG_DST_NEG 0x1
#define EBT_AMONG_SRC_NEG 0x2
#define ebt_among_wh_dst(x) ((x)->wh_dst_ofs ? \
(struct ebt_mac_wormhash*)((char*)(x) + (x)->wh_dst_ofs) : NULL)
#define ebt_among_wh_src(x) ((x)->wh_src_ofs ? \
(struct ebt_mac_wormhash*)((char*)(x) + (x)->wh_src_ofs) : NULL)
#define EBT_AMONG_MATCH "among"
