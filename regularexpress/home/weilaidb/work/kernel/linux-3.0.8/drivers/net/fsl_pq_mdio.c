struct fsl_pq_mdio_priv ;
int fsl_pq_local_mdio_write(struct fsl_pq_mdio __iomem *regs, int mii_id,
int regnum, u16 value)
int fsl_pq_local_mdio_read(struct fsl_pq_mdio __iomem *regs,
int mii_id, int regnum)
static struct fsl_pq_mdio __iomem *fsl_pq_mdio_get_regs(struct mii_bus *bus)
int fsl_pq_mdio_write(struct mii_bus *bus, int mii_id, int regnum, u16 value)
int fsl_pq_mdio_read(struct mii_bus *bus, int mii_id, int regnum)
static int fsl_pq_mdio_reset(struct mii_bus *bus)
void fsl_pq_mdio_bus_name(char *name, struct device_node *np)
EXPORT_SYMBOL_GPL(fsl_pq_mdio_bus_name);
static int fsl_pq_mdio_find_free(struct mii_bus *new_bus)
#if defined(CONFIG_GIANFAR) || defined(CONFIG_GIANFAR_MODULE)
static u32 __iomem *get_gfar_tbipa(struct fsl_pq_mdio __iomem *regs, struct device_node *np)
#if defined(CONFIG_UCC_GETH) || defined(CONFIG_UCC_GETH_MODULE)
static int get_ucc_id_for_range(u64 start, u64 end, u32 *ucc_id)
static int fsl_pq_mdio_probe(struct platform_device *ofdev)
static int fsl_pq_mdio_remove(struct platform_device *ofdev)
static struct of_device_id fsl_pq_mdio_match[] = ;
MODULE_DEVICE_TABLE(of, fsl_pq_mdio_match);
static struct platform_driver fsl_pq_mdio_driver = ;
int __init fsl_pq_mdio_init(void)
module_init(fsl_pq_mdio_init);
void fsl_pq_mdio_exit(void)
module_exit(fsl_pq_mdio_exit);
MODULE_LICENSE("GPL");
