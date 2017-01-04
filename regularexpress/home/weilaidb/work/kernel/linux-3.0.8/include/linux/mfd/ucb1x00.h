#define UCB1200_H
#define UCB_IO_DATA	0x00
#define UCB_IO_DIR	0x01
#define UCB_IO_0		(1 << 0)
#define UCB_IO_1		(1 << 1)
#define UCB_IO_2		(1 << 2)
#define UCB_IO_3		(1 << 3)
#define UCB_IO_4		(1 << 4)
#define UCB_IO_5		(1 << 5)
#define UCB_IO_6		(1 << 6)
#define UCB_IO_7		(1 << 7)
#define UCB_IO_8		(1 << 8)
#define UCB_IO_9		(1 << 9)
#define UCB_IE_RIS	0x02
#define UCB_IE_FAL	0x03
#define UCB_IE_STATUS	0x04
#define UCB_IE_CLEAR	0x04
#define UCB_IE_ADC		(1 << 11)
#define UCB_IE_TSPX		(1 << 12)
#define UCB_IE_TSMX		(1 << 13)
#define UCB_IE_TCLIP		(1 << 14)
#define UCB_IE_ACLIP		(1 << 15)
#define UCB_IRQ_TSPX		12
#define UCB_TC_A	0x05
#define UCB_TC_A_LOOP		(1 << 7)
#define UCB_TC_A_AMPL		(1 << 7)
#define UCB_TC_B	0x06
#define UCB_TC_B_VOICE_ENA	(1 << 3)
#define UCB_TC_B_CLIP		(1 << 4)
#define UCB_TC_B_ATT		(1 << 6)
#define UCB_TC_B_SIDE_ENA	(1 << 11)
#define UCB_TC_B_MUTE		(1 << 13)
#define UCB_TC_B_IN_ENA		(1 << 14)
#define UCB_TC_B_OUT_ENA	(1 << 15)
#define UCB_AC_A	0x07
#define UCB_AC_B	0x08
#define UCB_AC_B_LOOP		(1 << 8)
#define UCB_AC_B_MUTE		(1 << 13)
#define UCB_AC_B_IN_ENA		(1 << 14)
#define UCB_AC_B_OUT_ENA	(1 << 15)
#define UCB_TS_CR	0x09
#define UCB_TS_CR_TSMX_POW	(1 << 0)
#define UCB_TS_CR_TSPX_POW	(1 << 1)
#define UCB_TS_CR_TSMY_POW	(1 << 2)
#define UCB_TS_CR_TSPY_POW	(1 << 3)
#define UCB_TS_CR_TSMX_GND	(1 << 4)
#define UCB_TS_CR_TSPX_GND	(1 << 5)
#define UCB_TS_CR_TSMY_GND	(1 << 6)
#define UCB_TS_CR_TSPY_GND	(1 << 7)
#define UCB_TS_CR_MODE_INT	(0 << 8)
#define UCB_TS_CR_MODE_PRES	(1 << 8)
#define UCB_TS_CR_MODE_POS	(2 << 8)
#define UCB_TS_CR_BIAS_ENA	(1 << 11)
#define UCB_TS_CR_TSPX_LOW	(1 << 12)
#define UCB_TS_CR_TSMX_LOW	(1 << 13)
#define UCB_ADC_CR	0x0a
#define UCB_ADC_SYNC_ENA	(1 << 0)
#define UCB_ADC_VREFBYP_CON	(1 << 1)
#define UCB_ADC_INP_TSPX	(0 << 2)
#define UCB_ADC_INP_TSMX	(1 << 2)
#define UCB_ADC_INP_TSPY	(2 << 2)
#define UCB_ADC_INP_TSMY	(3 << 2)
#define UCB_ADC_INP_AD0		(4 << 2)
#define UCB_ADC_INP_AD1		(5 << 2)
#define UCB_ADC_INP_AD2		(6 << 2)
#define UCB_ADC_INP_AD3		(7 << 2)
#define UCB_ADC_EXT_REF		(1 << 5)
#define UCB_ADC_START		(1 << 7)
#define UCB_ADC_ENA		(1 << 15)
#define UCB_ADC_DATA	0x0b
#define UCB_ADC_DAT_VAL		(1 << 15)
#define UCB_ADC_DAT(x)		(((x) & 0x7fe0) >> 5)
#define UCB_ID		0x0c
#define UCB_ID_1200		0x1004
#define UCB_ID_1300		0x1005
#define UCB_ID_TC35143          0x9712
#define UCB_MODE	0x0d
#define UCB_MODE_DYN_VFLAG_ENA	(1 << 12)
#define UCB_MODE_AUD_OFF_CAN	(1 << 13)
struct ucb1x00_irq ;
struct ucb1x00 ;
struct ucb1x00_driver;
struct ucb1x00_dev ;
struct ucb1x00_driver ;
#define classdev_to_ucb1x00(cd)	container_of(cd, struct ucb1x00, dev)
int ucb1x00_register_driver(struct ucb1x00_driver *);
void ucb1x00_unregister_driver(struct ucb1x00_driver *);
static inline unsigned int ucb1x00_clkrate(struct ucb1x00 *ucb)
static inline void ucb1x00_enable(struct ucb1x00 *ucb)
static inline void ucb1x00_disable(struct ucb1x00 *ucb)
static inline void ucb1x00_reg_write(struct ucb1x00 *ucb, unsigned int reg, unsigned int val)
static inline unsigned int ucb1x00_reg_read(struct ucb1x00 *ucb, unsigned int reg)
static inline void ucb1x00_set_audio_divisor(struct ucb1x00 *ucb, unsigned int div)
static inline void ucb1x00_set_telecom_divisor(struct ucb1x00 *ucb, unsigned int div)
void ucb1x00_io_set_dir(struct ucb1x00 *ucb, unsigned int, unsigned int);
void ucb1x00_io_write(struct ucb1x00 *ucb, unsigned int, unsigned int);
unsigned int ucb1x00_io_read(struct ucb1x00 *ucb);
#define UCB_NOSYNC	(0)
#define UCB_SYNC	(1)
unsigned int ucb1x00_adc_read(struct ucb1x00 *ucb, int adc_channel, int sync);
void ucb1x00_adc_enable(struct ucb1x00 *ucb);
void ucb1x00_adc_disable(struct ucb1x00 *ucb);
#define UCB_RISING	(1 << 0)
#define UCB_FALLING	(1 << 1)
int ucb1x00_hook_irq(struct ucb1x00 *ucb, unsigned int idx, void (*fn)(int, void *), void *devid);
void ucb1x00_enable_irq(struct ucb1x00 *ucb, unsigned int idx, int edges);
void ucb1x00_disable_irq(struct ucb1x00 *ucb, unsigned int idx, int edges);
int ucb1x00_free_irq(struct ucb1x00 *ucb, unsigned int idx, void *devid);
