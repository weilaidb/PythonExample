#define __BFA_DEFS_MFG_COMM_H__
#define BFA_MFG_VERSION				2
#define BFA_MFG_VERSION_UNINIT			0xFF
#define BFA_MFG_ENC_VER				2
#define BFA_MFG_VER1_LEN			128
#define BFA_MFG_HDR_LEN				4
#define BFA_MFG_SERIALNUM_SIZE			11
#define STRSZ(_n)				(((_n) + 4) & ~3)
enum ;
#define bfa_mfg_is_1port(type) (( \
(type) == BFA_MFG_TYPE_FC8P1 || \
(type) == BFA_MFG_TYPE_FC4P1 || \
(type) == BFA_MFG_TYPE_CNA10P1))
#define bfa_mfg_is_mezz(type) (( \
(type) == BFA_MFG_TYPE_JAYHAWK || \
(type) == BFA_MFG_TYPE_WANCHESE || \
(type) == BFA_MFG_TYPE_ASTRA || \
(type) == BFA_MFG_TYPE_LIGHTNING_P0 || \
(type) == BFA_MFG_TYPE_LIGHTNING))
#define bfa_mfg_is_card_type_valid(type) (( \
(type) == BFA_MFG_TYPE_FC8P2 || \
(type) == BFA_MFG_TYPE_FC8P1 || \
(type) == BFA_MFG_TYPE_FC4P2 || \
(type) == BFA_MFG_TYPE_FC4P1 || \
(type) == BFA_MFG_TYPE_CNA10P2 || \
(type) == BFA_MFG_TYPE_CNA10P1 || \
bfa_mfg_is_mezz(type)))
#define bfa_mfg_adapter_prop_init_flash(card_type, prop)	\
do  while (0)
enum ;
#define bfa_mfg_adapter_prop_init_gpio(gpio, card_type, prop)	\
do  while (0)
#define BFA_MFG_VPD_LEN			512
#define BFA_MFG_VPD_LEN_INVALID		0
#define BFA_MFG_VPD_PCI_HDR_OFF		137
#define BFA_MFG_VPD_PCI_VER_MASK	0x07
#define BFA_MFG_VPD_PCI_VDR_MASK	0xf8
enum ;
struct bfa_mfg_vpd ;
