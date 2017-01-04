#define __STV090x_PRIV_H
#define FE_ERROR				0
#define FE_NOTICE				1
#define FE_INFO					2
#define FE_DEBUG				3
#define FE_DEBUGREG				4
#define dprintk(__y, __z, format, arg...) do  while (0)
#define STV090x_READ_DEMOD(__state, __reg) ((			\
(__state)->demod == STV090x_DEMODULATOR_1)	?	\
stv090x_read_reg(__state, STV090x_P2_##__reg) :		\
stv090x_read_reg(__state, STV090x_P1_##__reg))
#define STV090x_WRITE_DEMOD(__state, __reg, __data) ((		\
(__state)->demod == STV090x_DEMODULATOR_1)	?	\
stv090x_write_reg(__state, STV090x_P2_##__reg, __data) :\
stv090x_write_reg(__state, STV090x_P1_##__reg, __data))
#define STV090x_ADDR_OFFST(__state, __x) ((			\
(__state->demod) == STV090x_DEMODULATOR_1)	?	\
STV090x_P1_##__x :				\
STV090x_P2_##__x)
#define STV090x_SETFIELD(mask, bitf, val)	(mask = (mask & (~(((1 << STV090x_WIDTH_##bitf) - 1) <<\
STV090x_OFFST_##bitf))) | \
(val << STV090x_OFFST_##bitf))
#define STV090x_GETFIELD(val, bitf)		((val >> STV090x_OFFST_##bitf) & ((1 << STV090x_WIDTH_##bitf) - 1))
#define STV090x_SETFIELD_Px(mask, bitf, val)	(mask = (mask & (~(((1 << STV090x_WIDTH_Px_##bitf) - 1) <<\
STV090x_OFFST_Px_##bitf))) | \
(val << STV090x_OFFST_Px_##bitf))
#define STV090x_GETFIELD_Px(val, bitf)		((val >> STV090x_OFFST_Px_##bitf) & ((1 << STV090x_WIDTH_Px_##bitf) - 1))
#define MAKEWORD16(__a, __b)			(((__a) << 8) | (__b))
#define MSB(__x)				((__x >> 8) & 0xff)
#define LSB(__x)				(__x & 0xff)
#define STV090x_IQPOWER_THRESHOLD	  30
#define STV090x_SEARCH_AGC2_TH_CUT20	 700
#define STV090x_SEARCH_AGC2_TH_CUT30	1400
#define STV090x_SEARCH_AGC2_TH(__ver)	\
((__ver <= 0x20) ?		\
STV090x_SEARCH_AGC2_TH_CUT20 :	\
STV090x_SEARCH_AGC2_TH_CUT30)
enum stv090x_signal_state ;
enum stv090x_fec ;
enum stv090x_modulation ;
enum stv090x_frame ;
enum stv090x_pilot ;
enum stv090x_rolloff ;
enum stv090x_inversion ;
enum stv090x_modcod ;
enum stv090x_search ;
enum stv090x_algo ;
enum stv090x_delsys ;
struct stv090x_long_frame_crloop ;
struct stv090x_short_frame_crloop ;
struct stv090x_reg ;
struct stv090x_tab ;
struct stv090x_internal ;
struct stv090x_state ;
