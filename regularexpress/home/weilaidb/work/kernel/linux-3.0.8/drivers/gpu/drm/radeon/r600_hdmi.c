enum r600_hdmi_color_format ;
enum r600_hdmi_iec_status_bits ;
struct  r600_hdmi_ACR[] = ;
static void r600_hdmi_calc_CTS(uint32_t clock, int *CTS, int N, int freq)
static void r600_hdmi_update_ACR(struct drm_encoder *encoder, uint32_t clock)
static void r600_hdmi_infoframe_checksum(uint8_t packetType,
uint8_t versionNumber,
uint8_t length,
uint8_t *frame)
static void r600_hdmi_videoinfoframe(
struct drm_encoder *encoder,
enum r600_hdmi_color_format color_format,
int active_information_present,
uint8_t active_format_aspect_ratio,
uint8_t scan_information,
uint8_t colorimetry,
uint8_t ex_colorimetry,
uint8_t quantization,
int ITC,
uint8_t picture_aspect_ratio,
uint8_t video_format_identification,
uint8_t pixel_repetition,
uint8_t non_uniform_picture_scaling,
uint8_t bar_info_data_valid,
uint16_t top_bar,
uint16_t bottom_bar,
uint16_t left_bar,
uint16_t right_bar
)
static void r600_hdmi_audioinfoframe(
struct drm_encoder *encoder,
uint8_t channel_count,
uint8_t coding_type,
uint8_t sample_size,
uint8_t sample_frequency,
uint8_t format,
uint8_t channel_allocation,
uint8_t level_shift,
int downmix_inhibit
)
static int r600_hdmi_is_audio_buffer_filled(struct drm_encoder *encoder)
int r600_hdmi_buffer_status_changed(struct drm_encoder *encoder)
void r600_hdmi_audio_workaround(struct drm_encoder *encoder)
void r600_hdmi_setmode(struct drm_encoder *encoder, struct drm_display_mode *mode)
void r600_hdmi_update_audio_settings(struct drm_encoder *encoder)
static int r600_hdmi_find_free_block(struct drm_device *dev)
static void r600_hdmi_assign_block(struct drm_encoder *encoder)
void r600_hdmi_enable(struct drm_encoder *encoder)
void r600_hdmi_disable(struct drm_encoder *encoder)
