static int pcie_port_bus_match(struct device *dev, struct device_driver *drv);
struct bus_type pcie_port_bus_type = ;
EXPORT_SYMBOL_GPL(pcie_port_bus_type);
static int pcie_port_bus_match(struct device *dev, struct device_driver *drv)
int pcie_port_bus_register(void)
void pcie_port_bus_unregister(void)
