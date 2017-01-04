struct b2055_inittab_entry ;
#define UPLOAD		.flags = B2055_INITTAB_ENTRY_OK | B2055_INITTAB_UPLOAD
#define NOUPLOAD	.flags = B2055_INITTAB_ENTRY_OK
static const struct b2055_inittab_entry b2055_inittab [] = ;
#define RADIOREGS(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, \
r12, r13, r14, r15, r16, r17, r18, r19, r20, r21) \
.radio_pll_ref		= r0,	\
.radio_rf_pllmod0	= r1,	\
.radio_rf_pllmod1	= r2,	\
.radio_vco_captail	= r3,	\
.radio_vco_cal1		= r4,	\
.radio_vco_cal2		= r5,	\
.radio_pll_lfc1		= r6,	\
.radio_pll_lfr1		= r7,	\
.radio_pll_lfc2		= r8,	\
.radio_lgbuf_cenbuf	= r9,	\
.radio_lgen_tune1	= r10,	\
.radio_lgen_tune2	= r11,	\
.radio_c1_lgbuf_atune	= r12,	\
.radio_c1_lgbuf_gtune	= r13,	\
.radio_c1_rx_rfr1	= r14,	\
.radio_c1_tx_pgapadtn	= r15,	\
.radio_c1_tx_mxbgtrim	= r16,	\
.radio_c2_lgbuf_atune	= r17,	\
.radio_c2_lgbuf_gtune	= r18,	\
.radio_c2_rx_rfr1	= r19,	\
.radio_c2_tx_pgapadtn	= r20,	\
.radio_c2_tx_mxbgtrim	= r21
#define PHYREGS(r0, r1, r2, r3, r4, r5)	\
.phy_regs.phy_bw1a	= r0,	\
.phy_regs.phy_bw2	= r1,	\
.phy_regs.phy_bw3	= r2,	\
.phy_regs.phy_bw4	= r3,	\
.phy_regs.phy_bw5	= r4,	\
.phy_regs.phy_bw6	= r5
static const struct b43_nphy_channeltab_entry_rev2 b43_nphy_channeltab_rev2[] = ;
void b2055_upload_inittab(struct b43_wldev *dev,
bool ghz5, bool ignore_uploadflag)
const struct b43_nphy_channeltab_entry_rev2 *
b43_nphy_get_chantabent_rev2(struct b43_wldev *dev, u8 channel)
