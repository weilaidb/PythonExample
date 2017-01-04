static void ohci_hcd_init (struct ohci_hcd *ohci)
static int ohci_mem_init (struct ohci_hcd *ohci)
static void ohci_mem_cleanup (struct ohci_hcd *ohci)
static inline struct td *
dma_to_td (struct ohci_hcd *hc, dma_addr_t td_dma)
static struct td *
td_alloc (struct ohci_hcd *hc, gfp_t mem_flags)
static void
td_free (struct ohci_hcd *hc, struct td *td)
static struct ed *
ed_alloc (struct ohci_hcd *hc, gfp_t mem_flags)
static void
ed_free (struct ohci_hcd *hc, struct ed *ed)
