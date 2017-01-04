#define PCI_IMPL_H
#define PCI_STC_FLUSHFLAG_INIT(STC) \
(*((STC)->strbuf_flushflag) = 0UL)
#define PCI_STC_FLUSHFLAG_SET(STC) \
(*((STC)->strbuf_flushflag) != 0UL)
struct pci_pbm_info;
struct sparc64_msiq_ops ;
extern void sparc64_pbm_msi_init(struct pci_pbm_info *pbm,
const struct sparc64_msiq_ops *ops);
struct sparc64_msiq_cookie ;
struct pci_pbm_info ;
extern struct pci_pbm_info *pci_pbm_root;
extern int pci_num_pbms;
extern void pci_get_pbm_props(struct pci_pbm_info *pbm);
extern struct pci_bus *pci_scan_one_pbm(struct pci_pbm_info *pbm,
struct device *parent);
extern void pci_determine_mem_io_space(struct pci_pbm_info *pbm);
extern void pci_scan_for_target_abort(struct pci_pbm_info *, struct pci_bus *);
extern void pci_scan_for_master_abort(struct pci_pbm_info *, struct pci_bus *);
extern void pci_scan_for_parity_error(struct pci_pbm_info *, struct pci_bus *);
extern void pci_config_read8(u8 *addr, u8 *ret);
extern void pci_config_read16(u16 *addr, u16 *ret);
extern void pci_config_read32(u32 *addr, u32 *ret);
extern void pci_config_write8(u8 *addr, u8 val);
extern void pci_config_write16(u16 *addr, u16 val);
extern void pci_config_write32(u32 *addr, u32 val);
extern struct pci_ops sun4u_pci_ops;
extern struct pci_ops sun4v_pci_ops;
extern volatile int pci_poke_in_progress;
extern volatile int pci_poke_cpu;
extern volatile int pci_poke_faulted;
