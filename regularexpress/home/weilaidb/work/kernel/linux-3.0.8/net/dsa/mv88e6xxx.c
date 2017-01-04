static int mv88e6xxx_reg_wait_ready(struct mii_bus *bus, int sw_addr)
int __mv88e6xxx_reg_read(struct mii_bus *bus, int sw_addr, int addr, int reg)
int mv88e6xxx_reg_read(struct dsa_switch *ds, int addr, int reg)
int __mv88e6xxx_reg_write(struct mii_bus *bus, int sw_addr, int addr,
int reg, u16 val)
int mv88e6xxx_reg_write(struct dsa_switch *ds, int addr, int reg, u16 val)
int mv88e6xxx_config_prio(struct dsa_switch *ds)
int mv88e6xxx_set_addr_direct(struct dsa_switch *ds, u8 *addr)
int mv88e6xxx_set_addr_indirect(struct dsa_switch *ds, u8 *addr)
int mv88e6xxx_phy_read(struct dsa_switch *ds, int addr, int regnum)
int mv88e6xxx_phy_write(struct dsa_switch *ds, int addr, int regnum, u16 val)
static int mv88e6xxx_ppu_disable(struct dsa_switch *ds)
static int mv88e6xxx_ppu_enable(struct dsa_switch *ds)
static void mv88e6xxx_ppu_reenable_work(struct work_struct *ugly)
static void mv88e6xxx_ppu_reenable_timer(unsigned long _ps)
static int mv88e6xxx_ppu_access_get(struct dsa_switch *ds)
static void mv88e6xxx_ppu_access_put(struct dsa_switch *ds)
void mv88e6xxx_ppu_state_init(struct dsa_switch *ds)
int mv88e6xxx_phy_read_ppu(struct dsa_switch *ds, int addr, int regnum)
int mv88e6xxx_phy_write_ppu(struct dsa_switch *ds, int addr,
int regnum, u16 val)
void mv88e6xxx_poll_link(struct dsa_switch *ds)
static int mv88e6xxx_stats_wait(struct dsa_switch *ds)
static int mv88e6xxx_stats_snapshot(struct dsa_switch *ds, int port)
static void mv88e6xxx_stats_read(struct dsa_switch *ds, int stat, u32 *val)
void mv88e6xxx_get_strings(struct dsa_switch *ds,
int nr_stats, struct mv88e6xxx_hw_stat *stats,
int port, uint8_t *data)
void mv88e6xxx_get_ethtool_stats(struct dsa_switch *ds,
int nr_stats, struct mv88e6xxx_hw_stat *stats,
int port, uint64_t *data)
