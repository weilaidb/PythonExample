int midi_synth_ioctl (int dev,
unsigned int cmd, void __user * arg);
int midi_synth_kill_note (int dev, int channel, int note, int velocity);
int midi_synth_set_instr (int dev, int channel, int instr_no);
int midi_synth_start_note (int dev, int channel, int note, int volume);
void midi_synth_reset (int dev);
int midi_synth_open (int dev, int mode);
void midi_synth_close (int dev);
void midi_synth_hw_control (int dev, unsigned char *event);
int midi_synth_load_patch (int dev, int format, const char __user * addr,
int count, int pmgr_flag);
void midi_synth_panning (int dev, int channel, int pressure);
void midi_synth_aftertouch (int dev, int channel, int pressure);
void midi_synth_controller (int dev, int channel, int ctrl_num, int value);
void midi_synth_bender (int dev, int chn, int value);
void midi_synth_setup_voice (int dev, int voice, int chn);
int midi_synth_send_sysex(int dev, unsigned char *bytes,int len);
static struct synth_info std_synth_info =
;
static struct synth_operations std_midi_synth =
;
