static int extended_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev);
static int chn_voice_event(struct seq_oss_devinfo *dp, union evrec *event_rec, struct snd_seq_event *ev);
static int chn_common_event(struct seq_oss_devinfo *dp, union evrec *event_rec, struct snd_seq_event *ev);
static int timing_event(struct seq_oss_devinfo *dp, union evrec *event_rec, struct snd_seq_event *ev);
static int local_event(struct seq_oss_devinfo *dp, union evrec *event_rec, struct snd_seq_event *ev);
static int old_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev);
static int note_on_event(struct seq_oss_devinfo *dp, int dev, int ch, int note, int vel, struct snd_seq_event *ev);
static int note_off_event(struct seq_oss_devinfo *dp, int dev, int ch, int note, int vel, struct snd_seq_event *ev);
static int set_note_event(struct seq_oss_devinfo *dp, int dev, int type, int ch, int note, int vel, struct snd_seq_event *ev);
static int set_control_event(struct seq_oss_devinfo *dp, int dev, int type, int ch, int param, int val, struct snd_seq_event *ev);
static int set_echo_event(struct seq_oss_devinfo *dp, union evrec *rec, struct snd_seq_event *ev);
int
snd_seq_oss_process_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
old_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
extended_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
chn_voice_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
chn_common_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
timing_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
local_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev)
static int
note_on_event(struct seq_oss_devinfo *dp, int dev, int ch, int note, int vel, struct snd_seq_event *ev)
static int
note_off_event(struct seq_oss_devinfo *dp, int dev, int ch, int note, int vel, struct snd_seq_event *ev)
static int
set_note_event(struct seq_oss_devinfo *dp, int dev, int type, int ch, int note, int vel, struct snd_seq_event *ev)
static int
set_control_event(struct seq_oss_devinfo *dp, int dev, int type, int ch, int param, int val, struct snd_seq_event *ev)
static int
set_echo_event(struct seq_oss_devinfo *dp, union evrec *rec, struct snd_seq_event *ev)
int
snd_seq_oss_event_input(struct snd_seq_event *ev, int direct, void *private_data,
int atomic, int hop)
