#define AVFORMAT_OMA_H
#define EA3_HEADER_SIZE 96
#define ID3v2_EA3_MAGIC "ea3"
#define OMA_ENC_HEADER_SIZE 16
enum ;
extern const uint16_t ff_oma_srate_tab[8];
extern const AVCodecTag ff_oma_codec_tags[];
extern const uint64_t ff_oma_chid_to_native_layout[7];
extern const int ff_oma_chid_to_num_channels[7];
