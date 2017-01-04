static int
tsi500_route_add_entry(struct rio_mport *mport, u16 destid, u8 hopcount, u16 table, u16 route_destid, u8 route_port)
static int
tsi500_route_get_entry(struct rio_mport *mport, u16 destid, u8 hopcount, u16 table, u16 route_destid, u8 *route_port)
static int tsi500_switch_init(struct rio_dev *rdev, int do_enum)
DECLARE_RIO_SWITCH_INIT(RIO_VID_TUNDRA, RIO_DID_TSI500, tsi500_switch_init);
