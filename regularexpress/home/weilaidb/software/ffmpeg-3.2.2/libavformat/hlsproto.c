struct segment ;
struct variant ;
typedef struct HLSContext  HLSContext;
static int read_chomp_line(AVIOContext *s, char *buf, int maxlen)
static void free_segment_list(HLSContext *s)
static void free_variant_list(HLSContext *s)
struct variant_info ;
static void handle_variant_args(struct variant_info *info, const char *key,
int key_len, char **dest, int *dest_len)
static int parse_playlist(URLContext *h, const char *url)
static int hls_close(URLContext *h)
static int hls_open(URLContext *h, const char *uri, int flags)
else
av_log(h, AV_LOG_WARNING,
"Using the hls protocol is discouraged, please try using the "
"hls demuxer instead. The hls demuxer should be more complete "
"and work as well as the protocol implementation. (If not, "
"please report it.) To use the demuxer, simply use %s as url.\n",
s->playlisturl);
if ((ret = parse_playlist(h, s->playlisturl)) < 0)
goto fail;
if (s->n_segments == 0 && s->n_variants > 0)
if (s->n_segments == 0)
s->cur_seq_no = s->start_seq_no;
if (!s->finished && s->n_segments >= 3)
s->cur_seq_no = s->start_seq_no + s->n_segments - 3;
return 0;
fail:
hls_close(h);
return ret;
}
static int hls_read(URLContext *h, uint8_t *buf, int size)
const URLProtocol ff_hls_protocol = ;
