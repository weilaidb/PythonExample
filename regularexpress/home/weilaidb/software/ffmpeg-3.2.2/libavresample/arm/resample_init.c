AV_CHECK_OFFSET(struct ResampleContext, filter_bank,   FILTER_BANK);
AV_CHECK_OFFSET(struct ResampleContext, filter_length, FILTER_LENGTH);
AV_CHECK_OFFSET(struct ResampleContext, src_incr,      SRC_INCR);
AV_CHECK_OFFSET(struct ResampleContext, phase_shift,   PHASE_SHIFT);
AV_CHECK_OFFSET(struct ResampleContext, phase_mask,    PHASE_MASK);
ff_resample_one_flt_neon;
ff_resample_one_s16_neon;
ff_resample_one_s32_neon;
ff_resample_linear_flt_neon;
ff_audio_resample_init_arm
