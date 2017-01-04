#define AVCODEC_DCADEC_H
#define DCA_BUFFER_PADDING_SIZE     1024
#define DCA_PACKET_CORE         0x01
#define DCA_PACKET_EXSS         0x02
#define DCA_PACKET_XLL          0x04
#define DCA_PACKET_RECOVERY     0x08
typedef struct DCAContext  DCAContext;
int ff_dca_set_channel_layout(AVCodecContext *avctx, int *ch_remap, int dca_mask);
int ff_dca_check_crc(GetBitContext *s, int p1, int p2);
void ff_dca_downmix_to_stereo_fixed(DCADSPContext *dcadsp, int32_t **samples,
int *coeff_l, int nsamples, int ch_mask);
void ff_dca_downmix_to_stereo_float(AVFloatDSPContext *fdsp, float **samples,
int *coeff_l, int nsamples, int ch_mask);
static inline int ff_dca_seek_bits(GetBitContext *s, int p)
