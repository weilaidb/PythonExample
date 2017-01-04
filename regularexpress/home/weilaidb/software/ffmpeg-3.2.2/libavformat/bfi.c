typedef struct BFIContext  BFIContext;
static int bfi_probe(AVProbeData * p)
static int bfi_read_header(AVFormatContext * s)
static int bfi_read_packet(AVFormatContext * s, AVPacket * pkt)
AVInputFormat ff_bfi_demuxer = ;
