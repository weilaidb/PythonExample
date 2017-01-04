#define CPS_DEFAULT_ROUTE	0xde
#define CPS_NO_ROUTE		0xdf
#define IDTCPS_RIO_DOMAIN 0xf20020
static int
idtcps_route_add_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 route_port)
static int
idtcps_route_get_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 *route_port)
static int
idtcps_route_clr_table(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table)
static int
idtcps_set_domain(struct rio_mport *mport, u16 destid, u8 hopcount,
u8 sw_domain)
static int
idtcps_get_domain(struct rio_mport *mport, u16 destid, u8 hopcount,
u8 *sw_domain)
static int idtcps_switch_init(struct rio_dev *rdev, int do_enum)
DECLARE_RIO_SWITCH_INIT(RIO_VID_IDT, RIO_DID_IDTCPS6Q, idtcps_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_IDT, RIO_DID_IDTCPS8, idtcps_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_IDT, RIO_DID_IDTCPS10Q, idtcps_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_IDT, RIO_DID_IDTCPS12, idtcps_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_IDT, RIO_DID_IDTCPS16, idtcps_switch_init);
DECLARE_RIO_SWITCH_INIT(RIO_VID_IDT, RIO_DID_IDT70K200, idtcps_switch_init);
