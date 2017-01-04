#define __INTELMID_ADC_CONTROL_H_
#define MSIC_ADC1CNTL1		0x1C0
#define MSIC_ADC_ENBL		0x10
#define MSIC_ADC_START		0x08
#define MSIC_ADC1CNTL3		0x1C2
#define MSIC_ADCTHERM_ENBL	0x04
#define MSIC_ADCRRDATA_ENBL	0x05
#define MSIC_STOPBIT_MASK	16
#define MSIC_ADCTHERM_MASK	4
#define ADC_CHANLS_MAX		15
#define ADC_LOOP_MAX		(ADC_CHANLS_MAX - 1)
#define AUDIO_DETECT_CODE	0x06
#define ADC_CHNL_START_ADDR	0x1C5
#define ADC_DATA_START_ADDR     0x1D4
static inline int configure_adc(int val)
static inline int reset_stopbit(uint16_t addr)
static inline int find_free_channel(void)
static inline int mid_initialize_adc(void)
