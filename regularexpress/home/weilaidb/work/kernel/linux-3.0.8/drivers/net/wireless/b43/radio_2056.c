struct b2056_inittab_entry ;
#define B2056_INITTAB_ENTRY_OK	0x01
#define B2056_INITTAB_UPLOAD	0x02
#define UPLOAD		.flags = B2056_INITTAB_ENTRY_OK | B2056_INITTAB_UPLOAD
#define NOUPLOAD	.flags = B2056_INITTAB_ENTRY_OK
struct b2056_inittabs_pts ;
static const struct b2056_inittab_entry b2056_inittab_rev3_syn[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev3_tx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev3_rx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev4_syn[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev4_tx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev4_rx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev5_syn[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev5_tx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev5_rx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev6_syn[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev6_tx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev6_rx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev7_syn[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev7_tx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev7_rx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev8_syn[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev8_tx[] = ;
static const struct b2056_inittab_entry b2056_inittab_rev8_rx[] = ;
#define INITTABSPTS(prefix) \
.syn		= prefix##_syn,			\
.syn_length	= ARRAY_SIZE(prefix##_syn),	\
.tx		= prefix##_tx,			\
.tx_length	= ARRAY_SIZE(prefix##_tx),	\
.rx		= prefix##_rx,			\
.rx_length	= ARRAY_SIZE(prefix##_rx)
struct b2056_inittabs_pts b2056_inittabs[] = ;
#define RADIOREGS3(r00, r01, r02, r03, r04, r05, r06, r07, r08, r09, \
r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, \
r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, \
r30, r31, r32, r33, r34, r35, r36) \
.radio_syn_pll_vcocal1		= r00,	\
.radio_syn_pll_vcocal2		= r01,	\
.radio_syn_pll_refdiv		= r02,	\
.radio_syn_pll_mmd2		= r03,	\
.radio_syn_pll_mmd1		= r04,	\
.radio_syn_pll_loopfilter1	= r05,	\
.radio_syn_pll_loopfilter2	= r06,	\
.radio_syn_pll_loopfilter3	= r07,	\
.radio_syn_pll_loopfilter4	= r08,	\
.radio_syn_pll_loopfilter5	= r09,	\
.radio_syn_reserved_addr27	= r10,	\
.radio_syn_reserved_addr28	= r11,	\
.radio_syn_reserved_addr29	= r12,	\
.radio_syn_logen_vcobuf1	= r13,	\
.radio_syn_logen_mixer2		= r14,	\
.radio_syn_logen_buf3		= r15,	\
.radio_syn_logen_buf4		= r16,	\
.radio_rx0_lnaa_tune		= r17,	\
.radio_rx0_lnag_tune		= r18,	\
.radio_tx0_intpaa_boost_tune	= r19,	\
.radio_tx0_intpag_boost_tune	= r20,	\
.radio_tx0_pada_boost_tune	= r21,	\
.radio_tx0_padg_boost_tune	= r22,	\
.radio_tx0_pgaa_boost_tune	= r23,	\
.radio_tx0_pgag_boost_tune	= r24,	\
.radio_tx0_mixa_boost_tune	= r25,	\
.radio_tx0_mixg_boost_tune	= r26,	\
.radio_rx1_lnaa_tune		= r27,	\
.radio_rx1_lnag_tune		= r28,	\
.radio_tx1_intpaa_boost_tune	= r29,	\
.radio_tx1_intpag_boost_tune	= r30,	\
.radio_tx1_pada_boost_tune	= r31,	\
.radio_tx1_padg_boost_tune	= r32,	\
.radio_tx1_pgaa_boost_tune	= r33,	\
.radio_tx1_pgag_boost_tune	= r34,	\
.radio_tx1_mixa_boost_tune	= r35,	\
.radio_tx1_mixg_boost_tune	= r36
#define PHYREGS(r0, r1, r2, r3, r4, r5)	\
.phy_regs.phy_bw1a	= r0,	\
.phy_regs.phy_bw2	= r1,	\
.phy_regs.phy_bw3	= r2,	\
.phy_regs.phy_bw4	= r3,	\
.phy_regs.phy_bw5	= r4,	\
.phy_regs.phy_bw6	= r5
/* http:
static const struct b43_nphy_channeltab_entry_rev3 b43_nphy_channeltab_rev3[] = ;
static const struct b43_nphy_channeltab_entry_rev3 b43_nphy_channeltab_rev4[] = ;
static const struct b43_nphy_channeltab_entry_rev3 b43_nphy_channeltab_rev5[] = ;
static const struct b43_nphy_channeltab_entry_rev3 b43_nphy_channeltab_rev6[] = ;
static const struct b43_nphy_channeltab_entry_rev3 b43_nphy_channeltab_rev7_9[] = ;
static const struct b43_nphy_channeltab_entry_rev3 b43_nphy_channeltab_rev8[] = ;
static void b2056_upload_inittab(struct b43_wldev *dev, bool ghz5,
bool ignore_uploadflag, u16 routing,
const struct b2056_inittab_entry *e,
unsigned int length)
void b2056_upload_inittabs(struct b43_wldev *dev,
bool ghz5, bool ignore_uploadflag)
const struct b43_nphy_channeltab_entry_rev3 *
b43_nphy_get_chantabent_rev3(struct b43_wldev *dev, u16 freq)
