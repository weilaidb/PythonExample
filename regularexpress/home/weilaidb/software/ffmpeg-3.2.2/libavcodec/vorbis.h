#define AVCODEC_VORBIS_H
extern const float ff_vorbis_floor1_inverse_db_table[256];
extern const float * const ff_vorbis_vwin[8];
extern const uint8_t ff_vorbis_channel_layout_offsets[8][8];
extern const uint8_t ff_vorbis_encoding_channel_layout_offsets[8][8];
extern const uint64_t ff_vorbis_channel_layouts[9];
typedef struct vorbis_floor1_entry  vorbis_floor1_entry;
ff_vorbis_ready_floor1_list;
ff_vorbis_nth_root;
ff_vorbis_len2vlc;
ff_vorbis_floor1_render_list;
ff_vorbis_inverse_coupling;
ilog av_log2(2*(i))
