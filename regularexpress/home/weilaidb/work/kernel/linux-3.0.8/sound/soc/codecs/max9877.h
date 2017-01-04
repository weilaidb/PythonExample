#define _MAX9877_H
#define MAX9877_INPUT_MODE		0x00
#define MAX9877_SPK_VOLUME		0x01
#define MAX9877_HPL_VOLUME		0x02
#define MAX9877_HPR_VOLUME		0x03
#define MAX9877_OUTPUT_MODE		0x04
#define MAX9877_INB			(1 << 4)
#define MAX9877_INA			(1 << 5)
#define MAX9877_ZCD			(1 << 6)
#define MAX9877_OUTMODE_MASK		(15 << 0)
#define MAX9877_OSC_MASK		(3 << 4)
#define MAX9877_OSC_OFFSET		4
#define MAX9877_BYPASS			(1 << 6)
#define MAX9877_SHDN			(1 << 7)
extern int max9877_add_controls(struct snd_soc_codec *codec);
