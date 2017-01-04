#define __SOUND_HDA_BEEP_H
#define HDA_BEEP_MODE_OFF	0
#define HDA_BEEP_MODE_ON	1
#define HDA_BEEP_MODE_SWREG	2
struct hda_beep ;
int snd_hda_enable_beep_device(struct hda_codec *codec, int enable);
int snd_hda_attach_beep_device(struct hda_codec *codec, int nid);
void snd_hda_detach_beep_device(struct hda_codec *codec);
static inline int snd_hda_attach_beep_device(struct hda_codec *codec, int nid)
static inline void snd_hda_detach_beep_device(struct hda_codec *codec)
