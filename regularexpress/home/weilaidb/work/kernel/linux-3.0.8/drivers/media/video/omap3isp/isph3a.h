#define OMAP3_ISP_H3A_H
#define AEWB_PACKET_SIZE	16
#define AEWB_SATURATION_LIMIT	0x3ff
#define PCR_CHNG		(1 << 0)
#define AEWWIN1_CHNG		(1 << 1)
#define AEWINSTART_CHNG		(1 << 2)
#define AEWINBLK_CHNG		(1 << 3)
#define AEWSUBWIN_CHNG		(1 << 4)
#define PRV_WBDGAIN_CHNG	(1 << 5)
#define PRV_WBGAIN_CHNG		(1 << 6)
#define ISPH3A_PCR_AF_EN	(1 << 0)
#define ISPH3A_PCR_AF_ALAW_EN	(1 << 1)
#define ISPH3A_PCR_AF_MED_EN	(1 << 2)
#define ISPH3A_PCR_AF_BUSY	(1 << 15)
#define ISPH3A_PCR_AEW_EN	(1 << 16)
#define ISPH3A_PCR_AEW_ALAW_EN	(1 << 17)
#define ISPH3A_PCR_AEW_BUSY	(1 << 18)
#define ISPH3A_PCR_AEW_MASK	(ISPH3A_PCR_AEW_ALAW_EN | \
ISPH3A_PCR_AEW_AVE2LMT_MASK)
#define AFPID				0x0
#define AFCOEF_OFFSET			0x00000004
#define AF_BUSYAF			(1 << 15)
#define AF_FVMODE			(1 << 14)
#define AF_RGBPOS			(0x7 << 11)
#define AF_MED_TH			(0xFF << 3)
#define AF_MED_EN			(1 << 2)
#define AF_ALAW_EN			(1 << 1)
#define AF_EN				(1 << 0)
#define AF_PCR_MASK			(AF_FVMODE | AF_RGBPOS | AF_MED_TH | \
AF_MED_EN | AF_ALAW_EN)
#define AF_PAXW				(0x7F << 16)
#define AF_PAXH				0x7F
#define AF_AFINCV			(0xF << 13)
#define AF_PAXVC			(0x7F << 6)
#define AF_PAXHC			0x3F
#define AF_PAXSH			(0xFFF<<16)
#define AF_PAXSV			0xFFF
#define AF_COEF_MASK0			0xFFF
#define AF_COEF_MASK1			(0xFFF<<16)
#define AF_RGBPOS_SHIFT			11
#define AF_MED_TH_SHIFT			3
#define AF_PAXW_SHIFT			16
#define AF_LINE_INCR_SHIFT		13
#define AF_VT_COUNT_SHIFT		6
#define AF_HZ_START_SHIFT		16
#define AF_COEF_SHIFT			16
int omap3isp_h3a_aewb_init(struct isp_device *isp);
int omap3isp_h3a_af_init(struct isp_device *isp);
void omap3isp_h3a_aewb_cleanup(struct isp_device *isp);
void omap3isp_h3a_af_cleanup(struct isp_device *isp);
