const struct ata_port_operations sata_pmp_port_ops = ;
static unsigned int sata_pmp_read(struct ata_link *link, int reg, u32 *r_val)
static unsigned int sata_pmp_write(struct ata_link *link, int reg, u32 val)
int sata_pmp_qc_defer_cmd_switch(struct ata_queued_cmd *qc)
int sata_pmp_scr_read(struct ata_link *link, int reg, u32 *r_val)
int sata_pmp_scr_write(struct ata_link *link, int reg, u32 val)
int sata_pmp_set_lpm(struct ata_link *link, enum ata_lpm_policy policy,
unsigned hints)
static int sata_pmp_read_gscr(struct ata_device *dev, u32 *gscr)
static const char *sata_pmp_spec_rev_str(const u32 *gscr)
#define PMP_GSCR_SII_POL 129
static int sata_pmp_configure(struct ata_device *dev, int print_info)
static int sata_pmp_init_links (struct ata_port *ap, int nr_ports)
static void sata_pmp_quirks(struct ata_port *ap)
int sata_pmp_attach(struct ata_device *dev)
static void sata_pmp_detach(struct ata_device *dev)
static int sata_pmp_same_pmp(struct ata_device *dev, const u32 *new_gscr)
static int sata_pmp_revalidate(struct ata_device *dev, unsigned int new_class)
static int sata_pmp_revalidate_quick(struct ata_device *dev)
static int sata_pmp_eh_recover_pmp(struct ata_port *ap,
ata_prereset_fn_t prereset, ata_reset_fn_t softreset,
ata_reset_fn_t hardreset, ata_postreset_fn_t postreset)
static int sata_pmp_eh_handle_disabled_links(struct ata_port *ap)
static int sata_pmp_handle_link_fail(struct ata_link *link, int *link_tries)
static int sata_pmp_eh_recover(struct ata_port *ap)
void sata_pmp_error_handler(struct ata_port *ap)
EXPORT_SYMBOL_GPL(sata_pmp_port_ops);
EXPORT_SYMBOL_GPL(sata_pmp_qc_defer_cmd_switch);
EXPORT_SYMBOL_GPL(sata_pmp_error_handler);
