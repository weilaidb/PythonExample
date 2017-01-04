struct bb_info ;
static inline void bb_set(u32 __iomem *p, u32 m)
static inline void bb_clr(u32 __iomem *p, u32 m)
static inline int bb_read(u32 __iomem *p, u32 m)
static inline void mdio_dir(struct mdiobb_ctrl *ctrl, int dir)
static inline int mdio_read(struct mdiobb_ctrl *ctrl)
static inline void mdio(struct mdiobb_ctrl *ctrl, int what)
static inline void mdc(struct mdiobb_ctrl *ctrl, int what)
static struct mdiobb_ops bb_ops = ;
static int __devinit fs_mii_bitbang_init(struct mii_bus *bus,
struct device_node *np)
static int __devinit fs_enet_mdio_probe(struct platform_device *ofdev)
static int fs_enet_mdio_remove(struct platform_device *ofdev)
static struct of_device_id fs_enet_mdio_bb_match[] = ;
MODULE_DEVICE_TABLE(of, fs_enet_mdio_bb_match);
static struct platform_driver fs_enet_bb_mdio_driver = ;
static int fs_enet_mdio_bb_init(void)
static void fs_enet_mdio_bb_exit(void)
module_init(fs_enet_mdio_bb_init);
module_exit(fs_enet_mdio_bb_exit);
