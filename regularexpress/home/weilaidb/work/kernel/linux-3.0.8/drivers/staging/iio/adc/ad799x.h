#define  _AD799X_H_
#define AD799X_CHANNEL_SHIFT			4
#define AD799X_STORAGEBITS			16
#define AD7991_REF_SEL				0x08
#define AD7991_FLTR				0x04
#define AD7991_BIT_TRIAL_DELAY			0x02
#define AD7991_SAMPLE_DELAY			0x01
#define AD7998_FLTR				0x08
#define AD7998_ALERT_EN				0x04
#define AD7998_BUSY_ALERT			0x02
#define AD7998_BUSY_ALERT_POL			0x01
#define AD7998_CONV_RES_REG			0x0
#define AD7998_ALERT_STAT_REG			0x1
#define AD7998_CONF_REG				0x2
#define AD7998_CYCLE_TMR_REG			0x3
#define AD7998_DATALOW_CH1_REG			0x4
#define AD7998_DATAHIGH_CH1_REG			0x5
#define AD7998_HYST_CH1_REG			0x6
#define AD7998_DATALOW_CH2_REG			0x7
#define AD7998_DATAHIGH_CH2_REG			0x8
#define AD7998_HYST_CH2_REG			0x9
#define AD7998_DATALOW_CH3_REG			0xA
#define AD7998_DATAHIGH_CH3_REG			0xB
#define AD7998_HYST_CH3_REG			0xC
#define AD7998_DATALOW_CH4_REG			0xD
#define AD7998_DATAHIGH_CH4_REG			0xE
#define AD7998_HYST_CH4_REG			0xF
#define AD7998_CYC_MASK				0x7
#define AD7998_CYC_DIS				0x0
#define AD7998_CYC_TCONF_32			0x1
#define AD7998_CYC_TCONF_64			0x2
#define AD7998_CYC_TCONF_128			0x3
#define AD7998_CYC_TCONF_256			0x4
#define AD7998_CYC_TCONF_512			0x5
#define AD7998_CYC_TCONF_1024			0x6
#define AD7998_CYC_TCONF_2048			0x7
#define AD7998_ALERT_STAT_CLEAR			0xFF
#define AD7997_8_READ_SINGLE			0x80
#define AD7997_8_READ_SEQUENCE			0x70
#define RES_MASK(bits)	((1 << (bits)) - 1)
enum ;
struct ad799x_state;
struct ad799x_chip_info ;
struct ad799x_state ;
struct ad799x_platform_data ;
int ad7997_8_set_scan_mode(struct ad799x_state *st, unsigned mask);
int ad799x_single_channel_from_ring(struct ad799x_state *st, long mask);
int ad799x_register_ring_funcs_and_init(struct iio_dev *indio_dev);
void ad799x_ring_cleanup(struct iio_dev *indio_dev);
int ad799x_single_channel_from_ring(struct ad799x_state *st, long mask)
static inline int
ad799x_register_ring_funcs_and_init(struct iio_dev *indio_dev)
static inline void ad799x_ring_cleanup(struct iio_dev *indio_dev)
