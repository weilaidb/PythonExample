#define __INTEL_MID_OTG_H
struct intel_mid_otg_xceiv;
struct otg_hsm ;
struct iotg_ulpi_access_ops ;
#define OTG_A_DEVICE	0x0
#define OTG_B_DEVICE	0x1
struct intel_mid_otg_xceiv ;
static inline
struct intel_mid_otg_xceiv *otg_to_mid_xceiv(struct otg_transceiver *otg)
#define MID_OTG_NOTIFY_CONNECT		0x0001
#define MID_OTG_NOTIFY_DISCONN		0x0002
#define MID_OTG_NOTIFY_HSUSPEND		0x0003
#define MID_OTG_NOTIFY_HRESUME		0x0004
#define MID_OTG_NOTIFY_CSUSPEND		0x0005
#define MID_OTG_NOTIFY_CRESUME		0x0006
#define MID_OTG_NOTIFY_HOSTADD		0x0007
#define MID_OTG_NOTIFY_HOSTREMOVE	0x0008
#define MID_OTG_NOTIFY_CLIENTADD	0x0009
#define MID_OTG_NOTIFY_CLIENTREMOVE	0x000a
static inline int
intel_mid_otg_register_notifier(struct intel_mid_otg_xceiv *iotg,
struct notifier_block *nb)
static inline void
intel_mid_otg_unregister_notifier(struct intel_mid_otg_xceiv *iotg,
struct notifier_block *nb)
