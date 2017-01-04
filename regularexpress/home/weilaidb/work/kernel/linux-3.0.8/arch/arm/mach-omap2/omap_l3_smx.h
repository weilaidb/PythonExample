#define __ARCH_ARM_MACH_OMAP2_L3_INTERCONNECT_3XXX_H
#define L3_COMPONENT			0x000
#define L3_CORE				0x018
#define L3_AGENT_CONTROL		0x020
#define L3_AGENT_STATUS			0x028
#define L3_ERROR_LOG			0x058
#define L3_ERROR_LOG_MULTI		(1 << 31)
#define L3_ERROR_LOG_SECONDARY		(1 << 30)
#define L3_ERROR_LOG_ADDR		0x060
#define L3_SI_CONTROL			0x020
#define L3_SI_FLAG_STATUS_0		0x510
const u64 shift = 1;
#define L3_STATUS_0_MPUIA_BRST		(shift << 0)
#define L3_STATUS_0_MPUIA_RSP		(shift << 1)
#define L3_STATUS_0_MPUIA_INBAND	(shift << 2)
#define L3_STATUS_0_IVAIA_BRST		(shift << 6)
#define L3_STATUS_0_IVAIA_RSP		(shift << 7)
#define L3_STATUS_0_IVAIA_INBAND	(shift << 8)
#define L3_STATUS_0_SGXIA_BRST		(shift << 9)
#define L3_STATUS_0_SGXIA_RSP		(shift << 10)
#define L3_STATUS_0_SGXIA_MERROR	(shift << 11)
#define L3_STATUS_0_CAMIA_BRST		(shift << 12)
#define L3_STATUS_0_CAMIA_RSP		(shift << 13)
#define L3_STATUS_0_CAMIA_INBAND	(shift << 14)
#define L3_STATUS_0_DISPIA_BRST		(shift << 15)
#define L3_STATUS_0_DISPIA_RSP		(shift << 16)
#define L3_STATUS_0_DMARDIA_BRST	(shift << 18)
#define L3_STATUS_0_DMARDIA_RSP		(shift << 19)
#define L3_STATUS_0_DMAWRIA_BRST	(shift << 21)
#define L3_STATUS_0_DMAWRIA_RSP		(shift << 22)
#define L3_STATUS_0_USBOTGIA_BRST	(shift << 24)
#define L3_STATUS_0_USBOTGIA_RSP	(shift << 25)
#define L3_STATUS_0_USBOTGIA_INBAND	(shift << 26)
#define L3_STATUS_0_USBHOSTIA_BRST	(shift << 27)
#define L3_STATUS_0_USBHOSTIA_INBAND	(shift << 28)
#define L3_STATUS_0_SMSTA_REQ		(shift << 48)
#define L3_STATUS_0_GPMCTA_REQ		(shift << 49)
#define L3_STATUS_0_OCMRAMTA_REQ	(shift << 50)
#define L3_STATUS_0_OCMROMTA_REQ	(shift << 51)
#define L3_STATUS_0_IVATA_REQ		(shift << 54)
#define L3_STATUS_0_SGXTA_REQ		(shift << 55)
#define L3_STATUS_0_SGXTA_SERROR	(shift << 56)
#define L3_STATUS_0_GPMCTA_SERROR	(shift << 57)
#define L3_STATUS_0_L4CORETA_REQ	(shift << 58)
#define L3_STATUS_0_L4PERTA_REQ		(shift << 59)
#define L3_STATUS_0_L4EMUTA_REQ		(shift << 60)
#define L3_STATUS_0_MAD2DTA_REQ		(shift << 61)
#define L3_STATUS_0_TIMEOUT_MASK	(L3_STATUS_0_MPUIA_BRST         \
| L3_STATUS_0_MPUIA_RSP         \
| L3_STATUS_0_IVAIA_BRST        \
| L3_STATUS_0_IVAIA_RSP         \
| L3_STATUS_0_SGXIA_BRST        \
| L3_STATUS_0_SGXIA_RSP         \
| L3_STATUS_0_CAMIA_BRST        \
| L3_STATUS_0_CAMIA_RSP         \
| L3_STATUS_0_DISPIA_BRST       \
| L3_STATUS_0_DISPIA_RSP        \
| L3_STATUS_0_DMARDIA_BRST      \
| L3_STATUS_0_DMARDIA_RSP       \
| L3_STATUS_0_DMAWRIA_BRST      \
| L3_STATUS_0_DMAWRIA_RSP       \
| L3_STATUS_0_USBOTGIA_BRST     \
| L3_STATUS_0_USBOTGIA_RSP      \
| L3_STATUS_0_USBHOSTIA_BRST    \
| L3_STATUS_0_SMSTA_REQ         \
| L3_STATUS_0_GPMCTA_REQ        \
| L3_STATUS_0_OCMRAMTA_REQ      \
| L3_STATUS_0_OCMROMTA_REQ      \
| L3_STATUS_0_IVATA_REQ         \
| L3_STATUS_0_SGXTA_REQ         \
| L3_STATUS_0_L4CORETA_REQ      \
| L3_STATUS_0_L4PERTA_REQ       \
| L3_STATUS_0_L4EMUTA_REQ       \
| L3_STATUS_0_MAD2DTA_REQ)
#define L3_SI_FLAG_STATUS_1		0x530
#define L3_STATUS_1_MPU_DATAIA		(1 << 0)
#define L3_STATUS_1_DAPIA0		(1 << 3)
#define L3_STATUS_1_DAPIA1		(1 << 4)
#define L3_STATUS_1_IVAIA		(1 << 6)
#define L3_PM_ERROR_LOG			0x020
#define L3_PM_CONTROL			0x028
#define L3_PM_ERROR_CLEAR_SINGLE	0x030
#define L3_PM_ERROR_CLEAR_MULTI		0x038
#define L3_PM_REQ_INFO_PERMISSION(n)	(0x048 + (0x020 * n))
#define L3_PM_READ_PERMISSION(n)	(0x050 + (0x020 * n))
#define L3_PM_WRITE_PERMISSION(n)	(0x058 + (0x020 * n))
#define L3_PM_ADDR_MATCH(n)		(0x060 + (0x020 * n))
#define L3_ERROR_LOG_CODE		24
#define L3_ERROR_LOG_INITID		8
#define L3_ERROR_LOG_CMD		0
#define L3_AGENT_STATUS_CLEAR_IA	0x10000000
#define L3_AGENT_STATUS_CLEAR_TA	0x01000000
#define OMAP34xx_IRQ_L3_APP		10
#define L3_APPLICATION_ERROR		0x0
#define L3_DEBUG_ERROR			0x1
enum omap3_l3_initiator_id ;
enum omap3_l3_code ;
struct omap3_l3 ;
unsigned int __iomem omap3_l3_app_bases[] = ;
unsigned int __iomem omap3_l3_debug_bases[] = ;
u32 *omap3_l3_bases[] = ;
#define __raw_writell(v, a)	(__chk_io_ptr(a), \
*(volatile u64 __force *)(a) = (v))
#define __raw_readll(a)		(__chk_io_ptr(a), \
*(volatile u64 __force *)(a))
