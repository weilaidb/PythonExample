static int usage(const char *argv0, int ret)
struct MoofOffset ;
struct Track ;
struct Tracks ;
static int expect_tag(int32_t got_tag, int32_t expected_tag)
static int copy_tag(AVIOContext *in, AVIOContext *out, int32_t tag_name)
static int skip_tag(AVIOContext *in, int32_t tag_name)
static int write_fragment(const char *filename, AVIOContext *in)
static int skip_fragment(AVIOContext *in)
static int write_fragments(struct Tracks *tracks, int start_index,
AVIOContext *in, const char *basename,
int split, int ismf, const char* output_prefix)
static int64_t read_trun_duration(AVIOContext *in, int default_duration,
int64_t end)
static int64_t read_moof_duration(AVIOContext *in, int64_t offset)
static int read_tfra(struct Tracks *tracks, int start_index, AVIOContext *f)
static int read_mfra(struct Tracks *tracks, int start_index,
const char *file, int split, int ismf,
const char *basename, const char* output_prefix)
static int get_private_data(struct Track *track, AVCodecParameters *codecpar)
static int get_video_private_data(struct Track *track, AVCodecParameters *codecpar)
static int handle_file(struct Tracks *tracks, const char *file, int split,
int ismf, const char *basename,
const char* output_prefix)
static void output_server_manifest(struct Tracks *tracks, const char *basename,
const char *output_prefix,
const char *path_prefix,
const char *ismc_prefix)
static void print_track_chunks(FILE *out, struct Tracks *tracks, int main,
const char *type)
static void output_client_manifest(struct Tracks *tracks, const char *basename,
const char *output_prefix, int split)
static void clean_tracks(struct Tracks *tracks)
int main(int argc, char **argv)
