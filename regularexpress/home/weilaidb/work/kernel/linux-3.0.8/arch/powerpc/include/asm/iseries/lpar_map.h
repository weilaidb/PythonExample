#define _ASM_POWERPC_ISERIES_LPAR_MAP_H
#define HvEsidsToMap	2
#define HvRangesToMap	1
#define HvPagesToMap	8192
struct LparMap ;
extern const struct LparMap	xLparMap;
#define LPARMAP_PHYS		0x7000
