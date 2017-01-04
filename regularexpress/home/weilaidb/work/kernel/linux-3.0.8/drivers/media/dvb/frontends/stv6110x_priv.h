#define __STV6110x_PRIV_H
#define FE_ERROR				0
#define FE_NOTICE				1
#define FE_INFO					2
#define FE_DEBUG				3
#define FE_DEBUGREG				4
#define dprintk(__y, __z, format, arg...) do  while (0)
#define STV6110x_SETFIELD(mask, bitf, val)				\
(mask = (mask & (~(((1 << STV6110x_WIDTH_##bitf) - 1) <<	\
STV6110x_OFFST_##bitf))) | 		\
(val << STV6110x_OFFST_##bitf))
#define STV6110x_GETFIELD(bitf, val)					\
((val >> STV6110x_OFFST_##bitf) & 				\
((1 << STV6110x_WIDTH_##bitf) - 1))
#define MAKEWORD16(a, b)			(((a) << 8) | (b))
#define LSB(x)					((x & 0xff))
#define MSB(y)					((y >> 8) & 0xff)
#define TRIALS					10
#define R_DIV(__div)				(1 << (__div + 1))
#define REFCLOCK_kHz				(stv6110x->config->refclk /    1000)
#define REFCLOCK_MHz				(stv6110x->config->refclk / 1000000)
struct stv6110x_state ;
