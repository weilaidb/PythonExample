#define __LINUX_NEIGHBOUR_H
struct ndmsg ;
enum ;
#define NDA_MAX (__NDA_MAX - 1)
#define NTF_USE		0x01
#define NTF_PROXY	0x08
#define NTF_ROUTER	0x80
#define NUD_INCOMPLETE	0x01
#define NUD_REACHABLE	0x02
#define NUD_STALE	0x04
#define NUD_DELAY	0x08
#define NUD_PROBE	0x10
#define NUD_FAILED	0x20
#define NUD_NOARP	0x40
#define NUD_PERMANENT	0x80
#define NUD_NONE	0x00
struct nda_cacheinfo ;
struct ndt_stats ;
enum ;
#define NDTPA_MAX (__NDTPA_MAX - 1)
struct ndtmsg ;
struct ndt_config ;
enum ;
#define NDTA_MAX (__NDTA_MAX - 1)
