#if !defined(BCMHNDOTP) && !defined(BCMIPXOTP)
#define BCMHNDOTP	1
#define BCMIPXOTP	1
#define OTPTYPE_HND(ccrev)	((ccrev) < 21 || (ccrev) == 22)
#define OTPTYPE_IPX(ccrev)	((ccrev) == 21 || (ccrev) >= 23)
#define OTPP_TRIES	10000000
#define MAXNUMRDES		9
typedef int (*otp_status_t) (void *oh);
typedef int (*otp_size_t) (void *oh);
typedef void *(*otp_init_t) (si_t *sih);
typedef u16(*otp_read_bit_t) (void *oh, chipcregs_t *cc, uint off);
typedef int (*otp_read_region_t) (si_t *sih, int region, u16 *data,
uint *wlen);
typedef int (*otp_nvread_t) (void *oh, char *data, uint *len);
typedef struct otp_fn_s  otp_fn_t;
typedef struct  otpinfo_t;
static otpinfo_t otpinfo;
#define HWSW_RGN(rgn)		(((rgn) == OTP_HW_RGN) ? "h/w" : "s/w")
#define REVA4_OTPGU_BASE	12
#define REVB8_OTPGU_BASE	20
#define REV36_OTPGU_BASE	12
#define OTPGU_HSB_OFF		0
#define OTPGU_SFB_OFF		1
#define OTPGU_CI_OFF		2
#define OTPGU_P_OFF		3
#define OTPGU_SROM_OFF		4
#define OTPGU_HWP_OFF		60
#define OTPGU_SWP_OFF		61
#define OTPGU_CIP_OFF		62
#define OTPGU_FUSEP_OFF		63
#define OTPGU_CIP_MSK		0x4000
#define OTPGU_P_MSK		0xf000
#define OTPGU_P_SHIFT		(OTPGU_HWP_OFF % 16)
#define OTP_SZ_FU_324		((roundup(324, 8))/8)
#define OTP_SZ_FU_288		(288/8)
#define OTP_SZ_FU_216		(216/8)
#define OTP_SZ_FU_72		(72/8)
#define OTP_SZ_CHECKSUM		(16/8)
#define OTP4315_SWREG_SZ	178
#define OTP_SZ_FU_144		(144/8)
static int ipxotp_status(void *oh)
static int ipxotp_size(void *oh)
static u16 ipxotp_otpr(void *oh, chipcregs_t *cc, uint wn)
static u16 ipxotp_read_bit(void *oh, chipcregs_t *cc, uint off)
static int ipxotp_max_rgnsz(si_t *sih, int osizew)
static void _ipxotp_init(otpinfo_t *oi, chipcregs_t *cc)
static void *ipxotp_init(si_t *sih)
static int ipxotp_read_region(void *oh, int region, u16 *data, uint *wlen)
static int ipxotp_nvread(void *oh, char *data, uint *len)
static otp_fn_t ipxotp_fn = ;
#define	OTPS_PROGFAIL		0x80000000
#define	OTPS_PROTECT		0x00000007
#define	OTPS_HW_PROTECT		0x00000001
#define	OTPS_SW_PROTECT		0x00000002
#define	OTPS_CID_PROTECT	0x00000004
#define	OTPS_RCEV_MSK		0x00003f00
#define	OTPS_RCEV_SHIFT		8
#define	OTPC_RECWAIT		0xff000000
#define	OTPC_PROGWAIT		0x00ffff00
#define	OTPC_PRW_SHIFT		8
#define	OTPC_MAXFAIL		0x00000038
#define	OTPC_VSEL		0x00000006
#define	OTPC_SELVL		0x00000001
#define	OTP_SWLIM_OFF	(-4)
#define	OTP_CIDBASE_OFF	0
#define	OTP_CIDLIM_OFF	4
#define	OTP_BOUNDARY_OFF (-4)
#define	OTP_HWSIGN_OFF	(-3)
#define	OTP_SWSIGN_OFF	(-2)
#define	OTP_CIDSIGN_OFF	(-1)
#define	OTP_CID_OFF	0
#define	OTP_PKG_OFF	1
#define	OTP_FID_OFF	2
#define	OTP_RSV_OFF	3
#define	OTP_LIM_OFF	4
#define	OTP_RD_OFF	4
#define	OTP_RC0_OFF	28
#define	OTP_RC1_OFF	32
#define	OTP_RC_LIM_OFF	36
#define	OTP_HW_REGION	OTPS_HW_PROTECT
#define	OTP_SW_REGION	OTPS_SW_PROTECT
#define	OTP_CID_REGION	OTPS_CID_PROTECT
#if OTP_HW_REGION != OTP_HW_RGN
#error "incompatible OTP_HW_RGN"
#if OTP_SW_REGION != OTP_SW_RGN
#error "incompatible OTP_SW_RGN"
#if OTP_CID_REGION != OTP_CI_RGN
#error "incompatible OTP_CI_RGN"
#define	OTP_RCE_ROW_SZ		6
#define	OTP_RCE_SIGN_MASK	0x7fff
#define	OTP_RCE_ROW_MASK	0x3f
#define	OTP_RCE_BITS		21
#define	OTP_RCE_SIGN_SZ		15
#define	OTP_RCE_BIT0		1
#define	OTP_WPR		4
#define	OTP_SIGNATURE	0x578a
#define	OTP_MAGIC	0x4e56
static int hndotp_status(void *oh)
static int hndotp_size(void *oh)
static u16 hndotp_otpr(void *oh, chipcregs_t *cc, uint wn)
static u16 hndotp_otproff(void *oh, chipcregs_t *cc, int woff)
static u16 hndotp_read_bit(void *oh, chipcregs_t *cc, uint idx)
static void *hndotp_init(si_t *sih)
static int hndotp_read_region(void *oh, int region, u16 *data, uint *wlen)
static int hndotp_nvread(void *oh, char *data, uint *len)
static otp_fn_t hndotp_fn = ;
int otp_status(void *oh)
int otp_size(void *oh)
u16 otp_read_bit(void *oh, uint offset)
void *otp_init(si_t *sih)
int
otp_read_region(si_t *sih, int region, u16 *data,
uint *wlen)
int otp_nvread(void *oh, char *data, uint *len)
