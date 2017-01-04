#define _AV7110_H_
#define ANALOG_TUNER_VES1820 1
#define ANALOG_TUNER_STV0297 2
extern int av7110_debug;
#define dprintk(level,args...) \
do  while (0)
#define MAXFILT 32
enum ;
enum av7110_video_mode ;
struct av7110_p2t ;
#define MAX_VIDEO_EVENT 8
struct dvb_video_events ;
struct av7110;
struct infrared ;
struct av7110 ;
extern int ChangePIDs(struct av7110 *av7110, u16 vpid, u16 apid, u16 ttpid,
u16 subpid, u16 pcrpid);
extern int av7110_check_ir_config(struct av7110 *av7110, int force);
extern int av7110_ir_init(struct av7110 *av7110);
extern void av7110_ir_exit(struct av7110 *av7110);
#define MSP_WR_DEM 0x10
#define MSP_RD_DEM 0x11
#define MSP_WR_DSP 0x12
#define MSP_RD_DSP 0x13
extern int i2c_writereg(struct av7110 *av7110, u8 id, u8 reg, u8 val);
extern u8 i2c_readreg(struct av7110 *av7110, u8 id, u8 reg);
extern int msp_writereg(struct av7110 *av7110, u8 dev, u16 reg, u16 val);
extern int av7110_init_analog_module(struct av7110 *av7110);
extern int av7110_init_v4l(struct av7110 *av7110);
extern int av7110_exit_v4l(struct av7110 *av7110);
