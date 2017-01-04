#define __MACH_ULPI_H
struct otg_transceiver *imx_otg_ulpi_create(unsigned int flags);
static inline struct otg_transceiver *imx_otg_ulpi_create(unsigned int flags)
extern struct otg_io_access_ops mxc_ulpi_access_ops;
