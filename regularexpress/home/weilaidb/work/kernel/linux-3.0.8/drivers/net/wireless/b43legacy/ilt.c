const u32 b43legacy_ilt_rotor[B43legacy_ILT_ROTOR_SIZE] = ;
const u32 b43legacy_ilt_retard[B43legacy_ILT_RETARD_SIZE] = ;
const u16 b43legacy_ilt_finefreqa[B43legacy_ILT_FINEFREQA_SIZE] = ;
const u16 b43legacy_ilt_finefreqg[B43legacy_ILT_FINEFREQG_SIZE] = ;
const u16 b43legacy_ilt_noisea2[B43legacy_ILT_NOISEA2_SIZE] = ;
const u16 b43legacy_ilt_noisea3[B43legacy_ILT_NOISEA3_SIZE] = ;
const u16 b43legacy_ilt_noiseg1[B43legacy_ILT_NOISEG1_SIZE] = ;
const u16 b43legacy_ilt_noiseg2[B43legacy_ILT_NOISEG2_SIZE] = ;
const u16 b43legacy_ilt_noisescaleg1[B43legacy_ILT_NOISESCALEG_SIZE] = ;
const u16 b43legacy_ilt_noisescaleg2[B43legacy_ILT_NOISESCALEG_SIZE] = ;
const u16 b43legacy_ilt_noisescaleg3[B43legacy_ILT_NOISESCALEG_SIZE] = ;
const u16 b43legacy_ilt_sigmasqr1[B43legacy_ILT_SIGMASQR_SIZE] = ;
const u16 b43legacy_ilt_sigmasqr2[B43legacy_ILT_SIGMASQR_SIZE] = ;
void b43legacy_ilt_write(struct b43legacy_wldev *dev, u16 offset, u16 val)
void b43legacy_ilt_write32(struct b43legacy_wldev *dev, u16 offset, u32 val)
u16 b43legacy_ilt_read(struct b43legacy_wldev *dev, u16 offset)
