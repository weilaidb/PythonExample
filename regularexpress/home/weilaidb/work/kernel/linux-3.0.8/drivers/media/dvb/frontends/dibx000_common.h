#define DIBX000_COMMON_H
enum dibx000_i2c_interface ;
struct dibx000_i2c_master ;
extern int dibx000_init_i2c_master(struct dibx000_i2c_master *mst,
u16 device_rev, struct i2c_adapter *i2c_adap,
u8 i2c_addr);
extern struct i2c_adapter *dibx000_get_i2c_adapter(struct dibx000_i2c_master
*mst,
enum dibx000_i2c_interface
intf, int gating);
extern void dibx000_exit_i2c_master(struct dibx000_i2c_master *mst);
extern void dibx000_reset_i2c_master(struct dibx000_i2c_master *mst);
extern int dibx000_i2c_set_speed(struct i2c_adapter *i2c_adap, u16 speed);
extern u32 systime(void);
#define BAND_LBAND 0x01
#define BAND_UHF   0x02
#define BAND_VHF   0x04
#define BAND_SBAND 0x08
#define BAND_FM	   0x10
#define BAND_CBAND 0x20
#define BAND_OF_FREQUENCY(freq_kHz) ((freq_kHz) <= 170000 ? BAND_CBAND : \
(freq_kHz) <= 115000 ? BAND_FM : \
(freq_kHz) <= 250000 ? BAND_VHF : \
(freq_kHz) <= 863000 ? BAND_UHF : \
(freq_kHz) <= 2000000 ? BAND_LBAND : BAND_SBAND )
struct dibx000_agc_config ;
struct dibx000_bandwidth_config ;
enum dibx000_adc_states ;
#define BANDWIDTH_TO_KHZ(v) ((v) == BANDWIDTH_8_MHZ  ? 8000 : \
(v) == BANDWIDTH_7_MHZ  ? 7000 : \
(v) == BANDWIDTH_6_MHZ  ? 6000 : 8000)
#define BANDWIDTH_TO_INDEX(v) ( \
(v) == 8000 ? BANDWIDTH_8_MHZ : \
(v) == 7000 ? BANDWIDTH_7_MHZ : \
(v) == 6000 ? BANDWIDTH_6_MHZ : BANDWIDTH_8_MHZ )
#define OUTMODE_HIGH_Z              0
#define OUTMODE_MPEG2_PAR_GATED_CLK 1
#define OUTMODE_MPEG2_PAR_CONT_CLK  2
#define OUTMODE_MPEG2_SERIAL        7
#define OUTMODE_DIVERSITY           4
#define OUTMODE_MPEG2_FIFO          5
#define OUTMODE_ANALOG_ADC          6
#define INPUT_MODE_OFF                0x11
#define INPUT_MODE_DIVERSITY          0x12
#define INPUT_MODE_MPEG               0x13
enum frontend_tune_state ;
struct dvb_frontend_parametersContext ;
#define FE_STATUS_TUNE_FAILED          0
#define FE_STATUS_TUNE_TIMED_OUT      -1
#define FE_STATUS_TUNE_TIME_TOO_SHORT -2
#define FE_STATUS_TUNE_PENDING        -3
#define FE_STATUS_STD_SUCCESS         -4
#define FE_STATUS_FFT_SUCCESS         -5
#define FE_STATUS_DEMOD_SUCCESS       -6
#define FE_STATUS_LOCKED              -7
#define FE_STATUS_DATA_LOCKED         -8
#define FE_CALLBACK_TIME_NEVER 0xffffffff
#define ABS(x) ((x < 0) ? (-x) : (x))
#define DATA_BUS_ACCESS_MODE_8BIT                 0x01
#define DATA_BUS_ACCESS_MODE_16BIT                0x02
#define DATA_BUS_ACCESS_MODE_NO_ADDRESS_INCREMENT 0x10
struct dibGPIOFunction ;
#define MAX_NB_SUBBANDS   8
struct dibSubbandSelection ;
#define DEMOD_TIMF_SET    0x00
#define DEMOD_TIMF_GET    0x01
#define DEMOD_TIMF_UPDATE 0x02
