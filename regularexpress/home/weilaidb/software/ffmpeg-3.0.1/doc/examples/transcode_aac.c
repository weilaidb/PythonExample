#define OUTPUT_BIT_RATE 96000
#define OUTPUT_CHANNELS 2
static const char *get_error_text(const int error)
static int open_input_file(const char *filename,
AVFormatContext **input_format_context,
AVCodecContext **input_codec_context)
static int open_output_file(const char *filename,
AVCodecContext *input_codec_context,
AVFormatContext **output_format_context,
AVCodecContext **output_codec_context)
static void init_packet(AVPacket *packet)
static int init_input_frame(AVFrame **frame)
static int init_resampler(AVCodecContext *input_codec_context,
AVCodecContext *output_codec_context,
SwrContext **resample_context)
static int init_fifo(AVAudioFifo **fifo, AVCodecContext *output_codec_context)
static int write_output_file_header(AVFormatContext *output_format_context)
static int decode_audio_frame(AVFrame *frame,
AVFormatContext *input_format_context,
AVCodecContext *input_codec_context,
int *data_present, int *finished)
static int init_converted_samples(uint8_t ***converted_input_samples,
AVCodecContext *output_codec_context,
int frame_size)
static int convert_samples(const uint8_t **input_data,
uint8_t **converted_data, const int frame_size,
SwrContext *resample_context)
static int add_samples_to_fifo(AVAudioFifo *fifo,
uint8_t **converted_input_samples,
const int frame_size)
static int read_decode_convert_and_store(AVAudioFifo *fifo,
AVFormatContext *input_format_context,
AVCodecContext *input_codec_context,
AVCodecContext *output_codec_context,
SwrContext *resampler_context,
int *finished)
static int init_output_frame(AVFrame **frame,
AVCodecContext *output_codec_context,
int frame_size)
static int64_t pts = 0;
static int encode_audio_frame(AVFrame *frame,
AVFormatContext *output_format_context,
AVCodecContext *output_codec_context,
int *data_present)
static int load_encode_and_write(AVAudioFifo *fifo,
AVFormatContext *output_format_context,
AVCodecContext *output_codec_context)
static int write_output_file_trailer(AVFormatContext *output_format_context)
int main(int argc, char **argv)
