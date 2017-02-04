#define AVFORMAT_ISOM_H
extern const AVCodecTag ff_mp4_obj_type[];
extern const AVCodecTag ff_codec_movvideo_tags[];
extern const AVCodecTag ff_codec_movaudio_tags[];
extern const AVCodecTag ff_codec_movsubtitle_tags[];
ff_mov_iso639_to_lang;
ff_mov_lang_to_iso639;
struct AVAESCTR;
typedef struct MOVStts  MOVStts;
typedef struct MOVStsc  MOVStsc;
typedef struct MOVElst  MOVElst;
typedef struct MOVDref  MOVDref;
typedef struct MOVAtom  MOVAtom;
struct MOVParseTableEntry;
typedef struct MOVFragment  MOVFragment;
typedef struct MOVTrackExt  MOVTrackExt;
typedef struct MOVSbgp  MOVSbgp;
typedef struct MOVFragmentIndexItem  MOVFragmentIndexItem;
typedef struct MOVFragmentIndex  MOVFragmentIndex;
typedef struct MOVStreamContext  MOVStreamContext;
typedef struct MOVContext  MOVContext;
ff_mp4_read_descr_len;
ff_mp4_read_descr;
ff_mp4_read_dec_config_descr;
ff_mp4_parse_es_descr;
#define MP4ODescrTag                    0x01
#define MP4IODescrTag                   0x02
#define MP4ESDescrTag                   0x03
#define MP4DecConfigDescrTag            0x04
#define MP4DecSpecificDescrTag          0x05
#define MP4SLDescrTag                   0x06
#define MOV_TFHD_BASE_DATA_OFFSET       0x01
#define MOV_TFHD_STSD_ID                0x02
#define MOV_TFHD_DEFAULT_DURATION       0x08
#define MOV_TFHD_DEFAULT_SIZE           0x10
#define MOV_TFHD_DEFAULT_FLAGS          0x20
#define MOV_TFHD_DURATION_IS_EMPTY  0x010000
#define MOV_TFHD_DEFAULT_BASE_IS_MOOF 0x020000
#define MOV_TRUN_DATA_OFFSET            0x01
#define MOV_TRUN_FIRST_SAMPLE_FLAGS     0x04
#define MOV_TRUN_SAMPLE_DURATION       0x100
#define MOV_TRUN_SAMPLE_SIZE           0x200
#define MOV_TRUN_SAMPLE_FLAGS          0x400
#define MOV_TRUN_SAMPLE_CTS            0x800
#define MOV_FRAG_SAMPLE_FLAG_DEGRADATION_PRIORITY_MASK 0x0000ffff
#define MOV_FRAG_SAMPLE_FLAG_IS_NON_SYNC               0x00010000
#define MOV_FRAG_SAMPLE_FLAG_PADDING_MASK              0x000e0000
#define MOV_FRAG_SAMPLE_FLAG_REDUNDANCY_MASK           0x00300000
#define MOV_FRAG_SAMPLE_FLAG_DEPENDED_MASK             0x00c00000
#define MOV_FRAG_SAMPLE_FLAG_DEPENDS_MASK              0x03000000
#define MOV_FRAG_SAMPLE_FLAG_DEPENDS_NO                0x02000000
#define MOV_FRAG_SAMPLE_FLAG_DEPENDS_YES               0x01000000
#define MOV_TKHD_FLAG_ENABLED       0x0001
#define MOV_TKHD_FLAG_IN_MOVIE      0x0002
#define MOV_TKHD_FLAG_IN_PREVIEW    0x0004
#define MOV_TKHD_FLAG_IN_POSTER     0x0008
TAG_IS_AVCI                    \
((tag) == MKTAG('a', 'i', '5', 'p') ||  \
(tag) == MKTAG('a', 'i', '5', 'q') ||  \
(tag) == MKTAG('a', 'i', '5', '2') ||  \
(tag) == MKTAG('a', 'i', '5', '3') ||  \
(tag) == MKTAG('a', 'i', '5', '5') ||  \
(tag) == MKTAG('a', 'i', '5', '6') ||  \
(tag) == MKTAG('a', 'i', '1', 'p') ||  \
(tag) == MKTAG('a', 'i', '1', 'q') ||  \
(tag) == MKTAG('a', 'i', '1', '2') ||  \
(tag) == MKTAG('a', 'i', '1', '3') ||  \
(tag) == MKTAG('a', 'i', '1', '5') ||  \
(tag) == MKTAG('a', 'i', '1', '6') ||  \
(tag) == MKTAG('a', 'i', 'v', 'x') ||  \
(tag) == MKTAG('A', 'V', 'i', 'n'))
ff_mov_read_esds;
ff_mov_get_lpcm_codec_id;
ff_mov_read_stsd_entries;
ff_mov_write_chan;
#define FF_MOV_FLAG_MFRA_AUTO -1
#define FF_MOV_FLAG_MFRA_DTS 1
#define FF_MOV_FLAG_MFRA_PTS 2
