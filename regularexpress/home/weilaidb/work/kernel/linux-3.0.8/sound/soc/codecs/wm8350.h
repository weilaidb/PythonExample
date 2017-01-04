#define _WM8350_H
enum wm8350_jack ;
int wm8350_hp_jack_detect(struct snd_soc_codec *codec, enum wm8350_jack which,
struct snd_soc_jack *jack, int report);
int wm8350_mic_jack_detect(struct snd_soc_codec *codec,
struct snd_soc_jack *jack,
int detect_report, int short_report);
