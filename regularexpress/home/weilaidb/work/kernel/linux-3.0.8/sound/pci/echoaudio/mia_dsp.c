static int set_input_clock(struct echoaudio *chip, u16 clock);
static int set_professional_spdif(struct echoaudio *chip, char prof);
static int update_flags(struct echoaudio *chip);
static int set_vmixer_gain(struct echoaudio *chip, u16 output, u16 pipe,
int gain);
static int update_vmixer_level(struct echoaudio *chip);
static int init_hw(struct echoaudio *chip, u16 device_id, u16 subdevice_id)
static int set_mixer_defaults(struct echoaudio *chip)
static u32 detect_input_clocks(const struct echoaudio *chip)
static int load_asic(struct echoaudio *chip)
static int set_sample_rate(struct echoaudio *chip, u32 rate)
static int set_input_clock(struct echoaudio *chip, u16 clock)
static int set_vmixer_gain(struct echoaudio *chip, u16 output, u16 pipe,
int gain)
static int update_vmixer_level(struct echoaudio *chip)
static int update_flags(struct echoaudio *chip)
static int set_professional_spdif(struct echoaudio *chip, char prof)
