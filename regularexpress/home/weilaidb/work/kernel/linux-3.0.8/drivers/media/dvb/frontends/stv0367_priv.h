#define STV0367_PRIV_H
#define TRUE (1 == 1)
#define FALSE (!TRUE)
#define NULL 0
#define ABS(X) ((X) < 0 ? (-1 * (X)) : (X))
#define MAX(X, Y) ((X) >= (Y) ? (X) : (Y))
#define MIN(X, Y) ((X) <= (Y) ? (X) : (Y))
#define INRANGE(X, Y, Z) \
((((X) <= (Y)) && ((Y) <= (Z))) || \
(((Z) <= (Y)) && ((Y) <= (X))) ? 1 : 0)
#define MAKEWORD(X, Y) (((X) << 8) + (Y))
#define LSB(X) (((X) & 0xff))
#define MSB(Y) (((Y) >> 8) & 0xff)
#define MMSB(Y)(((Y) >> 16) & 0xff)
enum stv0367_ter_signal_type ;
enum stv0367_ts_mode ;
enum stv0367_clk_pol ;
enum stv0367_ter_bw ;
enum stv0367_ter_mode ;
enum stv0367_ter_hierarchy ;
enum stv0367_ter_if_iq_mode ;
enum stv0367_ter_force ;
enum  stv0367cab_mod ;
struct stv0367_cab_signal_info ;
enum stv0367_cab_signal_type ;
