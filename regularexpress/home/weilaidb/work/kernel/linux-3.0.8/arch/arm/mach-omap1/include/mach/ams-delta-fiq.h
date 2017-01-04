#define __AMS_DELTA_FIQ_H
#define INT_DEFERRED_FIQ	INT_1510_RES12
#if (INT_DEFERRED_FIQ < IH2_BASE)
#define DEFERRED_FIQ_IH_BASE	OMAP_IH1_BASE
#define DEFERRED_FIQ_IH_BASE	OMAP_IH2_BASE
#define FIQ_MASK		 0
#define FIQ_STATE		 1
#define FIQ_KEYS_CNT		 2
#define FIQ_TAIL_OFFSET		 3
#define FIQ_HEAD_OFFSET		 4
#define FIQ_BUF_LEN		 5
#define FIQ_KEY			 6
#define FIQ_MISSED_KEYS		 7
#define FIQ_BUFFER_START	 8
#define FIQ_GPIO_INT_MASK	 9
#define FIQ_KEYS_HICNT		10
#define FIQ_IRQ_PEND		11
#define FIQ_SIR_CODE_L1		12
#define IRQ_SIR_CODE_L2		13
#define FIQ_CNT_INT_00		14
#define FIQ_CNT_INT_KEY		15
#define FIQ_CNT_INT_MDM		16
#define FIQ_CNT_INT_03		17
#define FIQ_CNT_INT_HSW		18
#define FIQ_CNT_INT_05		19
#define FIQ_CNT_INT_06		20
#define FIQ_CNT_INT_07		21
#define FIQ_CNT_INT_08		22
#define FIQ_CNT_INT_09		23
#define FIQ_CNT_INT_10		24
#define FIQ_CNT_INT_11		25
#define FIQ_CNT_INT_12		26
#define FIQ_CNT_INT_13		27
#define FIQ_CNT_INT_14		28
#define FIQ_CNT_INT_15		29
#define FIQ_CIRC_BUFF		30
extern unsigned int fiq_buffer[];
extern unsigned char qwerty_fiqin_start, qwerty_fiqin_end;
extern void __init ams_delta_init_fiq(void);
