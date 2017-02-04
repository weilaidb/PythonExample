#define MLV_VERSION
#define MLV_VIDEO_CLASS_RAW  1
#define MLV_VIDEO_CLASS_YUV  2
#define MLV_VIDEO_CLASS_JPEG 3
#define MLV_VIDEO_CLASS_H264 4
#define MLV_AUDIO_CLASS_WAV  1
#define MLV_CLASS_FLAG_DELTA 0x40
#define MLV_CLASS_FLAG_LZMA  0x80
typedef struct  MlvContext;
probe
check_file_header
read_string
read_uint8
read_uint16
read_uint32
read_uint64
scan_file
read_header
read_packet
read_seek
read_close
AVInputFormat ff_mlv_demuxer = ;
