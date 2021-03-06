#define AVCODEC_TAK_H
#define TAK_FORMAT_DATA_TYPE_BITS               3
#define TAK_FORMAT_SAMPLE_RATE_BITS            18
#define TAK_FORMAT_BPS_BITS                     5
#define TAK_FORMAT_CHANNEL_BITS                 4
#define TAK_FORMAT_VALID_BITS                   5
#define TAK_FORMAT_CH_LAYOUT_BITS               6
#define TAK_SIZE_FRAME_DURATION_BITS            4
#define TAK_SIZE_SAMPLES_NUM_BITS              35
#define TAK_LAST_FRAME_POS_BITS                40
#define TAK_LAST_FRAME_SIZE_BITS               24
#define TAK_ENCODER_CODEC_BITS                  6
#define TAK_ENCODER_PROFILE_BITS                4
#define TAK_ENCODER_VERSION_BITS               24
#define TAK_SAMPLE_RATE_MIN                  6000
#define TAK_CHANNELS_MIN                        1
#define TAK_BPS_MIN                             8
#define TAK_FRAME_HEADER_FLAGS_BITS             3
#define TAK_FRAME_HEADER_SYNC_ID           0xA0FF
#define TAK_FRAME_HEADER_SYNC_ID_BITS          16
#define TAK_FRAME_HEADER_SAMPLE_COUNT_BITS     14
#define TAK_FRAME_HEADER_NO_BITS               21
#define TAK_FRAME_DURATION_QUANT_SHIFT          5
#define TAK_CRC24_BITS                         24
#define TAK_FRAME_FLAG_IS_LAST                0x1
#define TAK_FRAME_FLAG_HAS_INFO               0x2
#define TAK_FRAME_FLAG_HAS_METADATA           0x4
#define TAK_MAX_CHANNELS               (1 << TAK_FORMAT_CHANNEL_BITS)
#define TAK_MIN_FRAME_HEADER_BITS      (TAK_FRAME_HEADER_SYNC_ID_BITS + \
TAK_FRAME_HEADER_FLAGS_BITS   + \
TAK_FRAME_HEADER_NO_BITS      + \
TAK_CRC24_BITS)
#define TAK_MIN_FRAME_HEADER_LAST_BITS (TAK_MIN_FRAME_HEADER_BITS + 2 + \
TAK_FRAME_HEADER_SAMPLE_COUNT_BITS)
#define TAK_ENCODER_BITS               (TAK_ENCODER_CODEC_BITS + \
TAK_ENCODER_PROFILE_BITS)
#define TAK_SIZE_BITS                  (TAK_SIZE_SAMPLES_NUM_BITS + \
TAK_SIZE_FRAME_DURATION_BITS)
#define TAK_FORMAT_BITS                (TAK_FORMAT_DATA_TYPE_BITS   + \
TAK_FORMAT_SAMPLE_RATE_BITS + \
TAK_FORMAT_BPS_BITS         + \
TAK_FORMAT_CHANNEL_BITS + 1 + \
TAK_FORMAT_VALID_BITS   + 1 + \
TAK_FORMAT_CH_LAYOUT_BITS   * \
TAK_MAX_CHANNELS)
#define TAK_STREAMINFO_BITS            (TAK_ENCODER_BITS + \
TAK_SIZE_BITS    + \
TAK_FORMAT_BITS)
#define TAK_MAX_FRAME_HEADER_BITS      (TAK_MIN_FRAME_HEADER_LAST_BITS + \
TAK_STREAMINFO_BITS + 31)
#define TAK_STREAMINFO_BYTES           ((TAK_STREAMINFO_BITS       + 7) / 8)
#define TAK_MAX_FRAME_HEADER_BYTES     ((TAK_MAX_FRAME_HEADER_BITS + 7) / 8)
#define TAK_MIN_FRAME_HEADER_BYTES     ((TAK_MIN_FRAME_HEADER_BITS + 7) / 8)
enum TAKCodecType ;
enum TAKMetaDataType ;
enum TAKFrameSizeType ;
typedef struct TAKStreamInfo  TAKStreamInfo;
ff_tak_check_crc;
avpriv_tak_parse_streaminfo;
ff_tak_decode_frame_header;
