#define _HPI_H_
#define HPI_VERSION_CONSTRUCTOR(maj, min, rel) \
((maj << 16) + (min << 8) + rel)
#define HPI_VER_MAJOR(v) ((int)(v >> 16))
#define HPI_VER_MINOR(v) ((int)((v >> 8) & 0xFF))
#define HPI_VER_RELEASE(v) ((int)(v & 0xFF))
#define HPI_VER HPI_VERSION_CONSTRUCTOR(4L, 6, 0)
#define HPI_VER_STRING "4.06.00"
#define HPI_LIB_VER  HPI_VERSION_CONSTRUCTOR(9, 0, 0)
#define HPI_BUILD_EXCLUDE_DEPRECATED
#define HPI_BUILD_KERNEL_MODE
enum HPI_FORMATS ;
enum HPI_STREAM_STATES ;
enum HPI_SOURCENODES ;
enum HPI_DESTNODES ;
enum HPI_CONTROLS ;
enum HPI_ADAPTER_PROPERTIES ;
enum HPI_ADAPTER_MODE_CMDS ;
enum HPI_ADAPTER_MODES ;
#define HPI_CAPABILITY_NONE             (0)
#define HPI_CAPABILITY_MPEG_LAYER3      (1)
#define HPI_CAPABILITY_MAX                      1
enum HPI_MPEG_ANC_MODES ;
enum HPI_ISTREAM_MPEG_ANC_ALIGNS ;
enum HPI_MPEG_MODES ;
#define HPI_MIXER_GET_CONTROL_MULTIPLE_CHANGED  (0)
#define HPI_MIXER_GET_CONTROL_MULTIPLE_RESET    (1)
enum HPI_MIXER_STORE_COMMAND ;
enum HPI_SWITCH_STATES ;
#define HPI_UNITS_PER_dB                100
#define HPI_GAIN_OFF                    (-100 * HPI_UNITS_PER_dB)
#define HPI_BITMASK_ALL_CHANNELS        (0xFFFFFFFF)
#define HPI_METER_MINIMUM               (-150 * HPI_UNITS_PER_dB)
enum HPI_VOLUME_AUTOFADES ;
enum HPI_AESEBU_FORMATS ;
enum HPI_AESEBU_ERRORS ;
#define HPI_PAD_CHANNEL_NAME_LEN        16
#define HPI_PAD_ARTIST_LEN              64
#define HPI_PAD_TITLE_LEN               64
#define HPI_PAD_COMMENT_LEN             256
#define HPI_PAD_PROGRAM_TYPE_INVALID    0xffff
enum eHPI_RDS_type ;
enum HPI_TUNER_BAND ;
enum HPI_TUNER_MODES ;
enum HPI_TUNER_MODE_VALUES ;
enum HPI_TUNER_STATUS_BITS ;
enum HPI_CHANNEL_MODES ;
enum HPI_SAMPLECLOCK_SOURCES ;
enum HPI_FILTER_TYPE ;
enum ASYNC_EVENT_SOURCES ;
enum HPI_ERROR_CODES ;
#define HPI_MAX_ADAPTERS                20
#define HPI_MAX_STREAMS                 16
#define HPI_MAX_CHANNELS                2
#define HPI_MAX_NODES                   8
#define HPI_MAX_CONTROLS                4
#define HPI_MAX_ANC_BYTES_PER_FRAME     (64)
#define HPI_STRING_LEN                  16
#define HPI_OSTREAM_VELOCITY_UNITS      4096
#define HPI_OSTREAM_TIMESCALE_UNITS     10000
#define HPI_OSTREAM_TIMESCALE_PASSTHROUGH       99999
struct hpi_format ;
struct hpi_anc_frame ;
struct hpi_async_event ;
u16 hpi_stream_estimate_buffer_size(struct hpi_format *pF,
u32 host_polling_rate_in_milli_seconds, u32 *recommended_buffer_size);
u16 hpi_subsys_get_version_ex(u32 *pversion_ex);
u16 hpi_subsys_get_num_adapters(int *pn_num_adapters);
u16 hpi_subsys_get_adapter(int iterator, u32 *padapter_index,
u16 *pw_adapter_type);
u16 hpi_adapter_open(u16 adapter_index);
u16 hpi_adapter_close(u16 adapter_index);
u16 hpi_adapter_get_info(u16 adapter_index, u16 *pw_num_outstreams,
u16 *pw_num_instreams, u16 *pw_version, u32 *pserial_number,
u16 *pw_adapter_type);
u16 hpi_adapter_get_module_by_index(u16 adapter_index, u16 module_index,
u16 *pw_num_outputs, u16 *pw_num_inputs, u16 *pw_version,
u32 *pserial_number, u16 *pw_module_type, u32 *ph_module);
u16 hpi_adapter_set_mode(u16 adapter_index, u32 adapter_mode);
u16 hpi_adapter_set_mode_ex(u16 adapter_index, u32 adapter_mode,
u16 query_or_set);
u16 hpi_adapter_get_mode(u16 adapter_index, u32 *padapter_mode);
u16 hpi_adapter_get_assert2(u16 adapter_index, u16 *p_assert_count,
char *psz_assert, u32 *p_param1, u32 *p_param2,
u32 *p_dsp_string_addr, u16 *p_processor_id);
u16 hpi_adapter_test_assert(u16 adapter_index, u16 assert_id);
u16 hpi_adapter_enable_capability(u16 adapter_index, u16 capability, u32 key);
u16 hpi_adapter_self_test(u16 adapter_index);
u16 hpi_adapter_debug_read(u16 adapter_index, u32 dsp_address, char *p_bytes,
int *count_bytes);
u16 hpi_adapter_set_property(u16 adapter_index, u16 property, u16 paramter1,
u16 paramter2);
u16 hpi_adapter_get_property(u16 adapter_index, u16 property,
u16 *pw_paramter1, u16 *pw_paramter2);
u16 hpi_adapter_enumerate_property(u16 adapter_index, u16 index,
u16 what_to_enumerate, u16 property_index, u32 *psetting);
u16 hpi_outstream_open(u16 adapter_index, u16 outstream_index,
u32 *ph_outstream);
u16 hpi_outstream_close(u32 h_outstream);
u16 hpi_outstream_get_info_ex(u32 h_outstream, u16 *pw_state,
u32 *pbuffer_size, u32 *pdata_to_play, u32 *psamples_played,
u32 *pauxiliary_data_to_play);
u16 hpi_outstream_write_buf(u32 h_outstream, const u8 *pb_write_buf,
u32 bytes_to_write, const struct hpi_format *p_format);
u16 hpi_outstream_start(u32 h_outstream);
u16 hpi_outstream_wait_start(u32 h_outstream);
u16 hpi_outstream_stop(u32 h_outstream);
u16 hpi_outstream_sinegen(u32 h_outstream);
u16 hpi_outstream_reset(u32 h_outstream);
u16 hpi_outstream_query_format(u32 h_outstream, struct hpi_format *p_format);
u16 hpi_outstream_set_format(u32 h_outstream, struct hpi_format *p_format);
u16 hpi_outstream_set_punch_in_out(u32 h_outstream, u32 punch_in_sample,
u32 punch_out_sample);
u16 hpi_outstream_set_velocity(u32 h_outstream, short velocity);
u16 hpi_outstream_ancillary_reset(u32 h_outstream, u16 mode);
u16 hpi_outstream_ancillary_get_info(u32 h_outstream, u32 *pframes_available);
u16 hpi_outstream_ancillary_read(u32 h_outstream,
struct hpi_anc_frame *p_anc_frame_buffer,
u32 anc_frame_buffer_size_in_bytes,
u32 number_of_ancillary_frames_to_read);
u16 hpi_outstream_set_time_scale(u32 h_outstream, u32 time_scaleX10000);
u16 hpi_outstream_host_buffer_allocate(u32 h_outstream, u32 size_in_bytes);
u16 hpi_outstream_host_buffer_free(u32 h_outstream);
u16 hpi_outstream_group_add(u32 h_outstream, u32 h_stream);
u16 hpi_outstream_group_get_map(u32 h_outstream, u32 *poutstream_map,
u32 *pinstream_map);
u16 hpi_outstream_group_reset(u32 h_outstream);
u16 hpi_instream_open(u16 adapter_index, u16 instream_index,
u32 *ph_instream);
u16 hpi_instream_close(u32 h_instream);
u16 hpi_instream_query_format(u32 h_instream,
const struct hpi_format *p_format);
u16 hpi_instream_set_format(u32 h_instream,
const struct hpi_format *p_format);
u16 hpi_instream_read_buf(u32 h_instream, u8 *pb_read_buf, u32 bytes_to_read);
u16 hpi_instream_start(u32 h_instream);
u16 hpi_instream_wait_start(u32 h_instream);
u16 hpi_instream_stop(u32 h_instream);
u16 hpi_instream_reset(u32 h_instream);
u16 hpi_instream_get_info_ex(u32 h_instream, u16 *pw_state, u32 *pbuffer_size,
u32 *pdata_recorded, u32 *psamples_recorded,
u32 *pauxiliary_data_recorded);
u16 hpi_instream_ancillary_reset(u32 h_instream, u16 bytes_per_frame,
u16 mode, u16 alignment, u16 idle_bit);
u16 hpi_instream_ancillary_get_info(u32 h_instream, u32 *pframe_space);
u16 hpi_instream_ancillary_write(u32 h_instream,
const struct hpi_anc_frame *p_anc_frame_buffer,
u32 anc_frame_buffer_size_in_bytes,
u32 number_of_ancillary_frames_to_write);
u16 hpi_instream_host_buffer_allocate(u32 h_instream, u32 size_in_bytes);
u16 hpi_instream_host_buffer_free(u32 h_instream);
u16 hpi_instream_group_add(u32 h_instream, u32 h_stream);
u16 hpi_instream_group_get_map(u32 h_instream, u32 *poutstream_map,
u32 *pinstream_map);
u16 hpi_instream_group_reset(u32 h_instream);
u16 hpi_mixer_open(u16 adapter_index, u32 *ph_mixer);
u16 hpi_mixer_close(u32 h_mixer);
u16 hpi_mixer_get_control(u32 h_mixer, u16 src_node_type,
u16 src_node_type_index, u16 dst_node_type, u16 dst_node_type_index,
u16 control_type, u32 *ph_control);
u16 hpi_mixer_get_control_by_index(u32 h_mixer, u16 control_index,
u16 *pw_src_node_type, u16 *pw_src_node_index, u16 *pw_dst_node_type,
u16 *pw_dst_node_index, u16 *pw_control_type, u32 *ph_control);
u16 hpi_mixer_store(u32 h_mixer, enum HPI_MIXER_STORE_COMMAND command,
u16 index);
u16 hpi_volume_set_gain(u32 h_control, short an_gain0_01dB[HPI_MAX_CHANNELS]
);
u16 hpi_volume_get_gain(u32 h_control,
short an_gain0_01dB_out[HPI_MAX_CHANNELS]
);
u16 hpi_volume_set_mute(u32 h_control, u32 mute);
u16 hpi_volume_get_mute(u32 h_control, u32 *mute);
#define hpi_volume_get_range hpi_volume_query_range
u16 hpi_volume_query_range(u32 h_control, short *min_gain_01dB,
short *max_gain_01dB, short *step_gain_01dB);
u16 hpi_volume_query_channels(const u32 h_volume, u32 *p_channels);
u16 hpi_volume_auto_fade(u32 h_control,
short an_stop_gain0_01dB[HPI_MAX_CHANNELS], u32 duration_ms);
u16 hpi_volume_auto_fade_profile(u32 h_control,
short an_stop_gain0_01dB[HPI_MAX_CHANNELS], u32 duration_ms,
u16 profile);
u16 hpi_level_query_range(u32 h_control, short *min_gain_01dB,
short *max_gain_01dB, short *step_gain_01dB);
u16 hpi_level_set_gain(u32 h_control, short an_gain0_01dB[HPI_MAX_CHANNELS]
);
u16 hpi_level_get_gain(u32 h_control,
short an_gain0_01dB_out[HPI_MAX_CHANNELS]
);
u16 hpi_meter_query_channels(const u32 h_meter, u32 *p_channels);
u16 hpi_meter_get_peak(u32 h_control,
short an_peak0_01dB_out[HPI_MAX_CHANNELS]
);
u16 hpi_meter_get_rms(u32 h_control, short an_peak0_01dB_out[HPI_MAX_CHANNELS]
);
u16 hpi_meter_set_peak_ballistics(u32 h_control, u16 attack, u16 decay);
u16 hpi_meter_set_rms_ballistics(u32 h_control, u16 attack, u16 decay);
u16 hpi_meter_get_peak_ballistics(u32 h_control, u16 *attack, u16 *decay);
u16 hpi_meter_get_rms_ballistics(u32 h_control, u16 *attack, u16 *decay);
u16 hpi_channel_mode_query_mode(const u32 h_mode, const u32 index,
u16 *pw_mode);
u16 hpi_channel_mode_set(u32 h_control, u16 mode);
u16 hpi_channel_mode_get(u32 h_control, u16 *mode);
u16 hpi_tuner_query_band(const u32 h_tuner, const u32 index, u16 *pw_band);
u16 hpi_tuner_set_band(u32 h_control, u16 band);
u16 hpi_tuner_get_band(u32 h_control, u16 *pw_band);
u16 hpi_tuner_query_frequency(const u32 h_tuner, const u32 index,
const u16 band, u32 *pfreq);
u16 hpi_tuner_set_frequency(u32 h_control, u32 freq_ink_hz);
u16 hpi_tuner_get_frequency(u32 h_control, u32 *pw_freq_ink_hz);
u16 hpi_tuner_get_rf_level(u32 h_control, short *pw_level);
u16 hpi_tuner_get_raw_rf_level(u32 h_control, short *pw_level);
u16 hpi_tuner_query_gain(const u32 h_tuner, const u32 index, u16 *pw_gain);
u16 hpi_tuner_set_gain(u32 h_control, short gain);
u16 hpi_tuner_get_gain(u32 h_control, short *pn_gain);
u16 hpi_tuner_get_status(u32 h_control, u16 *pw_status_mask, u16 *pw_status);
u16 hpi_tuner_set_mode(u32 h_control, u32 mode, u32 value);
u16 hpi_tuner_get_mode(u32 h_control, u32 mode, u32 *pn_value);
u16 hpi_tuner_get_rds(u32 h_control, char *p_rds_data);
u16 hpi_tuner_query_deemphasis(const u32 h_tuner, const u32 index,
const u16 band, u32 *pdeemphasis);
u16 hpi_tuner_set_deemphasis(u32 h_control, u32 deemphasis);
u16 hpi_tuner_get_deemphasis(u32 h_control, u32 *pdeemphasis);
u16 hpi_tuner_query_program(const u32 h_tuner, u32 *pbitmap_program);
u16 hpi_tuner_set_program(u32 h_control, u32 program);
u16 hpi_tuner_get_program(u32 h_control, u32 *pprogram);
u16 hpi_tuner_get_hd_radio_dsp_version(u32 h_control, char *psz_dsp_version,
const u32 string_size);
u16 hpi_tuner_get_hd_radio_sdk_version(u32 h_control, char *psz_sdk_version,
const u32 string_size);
u16 hpi_tuner_get_hd_radio_signal_quality(u32 h_control, u32 *pquality);
u16 hpi_tuner_get_hd_radio_signal_blend(u32 h_control, u32 *pblend);
u16 hpi_tuner_set_hd_radio_signal_blend(u32 h_control, const u32 blend);
u16 hpi_pad_get_channel_name(u32 h_control, char *psz_string,
const u32 string_length);
u16 hpi_pad_get_artist(u32 h_control, char *psz_string,
const u32 string_length);
u16 hpi_pad_get_title(u32 h_control, char *psz_string,
const u32 string_length);
u16 hpi_pad_get_comment(u32 h_control, char *psz_string,
const u32 string_length);
u16 hpi_pad_get_program_type(u32 h_control, u32 *ppTY);
u16 hpi_pad_get_rdsPI(u32 h_control, u32 *ppI);
u16 hpi_pad_get_program_type_string(u32 h_control, const u32 data_type,
const u32 pTY, char *psz_string, const u32 string_length);
u16 hpi_aesebu_receiver_query_format(const u32 h_aes_rx, const u32 index,
u16 *pw_format);
u16 hpi_aesebu_receiver_set_format(u32 h_control, u16 source);
u16 hpi_aesebu_receiver_get_format(u32 h_control, u16 *pw_source);
u16 hpi_aesebu_receiver_get_sample_rate(u32 h_control, u32 *psample_rate);
u16 hpi_aesebu_receiver_get_user_data(u32 h_control, u16 index, u16 *pw_data);
u16 hpi_aesebu_receiver_get_channel_status(u32 h_control, u16 index,
u16 *pw_data);
u16 hpi_aesebu_receiver_get_error_status(u32 h_control, u16 *pw_error_data);
u16 hpi_aesebu_transmitter_set_sample_rate(u32 h_control, u32 sample_rate);
u16 hpi_aesebu_transmitter_set_user_data(u32 h_control, u16 index, u16 data);
u16 hpi_aesebu_transmitter_set_channel_status(u32 h_control, u16 index,
u16 data);
u16 hpi_aesebu_transmitter_get_channel_status(u32 h_control, u16 index,
u16 *pw_data);
u16 hpi_aesebu_transmitter_query_format(const u32 h_aes_tx, const u32 index,
u16 *pw_format);
u16 hpi_aesebu_transmitter_set_format(u32 h_control, u16 output_format);
u16 hpi_aesebu_transmitter_get_format(u32 h_control, u16 *pw_output_format);
u16 hpi_multiplexer_set_source(u32 h_control, u16 source_node_type,
u16 source_node_index);
u16 hpi_multiplexer_get_source(u32 h_control, u16 *source_node_type,
u16 *source_node_index);
u16 hpi_multiplexer_query_source(u32 h_control, u16 index,
u16 *source_node_type, u16 *source_node_index);
u16 hpi_vox_set_threshold(u32 h_control, short an_gain0_01dB);
u16 hpi_vox_get_threshold(u32 h_control, short *an_gain0_01dB);
u16 hpi_bitstream_set_clock_edge(u32 h_control, u16 edge_type);
u16 hpi_bitstream_set_data_polarity(u32 h_control, u16 polarity);
u16 hpi_bitstream_get_activity(u32 h_control, u16 *pw_clk_activity,
u16 *pw_data_activity);
u16 hpi_sample_clock_query_source(const u32 h_clock, const u32 index,
u16 *pw_source);
u16 hpi_sample_clock_set_source(u32 h_control, u16 source);
u16 hpi_sample_clock_get_source(u32 h_control, u16 *pw_source);
u16 hpi_sample_clock_query_source_index(const u32 h_clock, const u32 index,
const u32 source, u16 *pw_source_index);
u16 hpi_sample_clock_set_source_index(u32 h_control, u16 source_index);
u16 hpi_sample_clock_get_source_index(u32 h_control, u16 *pw_source_index);
u16 hpi_sample_clock_get_sample_rate(u32 h_control, u32 *psample_rate);
u16 hpi_sample_clock_query_local_rate(const u32 h_clock, const u32 index,
u32 *psource);
u16 hpi_sample_clock_set_local_rate(u32 h_control, u32 sample_rate);
u16 hpi_sample_clock_get_local_rate(u32 h_control, u32 *psample_rate);
u16 hpi_sample_clock_set_auto(u32 h_control, u32 enable);
u16 hpi_sample_clock_get_auto(u32 h_control, u32 *penable);
u16 hpi_sample_clock_set_local_rate_lock(u32 h_control, u32 lock);
u16 hpi_sample_clock_get_local_rate_lock(u32 h_control, u32 *plock);
u16 hpi_microphone_set_phantom_power(u32 h_control, u16 on_off);
u16 hpi_microphone_get_phantom_power(u32 h_control, u16 *pw_on_off);
u16 hpi_parametric_eq_get_info(u32 h_control, u16 *pw_number_of_bands,
u16 *pw_enabled);
u16 hpi_parametric_eq_set_state(u32 h_control, u16 on_off);
u16 hpi_parametric_eq_set_band(u32 h_control, u16 index, u16 type,
u32 frequency_hz, short q100, short gain0_01dB);
u16 hpi_parametric_eq_get_band(u32 h_control, u16 index, u16 *pn_type,
u32 *pfrequency_hz, short *pnQ100, short *pn_gain0_01dB);
u16 hpi_parametric_eq_get_coeffs(u32 h_control, u16 index, short coeffs[5]
);
u16 hpi_compander_set_enable(u32 h_control, u32 on);
u16 hpi_compander_get_enable(u32 h_control, u32 *pon);
u16 hpi_compander_set_makeup_gain(u32 h_control, short makeup_gain0_01dB);
u16 hpi_compander_get_makeup_gain(u32 h_control, short *pn_makeup_gain0_01dB);
u16 hpi_compander_set_attack_time_constant(u32 h_control, u32 index,
u32 attack);
u16 hpi_compander_get_attack_time_constant(u32 h_control, u32 index,
u32 *pw_attack);
u16 hpi_compander_set_decay_time_constant(u32 h_control, u32 index,
u32 decay);
u16 hpi_compander_get_decay_time_constant(u32 h_control, u32 index,
u32 *pw_decay);
u16 hpi_compander_set_threshold(u32 h_control, u32 index,
short threshold0_01dB);
u16 hpi_compander_get_threshold(u32 h_control, u32 index,
short *pn_threshold0_01dB);
u16 hpi_compander_set_ratio(u32 h_control, u32 index, u32 ratio100);
u16 hpi_compander_get_ratio(u32 h_control, u32 index, u32 *pw_ratio100);
u16 hpi_cobranet_hmi_write(u32 h_control, u32 hmi_address, u32 byte_count,
u8 *pb_data);
u16 hpi_cobranet_hmi_read(u32 h_control, u32 hmi_address, u32 max_byte_count,
u32 *pbyte_count, u8 *pb_data);
u16 hpi_cobranet_hmi_get_status(u32 h_control, u32 *pstatus,
u32 *preadable_size, u32 *pwriteable_size);
u16 hpi_cobranet_get_ip_address(u32 h_control, u32 *pdw_ip_address);
u16 hpi_cobranet_set_ip_address(u32 h_control, u32 dw_ip_address);
u16 hpi_cobranet_get_static_ip_address(u32 h_control, u32 *pdw_ip_address);
u16 hpi_cobranet_set_static_ip_address(u32 h_control, u32 dw_ip_address);
u16 hpi_cobranet_get_macaddress(u32 h_control, u32 *p_mac_msbs,
u32 *p_mac_lsbs);
u16 hpi_tone_detector_get_state(u32 hC, u32 *state);
u16 hpi_tone_detector_set_enable(u32 hC, u32 enable);
u16 hpi_tone_detector_get_enable(u32 hC, u32 *enable);
u16 hpi_tone_detector_set_event_enable(u32 hC, u32 event_enable);
u16 hpi_tone_detector_get_event_enable(u32 hC, u32 *event_enable);
u16 hpi_tone_detector_set_threshold(u32 hC, int threshold);
u16 hpi_tone_detector_get_threshold(u32 hC, int *threshold);
u16 hpi_tone_detector_get_frequency(u32 hC, u32 index, u32 *frequency);
u16 hpi_silence_detector_get_state(u32 hC, u32 *state);
u16 hpi_silence_detector_set_enable(u32 hC, u32 enable);
u16 hpi_silence_detector_get_enable(u32 hC, u32 *enable);
u16 hpi_silence_detector_set_event_enable(u32 hC, u32 event_enable);
u16 hpi_silence_detector_get_event_enable(u32 hC, u32 *event_enable);
u16 hpi_silence_detector_set_delay(u32 hC, u32 delay);
u16 hpi_silence_detector_get_delay(u32 hC, u32 *delay);
u16 hpi_silence_detector_set_threshold(u32 hC, int threshold);
u16 hpi_silence_detector_get_threshold(u32 hC, int *threshold);
u16 hpi_format_create(struct hpi_format *p_format, u16 channels, u16 format,
u32 sample_rate, u32 bit_rate, u32 attributes);
