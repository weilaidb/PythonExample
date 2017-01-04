#define __RTL_PCI_H__
#define RTL_PCI_RX_MPDU_QUEUE			0
#define RTL_PCI_RX_CMD_QUEUE			1
#define RTL_PCI_MAX_RX_QUEUE			2
#define RTL_PCI_MAX_RX_COUNT			64
#define RTL_PCI_MAX_TX_QUEUE_COUNT		9
#define RT_TXDESC_NUM				128
#define RT_TXDESC_NUM_BE_QUEUE			256
#define BK_QUEUE				0
#define BE_QUEUE				1
#define VI_QUEUE				2
#define VO_QUEUE				3
#define BEACON_QUEUE				4
#define TXCMD_QUEUE				5
#define MGNT_QUEUE				6
#define HIGH_QUEUE				7
#define HCCA_QUEUE				8
#define RTL_PCI_DEVICE(vend, dev, cfg)  \
.vendor = (vend), \
.device = (dev), \
.subvendor = PCI_ANY_ID, \
.subdevice = PCI_ANY_ID,\
.driver_data = (kernel_ulong_t)&(cfg)
#define INTEL_VENDOR_ID				0x8086
#define SIS_VENDOR_ID				0x1039
#define ATI_VENDOR_ID				0x1002
#define ATI_DEVICE_ID				0x7914
#define AMD_VENDOR_ID				0x1022
#define PCI_MAX_BRIDGE_NUMBER			255
#define PCI_MAX_DEVICES				32
#define PCI_MAX_FUNCTION			8
#define PCI_CONF_ADDRESS	0x0CF8
#define PCI_CONF_DATA		0x0CFC
#define PCI_CLASS_BRIDGE_DEV		0x06
#define PCI_SUBCLASS_BR_PCI_TO_PCI	0x04
#define PCI_CAPABILITY_ID_PCI_EXPRESS	0x10
#define PCI_CAP_ID_EXP			0x10
#define U1DONTCARE			0xFF
#define U2DONTCARE			0xFFFF
#define U4DONTCARE			0xFFFFFFFF
#define RTL_PCI_8192_DID	0x8192
#define RTL_PCI_8192SE_DID	0x8192
#define RTL_PCI_8174_DID	0x8174
#define RTL_PCI_8173_DID	0x8173
#define RTL_PCI_8172_DID	0x8172
#define RTL_PCI_8171_DID	0x8171
#define RTL_PCI_0045_DID	0x0045
#define RTL_PCI_0046_DID	0x0046
#define RTL_PCI_0044_DID	0x0044
#define RTL_PCI_0047_DID	0x0047
#define RTL_PCI_700F_DID	0x700F
#define RTL_PCI_701F_DID	0x701F
#define RTL_PCI_DLINK_DID	0x3304
#define RTL_PCI_8192CET_DID	0x8191
#define RTL_PCI_8192CE_DID	0x8178
#define RTL_PCI_8191CE_DID	0x8177
#define RTL_PCI_8188CE_DID	0x8176
#define RTL_PCI_8192CU_DID	0x8191
#define RTL_PCI_8192DE_DID	0x8193
#define RTL_PCI_8192DE_DID2	0x002B
#define RTL_MEM_MAPPED_IO_RANGE_8190PCI		0x1000
#define RTL_MEM_MAPPED_IO_RANGE_8192PCIE	0x4000
#define RTL_MEM_MAPPED_IO_RANGE_8192SE		0x4000
#define RTL_MEM_MAPPED_IO_RANGE_8192CE		0x4000
#define RTL_MEM_MAPPED_IO_RANGE_8192DE		0x4000
#define RTL_PCI_REVISION_ID_8190PCI		0x00
#define RTL_PCI_REVISION_ID_8192PCIE		0x01
#define RTL_PCI_REVISION_ID_8192SE		0x10
#define RTL_PCI_REVISION_ID_8192CE		0x1
#define RTL_PCI_REVISION_ID_8192DE		0x0
#define RTL_DEFAULT_HARDWARE_TYPE	HARDWARE_TYPE_RTL8192CE
enum pci_bridge_vendor ;
struct rtl_pci_capabilities_header ;
struct rtl_rx_desc  __packed;
struct rtl_tx_desc  __packed;
struct rtl_tx_cmd_desc  __packed;
struct rtl8192_tx_ring ;
struct rtl8192_rx_ring ;
struct rtl_pci ;
struct mp_adapter ;
struct rtl_pci_priv ;
#define rtl_pcipriv(hw)		(((struct rtl_pci_priv *)(rtl_priv(hw))->priv))
#define rtl_pcidev(pcipriv)	(&((pcipriv)->dev))
int rtl_pci_reset_trx_ring(struct ieee80211_hw *hw);
extern struct rtl_intf_ops rtl_pci_ops;
int __devinit rtl_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
void rtl_pci_disconnect(struct pci_dev *pdev);
int rtl_pci_suspend(struct pci_dev *pdev, pm_message_t state);
int rtl_pci_resume(struct pci_dev *pdev);
static inline u8 pci_read8_sync(struct rtl_priv *rtlpriv, u32 addr)
static inline u16 pci_read16_sync(struct rtl_priv *rtlpriv, u32 addr)
static inline u32 pci_read32_sync(struct rtl_priv *rtlpriv, u32 addr)
static inline void pci_write8_async(struct rtl_priv *rtlpriv, u32 addr, u8 val)
static inline void pci_write16_async(struct rtl_priv *rtlpriv,
u32 addr, u16 val)
static inline void pci_write32_async(struct rtl_priv *rtlpriv,
u32 addr, u32 val)
static inline void rtl_pci_raw_write_port_ulong(u32 port, u32 val)
static inline void rtl_pci_raw_write_port_uchar(u32 port, u8 val)
static inline void rtl_pci_raw_read_port_uchar(u32 port, u8 *pval)
static inline void rtl_pci_raw_read_port_ushort(u32 port, u16 *pval)
static inline void rtl_pci_raw_read_port_ulong(u32 port, u32 *pval)
