#define STREAM_DURATION   10.0
#define STREAM_FRAME_RATE 25
#define STREAM_PIX_FMT    AV_PIX_FMT_YUV420P
#define SCALE_FLAGS SWS_BICUBIC
typedef struct OutputStream  OutputStream;
log_packet
write_frame
add_stream
*alloc_audio_frame
open_audio
*get_audio_frame
write_audio_frame
*alloc_picture
open_video
fill_yuv_image
*get_video_frame
write_video_frame
close_stream
main
