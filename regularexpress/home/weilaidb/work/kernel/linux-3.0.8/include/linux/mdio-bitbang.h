#define __LINUX_MDIO_BITBANG_H
struct mdiobb_ctrl;
struct mdiobb_ops ;
struct mdiobb_ctrl ;
struct mii_bus *alloc_mdio_bitbang(struct mdiobb_ctrl *ctrl);
void free_mdio_bitbang(struct mii_bus *bus);
