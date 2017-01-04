static int load_asic(struct echoaudio *chip);
static int dsp_set_digital_mode(struct echoaudio *chip, u8 mode);
static int set_digital_mode(struct echoaudio *chip, u8 mode);
static int check_asic_status(struct echoaudio *chip);
static int set_sample_rate(struct echoaudio *chip, u32 rate);
static int set_input_clock(struct echoaudio *chip, u16 clock);
static int set_professional_spdif(struct echoaudio *chip, char prof);
static int set_phantom_power(struct echoaudio *chip, char on);
static int write_control_reg(struct echoaudio *chip, u32 ctl, u32 frq,
char force);
static int init_hw(struct echoaudio *chip, u16 device_id, u16 subdevice_id)
static int set_mixer_defaults(struct echoaudio *chip)
static int set_phantom_power(struct echoaudio *chip, char on)
