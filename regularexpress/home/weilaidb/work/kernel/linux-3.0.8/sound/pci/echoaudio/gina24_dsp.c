static int write_control_reg(struct echoaudio *chip, u32 value, char force);
static int set_input_clock(struct echoaudio *chip, u16 clock);
static int set_professional_spdif(struct echoaudio *chip, char prof);
static int set_digital_mode(struct echoaudio *chip, u8 mode);
static int load_asic_generic(struct echoaudio *chip, u32 cmd, short asic);
static int check_asic_status(struct echoaudio *chip);
static int init_hw(struct echoaudio *chip, u16 device_id, u16 subdevice_id)
static int set_mixer_defaults(struct echoaudio *chip)
static u32 detect_input_clocks(const struct echoaudio *chip)
static int load_asic(struct echoaudio *chip)
static int set_sample_rate(struct echoaudio *chip, u32 rate)
static int set_input_clock(struct echoaudio *chip, u16 clock)
static int dsp_set_digital_mode(struct echoaudio *chip, u8 mode)
