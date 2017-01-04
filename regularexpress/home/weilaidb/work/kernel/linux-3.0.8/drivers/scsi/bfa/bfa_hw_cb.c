void
bfa_hwcb_reginit(struct bfa_s *bfa)
void
bfa_hwcb_reqq_ack(struct bfa_s *bfa, int reqq)
static void
bfa_hwcb_reqq_ack_msix(struct bfa_s *bfa, int reqq)
void
bfa_hwcb_rspq_ack(struct bfa_s *bfa, int rspq)
static void
bfa_hwcb_rspq_ack_msix(struct bfa_s *bfa, int rspq)
void
bfa_hwcb_msix_getvecs(struct bfa_s *bfa, u32 *msix_vecs_bmap,
u32 *num_vecs, u32 *max_vec_bit)
void
bfa_hwcb_msix_init(struct bfa_s *bfa, int nvecs)
void
bfa_hwcb_msix_install(struct bfa_s *bfa)
void
bfa_hwcb_msix_uninstall(struct bfa_s *bfa)
void
bfa_hwcb_isr_mode_set(struct bfa_s *bfa, bfa_boolean_t msix)
void
bfa_hwcb_msix_get_rme_range(struct bfa_s *bfa, u32 *start, u32 *end)
