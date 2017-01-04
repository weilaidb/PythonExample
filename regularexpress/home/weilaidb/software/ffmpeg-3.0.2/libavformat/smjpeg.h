#define AVFORMAT_SMJPEG_H
#define SMJPEG_MAGIC "\x0\xaSMJPEG"
#define SMJPEG_DONE     MKTAG('D', 'O', 'N', 'E')
#define SMJPEG_HEND     MKTAG('H', 'E', 'N', 'D')
#define SMJPEG_SND      MKTAG('_', 'S', 'N', 'D')
#define SMJPEG_SNDD     MKTAG('s', 'n', 'd', 'D')
#define SMJPEG_TXT      MKTAG('_', 'T', 'X', 'T')
#define SMJPEG_VID      MKTAG('_', 'V', 'I', 'D')
#define SMJPEG_VIDD     MKTAG('v', 'i', 'd', 'D')
extern const AVCodecTag ff_codec_smjpeg_video_tags[];
extern const AVCodecTag ff_codec_smjpeg_audio_tags[];
