#define ULPIVW_WU		(1 << 31)
#define ULPIVW_RUN		(1 << 30)
#define ULPIVW_WRITE		(1 << 29)
#define ULPIVW_SS		(1 << 27)
#define ULPIVW_PORT_MASK	0x07
#define ULPIVW_PORT_SHIFT	24
#define ULPIVW_ADDR_MASK	0xff
#define ULPIVW_ADDR_SHIFT	16
#define ULPIVW_RDATA_MASK	0xff
#define ULPIVW_RDATA_SHIFT	8
#define ULPIVW_WDATA_MASK	0xff
#define ULPIVW_WDATA_SHIFT	0
static int ulpi_poll(void __iomem *view, u32 bit)
static int ulpi_read(struct otg_transceiver *otg, u32 reg)
static int ulpi_write(struct otg_transceiver *otg, u32 val, u32 reg)
struct otg_io_access_ops mxc_ulpi_access_ops = ;
EXPORT_SYMBOL_GPL(mxc_ulpi_access_ops);
struct otg_transceiver *imx_otg_ulpi_create(unsigned int flags)
