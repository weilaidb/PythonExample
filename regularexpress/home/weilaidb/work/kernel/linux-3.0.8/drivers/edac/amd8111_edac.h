#define _AMD8111_EDAC_H_
#define REG_PCI_STSCMD	0x04
enum pci_stscmd_bits ;
#define REG_MEM_LIM     0x1c
enum mem_limit_bits ;
#define REG_HT_LINK	0xc4
enum ht_link_bits ;
#define REG_PCI_INTBRG_CTRL	0x3c
enum pci_intbrg_ctrl_bits ;
#define REG_IO_CTRL_1 0x40
enum io_ctrl_1_bits ;
#define REG_AT_COMPAT 0x61
enum at_compat_bits ;
struct amd8111_dev_info ;
struct amd8111_pci_info ;
