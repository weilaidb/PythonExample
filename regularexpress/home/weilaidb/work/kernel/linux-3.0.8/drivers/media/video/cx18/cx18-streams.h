u32 cx18_find_handle(struct cx18 *cx);
struct cx18_stream *cx18_handle_to_stream(struct cx18 *cx, u32 handle);
int cx18_streams_setup(struct cx18 *cx);
int cx18_streams_register(struct cx18 *cx);
void cx18_streams_cleanup(struct cx18 *cx, int unregister);
#define CX18_ENC_STREAM_TYPE_IDX_FW_MDL_MIN (3)
void cx18_stream_rotate_idx_mdls(struct cx18 *cx);
static inline bool cx18_stream_enabled(struct cx18_stream *s)
static inline void cx18_stream_load_fw_queue(struct cx18_stream *s)
static inline void cx18_stream_put_mdl_fw(struct cx18_stream *s,
struct cx18_mdl *mdl)
void cx18_out_work_handler(struct work_struct *work);
int cx18_start_v4l2_encode_stream(struct cx18_stream *s);
int cx18_stop_v4l2_encode_stream(struct cx18_stream *s, int gop_end);
void cx18_stop_all_captures(struct cx18 *cx);
