#define __BFA_DEFS_H__
#define BFA_STRING_32	32
#define BFA_VERSION_LEN 64
enum ;
struct bfa_adapter_attr ;
enum ;
struct bfa_ioc_driver_attr ;
struct bfa_ioc_pci_attr ;
enum bfa_ioc_state ;
struct bfa_fw_ioc_stats ;
struct bfa_ioc_drv_stats ;
struct bfa_ioc_stats ;
enum bfa_ioc_type ;
struct bfa_ioc_attr ;
#define BFA_MFG_CHKSUM_SIZE			16
#define BFA_MFG_PARTNUM_SIZE			14
#define BFA_MFG_SUPPLIER_ID_SIZE		10
#define BFA_MFG_SUPPLIER_PARTNUM_SIZE		20
#define BFA_MFG_SUPPLIER_SERIALNUM_SIZE		20
#define BFA_MFG_SUPPLIER_REVISION_SIZE		4
struct bfa_mfg_block ;
#define bfa_asic_id_ct(devid)			\
((devid) == PCI_DEVICE_ID_BROCADE_CT ||	\
(devid) == PCI_DEVICE_ID_BROCADE_CT_FC)
