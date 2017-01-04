#define MDIO_READ 2
#define MDIO_WRITE 1
#define MDIO_C45 (1<<15)
#define MDIO_C45_ADDR (MDIO_C45 | 0)
#define MDIO_C45_READ (MDIO_C45 | 3)
#define MDIO_C45_WRITE (MDIO_C45 | 1)
#define MDIO_SETUP_TIME 10
#define MDIO_HOLD_TIME 10
#define MDIO_DELAY 250
#define MDIO_READ_DELAY 350
static void mdiobb_send_bit(struct mdiobb_ctrl *ctrl, int val)
static int mdiobb_get_bit(struct mdiobb_ctrl *ctrl)
static void mdiobb_send_num(struct mdiobb_ctrl *ctrl, u16 val, int bits)
static u16 mdiobb_get_num(struct mdiobb_ctrl *ctrl, int bits)
static void mdiobb_cmd(struct mdiobb_ctrl *ctrl, int op, u8 phy, u8 reg)
static int mdiobb_cmd_addr(struct mdiobb_ctrl *ctrl, int phy, u32 addr)
static int mdiobb_read(struct mii_bus *bus, int phy, int reg)
static int mdiobb_write(struct mii_bus *bus, int phy, int reg, u16 val)
struct mii_bus *alloc_mdio_bitbang(struct mdiobb_ctrl *ctrl)
EXPORT_SYMBOL(alloc_mdio_bitbang);
void free_mdio_bitbang(struct mii_bus *bus)
EXPORT_SYMBOL(free_mdio_bitbang);
MODULE_LICENSE("GPL");
