#define	_bcmotp_h_
#define OTP_HW_RGN	1
#define OTP_SW_RGN	2
#define OTP_CI_RGN	4
#define OTP_FUSE_RGN	8
#define OTP_ALL_RGN	0xf
#define OTP_SZ_MAX		(6144/8)
#define OTPGU_CI_SZ		2
#define OTP4325_FM_DISABLED_OFFSET	188
extern int otp_status(void *oh);
extern int otp_size(void *oh);
extern u16 otp_read_bit(void *oh, uint offset);
extern void *otp_init(si_t *sih);
extern int otp_read_region(si_t *sih, int region, u16 *data, uint *wlen);
extern int otp_nvread(void *oh, char *data, uint *len);
