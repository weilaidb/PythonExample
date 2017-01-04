#define __SEQ_OSS_SYNTH_H
void snd_seq_oss_synth_init(void);
int snd_seq_oss_synth_register(struct snd_seq_device *dev);
int snd_seq_oss_synth_unregister(struct snd_seq_device *dev);
void snd_seq_oss_synth_setup(struct seq_oss_devinfo *dp);
void snd_seq_oss_synth_setup_midi(struct seq_oss_devinfo *dp);
void snd_seq_oss_synth_cleanup(struct seq_oss_devinfo *dp);
void snd_seq_oss_synth_reset(struct seq_oss_devinfo *dp, int dev);
int snd_seq_oss_synth_load_patch(struct seq_oss_devinfo *dp, int dev, int fmt,
const char __user *buf, int p, int c);
int snd_seq_oss_synth_is_valid(struct seq_oss_devinfo *dp, int dev);
int snd_seq_oss_synth_sysex(struct seq_oss_devinfo *dp, int dev, unsigned char *buf,
struct snd_seq_event *ev);
int snd_seq_oss_synth_addr(struct seq_oss_devinfo *dp, int dev, struct snd_seq_event *ev);
int snd_seq_oss_synth_ioctl(struct seq_oss_devinfo *dp, int dev, unsigned int cmd,
unsigned long addr);
int snd_seq_oss_synth_raw_event(struct seq_oss_devinfo *dp, int dev,
unsigned char *data, struct snd_seq_event *ev);
int snd_seq_oss_synth_make_info(struct seq_oss_devinfo *dp, int dev, struct synth_info *inf);
