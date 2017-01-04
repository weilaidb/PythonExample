#define IVTV_STREAMS_H
int ivtv_streams_setup(struct ivtv *itv);
int ivtv_streams_register(struct ivtv *itv);
void ivtv_streams_cleanup(struct ivtv *itv, int unregister);
int ivtv_start_v4l2_encode_stream(struct ivtv_stream *s);
int ivtv_stop_v4l2_encode_stream(struct ivtv_stream *s, int gop_end);
int ivtv_start_v4l2_decode_stream(struct ivtv_stream *s, int gop_offset);
int ivtv_stop_v4l2_decode_stream(struct ivtv_stream *s, int flags, u64 pts);
void ivtv_stop_all_captures(struct ivtv *itv);
int ivtv_passthrough_mode(struct ivtv *itv, int enable);
