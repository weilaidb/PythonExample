#define DRV_NAME	"sata_mv"
#define DRV_VERSION	"1.28"
static int msi;
module_param(msi, int, S_IRUGO);
MODULE_PARM_DESC(msi, "Enable use of PCI MSI (0=off, 1=on)");
static int irq_coalescing_io_count;
module_param(irq_coalescing_io_count, int, S_IRUGO);
MODULE_PARM_DESC(irq_coalescing_io_count,
"IRQ coalescing I/O count threshold (0..255)");
static int irq_coalescing_usecs;
module_param(irq_coalescing_usecs, int, S_IRUGO);
MODULE_PARM_DESC(irq_coalescing_usecs,
"IRQ coalescing time threshold in usecs");
enum ;
#define IS_GEN_I(hpriv) ((hpriv)->hp_flags & MV_HP_GEN_I)
#define IS_GEN_II(hpriv) ((hpriv)->hp_flags & MV_HP_GEN_II)
#define IS_GEN_IIE(hpriv) ((hpriv)->hp_flags & MV_HP_GEN_IIE)
#define IS_PCIE(hpriv) ((hpriv)->hp_flags & MV_HP_PCIE)
#define IS_SOC(hpriv) ((hpriv)->hp_flags & MV_HP_FLAG_SOC)
#define WINDOW_CTRL(i)		(0x20030 + ((i) << 4))
#define WINDOW_BASE(i)		(0x20034 + ((i) << 4))
enum ;
enum chip_type ;
struct mv_crqb ;
struct mv_crqb_iie ;
struct mv_crpb ;
struct mv_sg ;
struct mv_cached_regs ;
struct mv_port_priv ;
struct mv_port_signal ;
struct mv_host_priv ;
struct mv_hw_ops ;
static int mv_scr_read(struct ata_link *link, unsigned int sc_reg_in, u32 *val);
static int mv_scr_write(struct ata_link *link, unsigned int sc_reg_in, u32 val);
static int mv5_scr_read(struct ata_link *link, unsigned int sc_reg_in, u32 *val);
static int mv5_scr_write(struct ata_link *link, unsigned int sc_reg_in, u32 val);
static int mv_port_start(struct ata_port *ap);
static void mv_port_stop(struct ata_port *ap);
static int mv_qc_defer(struct ata_queued_cmd *qc);
static void mv_qc_prep(struct ata_queued_cmd *qc);
static void mv_qc_prep_iie(struct ata_queued_cmd *qc);
static unsigned int mv_qc_issue(struct ata_queued_cmd *qc);
static int mv_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void mv_eh_freeze(struct ata_port *ap);
static void mv_eh_thaw(struct ata_port *ap);
static void mv6_dev_config(struct ata_device *dev);
static void mv5_phy_errata(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port);
static void mv5_enable_leds(struct mv_host_priv *hpriv, void __iomem *mmio);
static void mv5_read_preamp(struct mv_host_priv *hpriv, int idx,
void __iomem *mmio);
static int mv5_reset_hc(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int n_hc);
static void mv5_reset_flash(struct mv_host_priv *hpriv, void __iomem *mmio);
static void mv5_reset_bus(struct ata_host *host, void __iomem *mmio);
static void mv6_phy_errata(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port);
static void mv6_enable_leds(struct mv_host_priv *hpriv, void __iomem *mmio);
static void mv6_read_preamp(struct mv_host_priv *hpriv, int idx,
void __iomem *mmio);
static int mv6_reset_hc(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int n_hc);
static void mv6_reset_flash(struct mv_host_priv *hpriv, void __iomem *mmio);
static void mv_soc_enable_leds(struct mv_host_priv *hpriv,
void __iomem *mmio);
static void mv_soc_read_preamp(struct mv_host_priv *hpriv, int idx,
void __iomem *mmio);
static int mv_soc_reset_hc(struct mv_host_priv *hpriv,
void __iomem *mmio, unsigned int n_hc);
static void mv_soc_reset_flash(struct mv_host_priv *hpriv,
void __iomem *mmio);
static void mv_soc_reset_bus(struct ata_host *host, void __iomem *mmio);
static void mv_soc_65n_phy_errata(struct mv_host_priv *hpriv,
void __iomem *mmio, unsigned int port);
static void mv_reset_pci_bus(struct ata_host *host, void __iomem *mmio);
static void mv_reset_channel(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port_no);
static int mv_stop_edma(struct ata_port *ap);
static int mv_stop_edma_engine(void __iomem *port_mmio);
static void mv_edma_cfg(struct ata_port *ap, int want_ncq, int want_edma);
static void mv_pmp_select(struct ata_port *ap, int pmp);
static int mv_pmp_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int  mv_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void mv_pmp_error_handler(struct ata_port *ap);
static void mv_process_crpb_entries(struct ata_port *ap,
struct mv_port_priv *pp);
static void mv_sff_irq_clear(struct ata_port *ap);
static int mv_check_atapi_dma(struct ata_queued_cmd *qc);
static void mv_bmdma_setup(struct ata_queued_cmd *qc);
static void mv_bmdma_start(struct ata_queued_cmd *qc);
static void mv_bmdma_stop(struct ata_queued_cmd *qc);
static u8   mv_bmdma_status(struct ata_port *ap);
static u8 mv_sff_check_status(struct ata_port *ap);
static struct scsi_host_template mv5_sht = ;
static struct scsi_host_template mv6_sht = ;
static struct ata_port_operations mv5_ops = ;
static struct ata_port_operations mv6_ops = ;
static struct ata_port_operations mv_iie_ops = ;
static const struct ata_port_info mv_port_info[] = ;
static const struct pci_device_id mv_pci_tbl[] = ;
static const struct mv_hw_ops mv5xxx_ops = ;
static const struct mv_hw_ops mv6xxx_ops = ;
static const struct mv_hw_ops mv_soc_ops = ;
static const struct mv_hw_ops mv_soc_65n_ops = ;
static inline void writelfl(unsigned long data, void __iomem *addr)
static inline unsigned int mv_hc_from_port(unsigned int port)
static inline unsigned int mv_hardport_from_port(unsigned int port)
#define MV_PORT_TO_SHIFT_AND_HARDPORT(port, shift, hardport)	\
static inline void __iomem *mv_hc_base(void __iomem *base, unsigned int hc)
static inline void __iomem *mv_hc_base_from_port(void __iomem *base,
unsigned int port)
static inline void __iomem *mv_port_base(void __iomem *base, unsigned int port)
static void __iomem *mv5_phy_base(void __iomem *mmio, unsigned int port)
static inline void __iomem *mv_host_base(struct ata_host *host)
static inline void __iomem *mv_ap_base(struct ata_port *ap)
static inline int mv_get_hc_count(unsigned long port_flags)
static void mv_save_cached_regs(struct ata_port *ap)
static inline void mv_write_cached_reg(void __iomem *addr, u32 *old, u32 new)
static void mv_set_edma_ptrs(void __iomem *port_mmio,
struct mv_host_priv *hpriv,
struct mv_port_priv *pp)
static void mv_write_main_irq_mask(u32 mask, struct mv_host_priv *hpriv)
static void mv_set_main_irq_mask(struct ata_host *host,
u32 disable_bits, u32 enable_bits)
static void mv_enable_port_irqs(struct ata_port *ap,
unsigned int port_bits)
static void mv_clear_and_enable_port_irqs(struct ata_port *ap,
void __iomem *port_mmio,
unsigned int port_irqs)
static void mv_set_irq_coalescing(struct ata_host *host,
unsigned int count, unsigned int usecs)
static void mv_start_edma(struct ata_port *ap, void __iomem *port_mmio,
struct mv_port_priv *pp, u8 protocol)
static void mv_wait_for_edma_empty_idle(struct ata_port *ap)
static int mv_stop_edma_engine(void __iomem *port_mmio)
static int mv_stop_edma(struct ata_port *ap)
static void mv_dump_mem(void __iomem *start, unsigned bytes)
static void mv_dump_pci_cfg(struct pci_dev *pdev, unsigned bytes)
static void mv_dump_all_regs(void __iomem *mmio_base, int port,
struct pci_dev *pdev)
static unsigned int mv_scr_offset(unsigned int sc_reg_in)
static int mv_scr_read(struct ata_link *link, unsigned int sc_reg_in, u32 *val)
static int mv_scr_write(struct ata_link *link, unsigned int sc_reg_in, u32 val)
static void mv6_dev_config(struct ata_device *adev)
static int mv_qc_defer(struct ata_queued_cmd *qc)
static void mv_config_fbs(struct ata_port *ap, int want_ncq, int want_fbs)
static void mv_60x1_errata_sata25(struct ata_port *ap, int want_ncq)
static void mv_bmdma_enable_iie(struct ata_port *ap, int enable_bmdma)
static void mv_soc_led_blink_enable(struct ata_port *ap)
static void mv_soc_led_blink_disable(struct ata_port *ap)
static void mv_edma_cfg(struct ata_port *ap, int want_ncq, int want_edma)
static void mv_port_free_dma_mem(struct ata_port *ap)
static int mv_port_start(struct ata_port *ap)
static void mv_port_stop(struct ata_port *ap)
static void mv_fill_sg(struct ata_queued_cmd *qc)
static void mv_crqb_pack_cmd(__le16 *cmdw, u8 data, u8 addr, unsigned last)
static void mv_sff_irq_clear(struct ata_port *ap)
static int mv_check_atapi_dma(struct ata_queued_cmd *qc)
static void mv_bmdma_setup(struct ata_queued_cmd *qc)
static void mv_bmdma_start(struct ata_queued_cmd *qc)
static void mv_bmdma_stop_ap(struct ata_port *ap)
static void mv_bmdma_stop(struct ata_queued_cmd *qc)
static u8 mv_bmdma_status(struct ata_port *ap)
static void mv_rw_multi_errata_sata24(struct ata_queued_cmd *qc)
static void mv_qc_prep(struct ata_queued_cmd *qc)
static void mv_qc_prep_iie(struct ata_queued_cmd *qc)
static u8 mv_sff_check_status(struct ata_port *ap)
static unsigned int mv_send_fis(struct ata_port *ap, u32 *fis, int nwords)
static unsigned int mv_qc_issue_fis(struct ata_queued_cmd *qc)
static unsigned int mv_qc_issue(struct ata_queued_cmd *qc)
static struct ata_queued_cmd *mv_get_active_qc(struct ata_port *ap)
static void mv_pmp_error_handler(struct ata_port *ap)
static unsigned int mv_get_err_pmp_map(struct ata_port *ap)
static void mv_pmp_eh_prep(struct ata_port *ap, unsigned int pmp_map)
static int mv_req_q_empty(struct ata_port *ap)
static int mv_handle_fbs_ncq_dev_err(struct ata_port *ap)
static int mv_handle_fbs_non_ncq_dev_err(struct ata_port *ap)
static int mv_handle_dev_err(struct ata_port *ap, u32 edma_err_cause)
static void mv_unexpected_intr(struct ata_port *ap, int edma_was_enabled)
static void mv_err_intr(struct ata_port *ap)
static bool mv_process_crpb_response(struct ata_port *ap,
struct mv_crpb *response, unsigned int tag, int ncq_enabled)
static void mv_process_crpb_entries(struct ata_port *ap, struct mv_port_priv *pp)
static void mv_port_intr(struct ata_port *ap, u32 port_cause)
static int mv_host_intr(struct ata_host *host, u32 main_irq_cause)
static int mv_pci_error(struct ata_host *host, void __iomem *mmio)
static irqreturn_t mv_interrupt(int irq, void *dev_instance)
static unsigned int mv5_scr_offset(unsigned int sc_reg_in)
static int mv5_scr_read(struct ata_link *link, unsigned int sc_reg_in, u32 *val)
static int mv5_scr_write(struct ata_link *link, unsigned int sc_reg_in, u32 val)
static void mv5_reset_bus(struct ata_host *host, void __iomem *mmio)
static void mv5_reset_flash(struct mv_host_priv *hpriv, void __iomem *mmio)
static void mv5_read_preamp(struct mv_host_priv *hpriv, int idx,
void __iomem *mmio)
static void mv5_enable_leds(struct mv_host_priv *hpriv, void __iomem *mmio)
static void mv5_phy_errata(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port)
#undef ZERO
#define ZERO(reg) writel(0, port_mmio + (reg))
static void mv5_reset_hc_port(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port)
#undef ZERO
#define ZERO(reg) writel(0, hc_mmio + (reg))
static void mv5_reset_one_hc(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int hc)
#undef ZERO
static int mv5_reset_hc(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int n_hc)
#undef ZERO
#define ZERO(reg) writel(0, mmio + (reg))
static void mv_reset_pci_bus(struct ata_host *host, void __iomem *mmio)
#undef ZERO
static void mv6_reset_flash(struct mv_host_priv *hpriv, void __iomem *mmio)
static int mv6_reset_hc(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int n_hc)
static void mv6_read_preamp(struct mv_host_priv *hpriv, int idx,
void __iomem *mmio)
static void mv6_enable_leds(struct mv_host_priv *hpriv, void __iomem *mmio)
static void mv6_phy_errata(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port)
static void mv_soc_enable_leds(struct mv_host_priv *hpriv,
void __iomem *mmio)
static void mv_soc_read_preamp(struct mv_host_priv *hpriv, int idx,
void __iomem *mmio)
#undef ZERO
#define ZERO(reg) writel(0, port_mmio + (reg))
static void mv_soc_reset_hc_port(struct mv_host_priv *hpriv,
void __iomem *mmio, unsigned int port)
#undef ZERO
#define ZERO(reg) writel(0, hc_mmio + (reg))
static void mv_soc_reset_one_hc(struct mv_host_priv *hpriv,
void __iomem *mmio)
#undef ZERO
static int mv_soc_reset_hc(struct mv_host_priv *hpriv,
void __iomem *mmio, unsigned int n_hc)
static void mv_soc_reset_flash(struct mv_host_priv *hpriv,
void __iomem *mmio)
static void mv_soc_reset_bus(struct ata_host *host, void __iomem *mmio)
static void mv_soc_65n_phy_errata(struct mv_host_priv *hpriv,
void __iomem *mmio, unsigned int port)
static bool soc_is_65n(struct mv_host_priv *hpriv)
static void mv_setup_ifcfg(void __iomem *port_mmio, int want_gen2i)
static void mv_reset_channel(struct mv_host_priv *hpriv, void __iomem *mmio,
unsigned int port_no)
static void mv_pmp_select(struct ata_port *ap, int pmp)
static int mv_pmp_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int mv_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int mv_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void mv_eh_freeze(struct ata_port *ap)
static void mv_eh_thaw(struct ata_port *ap)
static void mv_port_init(struct ata_ioports *port,  void __iomem *port_mmio)
static unsigned int mv_in_pcix_mode(struct ata_host *host)
static int mv_pci_cut_through_okay(struct ata_host *host)
static void mv_60x1b2_errata_pci7(struct ata_host *host)
static int mv_chip_id(struct ata_host *host, unsigned int board_idx)
static int mv_init_host(struct ata_host *host)
static int mv_create_dma_pools(struct mv_host_priv *hpriv, struct device *dev)
static void mv_conf_mbus_windows(struct mv_host_priv *hpriv,
struct mbus_dram_target_info *dram)
static int mv_platform_probe(struct platform_device *pdev)
static int __devexit mv_platform_remove(struct platform_device *pdev)
static int mv_platform_suspend(struct platform_device *pdev, pm_message_t state)
static int mv_platform_resume(struct platform_device *pdev)
#define mv_platform_suspend NULL
#define mv_platform_resume NULL
static struct platform_driver mv_platform_driver = ;
static int mv_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static int mv_pci_device_resume(struct pci_dev *pdev);
static struct pci_driver mv_pci_driver = ;
static int pci_go_64(struct pci_dev *pdev)
static void mv_print_info(struct ata_host *host)
static int mv_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int mv_pci_device_resume(struct pci_dev *pdev)
static int mv_platform_probe(struct platform_device *pdev);
static int __devexit mv_platform_remove(struct platform_device *pdev);
static int __init mv_init(void)
static void __exit mv_exit(void)
MODULE_AUTHOR("Brett Russ");
MODULE_DESCRIPTION("SCSI low-level driver for Marvell SATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, mv_pci_tbl);
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
module_init(mv_init);
module_exit(mv_exit);
