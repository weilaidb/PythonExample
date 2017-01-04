#define INPUT_SAMPLERATE     48000
#define INPUT_FORMAT         AV_SAMPLE_FMT_FLTP
#define INPUT_CHANNEL_LAYOUT AV_CH_LAYOUT_5POINT0
#define VOLUME_VAL 0.90
static int init_filter_graph(AVFilterGraph **graph, AVFilterContext **src,
AVFilterContext **sink)
static int process_output(struct AVMD5 *md5, AVFrame *frame)
static int get_input(AVFrame *frame, int frame_num)
int main(int argc, char *argv[])
