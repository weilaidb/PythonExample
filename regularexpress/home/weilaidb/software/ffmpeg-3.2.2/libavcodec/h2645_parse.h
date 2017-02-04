#define AVCODEC_H2645_PARSE_H
#define MAX_MBPAIR_SIZE (256*1024)
typedef struct H2645NAL  H2645NAL;
typedef struct H2645Packet  H2645Packet;
ff_h2645_extract_rbsp;
ff_h2645_packet_split;
ff_h2645_packet_uninit;
get_nalsize
