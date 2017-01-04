#define ISL3877_IMAGE_FILE	"isl3877"
#define ISL3886_IMAGE_FILE	"isl3886"
#define ISL3890_IMAGE_FILE	"isl3890"
MODULE_FIRMWARE(ISL3877_IMAGE_FILE);
MODULE_FIRMWARE(ISL3886_IMAGE_FILE);
MODULE_FIRMWARE(ISL3890_IMAGE_FILE);
static int prism54_bring_down(islpci_private *);
static int islpci_alloc_memory(islpci_private *);
static const unsigned char	dummy_mac[6] = ;
static int
isl_upload_firmware(islpci_private *priv)
irqreturn_t
islpci_interrupt(int irq, void *config)
static int
islpci_open(struct net_device *ndev)
static int
islpci_close(struct net_device *ndev)
static int
prism54_bring_down(islpci_private *priv)
static int
islpci_upload_fw(islpci_private *priv)
static int
islpci_reset_if(islpci_private *priv)
int
islpci_reset(islpci_private *priv, int reload_firmware)
static int
islpci_alloc_memory(islpci_private *priv)
int
islpci_free_memory(islpci_private *priv)
static void islpci_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops islpci_ethtool_ops = ;
static const struct net_device_ops islpci_netdev_ops = ;
struct net_device *
islpci_setup(struct pci_dev *pdev)
islpci_state_t
islpci_set_state(islpci_private *priv, islpci_state_t new_state)
