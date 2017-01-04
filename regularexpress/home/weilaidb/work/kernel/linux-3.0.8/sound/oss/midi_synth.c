#define USE_SEQ_MACROS
#define USE_SIMPLE_MACROS
#define _MIDI_SYNTH_C_
static int      midi2synth[MAX_MIDI_DEV];
static int      sysex_state[MAX_MIDI_DEV] =
;
static unsigned char prev_out_status[MAX_MIDI_DEV];
#define STORE(cmd) \
#define _seqbuf obuf
#define _seqbufptr 0
#define _SEQ_ADVBUF(x) len=x
void
do_midi_msg(int synthno, unsigned char *msg, int mlen)
EXPORT_SYMBOL(do_midi_msg);
static void
midi_outc(int midi_dev, int data)
static int
prefix_cmd(int midi_dev, unsigned char status)
static void
midi_synth_input(int orig_dev, unsigned char data)
static void
leave_sysex(int dev)
static void
midi_synth_output(int dev)
int midi_synth_ioctl(int dev, unsigned int cmd, void __user *arg)
EXPORT_SYMBOL(midi_synth_ioctl);
int
midi_synth_kill_note(int dev, int channel, int note, int velocity)
EXPORT_SYMBOL(midi_synth_kill_note);
int
midi_synth_set_instr(int dev, int channel, int instr_no)
EXPORT_SYMBOL(midi_synth_set_instr);
int
midi_synth_start_note(int dev, int channel, int note, int velocity)
EXPORT_SYMBOL(midi_synth_start_note);
void
midi_synth_reset(int dev)
EXPORT_SYMBOL(midi_synth_reset);
int
midi_synth_open(int dev, int mode)
EXPORT_SYMBOL(midi_synth_open);
void
midi_synth_close(int dev)
EXPORT_SYMBOL(midi_synth_close);
void
midi_synth_hw_control(int dev, unsigned char *event)
EXPORT_SYMBOL(midi_synth_hw_control);
int
midi_synth_load_patch(int dev, int format, const char __user *addr,
int count, int pmgr_flag)
EXPORT_SYMBOL(midi_synth_load_patch);
void midi_synth_panning(int dev, int channel, int pressure)
EXPORT_SYMBOL(midi_synth_panning);
void midi_synth_aftertouch(int dev, int channel, int pressure)
EXPORT_SYMBOL(midi_synth_aftertouch);
void
midi_synth_controller(int dev, int channel, int ctrl_num, int value)
EXPORT_SYMBOL(midi_synth_controller);
void
midi_synth_bender(int dev, int channel, int value)
EXPORT_SYMBOL(midi_synth_bender);
void
midi_synth_setup_voice(int dev, int voice, int channel)
EXPORT_SYMBOL(midi_synth_setup_voice);
int
midi_synth_send_sysex(int dev, unsigned char *bytes, int len)
EXPORT_SYMBOL(midi_synth_send_sysex);
