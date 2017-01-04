#define _LINUX__UCB1400_H
#define UCB_IO_DATA		0x5a
#define UCB_IO_DIR		0x5c
#define UCB_IE_RIS		0x5e
#define UCB_IE_FAL		0x60
#define UCB_IE_STATUS		0x62
#define UCB_IE_CLEAR		0x62
#define UCB_IE_ADC		(1 << 11)
#define UCB_IE_TSPX		(1 << 12)
#define UCB_TS_CR		0x64
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
#define UCB_ADC_CR		0x66
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
#define UCB_ADC_DATA		0x68
#define UCB_ADC_DAT_VALID	(1 << 15)
#define UCB_FCSR		0x6c
#define UCB_FCSR_AVE		(1 << 12)
#define UCB_ADC_DAT_MASK	0x3ff
#define UCB_ID			0x7e
#define UCB_ID_1400             0x4304
struct ucb1400_gpio_data ;
struct ucb1400_gpio ;
struct ucb1400_ts ;
struct ucb1400 ;
struct ucb1400_pdata ;
static inline u16 ucb1400_reg_read(struct snd_ac97 *ac97, u16 reg)
static inline void ucb1400_reg_write(struct snd_ac97 *ac97, u16 reg, u16 val)
static inline u16 ucb1400_gpio_get_value(struct snd_ac97 *ac97, u16 gpio)
static inline void ucb1400_gpio_set_value(struct snd_ac97 *ac97, u16 gpio,
u16 val)
static inline u16 ucb1400_gpio_get_direction(struct snd_ac97 *ac97, u16 gpio)
static inline void ucb1400_gpio_set_direction(struct snd_ac97 *ac97, u16 gpio,
u16 dir)
static inline void ucb1400_adc_enable(struct snd_ac97 *ac97)
static inline void ucb1400_adc_disable(struct snd_ac97 *ac97)
unsigned int ucb1400_adc_read(struct snd_ac97 *ac97, u16 adc_channel,
int adcsync);
void __init ucb1400_gpio_set_data(struct ucb1400_gpio_data *data);
static inline void ucb1400_gpio_set_data(struct ucb1400_gpio_data *data)
