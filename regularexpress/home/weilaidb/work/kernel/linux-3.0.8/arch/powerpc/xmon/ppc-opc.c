#define ATTRIBUTE_UNUSED
#define _(x)	x
static unsigned long insert_bat (unsigned long, long, int, const char **);
static long extract_bat (unsigned long, int, int *);
static unsigned long insert_bba (unsigned long, long, int, const char **);
static long extract_bba (unsigned long, int, int *);
static unsigned long insert_bd (unsigned long, long, int, const char **);
static long extract_bd (unsigned long, int, int *);
static unsigned long insert_bdm (unsigned long, long, int, const char **);
static long extract_bdm (unsigned long, int, int *);
static unsigned long insert_bdp (unsigned long, long, int, const char **);
static long extract_bdp (unsigned long, int, int *);
static unsigned long insert_bo (unsigned long, long, int, const char **);
static long extract_bo (unsigned long, int, int *);
static unsigned long insert_boe (unsigned long, long, int, const char **);
static long extract_boe (unsigned long, int, int *);
static unsigned long insert_dq (unsigned long, long, int, const char **);
static long extract_dq (unsigned long, int, int *);
static unsigned long insert_ds (unsigned long, long, int, const char **);
static long extract_ds (unsigned long, int, int *);
static unsigned long insert_de (unsigned long, long, int, const char **);
static long extract_de (unsigned long, int, int *);
static unsigned long insert_des (unsigned long, long, int, const char **);
static long extract_des (unsigned long, int, int *);
static unsigned long insert_fxm (unsigned long, long, int, const char **);
static long extract_fxm (unsigned long, int, int *);
static unsigned long insert_li (unsigned long, long, int, const char **);
static long extract_li (unsigned long, int, int *);
static unsigned long insert_mbe (unsigned long, long, int, const char **);
static long extract_mbe (unsigned long, int, int *);
static unsigned long insert_mb6 (unsigned long, long, int, const char **);
static long extract_mb6 (unsigned long, int, int *);
static unsigned long insert_nb (unsigned long, long, int, const char **);
static long extract_nb (unsigned long, int, int *);
static unsigned long insert_nsi (unsigned long, long, int, const char **);
static long extract_nsi (unsigned long, int, int *);
static unsigned long insert_ral (unsigned long, long, int, const char **);
static unsigned long insert_ram (unsigned long, long, int, const char **);
static unsigned long insert_raq (unsigned long, long, int, const char **);
static unsigned long insert_ras (unsigned long, long, int, const char **);
static unsigned long insert_rbs (unsigned long, long, int, const char **);
static long extract_rbs (unsigned long, int, int *);
static unsigned long insert_rsq (unsigned long, long, int, const char **);
static unsigned long insert_rtq (unsigned long, long, int, const char **);
static unsigned long insert_sh6 (unsigned long, long, int, const char **);
static long extract_sh6 (unsigned long, int, int *);
static unsigned long insert_spr (unsigned long, long, int, const char **);
static long extract_spr (unsigned long, int, int *);
static unsigned long insert_sprg (unsigned long, long, int, const char **);
static long extract_sprg (unsigned long, int, int *);
static unsigned long insert_tbr (unsigned long, long, int, const char **);
static long extract_tbr (unsigned long, int, int *);
static unsigned long insert_ev2 (unsigned long, long, int, const char **);
static long extract_ev2 (unsigned long, int, int *);
static unsigned long insert_ev4 (unsigned long, long, int, const char **);
static long extract_ev4 (unsigned long, int, int *);
static unsigned long insert_ev8 (unsigned long, long, int, const char **);
static long extract_ev8 (unsigned long, int, int *);
const struct powerpc_operand powerpc_operands[] =
;
static unsigned long
insert_bat (unsigned long insn,
long value ATTRIBUTE_UNUSED,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_bat (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid)
static unsigned long
insert_bba (unsigned long insn,
long value ATTRIBUTE_UNUSED,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_bba (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid)
static unsigned long
insert_bd (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_bd (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_bdm (unsigned long insn,
long value,
int dialect,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_bdm (unsigned long insn,
int dialect,
int *invalid)
static unsigned long
insert_bdp (unsigned long insn,
long value,
int dialect,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_bdp (unsigned long insn,
int dialect,
int *invalid)
static int
valid_bo (long value, int dialect)
static unsigned long
insert_bo (unsigned long insn,
long value,
int dialect,
const char **errmsg)
static long
extract_bo (unsigned long insn,
int dialect,
int *invalid)
static unsigned long
insert_boe (unsigned long insn,
long value,
int dialect,
const char **errmsg)
static long
extract_boe (unsigned long insn,
int dialect,
int *invalid)
static unsigned long
insert_dq (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_dq (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_ev2 (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_ev2 (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_ev4 (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_ev4 (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_ev8 (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_ev8 (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_ds (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_ds (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_de (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_de (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_des (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_des (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_fxm (unsigned long insn,
long value,
int dialect,
const char **errmsg)
static long
extract_fxm (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid)
static unsigned long
insert_li (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_li (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_mbe (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_mbe (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid)
static unsigned long
insert_mb6 (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_mb6 (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_nb (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static long
extract_nb (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_nsi (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_nsi (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid)
static unsigned long
insert_ral (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static unsigned long
insert_ram (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static unsigned long
insert_raq (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static unsigned long
insert_ras (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static unsigned long
insert_rbs (unsigned long insn,
long value ATTRIBUTE_UNUSED,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_rbs (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid)
static unsigned long
insert_rtq (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static unsigned long
insert_rsq (unsigned long insn,
long value ATTRIBUTE_UNUSED,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg)
static unsigned long
insert_sh6 (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_sh6 (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_spr (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_spr (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
static unsigned long
insert_sprg (unsigned long insn,
long value,
int dialect,
const char **errmsg)
static long
extract_sprg (unsigned long insn,
int dialect,
int *invalid)
#define TB (268)
static unsigned long
insert_tbr (unsigned long insn,
long value,
int dialect ATTRIBUTE_UNUSED,
const char **errmsg ATTRIBUTE_UNUSED)
static long
extract_tbr (unsigned long insn,
int dialect ATTRIBUTE_UNUSED,
int *invalid ATTRIBUTE_UNUSED)
#define OP(x) ((((unsigned long)(x)) & 0x3f) << 26)
#define OP_MASK OP (0x3f)
#define OPTO(x,to) (OP (x) | ((((unsigned long)(to)) & 0x1f) << 21))
#define OPTO_MASK (OP_MASK | TO_MASK)
#define OPL(x,l) (OP (x) | ((((unsigned long)(l)) & 1) << 21))
#define OPL_MASK OPL (0x3f,1)
#define A(op, xop, rc) (OP (op) | ((((unsigned long)(xop)) & 0x1f) << 1) | (((unsigned long)(rc)) & 1))
#define A_MASK A (0x3f, 0x1f, 1)
#define AFRB_MASK (A_MASK | FRB_MASK)
#define AFRC_MASK (A_MASK | FRC_MASK)
#define AFRAFRC_MASK (A_MASK | FRA_MASK | FRC_MASK)
#define AFRALFRC_MASK (AFRAFRC_MASK & ~((unsigned long) 1 << 16))
#define B(op, aa, lk) (OP (op) | ((((unsigned long)(aa)) & 1) << 1) | ((lk) & 1))
#define B_MASK B (0x3f, 1, 1)
#define BBO(op, bo, aa, lk) (B ((op), (aa), (lk)) | ((((unsigned long)(bo)) & 0x1f) << 21))
#define BBO_MASK BBO (0x3f, 0x1f, 1, 1)
#define Y_MASK   (((unsigned long) 1) << 21)
#define AT1_MASK (((unsigned long) 3) << 21)
#define AT2_MASK (((unsigned long) 9) << 21)
#define BBOY_MASK  (BBO_MASK &~ Y_MASK)
#define BBOAT_MASK (BBO_MASK &~ AT1_MASK)
#define BBOCB(op, bo, cb, aa, lk) \
(BBO ((op), (bo), (aa), (lk)) | ((((unsigned long)(cb)) & 0x3) << 16))
#define BBOCB_MASK BBOCB (0x3f, 0x1f, 0x3, 1, 1)
#define BBOYCB_MASK (BBOCB_MASK &~ Y_MASK)
#define BBOATCB_MASK (BBOCB_MASK &~ AT1_MASK)
#define BBOAT2CB_MASK (BBOCB_MASK &~ AT2_MASK)
#define BBOYBI_MASK (BBOYCB_MASK | BI_MASK)
#define BBOATBI_MASK (BBOAT2CB_MASK | BI_MASK)
#define CTX(op, xop)   (OP (op) | (((unsigned long)(xop)) & 0x7))
#define CTX_MASK CTX(0x3f, 0x7)
#define UCTX(op, xop)  (OP (op) | (((unsigned long)(xop)) & 0x1f))
#define UCTX_MASK UCTX(0x3f, 0x1f)
#define DRA_MASK (OP_MASK | RA_MASK)
#define DSO(op, xop) (OP (op) | ((xop) & 0x3))
#define DS_MASK DSO (0x3f, 3)
#define DEO(op, xop) (OP (op) | ((xop) & 0xf))
#define DE_MASK DEO (0x3e, 0xf)
#define EVSEL(op, xop) (OP (op) | (((unsigned long)(xop)) & 0xff) << 3)
#define EVSEL_MASK EVSEL(0x3f, 0xff)
#define M(op, rc) (OP (op) | ((rc) & 1))
#define M_MASK M (0x3f, 1)
#define MME(op, me, rc) (M ((op), (rc)) | ((((unsigned long)(me)) & 0x1f) << 1))
#define MMBME_MASK (M_MASK | MB_MASK | ME_MASK)
#define MSHME_MASK (M_MASK | SH_MASK | ME_MASK)
#define MD(op, xop, rc) (OP (op) | ((((unsigned long)(xop)) & 0x7) << 2) | ((rc) & 1))
#define MD_MASK MD (0x3f, 0x7, 1)
#define MDMB_MASK (MD_MASK | MB6_MASK)
#define MDSH_MASK (MD_MASK | SH6_MASK)
#define MDS(op, xop, rc) (OP (op) | ((((unsigned long)(xop)) & 0xf) << 1) | ((rc) & 1))
#define MDS_MASK MDS (0x3f, 0xf, 1)
#define MDSMB_MASK (MDS_MASK | MB6_MASK)
#define SC(op, sa, lk) (OP (op) | ((((unsigned long)(sa)) & 1) << 1) | ((lk) & 1))
#define SC_MASK (OP_MASK | (((unsigned long)0x3ff) << 16) | (((unsigned long)1) << 1) | 1)
#define VX(op, xop) (OP (op) | (((unsigned long)(xop)) & 0x7ff))
#define VX_MASK	VX(0x3f, 0x7ff)
#define VXA(op, xop) (OP (op) | (((unsigned long)(xop)) & 0x03f))
#define VXA_MASK VXA(0x3f, 0x3f)
#define VXR(op, xop, rc) (OP (op) | (((rc) & 1) << 10) | (((unsigned long)(xop)) & 0x3ff))
#define VXR_MASK VXR(0x3f, 0x3ff, 1)
#define X(op, xop) (OP (op) | ((((unsigned long)(xop)) & 0x3ff) << 1))
#define Z(op, xop) (OP (op) | ((((unsigned long)(xop)) & 0x1ff) << 1))
#define XRC(op, xop, rc) (X ((op), (xop)) | ((rc) & 1))
#define ZRC(op, xop, rc) (Z ((op), (xop)) | ((rc) & 1))
#define X_MASK XRC (0x3f, 0x3ff, 1)
#define Z_MASK ZRC (0x3f, 0x1ff, 1)
#define XRA_MASK (X_MASK | RA_MASK)
#define XRB_MASK (X_MASK | RB_MASK)
#define XRT_MASK (X_MASK | RT_MASK)
#define XLRT_MASK (XRT_MASK & ~((unsigned long) 0x3 << 21))
#define XRARB_MASK (X_MASK | RA_MASK | RB_MASK)
#define XRLARB_MASK (XRARB_MASK & ~((unsigned long) 1 << 16))
#define XRTRA_MASK (X_MASK | RT_MASK | RA_MASK)
#define XRTLRA_MASK (XRTRA_MASK & ~((unsigned long) 1 << 21))
#define XOPL(op, xop, l) (X ((op), (xop)) | ((((unsigned long)(l)) & 1) << 21))
#define XCMP_MASK (X_MASK | (((unsigned long)1) << 22))
#define XCMPL_MASK (XCMP_MASK | (((unsigned long)1) << 21))
#define XTO(op, xop, to) (X ((op), (xop)) | ((((unsigned long)(to)) & 0x1f) << 21))
#define XTO_MASK (X_MASK | TO_MASK)
#define XTLB(op, xop, sh) (X ((op), (xop)) | ((((unsigned long)(sh)) & 0x1f) << 11))
#define XTLB_MASK (X_MASK | SH_MASK)
#define XSYNC(op, xop, l) (X ((op), (xop)) | ((((unsigned long)(l)) & 3) << 21))
#define XSYNC_MASK (0xff9fffff)
#define XEH_MASK (X_MASK & ~((unsigned long )1))
#define XDSS(op, xop, a) (X ((op), (xop)) | ((((unsigned long)(a)) & 1) << 25))
#define XDSS_MASK XDSS(0x3f, 0x3ff, 1)
#define XFL(op, xop, rc) (OP (op) | ((((unsigned long)(xop)) & 0x3ff) << 1) | (((unsigned long)(rc)) & 1))
#define XFL_MASK (XFL (0x3f, 0x3ff, 1) | (((unsigned long)1) << 25) | (((unsigned long)1) << 16))
#define XISEL(op, xop)  (OP (op) | ((((unsigned long)(xop)) & 0x1f) << 1))
#define XISEL_MASK      XISEL(0x3f, 0x1f)
#define XL(op, xop) (OP (op) | ((((unsigned long)(xop)) & 0x3ff) << 1))
#define XLLK(op, xop, lk) (XL ((op), (xop)) | ((lk) & 1))
#define XL_MASK XLLK (0x3f, 0x3ff, 1)
#define XLO(op, bo, xop, lk) \
(XLLK ((op), (xop), (lk)) | ((((unsigned long)(bo)) & 0x1f) << 21))
#define XLO_MASK (XL_MASK | BO_MASK)
#define XLYLK(op, xop, y, lk) (XLLK ((op), (xop), (lk)) | ((((unsigned long)(y)) & 1) << 21))
#define XLYLK_MASK (XL_MASK | Y_MASK)
#define XLOCB(op, bo, cb, xop, lk) \
(XLO ((op), (bo), (xop), (lk)) | ((((unsigned long)(cb)) & 3) << 16))
#define XLOCB_MASK XLOCB (0x3f, 0x1f, 0x3, 0x3ff, 1)
#define XLBB_MASK (XL_MASK | BB_MASK)
#define XLYBB_MASK (XLYLK_MASK | BB_MASK)
#define XLBOCBBB_MASK (XLOCB_MASK | BB_MASK)
#define XLBH_MASK (XL_MASK | (0x1c << 11))
#define XLBOBB_MASK (XL_MASK | BO_MASK | BB_MASK)
#define XLBOBIBB_MASK (XL_MASK | BO_MASK | BI_MASK | BB_MASK)
#define XO(op, xop, oe, rc) \
(OP (op) | ((((unsigned long)(xop)) & 0x1ff) << 1) | ((((unsigned long)(oe)) & 1) << 10) | (((unsigned long)(rc)) & 1))
#define XO_MASK XO (0x3f, 0x1ff, 1, 1)
#define XORB_MASK (XO_MASK | RB_MASK)
#define XS(op, xop, rc) (OP (op) | ((((unsigned long)(xop)) & 0x1ff) << 2) | (((unsigned long)(rc)) & 1))
#define XS_MASK XS (0x3f, 0x1ff, 1)
#define XFXFXM_MASK (X_MASK | (1 << 11) | (1 << 20))
#define XFXM(op, xop, fxm, p4) \
(X ((op), (xop)) | ((((unsigned long)(fxm)) & 0xff) << 12) \
| ((unsigned long)(p4) << 20))
#define XSPR(op, xop, spr) \
(X ((op), (xop)) | ((((unsigned long)(spr)) & 0x1f) << 16) | ((((unsigned long)(spr)) & 0x3e0) << 6))
#define XSPR_MASK (X_MASK | SPR_MASK)
#define XSPRBAT_MASK (XSPR_MASK &~ SPRBAT_MASK)
#define XSPRG_MASK (XSPR_MASK & ~(0x17 << 16))
#define XE_MASK (0xffff7fff)
#define XUC(op, xop)  (OP (op) | (((unsigned long)(xop)) & 0x1f))
#define XUC_MASK      XUC(0x3f, 0x1f)
#define BODNZF	(0x0)
#define BODNZFP	(0x1)
#define BODZF	(0x2)
#define BODZFP	(0x3)
#define BODNZT	(0x8)
#define BODNZTP	(0x9)
#define BODZT	(0xa)
#define BODZTP	(0xb)
#define BOF	(0x4)
#define BOFP	(0x5)
#define BOFM4	(0x6)
#define BOFP4	(0x7)
#define BOT	(0xc)
#define BOTP	(0xd)
#define BOTM4	(0xe)
#define BOTP4	(0xf)
#define BODNZ	(0x10)
#define BODNZP	(0x11)
#define BODZ	(0x12)
#define BODZP	(0x13)
#define BODNZM4 (0x18)
#define BODNZP4 (0x19)
#define BODZM4	(0x1a)
#define BODZP4	(0x1b)
#define BOU	(0x14)
#define CBLT	(0)
#define CBGT	(1)
#define CBEQ	(2)
#define CBSO	(3)
#define TOLGT	(0x1)
#define TOLLT	(0x2)
#define TOEQ	(0x4)
#define TOLGE	(0x5)
#define TOLNL	(0x5)
#define TOLLE	(0x6)
#define TOLNG	(0x6)
#define TOGT	(0x8)
#define TOGE	(0xc)
#define TONL	(0xc)
#define TOLT	(0x10)
#define TOLE	(0x14)
#define TONG	(0x14)
#define TONE	(0x18)
#define TOU	(0x1f)
#undef	PPC
#define PPC     PPC_OPCODE_PPC
#define PPCCOM	PPC_OPCODE_PPC | PPC_OPCODE_COMMON
#define NOPOWER4 PPC_OPCODE_NOPOWER4 | PPCCOM
#define POWER4	PPC_OPCODE_POWER4
#define POWER5	PPC_OPCODE_POWER5
#define POWER6	PPC_OPCODE_POWER6
#define CELL	PPC_OPCODE_CELL
#define PPC32   PPC_OPCODE_32 | PPC_OPCODE_PPC
#define PPC64   PPC_OPCODE_64 | PPC_OPCODE_PPC
#define PPC403	PPC_OPCODE_403
#define PPC405	PPC403
#define PPC440	PPC_OPCODE_440
#define PPC750	PPC
#define PPC860	PPC
#define PPCVEC	PPC_OPCODE_ALTIVEC
#define	POWER   PPC_OPCODE_POWER
#define	POWER2	PPC_OPCODE_POWER | PPC_OPCODE_POWER2
#define PPCPWR2	PPC_OPCODE_PPC | PPC_OPCODE_POWER | PPC_OPCODE_POWER2
#define	POWER32	PPC_OPCODE_POWER | PPC_OPCODE_32
#define	COM     PPC_OPCODE_POWER | PPC_OPCODE_PPC | PPC_OPCODE_COMMON
#define	COM32   PPC_OPCODE_POWER | PPC_OPCODE_PPC | PPC_OPCODE_COMMON | PPC_OPCODE_32
#define	M601    PPC_OPCODE_POWER | PPC_OPCODE_601
#define PWRCOM	PPC_OPCODE_POWER | PPC_OPCODE_601 | PPC_OPCODE_COMMON
#define	MFDEC1	PPC_OPCODE_POWER
#define	MFDEC2	PPC_OPCODE_PPC | PPC_OPCODE_601 | PPC_OPCODE_BOOKE
#define BOOKE	PPC_OPCODE_BOOKE
#define BOOKE64	PPC_OPCODE_BOOKE64
#define CLASSIC	PPC_OPCODE_CLASSIC
#define PPCE300 PPC_OPCODE_E300
#define PPCSPE	PPC_OPCODE_SPE
#define PPCISEL	PPC_OPCODE_ISEL
#define PPCEFS	PPC_OPCODE_EFS
#define PPCBRLK	PPC_OPCODE_BRLOCK
#define PPCPMR	PPC_OPCODE_PMR
#define PPCCHLK	PPC_OPCODE_CACHELCK
#define PPCCHLK64	PPC_OPCODE_CACHELCK | PPC_OPCODE_BOOKE64
#define PPCRFMCI	PPC_OPCODE_RFMCI
const struct powerpc_opcode powerpc_opcodes[] = ;
const int powerpc_num_opcodes = ARRAY_SIZE(powerpc_opcodes);
const struct powerpc_macro powerpc_macros[] = ;
const int powerpc_num_macros = ARRAY_SIZE(powerpc_macros);
