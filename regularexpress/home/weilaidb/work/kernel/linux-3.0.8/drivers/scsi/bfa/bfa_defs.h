#define __BFA_DEFS_H__
#define BFA_MFG_SERIALNUM_SIZE                  11
#define STRSZ(_n)                               (((_n) + 4) & ~3)
enum ;
#define bfa_mfg_is_mezz(type) (( \
(type) == BFA_MFG_TYPE_JAYHAWK || \
(type) == BFA_MFG_TYPE_WANCHESE || \
(type) == BFA_MFG_TYPE_ASTRA || \
(type) == BFA_MFG_TYPE_LIGHTNING_P0 || \
(type) == BFA_MFG_TYPE_LIGHTNING))
#define bfa_mfg_is_old_wwn_mac_model(type) (( \
(type) == BFA_MFG_TYPE_FC8P2 || \
(type) == BFA_MFG_TYPE_FC8P1 || \
(type) == BFA_MFG_TYPE_FC4P2 || \
(type) == BFA_MFG_TYPE_FC4P1 || \
(type) == BFA_MFG_TYPE_CNA10P2 || \
(type) == BFA_MFG_TYPE_CNA10P1 || \
(type) == BFA_MFG_TYPE_JAYHAWK || \
(type) == BFA_MFG_TYPE_WANCHESE))
#define bfa_mfg_increment_wwn_mac(m, i)                         \
do  while (0)
#define BFA_MFG_VPD_LEN                 512
enum ;
struct bfa_mfg_vpd_s ;
enum bfa_status ;
#define bfa_status_t enum bfa_status
enum bfa_eproto_status ;
#define bfa_eproto_status_t enum bfa_eproto_status
enum bfa_boolean ;
#define bfa_boolean_t enum bfa_boolean
#define BFA_STRING_32	32
#define BFA_VERSION_LEN 64
enum ;
struct bfa_adapter_attr_s ;
enum ;
struct bfa_ioc_driver_attr_s ;
struct bfa_ioc_pci_attr_s ;
enum bfa_ioc_state ;
struct bfa_fw_ioc_stats_s ;
struct bfa_ioc_drv_stats_s ;
struct bfa_ioc_stats_s ;
enum bfa_ioc_type_e ;
struct bfa_ioc_attr_s ;
#define BFA_MFG_CHKSUM_SIZE			16
#define BFA_MFG_PARTNUM_SIZE			14
#define BFA_MFG_SUPPLIER_ID_SIZE		10
#define BFA_MFG_SUPPLIER_PARTNUM_SIZE		20
#define BFA_MFG_SUPPLIER_SERIALNUM_SIZE		20
#define BFA_MFG_SUPPLIER_REVISION_SIZE		4
struct bfa_mfg_block_s ;
enum ;
#define bfa_asic_id_ct(devid)			\
((devid) == BFA_PCI_DEVICE_ID_CT ||	\
(devid) == BFA_PCI_DEVICE_ID_CT_FC)
enum ;
#define BFA_PCI_ACCESS_RANGES 1
enum bfa_port_speed ;
#define bfa_port_speed_t enum bfa_port_speed
enum ;
#define BOOT_CFG_REV1   1
#define BOOT_CFG_VLAN   1
enum bfa_boot_bootopt ;
struct bfa_boot_bootlun_s ;
struct bfa_boot_pbc_s ;
