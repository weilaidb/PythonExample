#define STV0900_PRIV_H
#define ABS(X) ((X) < 0 ? (-1 * (X)) : (X))
#define INRANGE(X, Y, Z) ((((X) <= (Y)) && ((Y) <= (Z))) \
|| (((Z) <= (Y)) && ((Y) <= (X))) ? 1 : 0)
#define MAKEWORD(X, Y) (((X) << 8) + (Y))
#define LSB(X) (((X) & 0xFF))
#define MSB(Y) (((Y) >> 8) & 0xFF)
#define TRUE (1 == 1)
#define FALSE (!TRUE)
#define dprintk(args...) \
do  while (0)
#define STV0900_MAXLOOKUPSIZE 500
#define STV0900_BLIND_SEARCH_AGC2_TH 700
#define STV0900_BLIND_SEARCH_AGC2_TH_CUT30 1400
#define IQPOWER_THRESHOLD  30
struct stv000_lookpoint ;
struct stv0900_table;
enum fe_stv0900_error ;
enum fe_stv0900_clock_type ;
enum fe_stv0900_search_state ;
enum fe_stv0900_ldpc_state ;
enum fe_stv0900_signal_type ;
enum fe_stv0900_demod_num ;
enum fe_stv0900_tracking_standard ;
enum fe_stv0900_search_standard ;
enum fe_stv0900_search_algo ;
enum fe_stv0900_modulation ;
enum fe_stv0900_modcode ;
enum fe_stv0900_fec ;
enum fe_stv0900_frame_length ;
enum fe_stv0900_pilot ;
enum fe_stv0900_rolloff ;
enum fe_stv0900_search_iq ;
enum stv0900_iq_inversion ;
enum fe_stv0900_diseqc_mode ;
enum fe_stv0900_demod_mode ;
struct stv0900_init_params;
struct stv0900_search_params ;
struct stv0900_signal_info ;
struct stv0900_internal;
struct stv0900_state ;
extern int stvdebug;
extern s32 ge2comp(s32 a, s32 width);
extern void stv0900_write_reg(struct stv0900_internal *i_params,
u16 reg_addr, u8 reg_data);
extern u8 stv0900_read_reg(struct stv0900_internal *i_params,
u16 reg_addr);
extern void stv0900_write_bits(struct stv0900_internal *i_params,
u32 label, u8 val);
extern u8 stv0900_get_bits(struct stv0900_internal *i_params,
u32 label);
extern int stv0900_get_demod_lock(struct stv0900_internal *i_params,
enum fe_stv0900_demod_num demod, s32 time_out);
extern int stv0900_check_signal_presence(struct stv0900_internal *i_params,
enum fe_stv0900_demod_num demod);
extern enum fe_stv0900_signal_type stv0900_algo(struct dvb_frontend *fe);
extern void stv0900_set_tuner(struct dvb_frontend *fe, u32 frequency,
u32 bandwidth);
extern void stv0900_set_bandwidth(struct dvb_frontend *fe, u32 bandwidth);
extern void stv0900_start_search(struct stv0900_internal *i_params,
enum fe_stv0900_demod_num demod);
extern u8 stv0900_get_optim_carr_loop(s32 srate,
enum fe_stv0900_modcode modcode,
s32 pilot, u8 chip_id);
extern u8 stv0900_get_optim_short_carr_loop(s32 srate,
enum fe_stv0900_modulation modulation,
u8 chip_id);
extern void stv0900_stop_all_s2_modcod(struct stv0900_internal *i_params,
enum fe_stv0900_demod_num demod);
extern void stv0900_activate_s2_modcod(struct stv0900_internal *i_params,
enum fe_stv0900_demod_num demod);
extern void stv0900_activate_s2_modcod_single(struct stv0900_internal *i_params,
enum fe_stv0900_demod_num demod);
extern enum
fe_stv0900_tracking_standard stv0900_get_standard(struct dvb_frontend *fe,
enum fe_stv0900_demod_num demod);
extern u32
stv0900_get_freq_auto(struct stv0900_internal *intp, int demod);
extern void
stv0900_set_tuner_auto(struct stv0900_internal *intp, u32 Frequency,
u32 Bandwidth, int demod);
