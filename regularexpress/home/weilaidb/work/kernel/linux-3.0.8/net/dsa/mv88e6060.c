#define REG_PORT(p)		(8 + (p))
#define REG_GLOBAL		0x0f
static int reg_read(struct dsa_switch *ds, int addr, int reg)
#define REG_READ(addr, reg)					\
()
static int reg_write(struct dsa_switch *ds, int addr, int reg, u16 val)
#define REG_WRITE(addr, reg, val)				\
()
static char *mv88e6060_probe(struct mii_bus *bus, int sw_addr)
static int mv88e6060_switch_reset(struct dsa_switch *ds)
static int mv88e6060_setup_global(struct dsa_switch *ds)
static int mv88e6060_setup_port(struct dsa_switch *ds, int p)
static int mv88e6060_setup(struct dsa_switch *ds)
static int mv88e6060_set_addr(struct dsa_switch *ds, u8 *addr)
static int mv88e6060_port_to_phy_addr(int port)
static int mv88e6060_phy_read(struct dsa_switch *ds, int port, int regnum)
static int
mv88e6060_phy_write(struct dsa_switch *ds, int port, int regnum, u16 val)
static void mv88e6060_poll_link(struct dsa_switch *ds)
static struct dsa_switch_driver mv88e6060_switch_driver = ;
static int __init mv88e6060_init(void)
module_init(mv88e6060_init);
static void __exit mv88e6060_cleanup(void)
module_exit(mv88e6060_cleanup);
