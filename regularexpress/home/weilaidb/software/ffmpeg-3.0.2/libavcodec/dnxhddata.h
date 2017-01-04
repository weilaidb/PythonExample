#define AVCODEC_DNXHDDATA_H
#define DNXHD_INTERLACED   (1<<0)
#define DNXHD_MBAFF        (1<<1)
#define DNXHD_444          (1<<2)
#define DNXHD_HEADER_INITIAL 0x000002800100
#define DNXHD_HEADER_444     0x000002800200
#define DNXHD_HEADER_HR1     0x000002800300
#define DNXHD_HEADER_HR2     0x0000038C0300
#define DNXHD_VARIABLE 0
typedef struct CIDEntry  CIDEntry;
extern const CIDEntry ff_dnxhd_cid_table[];
int ff_dnxhd_get_cid_table(int cid);
int ff_dnxhd_find_cid(AVCodecContext *avctx, int bit_depth);
void ff_dnxhd_print_profiles(AVCodecContext *avctx, int loglevel);
static av_always_inline uint64_t ff_dnxhd_check_header_prefix(uint64_t prefix)
int avpriv_dnxhd_get_frame_size(int cid);
int avpriv_dnxhd_get_interlaced(int cid);
uint64_t avpriv_dnxhd_parse_header_prefix(const uint8_t *buf);
