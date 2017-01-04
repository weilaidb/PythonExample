enum ;
static void snd_hda_generate_beep(struct work_struct *work)
static int beep_linear_tone(struct hda_beep *beep, int hz)
static int beep_standard_tone(struct hda_beep *beep, int hz)
static int snd_hda_beep_event(struct input_dev *dev, unsigned int type,
unsigned int code, int hz)
static void snd_hda_do_detach(struct hda_beep *beep)
static int snd_hda_do_attach(struct hda_beep *beep)
static void snd_hda_do_register(struct work_struct *work)
static void snd_hda_do_unregister(struct work_struct *work)
int snd_hda_enable_beep_device(struct hda_codec *codec, int enable)
EXPORT_SYMBOL_HDA(snd_hda_enable_beep_device);
int snd_hda_attach_beep_device(struct hda_codec *codec, int nid)
EXPORT_SYMBOL_HDA(snd_hda_attach_beep_device);
void snd_hda_detach_beep_device(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_detach_beep_device);
