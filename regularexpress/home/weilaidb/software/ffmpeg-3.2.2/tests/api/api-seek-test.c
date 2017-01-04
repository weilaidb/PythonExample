int64_t *pts_array;
int64_t *crc_array;
int size_of_array;
int number_of_elements;
static int add_crc_to_array(int64_t crc, int64_t pts)
static int compare_crc_in_array(int64_t crc, int64_t pts)
static int compute_crc_of_packets(AVFormatContext *fmt_ctx, int video_stream,
AVCodecContext *ctx, AVFrame *fr, uint64_t ts_start, uint64_t ts_end, int no_seeking)
static long int read_seek_range(const char *string_with_number)
static int seek_test(const char *input_filename, const char *start, const char *end)
int main(int argc, char **argv)
