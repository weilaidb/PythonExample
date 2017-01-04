#define MXS_AMBA_DUART_DEVICE(name, soc)			\
const struct amba_device name##_device __initconst =
MXS_AMBA_DUART_DEVICE(mx23_duart, MX23);
MXS_AMBA_DUART_DEVICE(mx28_duart, MX28);
int __init mxs_add_duart(const struct amba_device *dev)
