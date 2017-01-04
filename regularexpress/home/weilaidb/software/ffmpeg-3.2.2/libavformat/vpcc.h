#define AVFORMAT_VPCC_H
int ff_isom_write_vpcc(AVFormatContext *s, AVIOContext *pb,
AVCodecParameters *par);
