#define _PCIEPORT_IF_H_
#define PCIE_ANY_PORT			(~0)
#define PCIE_PORT_SERVICE_PME_SHIFT	0
#define PCIE_PORT_SERVICE_PME		(1 << PCIE_PORT_SERVICE_PME_SHIFT)
#define PCIE_PORT_SERVICE_AER_SHIFT	1
#define PCIE_PORT_SERVICE_AER		(1 << PCIE_PORT_SERVICE_AER_SHIFT)
#define PCIE_PORT_SERVICE_HP_SHIFT	2
#define PCIE_PORT_SERVICE_HP		(1 << PCIE_PORT_SERVICE_HP_SHIFT)
#define PCIE_PORT_SERVICE_VC_SHIFT	3
#define PCIE_PORT_SERVICE_VC		(1 << PCIE_PORT_SERVICE_VC_SHIFT)
struct pcie_device ;
#define to_pcie_device(d) container_of(d, struct pcie_device, device)
static inline void set_service_data(struct pcie_device *dev, void *data)
static inline void* get_service_data(struct pcie_device *dev)
struct pcie_port_service_driver ;
#define to_service_driver(d) \
container_of(d, struct pcie_port_service_driver, driver)
extern int pcie_port_service_register(struct pcie_port_service_driver *new);
extern void pcie_port_service_unregister(struct pcie_port_service_driver *new);
