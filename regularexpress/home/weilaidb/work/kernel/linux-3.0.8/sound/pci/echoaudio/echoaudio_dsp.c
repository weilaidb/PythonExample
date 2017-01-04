#if PAGE_SIZE < 4096
#error PAGE_SIZE is < 4k
static int restore_dsp_rettings(struct echoaudio *chip);
static int wait_handshake(struct echoaudio *chip)
static int send_vector(struct echoaudio *chip, u32 command)
static int write_dsp(struct echoaudio *chip, u32 data)
static int read_dsp(struct echoaudio *chip, u32 *data)
static int read_sn(struct echoaudio *chip)
static inline int check_asic_status(struct echoaudio *chip)
static int load_asic_generic(struct echoaudio *chip, u32 cmd, short asic)
static int install_resident_loader(struct echoaudio *chip)
static int load_dsp(struct echoaudio *chip, u16 *code)
static int load_firmware(struct echoaudio *chip)
#if defined(ECHOCARD_HAS_INPUT_NOMINAL_LEVEL) || \
defined(ECHOCARD_HAS_OUTPUT_NOMINAL_LEVEL)
static int set_nominal_level(struct echoaudio *chip, u16 index, char consumer)
static int set_output_gain(struct echoaudio *chip, u16 channel, s8 gain)
static int set_monitor_gain(struct echoaudio *chip, u16 output, u16 input,
s8 gain)
static int update_output_line_level(struct echoaudio *chip)
static int update_input_line_level(struct echoaudio *chip)
static void set_meters_on(struct echoaudio *chip, char on)
static void get_audio_meters(struct echoaudio *chip, long *meters)
static int restore_dsp_rettings(struct echoaudio *chip)
static void set_audio_format(struct echoaudio *chip, u16 pipe_index,
const struct audioformat *format)
static int start_transport(struct echoaudio *chip, u32 channel_mask,
u32 cyclic_mask)
static int pause_transport(struct echoaudio *chip, u32 channel_mask)
static int stop_transport(struct echoaudio *chip, u32 channel_mask)
static inline int is_pipe_allocated(struct echoaudio *chip, u16 pipe_index)
static int rest_in_peace(struct echoaudio *chip)
static int init_dsp_comm_page(struct echoaudio *chip)
static int init_line_levels(struct echoaudio *chip)
static int service_irq(struct echoaudio *chip)
static int allocate_pipes(struct echoaudio *chip, struct audiopipe *pipe,
int pipe_index, int interleave)
static int free_pipes(struct echoaudio *chip, struct audiopipe *pipe)
static int sglist_init(struct echoaudio *chip, struct audiopipe *pipe)
static int sglist_add_mapping(struct echoaudio *chip, struct audiopipe *pipe,
dma_addr_t address, size_t length)
static inline int sglist_add_irq(struct echoaudio *chip, struct audiopipe *pipe)
static inline int sglist_wrap(struct echoaudio *chip, struct audiopipe *pipe)
