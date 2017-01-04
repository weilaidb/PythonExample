#define _route_h
#define MAX_LINKS 4
#define MAX_NODES 17
#define NODE_BYTES ((MAX_NODES / 8) + 1)
#define ROUTE_DATA_SIZE  (NODE_BYTES + 2)
#define ROUTES_PER_PACKET ((PKT_MAX_DATA_LEN -2)/ ROUTE_DATA_SIZE)
#define MAX_TOPOLOGY_PACKETS (MAX_NODES / ROUTES_PER_PACKET + 1)
#define ROUTE_REQUEST    0
#define ROUTE_FOAD       1
#define ROUTE_ALREADY    2
#define ROUTE_USED       3
#define ROUTE_ALLOCATE   4
#define ROUTE_REQ_TOP    5
#define ROUTE_TOPOLOGY   6
typedef struct COST_ROUTE COST_ROUTE;
struct COST_ROUTE ;
typedef struct ROUTE_STR ROUTE_STR;
struct ROUTE_STR ;
#define NO_LINK            (short) 5
#define ROUTE_NO_ID        (short) 100
#define ROUTE_DISCONNECT   (ushort) 0xff
#define ROUTE_INTERCONNECT (ushort) 0x40
#define SYNC_RUP         (ushort) 255
#define COMMAND_RUP      (ushort) 254
#define ERROR_RUP        (ushort) 253
#define POLL_RUP         (ushort) 252
#define BOOT_RUP         (ushort) 251
#define ROUTE_RUP        (ushort) 250
#define STATUS_RUP       (ushort) 249
#define POWER_RUP        (ushort) 248
#define HIGHEST_RUP      (ushort) 255
#define LOWEST_RUP       (ushort) 248
