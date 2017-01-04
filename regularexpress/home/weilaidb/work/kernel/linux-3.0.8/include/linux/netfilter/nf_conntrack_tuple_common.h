#define _NF_CONNTRACK_TUPLE_COMMON_H
enum ip_conntrack_dir ;
#define CTINFO2DIR(ctinfo) ((ctinfo) >= IP_CT_IS_REPLY ? IP_CT_DIR_REPLY : IP_CT_DIR_ORIGINAL)
