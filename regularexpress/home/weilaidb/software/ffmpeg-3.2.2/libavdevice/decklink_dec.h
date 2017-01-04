#define AVDEVICE_DECKLINK_DEC_H
int ff_decklink_read_header(AVFormatContext *avctx);
int ff_decklink_read_packet(AVFormatContext *avctx, AVPacket *pkt);
int ff_decklink_read_close(AVFormatContext *avctx);
