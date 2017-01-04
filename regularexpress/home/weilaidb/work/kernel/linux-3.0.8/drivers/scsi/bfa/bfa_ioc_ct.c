BFA_TRC_FILE(CNA, IOC_CT);
#define bfa_ioc_ct_sync_pos(__ioc)      \
((uint32_t) (1 << bfa_ioc_pcifn(__ioc)))
#define BFA_IOC_SYNC_REQD_SH    16
#define bfa_ioc_ct_get_sync_ackd(__val) (__val & 0x0000ffff)
#define bfa_ioc_ct_clear_sync_ackd(__val)       (__val & 0xffff0000)
#define bfa_ioc_ct_get_sync_reqd(__val) (__val >> BFA_IOC_SYNC_REQD_SH)
#define bfa_ioc_ct_sync_reqd_pos(__ioc) \
(bfa_ioc_ct_sync_pos(__ioc) << BFA_IOC_SYNC_REQD_SH)
static bfa_boolean_t bfa_ioc_ct_firmware_lock(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_firmware_unlock(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_reg_init(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_map_port(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_isr_mode_set(struct bfa_ioc_s *ioc, bfa_boolean_t msix);
static void bfa_ioc_ct_notify_fail(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_ownership_reset(struct bfa_ioc_s *ioc);
static bfa_boolean_t bfa_ioc_ct_sync_start(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_sync_join(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_sync_leave(struct bfa_ioc_s *ioc);
static void bfa_ioc_ct_sync_ack(struct bfa_ioc_s *ioc);
static bfa_boolean_t bfa_ioc_ct_sync_complete(struct bfa_ioc_s *ioc);
static struct bfa_ioc_hwif_s hwif_ct;
void
bfa_ioc_set_ct_hwif(struct bfa_ioc_s *ioc)
static bfa_boolean_t
bfa_ioc_ct_firmware_lock(struct bfa_ioc_s *ioc)
static void
bfa_ioc_ct_firmware_unlock(struct bfa_ioc_s *ioc)
static void
bfa_ioc_ct_notify_fail(struct bfa_ioc_s *ioc)
static struct  iocreg_fnreg[] = ;
static struct  iocreg_mbcmd_p0[] = ;
static struct  iocreg_mbcmd_p1[] = ;
static void
bfa_ioc_ct_reg_init(struct bfa_ioc_s *ioc)
#define FNC_PERS_FN_SHIFT(__fn)	((__fn) * 8)
static void
bfa_ioc_ct_map_port(struct bfa_ioc_s *ioc)
static void
bfa_ioc_ct_isr_mode_set(struct bfa_ioc_s *ioc, bfa_boolean_t msix)
static void
bfa_ioc_ct_ownership_reset(struct bfa_ioc_s *ioc)
static bfa_boolean_t
bfa_ioc_ct_sync_start(struct bfa_ioc_s *ioc)
static void
bfa_ioc_ct_sync_join(struct bfa_ioc_s *ioc)
static void
bfa_ioc_ct_sync_leave(struct bfa_ioc_s *ioc)
static void
bfa_ioc_ct_sync_ack(struct bfa_ioc_s *ioc)
static bfa_boolean_t
bfa_ioc_ct_sync_complete(struct bfa_ioc_s *ioc)
bfa_boolean_t
bfa_ioc_ct_pll_init_complete(void __iomem *rb)
bfa_status_t
bfa_ioc_ct_pll_init(void __iomem *rb, bfa_boolean_t fcmode)
