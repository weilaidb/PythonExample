static void hdmi_write_command(struct oxygen *chip, u8 command,
unsigned int count, const u8 *params)
static void xonar_hdmi_init_commands(struct oxygen *chip,
struct xonar_hdmi *hdmi)
void xonar_hdmi_init(struct oxygen *chip, struct xonar_hdmi *hdmi)
void xonar_hdmi_cleanup(struct oxygen *chip)
void xonar_hdmi_resume(struct oxygen *chip, struct xonar_hdmi *hdmi)
void xonar_hdmi_pcm_hardware_filter(unsigned int channel,
struct snd_pcm_hardware *hardware)
void xonar_set_hdmi_params(struct oxygen *chip, struct xonar_hdmi *hdmi,
struct snd_pcm_hw_params *params)
void xonar_hdmi_uart_input(struct oxygen *chip)
