static const AVOption options[] = ;
#define MOV_CLASS(flavor)\
static const AVClass flavor ## _muxer_class = ;
static int get_moov_size(AVFormatContext *s);
static int utf8len(const uint8_t *b)
static int64_t update_size(AVIOContext *pb, int64_t pos)
static int co64_required(const MOVTrack *track)
static int mov_write_stco_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_stsz_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_stsc_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_stss_tag(AVIOContext *pb, MOVTrack *track, uint32_t flag)
static int mov_write_amr_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_ac3_tag(AVIOContext *pb, MOVTrack *track)
struct eac3_info ;
#if CONFIG_AC3_PARSER
static int handle_eac3(MOVMuxContext *mov, AVPacket *pkt, MOVTrack *track)
static int mov_write_eac3_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_extradata_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_enda_tag(AVIOContext *pb)
static int mov_write_enda_tag_be(AVIOContext *pb)
static void put_descr(AVIOContext *pb, int tag, unsigned int size)
static unsigned compute_avg_bitrate(MOVTrack *track)
static int mov_write_esds_tag(AVIOContext *pb, MOVTrack *track)
static int mov_pcm_le_gt16(enum AVCodecID codec_id)
static int mov_pcm_be_gt16(enum AVCodecID codec_id)
static int mov_write_ms_tag(AVFormatContext *s, AVIOContext *pb, MOVTrack *track)
static int mov_write_wfex_tag(AVFormatContext *s, AVIOContext *pb, MOVTrack *track)
static int mov_write_chan_tag(AVFormatContext *s, AVIOContext *pb, MOVTrack *track)
static int mov_write_wave_tag(AVFormatContext *s, AVIOContext *pb, MOVTrack *track)
static int mov_write_dvc1_structs(MOVTrack *track, uint8_t *buf)
static int mov_write_dvc1_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_glbl_tag(AVIOContext *pb, MOVTrack *track)
static int mov_get_lpcm_flags(enum AVCodecID codec_id)
static int get_cluster_duration(MOVTrack *track, int cluster_idx)
static int get_samples_per_packet(MOVTrack *track)
static int mov_write_audio_tag(AVFormatContext *s, AVIOContext *pb, MOVMuxContext *mov, MOVTrack *track)
static int mov_write_d263_tag(AVIOContext *pb)
static int mov_write_avcc_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_vpcc_tag(AVFormatContext *s, AVIOContext *pb, MOVTrack *track)
static int mov_write_hvcc_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_avid_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_dpxe_tag(AVIOContext *pb, MOVTrack *track)
static int mp4_get_codec_tag(AVFormatContext *s, MOVTrack *track)
static const AVCodecTag codec_ipod_tags[] = ;
static int ipod_get_codec_tag(AVFormatContext *s, MOVTrack *track)
static int mov_get_dv_codec_tag(AVFormatContext *s, MOVTrack *track)
static AVRational find_fps(AVFormatContext *s, AVStream *st)
static int mov_get_mpeg2_xdcam_codec_tag(AVFormatContext *s, MOVTrack *track)
static int mov_get_h264_codec_tag(AVFormatContext *s, MOVTrack *track)
static const struct  mov_pix_fmt_tags[] = ;
static int mov_get_dnxhd_codec_tag(AVFormatContext *s, MOVTrack *track)
static int mov_get_rawvideo_codec_tag(AVFormatContext *s, MOVTrack *track)
static int mov_get_codec_tag(AVFormatContext *s, MOVTrack *track)
static const AVCodecTag codec_3gp_tags[] = ;
static const AVCodecTag codec_f4v_tags[] = ;
static int mov_find_codec_tag(AVFormatContext *s, MOVTrack *track)
static int mov_write_uuid_tag_ipod(AVIOContext *pb)
static const uint16_t fiel_data[] = ;
static int mov_write_fiel_tag(AVIOContext *pb, MOVTrack *track, int field_order)
static int mov_write_subtitle_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_pasp_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_gama_tag(AVIOContext *pb, MOVTrack *track, double gamma)
static int mov_write_colr_tag(AVIOContext *pb, MOVTrack *track)
static void find_compressor(char * compressor_name, int len, MOVTrack *track)
static int mov_write_video_tag(AVIOContext *pb, MOVMuxContext *mov, MOVTrack *track)
static int mov_write_source_reference_tag(AVIOContext *pb, MOVTrack *track, const char *reel_name)
static int mov_write_tmcd_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_stsd_tag(AVFormatContext *s, AVIOContext *pb, MOVMuxContext *mov, MOVTrack *track)
static int mov_write_ctts_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_stts_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_dref_tag(AVIOContext *pb)
static int mov_write_stbl_tag(AVFormatContext *s, AVIOContext *pb, MOVMuxContext *mov, MOVTrack *track)
static int mov_write_dinf_tag(AVIOContext *pb)
static int mov_write_nmhd_tag(AVIOContext *pb)
static int mov_write_tcmi_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_gmhd_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_smhd_tag(AVIOContext *pb)
static int mov_write_vmhd_tag(AVIOContext *pb)
static int is_clcp_track(MOVTrack *track)
static int mov_write_hdlr_tag(AVFormatContext *s, AVIOContext *pb, MOVTrack *track)
static int mov_write_hmhd_tag(AVIOContext *pb)
static int mov_write_minf_tag(AVFormatContext *s, AVIOContext *pb, MOVMuxContext *mov, MOVTrack *track)
static int mov_write_mdhd_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track)
static int mov_write_mdia_tag(AVFormatContext *s, AVIOContext *pb,
MOVMuxContext *mov, MOVTrack *track)
static void write_matrix(AVIOContext *pb, int16_t a, int16_t b, int16_t c,
int16_t d, int16_t tx, int16_t ty)
static int mov_write_tkhd_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track, AVStream *st)
static int mov_write_tapt_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_edts_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track)
static int mov_write_tref_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_uuid_tag_psp(AVIOContext *pb, MOVTrack *mov)
static int mov_write_udta_sdp(AVIOContext *pb, MOVTrack *track)
static int mov_write_track_metadata(AVIOContext *pb, AVStream *st,
const char *tag, const char *str)
static int mov_write_track_udta_tag(AVIOContext *pb, MOVMuxContext *mov,
AVStream *st)
static int mov_write_trak_tag(AVFormatContext *s, AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track, AVStream *st)
static int mov_write_iods_tag(AVIOContext *pb, MOVMuxContext *mov)
static int mov_write_trex_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_mvex_tag(AVIOContext *pb, MOVMuxContext *mov)
static int mov_write_mvhd_tag(AVIOContext *pb, MOVMuxContext *mov)
static int mov_write_itunes_hdlr_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static int mov_write_string_data_tag(AVIOContext *pb, const char *data, int lang, int long_style)
static int mov_write_string_tag(AVIOContext *pb, const char *name,
const char *value, int lang, int long_style)
static AVDictionaryEntry *get_metadata_lang(AVFormatContext *s,
const char *tag, int *lang)
static int mov_write_string_metadata(AVFormatContext *s, AVIOContext *pb,
const char *name, const char *tag,
int long_style)
static int mov_write_tmpo_tag(AVIOContext *pb, AVFormatContext *s)
static int mov_write_loci_tag(AVFormatContext *s, AVIOContext *pb)
static int mov_write_trkn_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s, int disc)
static int mov_write_int8_metadata(AVFormatContext *s, AVIOContext *pb,
const char *name, const char *tag,
int len)
static int mov_write_ilst_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static int mov_write_mdta_hdlr_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static int mov_write_mdta_keys_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static int mov_write_mdta_ilst_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static int mov_write_meta_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static int mov_write_raw_metadata_tag(AVFormatContext *s, AVIOContext *pb,
const char *name, const char *key)
static int ascii_to_wc(AVIOContext *pb, const uint8_t *b)
static uint16_t language_code(const char *str)
static int mov_write_3gp_udta_tag(AVIOContext *pb, AVFormatContext *s,
const char *tag, const char *str)
static int mov_write_chpl_tag(AVIOContext *pb, AVFormatContext *s)
static int mov_write_udta_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static void mov_write_psp_udta_tag(AVIOContext *pb,
const char *str, const char *lang, int type)
static int mov_write_uuidusmt_tag(AVIOContext *pb, AVFormatContext *s)
static void build_chunks(MOVTrack *trk)
static int mov_setup_track_ids(MOVMuxContext *mov, AVFormatContext *s)
static int mov_write_moov_tag(AVIOContext *pb, MOVMuxContext *mov,
AVFormatContext *s)
static void param_write_int(AVIOContext *pb, const char *name, int value)
static void param_write_string(AVIOContext *pb, const char *name, const char *value)
static void param_write_hex(AVIOContext *pb, const char *name, const uint8_t *value, int len)
static int mov_write_isml_manifest(AVIOContext *pb, MOVMuxContext *mov, AVFormatContext *s)
static int mov_write_mfhd_tag(AVIOContext *pb, MOVMuxContext *mov)
static uint32_t get_sample_flags(MOVTrack *track, MOVIentry *entry)
static int mov_write_tfhd_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track, int64_t moof_offset)
static int mov_write_trun_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track, int moof_size,
int first, int end)
static int mov_write_tfxd_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_tfrf_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track, int entry)
static int mov_write_tfrf_tags(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track)
static int mov_add_tfra_entries(AVIOContext *pb, MOVMuxContext *mov, int tracks,
int size)
static int mov_write_tfdt_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_traf_tag(AVIOContext *pb, MOVMuxContext *mov,
MOVTrack *track, int64_t moof_offset,
int moof_size)
static int mov_write_moof_tag_internal(AVIOContext *pb, MOVMuxContext *mov,
int tracks, int moof_size)
static int mov_write_sidx_tag(AVIOContext *pb,
MOVTrack *track, int ref_size, int total_sidx_size)
static int mov_write_sidx_tags(AVIOContext *pb, MOVMuxContext *mov,
int tracks, int ref_size)
static int mov_write_moof_tag(AVIOContext *pb, MOVMuxContext *mov, int tracks,
int64_t mdat_size)
static int mov_write_tfra_tag(AVIOContext *pb, MOVTrack *track)
static int mov_write_mfra_tag(AVIOContext *pb, MOVMuxContext *mov)
static int mov_write_mdat_tag(AVIOContext *pb, MOVMuxContext *mov)
static int mov_write_ftyp_tag(AVIOContext *pb, AVFormatContext *s)
static int mov_write_uuidprof_tag(AVIOContext *pb, AVFormatContext *s)
static int mov_write_identification(AVIOContext *pb, AVFormatContext *s)
static int mov_parse_mpeg2_frame(AVPacket *pkt, uint32_t *flags)
static void mov_parse_vc1_frame(AVPacket *pkt, MOVTrack *trk)
static int mov_flush_fragment_interleaving(AVFormatContext *s, MOVTrack *track)
static int mov_flush_fragment(AVFormatContext *s, int force)
static int mov_auto_flush_fragment(AVFormatContext *s, int force)
static int check_pkt(AVFormatContext *s, AVPacket *pkt)
int ff_mov_write_packet(AVFormatContext *s, AVPacket *pkt)
static int mov_write_single_packet(AVFormatContext *s, AVPacket *pkt)
static int mov_write_subtitle_end_packet(AVFormatContext *s,
int stream_index,
int64_t dts)
static int mov_write_packet(AVFormatContext *s, AVPacket *pkt)
static int mov_create_chapter_track(AVFormatContext *s, int tracknum)
static int mov_check_timecode_track(AVFormatContext *s, AVTimecode *tc, int src_index, const char *tcstr)
static int mov_create_timecode_track(AVFormatContext *s, int index, int src_index, AVTimecode tc)
static void enable_tracks(AVFormatContext *s)
static void mov_free(AVFormatContext *s)
static uint32_t rgb_to_yuv(uint32_t rgb)
static int mov_create_dvd_sub_decoder_specific_info(MOVTrack *track,
AVStream *st)
static int mov_init(AVFormatContext *s)
static int mov_write_header(AVFormatContext *s)
static int get_moov_size(AVFormatContext *s)
static int get_sidx_size(AVFormatContext *s)
static int compute_moov_size(AVFormatContext *s)
static int compute_sidx_size(AVFormatContext *s)
static int shift_data(AVFormatContext *s)
static int mov_write_trailer(AVFormatContext *s)
static int mov_check_bitstream(struct AVFormatContext *s, const AVPacket *pkt)
#if CONFIG_MOV_MUXER
MOV_CLASS(mov)
AVOutputFormat ff_mov_muxer = ;
#if CONFIG_TGP_MUXER
MOV_CLASS(tgp)
AVOutputFormat ff_tgp_muxer = ;
#if CONFIG_MP4_MUXER
MOV_CLASS(mp4)
AVOutputFormat ff_mp4_muxer = ;
#if CONFIG_PSP_MUXER
MOV_CLASS(psp)
AVOutputFormat ff_psp_muxer = ;
#if CONFIG_TG2_MUXER
MOV_CLASS(tg2)
AVOutputFormat ff_tg2_muxer = ;
#if CONFIG_IPOD_MUXER
MOV_CLASS(ipod)
AVOutputFormat ff_ipod_muxer = ;
#if CONFIG_ISMV_MUXER
MOV_CLASS(ismv)
AVOutputFormat ff_ismv_muxer = ;
#if CONFIG_F4V_MUXER
MOV_CLASS(f4v)
AVOutputFormat ff_f4v_muxer = ;
