s32 shiftx(s32 x, int demod, s32 shift)
int stv0900_check_signal_presence(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static void stv0900_get_sw_loop_params(struct stv0900_internal *intp,
s32 *frequency_inc, s32 *sw_timeout,
s32 *steps,
enum fe_stv0900_demod_num demod)
static int stv0900_search_carr_sw_loop(struct stv0900_internal *intp,
s32 FreqIncr, s32 Timeout, int zigzag,
s32 MaxStep, enum fe_stv0900_demod_num demod)
static int stv0900_sw_algo(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static u32 stv0900_get_symbol_rate(struct stv0900_internal *intp,
u32 mclk,
enum fe_stv0900_demod_num demod)
static void stv0900_set_symbol_rate(struct stv0900_internal *intp,
u32 mclk, u32 srate,
enum fe_stv0900_demod_num demod)
static void stv0900_set_max_symbol_rate(struct stv0900_internal *intp,
u32 mclk, u32 srate,
enum fe_stv0900_demod_num demod)
static void stv0900_set_min_symbol_rate(struct stv0900_internal *intp,
u32 mclk, u32 srate,
enum fe_stv0900_demod_num demod)
static s32 stv0900_get_timing_offst(struct stv0900_internal *intp,
u32 srate,
enum fe_stv0900_demod_num demod)
static void stv0900_set_dvbs2_rolloff(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static u32 stv0900_carrier_width(u32 srate, enum fe_stv0900_rolloff ro)
static int stv0900_check_timing_lock(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static int stv0900_get_demod_cold_lock(struct dvb_frontend *fe,
s32 demod_timeout)
static void stv0900_get_lock_timeout(s32 *demod_timeout, s32 *fec_timeout,
s32 srate,
enum fe_stv0900_search_algo algo)
static void stv0900_set_viterbi_tracq(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static void stv0900_set_viterbi_standard(struct stv0900_internal *intp,
enum fe_stv0900_search_standard standard,
enum fe_stv0900_fec fec,
enum fe_stv0900_demod_num demod)
static enum fe_stv0900_fec stv0900_get_vit_fec(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static void stv0900_set_dvbs1_track_car_loop(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod,
u32 srate)
static void stv0900_track_optimization(struct dvb_frontend *fe)
static int stv0900_get_fec_lock(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod, s32 time_out)
static int stv0900_wait_for_lock(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod,
s32 dmd_timeout, s32 fec_timeout)
enum fe_stv0900_tracking_standard stv0900_get_standard(struct dvb_frontend *fe,
enum fe_stv0900_demod_num demod)
static s32 stv0900_get_carr_freq(struct stv0900_internal *intp, u32 mclk,
enum fe_stv0900_demod_num demod)
static u32 stv0900_get_tuner_freq(struct dvb_frontend *fe)
static enum
fe_stv0900_signal_type stv0900_get_signal_params(struct dvb_frontend *fe)
static enum
fe_stv0900_signal_type stv0900_dvbs1_acq_workaround(struct dvb_frontend *fe)
static u16 stv0900_blind_check_agc2_min_level(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static u32 stv0900_search_srate_coarse(struct dvb_frontend *fe)
static u32 stv0900_search_srate_fine(struct dvb_frontend *fe)
static int stv0900_blind_search_algo(struct dvb_frontend *fe)
static void stv0900_set_viterbi_acq(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static void stv0900_set_search_standard(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
enum fe_stv0900_signal_type stv0900_algo(struct dvb_frontend *fe)
