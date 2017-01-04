#define CX18_AUDIO_ENABLE    0xc72014
#define CX18_AI1_MUX_MASK    0x30
#define CX18_AI1_MUX_I2S1    0x00
#define CX18_AI1_MUX_I2S2    0x10
#define CX18_AI1_MUX_843_I2S 0x20
#define CX18_AI1_MUX_INVALID 0x30
#define FWFILE "v4l-cx23418-dig.fw"
static int cx18_av_verifyfw(struct cx18 *cx, const struct firmware *fw)
int cx18_av_loadfw(struct cx18 *cx)
