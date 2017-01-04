#define _M68K_BVME6000HW_H_
#define BVME_PIT_BASE	0xffa00000
typedef struct  PitRegs_t, *PitRegsPtr;
#define bvmepit   ((*(volatile PitRegsPtr)(BVME_PIT_BASE)))
#define BVME_RTC_BASE	0xff900000
typedef struct  RtcRegs_t, *RtcPtr_t;
#define BVME_I596_BASE	0xff100000
#define BVME_ETHIRQ_REG	0xff20000b
#define BVME_LOCAL_IRQ_STAT  0xff20000f
#define BVME_ETHERR          0x02
#define BVME_ABORT_STATUS    0x08
#define BVME_NCR53C710_BASE	0xff000000
#define BVME_SCC_A_ADDR	0xffb0000b
#define BVME_SCC_B_ADDR	0xffb00003
#define BVME_SCC_RTxC	7372800
#define BVME_CONFIG_REG	0xff500003
#define config_reg_ptr	(volatile unsigned char *)BVME_CONFIG_REG
#define BVME_CONFIG_SW1	0x08
#define BVME_CONFIG_SW2	0x04
#define BVME_CONFIG_SW3	0x02
#define BVME_CONFIG_SW4	0x01
#define BVME_IRQ_TYPE_PRIO	0
#define BVME_IRQ_PRN		(IRQ_USER+20)
#define BVME_IRQ_TIMER		(IRQ_USER+25)
#define BVME_IRQ_I596		IRQ_AUTO_2
#define BVME_IRQ_SCSI		IRQ_AUTO_3
#define BVME_IRQ_RTC		IRQ_AUTO_6
#define BVME_IRQ_ABORT		IRQ_AUTO_7
#define BVME_IRQ_SCC_BASE		IRQ_USER
#define BVME_IRQ_SCCB_TX		IRQ_USER
#define BVME_IRQ_SCCB_STAT		(IRQ_USER+2)
#define BVME_IRQ_SCCB_RX		(IRQ_USER+4)
#define BVME_IRQ_SCCB_SPCOND		(IRQ_USER+6)
#define BVME_IRQ_SCCA_TX		(IRQ_USER+8)
#define BVME_IRQ_SCCA_STAT		(IRQ_USER+10)
#define BVME_IRQ_SCCA_RX		(IRQ_USER+12)
#define BVME_IRQ_SCCA_SPCOND		(IRQ_USER+14)
#define BVME_ACR_A32VBA		0xff400003
#define BVME_ACR_A32MSK		0xff410003
#define BVME_ACR_A24VBA		0xff420003
#define BVME_ACR_A24MSK		0xff430003
#define BVME_ACR_A16VBA		0xff440003
#define BVME_ACR_A32LBA		0xff450003
#define BVME_ACR_A24LBA		0xff460003
#define BVME_ACR_ADDRCTL	0xff470003
#define bvme_acr_a32vba		*(volatile unsigned char *)BVME_ACR_A32VBA
#define bvme_acr_a32msk		*(volatile unsigned char *)BVME_ACR_A32MSK
#define bvme_acr_a24vba		*(volatile unsigned char *)BVME_ACR_A24VBA
#define bvme_acr_a24msk		*(volatile unsigned char *)BVME_ACR_A24MSK
#define bvme_acr_a16vba		*(volatile unsigned char *)BVME_ACR_A16VBA
#define bvme_acr_a32lba		*(volatile unsigned char *)BVME_ACR_A32LBA
#define bvme_acr_a24lba		*(volatile unsigned char *)BVME_ACR_A24LBA
#define bvme_acr_addrctl	*(volatile unsigned char *)BVME_ACR_ADDRCTL
