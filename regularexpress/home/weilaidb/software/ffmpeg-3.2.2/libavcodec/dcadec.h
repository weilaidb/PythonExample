#define AVCODEC_DCADEC_H
#define DCA_PACKET_CORE         0x01
#define DCA_PACKET_EXSS         0x02
#define DCA_PACKET_XLL          0x04
#define DCA_PACKET_LBR          0x08
#define DCA_PACKET_MASK         0x0f
#define DCA_PACKET_RECOVERY     0x10
#define DCA_PACKET_RESIDUAL     0x20
typedef struct DCAContext  DCAContext;
ff_dca_set_channel_layout;
ff_dca_downmix_to_stereo_fixed;
ff_dca_downmix_to_stereo_float;
ff_dca_check_crc
ff_dca_seek_bits
