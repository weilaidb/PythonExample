#define AVCODEC_H264QPEL_H
typedef struct H264QpelContext  H264QpelContext;
void ff_h264qpel_init(H264QpelContext *c, int bit_depth);
void ff_h264qpel_init_aarch64(H264QpelContext *c, int bit_depth);
void ff_h264qpel_init_arm(H264QpelContext *c, int bit_depth);
void ff_h264qpel_init_ppc(H264QpelContext *c, int bit_depth);
void ff_h264qpel_init_x86(H264QpelContext *c, int bit_depth);
void ff_h264qpel_init_mips(H264QpelContext *c, int bit_depth);
