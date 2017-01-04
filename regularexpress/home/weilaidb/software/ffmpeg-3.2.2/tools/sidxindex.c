static int usage(const char *argv0, int ret)
struct Track ;
struct Tracks ;
static void set_codec_str(AVCodecParameters *codecpar, char *str, int size)
static int find_sidx(struct Tracks *tracks, int start_index,
const char *file)
static int handle_file(struct Tracks *tracks, const char *file)
static void write_time(FILE *out, int64_t time, int decimals, enum AVRounding round)
static int output_mpd(struct Tracks *tracks, const char *filename)
static void clean_tracks(struct Tracks *tracks)
int main(int argc, char **argv)
