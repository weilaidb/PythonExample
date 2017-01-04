#define _IP6T_RT_H
#define IP6T_RT_HOPS 16
struct ip6t_rt ;
#define IP6T_RT_TYP 		0x01
#define IP6T_RT_SGS 		0x02
#define IP6T_RT_LEN 		0x04
#define IP6T_RT_RES 		0x08
#define IP6T_RT_FST_MASK	0x30
#define IP6T_RT_FST 		0x10
#define IP6T_RT_FST_NSTRICT	0x20
#define IP6T_RT_INV_TYP		0x01
#define IP6T_RT_INV_SGS		0x02
#define IP6T_RT_INV_LEN		0x04
#define IP6T_RT_INV_MASK	0x07
