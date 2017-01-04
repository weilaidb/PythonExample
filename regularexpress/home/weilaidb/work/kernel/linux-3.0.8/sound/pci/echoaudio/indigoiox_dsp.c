static int update_vmixer_level(struct echoaudio *chip);
static int set_vmixer_gain(struct echoaudio *chip, u16 output,
u16 pipe, int gain);
static int init_hw(struct echoaudio *chip, u16 device_id, u16 subdevice_id)
static int set_mixer_defaults(struct echoaudio *chip)
