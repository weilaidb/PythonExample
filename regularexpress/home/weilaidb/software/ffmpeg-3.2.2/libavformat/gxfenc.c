#define GXF_AUDIO_PACKET_SIZE 65536
GXF_TIMECODE \
((c) << 30 | (d) << 29 | (h) << 24 | (m) << 16 | (s) << 8 | (f))
typedef struct GXFTimecode GXFTimecode;
typedef struct GXFStreamContext  GXFStreamContext;
typedef struct GXFContext  GXFContext;
static const struct  gxf_lines_tab[] = ;
static const AVCodecTag gxf_media_types[] = ;
#define SERVER_PATH
#define ES_NAME_PATTERN
gxf_find_lines_index
gxf_write_padding
updatePacketSize
updateSize
gxf_write_packet_header
gxf_write_mpeg_auxiliary
gxf_write_dv_auxiliary
gxf_write_timecode_auxiliary
gxf_write_track_description
gxf_write_material_data_section
gxf_write_track_description_section
gxf_write_map_packet
gxf_write_flt_packet
gxf_write_umf_material_description
gxf_write_umf_payload
gxf_write_umf_track_description
gxf_write_umf_media_mpeg
gxf_write_umf_media_timecode
gxf_write_umf_media_dv
gxf_write_umf_media_audio
gxf_write_umf_media_description
gxf_write_umf_packet
static const int GXF_samples_per_frame[] = ;
gxf_init_timecode_track
gxf_init_timecode
gxf_write_header
gxf_write_eos_packet
gxf_write_trailer
gxf_parse_mpeg_frame
gxf_write_media_preamble
gxf_write_packet
gxf_compare_field_nb
gxf_interleave_packet
AVOutputFormat ff_gxf_muxer = ;
