#define P54PCI_H
#define ISL38XX_DEV_INT_RESET                   0x0001
#define ISL38XX_DEV_INT_UPDATE                  0x0002
#define ISL38XX_DEV_INT_WAKEUP                  0x0008
#define ISL38XX_DEV_INT_SLEEP                   0x0010
#define ISL38XX_DEV_INT_ABORT                   0x0020
#define ISL38XX_DEV_INT_DATA                    0x0040
#define ISL38XX_DEV_INT_MGMT                    0x0080
#define ISL38XX_DEV_INT_PCIUART_CTS             0x4000
#define ISL38XX_DEV_INT_PCIUART_DR              0x8000
#define ISL38XX_INT_IDENT_UPDATE		0x0002
#define ISL38XX_INT_IDENT_INIT			0x0004
#define ISL38XX_INT_IDENT_WAKEUP		0x0008
#define ISL38XX_INT_IDENT_SLEEP			0x0010
#define ISL38XX_INT_IDENT_PCIUART_CTS		0x4000
#define ISL38XX_INT_IDENT_PCIUART_DR		0x8000
#define ISL38XX_CTRL_STAT_SLEEPMODE		0x00000200
#define ISL38XX_CTRL_STAT_CLKRUN		0x00800000
#define ISL38XX_CTRL_STAT_RESET			0x10000000
#define ISL38XX_CTRL_STAT_RAMBOOT		0x20000000
#define ISL38XX_CTRL_STAT_STARTHALTED		0x40000000
#define ISL38XX_CTRL_STAT_HOST_OVERRIDE		0x80000000
struct p54p_csr  __packed;
struct p54p_desc  __packed;
struct p54p_ring_control  __packed;
#define P54P_READ(r) (__force __le32)__raw_readl(&priv->map->r)
#define P54P_WRITE(r, val) __raw_writel((__force u32)(__le32)(val), &priv->map->r)
struct p54p_priv ;
