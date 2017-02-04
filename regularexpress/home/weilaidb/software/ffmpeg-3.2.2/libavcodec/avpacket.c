av_init_packet
*av_packet_alloc
av_packet_free
packet_alloc
av_new_packet
av_shrink_packet
av_grow_packet
av_packet_from_data
#if FF_API_AVPACKET_OLD_API
FF_DISABLE_DEPRECATION_WARNINGS
ALLOC_MALLOC data = av_malloc(size)
ALLOC_BUF                \
do  while (0)
DUP_DATA                        \
do  while (0)
copy_packet_data
av_copy_packet_side_data
FF_ENABLE_DEPRECATION_WARNINGS
av_dup_packet
av_copy_packet
av_packet_free_side_data
#if FF_API_AVPACKET_OLD_API
FF_DISABLE_DEPRECATION_WARNINGS
av_free_packet
FF_ENABLE_DEPRECATION_WARNINGS
av_packet_add_side_data
*av_packet_new_side_data
*av_packet_get_side_data
*av_packet_side_data_name
#define FF_MERGE_MARKER 0x8c4d9d108e25e9feULL
av_packet_merge_side_data
av_packet_split_side_data
*av_packet_pack_dictionary
av_packet_unpack_dictionary
av_packet_shrink_side_data
av_packet_copy_props
av_packet_unref
av_packet_ref
*av_packet_clone
av_packet_move_ref
av_packet_rescale_ts
ff_side_data_set_encoder_stats
