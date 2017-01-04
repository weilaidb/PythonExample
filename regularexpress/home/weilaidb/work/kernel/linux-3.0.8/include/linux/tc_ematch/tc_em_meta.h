#define __LINUX_TC_EM_META_H
enum ;
#define TCA_EM_META_MAX (__TCA_EM_META_MAX - 1)
struct tcf_meta_val ;
#define TCF_META_TYPE_MASK	(0xf << 12)
#define TCF_META_TYPE(kind)	(((kind) & TCF_META_TYPE_MASK) >> 12)
#define TCF_META_ID_MASK	0x7ff
#define TCF_META_ID(kind)	((kind) & TCF_META_ID_MASK)
enum ;
#define TCF_META_TYPE_MAX (__TCF_META_TYPE_MAX - 1)
enum ;
#define TCF_META_ID_MAX (__TCF_META_ID_MAX - 1)
struct tcf_meta_hdr ;
