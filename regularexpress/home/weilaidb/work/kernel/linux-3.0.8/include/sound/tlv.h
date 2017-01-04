#define __SOUND_TLV_H
#define SNDRV_CTL_TLVT_CONTAINER 0
#define SNDRV_CTL_TLVT_DB_SCALE	1
#define SNDRV_CTL_TLVT_DB_LINEAR 2
#define SNDRV_CTL_TLVT_DB_RANGE 3
#define SNDRV_CTL_TLVT_DB_MINMAX 4
#define SNDRV_CTL_TLVT_DB_MINMAX_MUTE 5
#define TLV_DB_SCALE_MASK	0xffff
#define TLV_DB_SCALE_MUTE	0x10000
#define TLV_DB_SCALE_ITEM(min, step, mute)			\
SNDRV_CTL_TLVT_DB_SCALE, 2 * sizeof(unsigned int),	\
(min), ((step) & TLV_DB_SCALE_MASK) | ((mute) ? TLV_DB_SCALE_MUTE : 0)
#define DECLARE_TLV_DB_SCALE(name, min, step, mute) \
unsigned int name[] =
#define TLV_DB_MINMAX_ITEM(min_dB, max_dB)			\
SNDRV_CTL_TLVT_DB_MINMAX, 2 * sizeof(unsigned int),	\
(min_dB), (max_dB)
#define TLV_DB_MINMAX_MUTE_ITEM(min_dB, max_dB)			\
SNDRV_CTL_TLVT_DB_MINMAX_MUTE, 2 * sizeof(unsigned int),	\
(min_dB), (max_dB)
#define DECLARE_TLV_DB_MINMAX(name, min_dB, max_dB) \
unsigned int name[] =
#define DECLARE_TLV_DB_MINMAX_MUTE(name, min_dB, max_dB) \
unsigned int name[] =
#define TLV_DB_LINEAR_ITEM(min_dB, max_dB)		    \
SNDRV_CTL_TLVT_DB_LINEAR, 2 * sizeof(unsigned int), \
(min_dB), (max_dB)
#define DECLARE_TLV_DB_LINEAR(name, min_dB, max_dB)	\
unsigned int name[] =
#define TLV_DB_RANGE_HEAD(num)			\
SNDRV_CTL_TLVT_DB_RANGE, 6 * (num) * sizeof(unsigned int)
#define TLV_DB_GAIN_MUTE	-9999999
