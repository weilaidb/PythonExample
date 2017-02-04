#define UNCHECKED_BITSTREAM_READER 1
#define SPRITE_TRAJ_VLC_BITS 6
#define DC_VLC_BITS 9
#define MB_TYPE_B_VLC_BITS 4
static VLC dc_lum, dc_chrom;
static VLC sprite_trajectory;
static VLC mb_type_b_vlc;
static const int mb_type_b_map[4] = ;
ff_mpeg4_pred_ac
mpeg4_is_resync
mpeg4_decode_sprite_trajectory
decode_new_pred
ff_mpeg4_decode_video_packet_header
get_amv
mpeg4_decode_dc
mpeg4_decode_partition_a
mpeg4_decode_partition_b
ff_mpeg4_decode_partitions
mpeg4_decode_block
mpeg4_decode_partitioned_mb
mpeg4_decode_mb
mpeg4_decode_gop_header
mpeg4_decode_profile_level
decode_vol_header
decode_user_data
ff_mpeg4_workaround_bugs
decode_vop_header
ff_mpeg4_decode_picture_header
ff_mpeg4videodec_static_init
ff_mpeg4_frame_end
#if HAVE_THREADS
mpeg4_update_thread_context
decode_init
static const AVOption mpeg4_options[] = ;
static const AVClass mpeg4_class = ;
AVCodec ff_mpeg4_decoder = ;
#if CONFIG_MPEG4_VDPAU_DECODER && FF_API_VDPAU
static const AVClass mpeg4_vdpau_class = ;
AVCodec ff_mpeg4_vdpau_decoder = ;
