#define ID_6085		0x04a0
#define ID_6095		0x0950
#define ID_6131		0x1060
static char *mv88e6131_probe(struct mii_bus *bus, int sw_addr)
static int mv88e6131_switch_reset(struct dsa_switch *ds)
static int mv88e6131_setup_global(struct dsa_switch *ds)
static int mv88e6131_setup_port(struct dsa_switch *ds, int p)
static int mv88e6131_setup(struct dsa_switch *ds)
static int mv88e6131_port_to_phy_addr(int port)
static int
mv88e6131_phy_read(struct dsa_switch *ds, int port, int regnum)
static int
mv88e6131_phy_write(struct dsa_switch *ds,
int port, int regnum, u16 val)
static struct mv88e6xxx_hw_stat mv88e6131_hw_stats[] = ;
static void
mv88e6131_get_strings(struct dsa_switch *ds, int port, uint8_t *data)
static void
mv88e6131_get_ethtool_stats(struct dsa_switch *ds,
int port, uint64_t *data)
static int mv88e6131_get_sset_count(struct dsa_switch *ds)
static struct dsa_switch_driver mv88e6131_switch_driver = ;
static int __init mv88e6131_init(void)
module_init(mv88e6131_init);
static void __exit mv88e6131_cleanup(void)
module_exit(mv88e6131_cleanup);
