#define SPBC_ROUTE_CFG_DESTID	0x10070
#define SPBC_ROUTE_CFG_PORT	0x10074
#define SPP_ROUTE_CFG_DESTID(n)	(0x11070 + 0x100*n)
#define SPP_ROUTE_CFG_PORT(n)	(0x11074 + 0x100*n)
#define TSI578_SP_MODE(n)	(0x11004 + n*0x100)
#define TSI578_SP_MODE_GLBL	0x10004
#define  TSI578_SP_MODE_PW_DIS	0x08000000
#define  TSI578_SP_MODE_LUT_512	0x01000000
#define TSI578_SP_CTL_INDEP(n)	(0x13004 + n*0x100)
#define TSI578_SP_LUT_PEINF(n)	(0x13010 + n*0x100)
#define TSI578_SP_CS_TX(n)	(0x13014 + n*0x100)
#define TSI578_SP_INT_STATUS(n) (0x13018 + n*0x100)
#define TSI578_GLBL_ROUTE_BASE	0x10078
static int
tsi57x_route_add_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 route_port)
static int
tsi57x_route_get_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 *route_port)
static int
tsi57x_route_clr_table(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table)
static int
tsi57x_set_domain(struct rio_mport *mport, u16 destid, u8 hopcount,
u8 sw_domain)
static int
tsi57x_get_domain(struct rio_mport *mport, u16 destid, u8 hopcount,
u8 *sw_domain)
static int
tsi57x_em_init(struct rio_dev *rdev)
static int
tsi57x_em_handler(struct rio_dev *rdev, u8 portnum)
static int tsi57x_switch_init(struct rio_dev *rdev, int do_enum)
DECLARE_RIO_SWITCH_INIT(RIO_VID_TUNDRA, RIO_DID_TSI572, tsi57x_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_TUNDRA, RIO_DID_TSI574, tsi57x_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_TUNDRA, RIO_DID_TSI577, tsi57x_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_TUNDRA, RIO_DID_TSI578, tsi57x_switch_init);
