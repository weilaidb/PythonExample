#define _FMDRV_TX_H
u32 fm_tx_set_freq(struct fmdev *, u32);
u32 fm_tx_set_pwr_lvl(struct fmdev *, u8);
u32 fm_tx_set_region(struct fmdev *, u8);
u32 fm_tx_set_mute_mode(struct fmdev *, u8);
u32 fm_tx_set_stereo_mono(struct fmdev *, u16);
u32 fm_tx_set_rds_mode(struct fmdev *, u8);
u32 fm_tx_set_radio_text(struct fmdev *, u8 *, u8);
u32 fm_tx_set_af(struct fmdev *, u32);
u32 fm_tx_set_preemph_filter(struct fmdev *, u32);
u32 fm_tx_get_tune_cap_val(struct fmdev *);
