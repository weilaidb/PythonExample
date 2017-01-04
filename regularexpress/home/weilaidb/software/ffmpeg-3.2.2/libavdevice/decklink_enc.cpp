extern "C"
class decklink_frame : public IDeckLinkVideoFrame
;
class decklink_output_callback : public IDeckLinkVideoOutputCallback
;
static int decklink_setup_video(AVFormatContext *avctx, AVStream *st)
static int decklink_setup_audio(AVFormatContext *avctx, AVStream *st)
av_cold int ff_decklink_write_trailer(AVFormatContext *avctx)
static int decklink_write_video_packet(AVFormatContext *avctx, AVPacket *pkt)
static int decklink_write_audio_packet(AVFormatContext *avctx, AVPacket *pkt)
extern "C"
