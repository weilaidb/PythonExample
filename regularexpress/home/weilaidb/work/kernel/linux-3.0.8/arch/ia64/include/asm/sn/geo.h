#define _ASM_IA64_SN_GEO_H
#define GEOID_SIZE	8
#define MAX_SLOTS	0xf
#define MAX_SLABS	0xf
typedef unsigned char	geo_type_t;
typedef struct geo_common_s  geo_common_t;
typedef struct geo_node_s  geo_node_t;
typedef struct geo_rtr_s  geo_rtr_t;
typedef struct geo_iocntl_s  geo_iocntl_t;
typedef struct geo_pcicard_s  geo_pcicard_t;
typedef struct geo_cpu_s  geo_cpu_t;
typedef struct geo_mem_s  geo_mem_t;
typedef union geoid_u  geoid_t;
#define GEO_MAX_LEN	48
#define GEO_TYPE_INVALID	0
#define GEO_TYPE_MODULE		1
#define GEO_TYPE_NODE		2
#define GEO_TYPE_RTR		3
#define GEO_TYPE_IOCNTL		4
#define GEO_TYPE_IOCARD		5
#define GEO_TYPE_CPU		6
#define GEO_TYPE_MEM		7
#define GEO_TYPE_MAX		(GEO_TYPE_MEM+1)
#define GEO_COMPT_MODULE	1
#define GEO_COMPT_SLAB		2
#define GEO_COMPT_IOBUS		3
#define GEO_COMPT_IOSLOT	4
#define GEO_COMPT_CPU		5
#define GEO_COMPT_MEMBUS	6
#define GEO_COMPT_MEMSLOT	7
#define GEO_INVALID_STR		"<invalid>"
#define INVALID_NASID           ((nasid_t)-1)
#define INVALID_CNODEID         ((cnodeid_t)-1)
#define INVALID_PNODEID         ((pnodeid_t)-1)
#define INVALID_SLAB            (slabid_t)-1
#define INVALID_SLOT            (slotid_t)-1
#define INVALID_MODULE          ((moduleid_t)-1)
static inline slabid_t geo_slab(geoid_t g)
static inline slotid_t geo_slot(geoid_t g)
static inline moduleid_t geo_module(geoid_t g)
extern geoid_t cnodeid_get_geoid(cnodeid_t cnode);
