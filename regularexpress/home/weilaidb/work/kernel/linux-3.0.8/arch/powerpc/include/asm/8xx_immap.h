#define __IMMAP_8XX__
typedef	struct sys_conf  sysconf8xx_t;
typedef struct pcmcia_conf  pcmconf8xx_t;
typedef struct	mem_ctlr  memctl8xx_t;
#define BR_BA_MSK	0xffff8000
#define BR_AT_MSK	0x00007000
#define BR_PS_MSK	0x00000c00
#define BR_PS_32	0x00000000
#define BR_PS_16	0x00000800
#define BR_PS_8		0x00000400
#define BR_PARE		0x00000200
#define BR_WP		0x00000100
#define BR_MS_MSK	0x000000c0
#define BR_MS_GPCM	0x00000000
#define BR_MS_UPMA	0x00000080
#define BR_MS_UPMB	0x000000c0
#define BR_V		0x00000001
#define OR_AM_MSK	0xffff8000
#define OR_ATM_MSK	0x00007000
#define OR_CSNT_SAM	0x00000800
#define OR_ACS_MSK	0x00000600
#define OR_ACS_DIV1	0x00000000
#define OR_ACS_DIV4	0x00000400
#define OR_ACS_DIV2	0x00000600
#define OR_G5LA		0x00000400
#define OR_G5LS		0x00000200
#define OR_BI		0x00000100
#define OR_SCY_MSK	0x000000f0
#define OR_SCY_0_CLK	0x00000000
#define OR_SCY_1_CLK	0x00000010
#define OR_SCY_2_CLK	0x00000020
#define OR_SCY_3_CLK	0x00000030
#define OR_SCY_4_CLK	0x00000040
#define OR_SCY_5_CLK	0x00000050
#define OR_SCY_6_CLK	0x00000060
#define OR_SCY_7_CLK	0x00000070
#define OR_SCY_8_CLK	0x00000080
#define OR_SCY_9_CLK	0x00000090
#define OR_SCY_10_CLK	0x000000a0
#define OR_SCY_11_CLK	0x000000b0
#define OR_SCY_12_CLK	0x000000c0
#define OR_SCY_13_CLK	0x000000d0
#define OR_SCY_14_CLK	0x000000e0
#define OR_SCY_15_CLK	0x000000f0
#define OR_SETA		0x00000008
#define OR_TRLX		0x00000004
#define OR_EHTR		0x00000002
typedef struct	sys_int_timers  sit8xx_t;
#define TBSCR_TBIRQ_MASK	((ushort)0xff00)
#define TBSCR_REFA		((ushort)0x0080)
#define TBSCR_REFB		((ushort)0x0040)
#define TBSCR_REFAE		((ushort)0x0008)
#define TBSCR_REFBE		((ushort)0x0004)
#define TBSCR_TBF		((ushort)0x0002)
#define TBSCR_TBE		((ushort)0x0001)
#define RTCSC_RTCIRQ_MASK	((ushort)0xff00)
#define RTCSC_SEC		((ushort)0x0080)
#define RTCSC_ALR		((ushort)0x0040)
#define RTCSC_38K		((ushort)0x0010)
#define RTCSC_SIE		((ushort)0x0008)
#define RTCSC_ALE		((ushort)0x0004)
#define RTCSC_RTF		((ushort)0x0002)
#define RTCSC_RTE		((ushort)0x0001)
#define PISCR_PIRQ_MASK		((ushort)0xff00)
#define PISCR_PS		((ushort)0x0080)
#define PISCR_PIE		((ushort)0x0004)
#define PISCR_PTF		((ushort)0x0002)
#define PISCR_PTE		((ushort)0x0001)
typedef struct clk_and_reset  car8xx_t;
typedef struct sitk  sitk8xx_t;
typedef struct cark  cark8xx_t;
#define KAPWR_KEY	((unsigned int)0x55ccaa33)
typedef struct vid823  vid823_t;
typedef struct lcd  lcd823_t;
typedef struct i2c  i2c8xx_t;
typedef struct sdma_csr  sdma8xx_t;
typedef struct cpm_ic  cpic8xx_t;
typedef struct io_port  iop8xx_t;
typedef struct cpm_timers  cpmtimer8xx_t;
typedef struct scc  scc_t;
typedef struct smc  smc_t;
typedef struct fec  fec_t;
union fec_lcd ;
typedef struct comm_proc  cpm8xx_t;
typedef struct immap  immap_t;
