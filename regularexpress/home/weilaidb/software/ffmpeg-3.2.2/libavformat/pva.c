#define PVA_MAX_PAYLOAD_LENGTH  0x17f8
#define PVA_VIDEO_PAYLOAD       0x01
#define PVA_AUDIO_PAYLOAD       0x02
#define PVA_MAGIC               (('A' << 8) + 'V')
typedef struct PVAContext  PVAContext;
pva_check
pva_probe
pva_read_header
#define pva_log if (read_packet) av_log
read_part_of_packet
pva_read_packet
pva_read_timestamp
AVInputFormat ff_pva_demuxer = ;
