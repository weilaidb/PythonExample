#define __STB0899_PRIV_H
#define FE_ERROR				0
#define FE_NOTICE				1
#define FE_INFO					2
#define FE_DEBUG				3
#define FE_DEBUGREG				4
#define dprintk(x, y, z, format, arg...) do  while(0)
#define INRANGE(val, x, y)			(((x <= val) && (val <= y)) ||		\
((y <= val) && (val <= x)) ? 1 : 0)
#define BYTE0					0
#define BYTE1					8
#define BYTE2					16
#define BYTE3					24
#define GETBYTE(x, y)				(((x) >> (y)) & 0xff)
#define MAKEWORD32(a, b, c, d)			(((a) << 24) | ((b) << 16) | ((c) << 8) | (d))
#define MAKEWORD16(a, b)			(((a) << 8) | (b))
#define LSB(x)					((x & 0xff))
#define MSB(y)					((y >> 8) & 0xff)
#define STB0899_GETFIELD(bitf, val)		((val >> STB0899_OFFST_##bitf) & ((1 << STB0899_WIDTH_##bitf) - 1))
#define STB0899_SETFIELD(mask, val, width, offset)      (mask & (~(((1 << width) - 1) <<	\
offset))) | ((val &			\
((1 << width) - 1)) << offset)
#define STB0899_SETFIELD_VAL(bitf, mask, val)	(mask = (mask & (~(((1 << STB0899_WIDTH_##bitf) - 1) <<\
STB0899_OFFST_##bitf))) | \
(val << STB0899_OFFST_##bitf))
enum stb0899_status ;
enum stb0899_modcod ;
enum stb0899_frame ;
enum stb0899_alpha ;
struct stb0899_tab ;
enum stb0899_fec ;
struct stb0899_params ;
struct stb0899_internal ;
struct stb0899_state ;
extern int stb0899_read_reg(struct stb0899_state *state,
unsigned int reg);
extern u32 _stb0899_read_s2reg(struct stb0899_state *state,
u32 stb0899_i2cdev,
u32 stb0899_base_addr,
u16 stb0899_reg_offset);
extern int stb0899_read_regs(struct stb0899_state *state,
unsigned int reg, u8 *buf,
u32 count);
extern int stb0899_write_regs(struct stb0899_state *state,
unsigned int reg, u8 *data,
u32 count);
extern int stb0899_write_reg(struct stb0899_state *state,
unsigned int reg,
u8 data);
extern int stb0899_write_s2reg(struct stb0899_state *state,
u32 stb0899_i2cdev,
u32 stb0899_base_addr,
u16 stb0899_reg_offset,
u32 stb0899_data);
extern int stb0899_i2c_gate_ctrl(struct dvb_frontend *fe, int enable);
#define STB0899_READ_S2REG(DEVICE, REG) 	(_stb0899_read_s2reg(state, DEVICE, STB0899_BASE_##REG, STB0899_OFF0_##REG))
extern enum stb0899_status stb0899_dvbs_algo(struct stb0899_state *state);
extern enum stb0899_status stb0899_dvbs2_algo(struct stb0899_state *state);
extern long stb0899_carr_width(struct stb0899_state *state);
