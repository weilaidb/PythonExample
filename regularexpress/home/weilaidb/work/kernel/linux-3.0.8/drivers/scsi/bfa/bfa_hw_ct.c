BFA_TRC_FILE(HAL, IOCFC_CT);
static u32 __ct_msix_err_vec_reg[] = ;
static void
bfa_hwct_msix_lpu_err_set(struct bfa_s *bfa, bfa_boolean_t msix, int vec)
static void
bfa_hwct_msix_dummy(struct bfa_s *bfa, int vec)
void
bfa_hwct_reginit(struct bfa_s *bfa)
void
bfa_hwct_reqq_ack(struct bfa_s *bfa, int reqq)
void
bfa_hwct_rspq_ack(struct bfa_s *bfa, int rspq)
void
bfa_hwct_msix_getvecs(struct bfa_s *bfa, u32 *msix_vecs_bmap,
u32 *num_vecs, u32 *max_vec_bit)
void
bfa_hwct_msix_init(struct bfa_s *bfa, int nvecs)
void
bfa_hwct_msix_install(struct bfa_s *bfa)
void
bfa_hwct_msix_uninstall(struct bfa_s *bfa)
void
bfa_hwct_isr_mode_set(struct bfa_s *bfa, bfa_boolean_t msix)
void
bfa_hwct_msix_get_rme_range(struct bfa_s *bfa, u32 *start, u32 *end)
