#define AVDEVICE_DECKLINK_ENC_H
int ff_decklink_write_header(AVFormatContext *avctx);
int ff_decklink_write_packet(AVFormatContext *avctx, AVPacket *pkt);
int ff_decklink_write_trailer(AVFormatContext *avctx);
