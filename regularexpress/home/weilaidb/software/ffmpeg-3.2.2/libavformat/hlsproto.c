struct segment ;
struct variant ;
typedef struct HLSContext  HLSContext;
read_chomp_line
free_segment_list
free_variant_list
struct variant_info ;
handle_variant_args
parse_playlist
hls_close
hls_open
av_log;
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
hls_read
const URLProtocol ff_hls_protocol = ;
