BFA_TRC_FILE(CNA, IOC_CB);
static bfa_boolean_t bfa_ioc_cb_firmware_lock(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_firmware_unlock(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_reg_init(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_map_port(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_isr_mode_set(struct bfa_ioc_s *ioc, bfa_boolean_t msix);
static void bfa_ioc_cb_notify_fail(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_ownership_reset(struct bfa_ioc_s *ioc);
static bfa_boolean_t bfa_ioc_cb_sync_start(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_sync_join(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_sync_leave(struct bfa_ioc_s *ioc);
static void bfa_ioc_cb_sync_ack(struct bfa_ioc_s *ioc);
static bfa_boolean_t bfa_ioc_cb_sync_complete(struct bfa_ioc_s *ioc);
static struct bfa_ioc_hwif_s hwif_cb;
void
bfa_ioc_set_cb_hwif(struct bfa_ioc_s *ioc)
static bfa_boolean_t
bfa_ioc_cb_firmware_lock(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_firmware_unlock(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_notify_fail(struct bfa_ioc_s *ioc)
static struct  iocreg_fnreg[] = ;
static struct  iocreg_mbcmd[] = ;
static void
bfa_ioc_cb_reg_init(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_map_port(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_isr_mode_set(struct bfa_ioc_s *ioc, bfa_boolean_t msix)
static bfa_boolean_t
bfa_ioc_cb_sync_start(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_ownership_reset(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_sync_join(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_sync_leave(struct bfa_ioc_s *ioc)
static void
bfa_ioc_cb_sync_ack(struct bfa_ioc_s *ioc)
static bfa_boolean_t
bfa_ioc_cb_sync_complete(struct bfa_ioc_s *ioc)
bfa_status_t
bfa_ioc_cb_pll_init(void __iomem *rb, bfa_boolean_t fcmode)
