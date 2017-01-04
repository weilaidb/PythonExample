static int set_sample_rate(struct echoaudio *chip, u32 rate)
static int set_vmixer_gain(struct echoaudio *chip, u16 output, u16 pipe,
int gain)
static int update_vmixer_level(struct echoaudio *chip)
static u32 detect_input_clocks(const struct echoaudio *chip)
static int load_asic(struct echoaudio *chip)
