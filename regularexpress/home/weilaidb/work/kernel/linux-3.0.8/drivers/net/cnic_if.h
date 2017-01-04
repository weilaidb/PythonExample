#define CNIC_IF_H
#define CNIC_MODULE_VERSION	"2.2.14"
#define CNIC_MODULE_RELDATE	"Mar 30, 2011"
#define CNIC_ULP_RDMA		0
#define CNIC_ULP_ISCSI		1
#define CNIC_ULP_FCOE		2
#define CNIC_ULP_L4		3
#define MAX_CNIC_ULP_TYPE_EXT	3
#define MAX_CNIC_ULP_TYPE	4
struct kwqe ;
struct kwqe_16 ;
struct kcqe ;
#define MAX_CNIC_CTL_DATA	64
#define MAX_DRV_CTL_DATA	64
#define CNIC_CTL_STOP_CMD		1
#define CNIC_CTL_START_CMD		2
#define CNIC_CTL_COMPLETION_CMD		3
#define CNIC_CTL_STOP_ISCSI_CMD		4
#define DRV_CTL_IO_WR_CMD		0x101
#define DRV_CTL_IO_RD_CMD		0x102
#define DRV_CTL_CTX_WR_CMD		0x103
#define DRV_CTL_CTXTBL_WR_CMD		0x104
#define DRV_CTL_RET_L5_SPQ_CREDIT_CMD	0x105
#define DRV_CTL_START_L2_CMD		0x106
#define DRV_CTL_STOP_L2_CMD		0x107
#define DRV_CTL_RET_L2_SPQ_CREDIT_CMD	0x10c
#define DRV_CTL_ISCSI_STOPPED_CMD	0x10d
struct cnic_ctl_completion ;
struct cnic_ctl_info ;
struct drv_ctl_spq_credit ;
struct drv_ctl_io ;
struct drv_ctl_l2_ring ;
struct drv_ctl_info ;
struct cnic_ops ;
#define MAX_CNIC_VEC	8
struct cnic_irq ;
struct cnic_eth_dev ;
struct cnic_sockaddr ;
struct cnic_sock ;
struct cnic_dev ;
#define CNIC_WR(dev, off, val)		writel(val, dev->regview + off)
#define CNIC_WR16(dev, off, val)	writew(val, dev->regview + off)
#define CNIC_WR8(dev, off, val)		writeb(val, dev->regview + off)
#define CNIC_RD(dev, off)		readl(dev->regview + off)
#define CNIC_RD16(dev, off)		readw(dev->regview + off)
struct cnic_ulp_ops ;
extern int cnic_register_driver(int ulp_type, struct cnic_ulp_ops *ulp_ops);
extern int cnic_unregister_driver(int ulp_type);
extern struct cnic_eth_dev *bnx2_cnic_probe(struct net_device *dev);
extern struct cnic_eth_dev *bnx2x_cnic_probe(struct net_device *dev);
