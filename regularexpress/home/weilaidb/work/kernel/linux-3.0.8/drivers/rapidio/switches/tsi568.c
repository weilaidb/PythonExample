#define SPBC_ROUTE_CFG_DESTID	0x10070
#define SPBC_ROUTE_CFG_PORT	0x10074
#define SPP_ROUTE_CFG_DESTID(n)	(0x11070 + 0x100*n)
#define SPP_ROUTE_CFG_PORT(n)	(0x11074 + 0x100*n)
#define TSI568_SP_MODE(n)	(0x11004 + 0x100*n)
#define  TSI568_SP_MODE_PW_DIS	0x08000000
static int
tsi568_route_add_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 route_port)
static int
tsi568_route_get_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 *route_port)
static int
tsi568_route_clr_table(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table)
static int
tsi568_em_init(struct rio_dev *rdev)
static int tsi568_switch_init(struct rio_dev *rdev, int do_enum)
DECLARE_RIO_SWITCH_INIT(RIO_VID_TUNDRA, RIO_DID_TSI568, tsi568_switch_init);
