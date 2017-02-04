#define __AVISYNTH_C__
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct AVS_ScriptEnvironment ;
typedef struct AVS_Clip AVS_Clip;
typedef struct AVS_ScriptEnvironment AVS_ScriptEnvironment;
typedef struct AVS_VideoInfo  AVS_VideoInfo;
avs_has_video
avs_has_audio
avs_is_rgb
avs_is_rgb24
avs_is_rgb32
avs_is_yuv
avs_is_yuy2
AVSC_API(int, avs_is_rgb48)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_rgb64)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yv24)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yv16)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yv12)(const AVS_VideoInfo * p) ;
AVSC_API(int, avs_is_yv411)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_y8)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuv444p16)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuv422p16)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuv420p16)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_y16)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuv444ps)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuv422ps)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuv420ps)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_y32)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_444)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_422)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_420)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_y)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yuva)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_planar_rgb)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_planar_rgba)(const AVS_VideoInfo * p);
avs_is_property
avs_is_planar
AVSC_API(int, avs_is_color_space)(const AVS_VideoInfo * p, int c_space);
avs_is_field_based
avs_is_parity_known
avs_is_bff
avs_is_tff
AVSC_API(int, avs_get_plane_width_subsampling)(const AVS_VideoInfo * p, int plane);
AVSC_API(int, avs_get_plane_height_subsampling)(const AVS_VideoInfo * p, int plane);
AVSC_API(int, avs_bits_per_pixel)(const AVS_VideoInfo * p);
AVSC_API(int, avs_bytes_from_pixels)(const AVS_VideoInfo * p, int pixels);
AVSC_API(int, avs_row_size)(const AVS_VideoInfo * p, int plane);
AVSC_API(int, avs_bmp_size)(const AVS_VideoInfo * vi);
avs_samples_per_second
avs_bytes_per_channel_sample
avs_bytes_per_audio_sample
avs_audio_samples_from_frames
avs_frames_from_audio_samples
avs_audio_samples_from_bytes
avs_bytes_from_audio_samples
avs_audio_channels
avs_sample_type
avs_set_property
avs_clear_property
avs_set_field_based
avs_set_fps
avs_is_same_colorspace
AVSC_API(const AVS_VideoInfo * p);
AVSC_API(int, avs_component_size)(const AVS_VideoInfo * p);
AVSC_API(int, avs_bits_per_component)(const AVS_VideoInfo * p);
typedef struct AVS_VideoFrameBuffer  AVS_VideoFrameBuffer;
typedef struct AVS_VideoFrame  AVS_VideoFrame;
AVSC_API(int, avs_get_pitch_p)(const AVS_VideoFrame * p, int plane);
avs_get_pitch
AVSC_API(const AVS_VideoFrame * p, int plane);
avs_get_row_size
AVSC_API(int, avs_get_height_p)(const AVS_VideoFrame * p, int plane);
avs_get_height
AVSC_API(const BYTE *, avs_get_read_ptr_p)(const AVS_VideoFrame * p, int plane);
avs_get_read_ptr
AVSC_API(const AVS_VideoFrame * p);
AVSC_API(BYTE *, avs_get_write_ptr_p)(const AVS_VideoFrame * p, int plane);
avs_get_write_ptr
AVSC_API(AVS_VideoFrame *);
AVSC_API(AVS_VideoFrame *, avs_copy_video_frame)(AVS_VideoFrame *);
avs_release_frame
avs_copy_frame
typedef struct AVS_Value AVS_Value;
struct AVS_Value ;
static const AVS_Value avs_void = ;
AVSC_API(void, avs_copy_value)(AVS_Value * dest, AVS_Value src);
AVSC_API(void, avs_release_value)(AVS_Value);
avs_defined
avs_is_clip
avs_is_bool
avs_is_int
avs_is_float
avs_is_string
avs_is_array
avs_is_error
AVSC_API(AVS_Clip *, avs_take_clip)(AVS_Value, AVS_ScriptEnvironment *);
AVSC_API(void, avs_set_to_clip)(AVS_Value *, AVS_Clip *);
avs_as_bool
avs_as_int
avs_as_string
avs_as_float
avs_as_error
avs_as_array
avs_array_size
avs_array_elt
avs_new_value_bool
avs_new_value_int
avs_new_value_string
avs_new_value_float
avs_new_value_error
avs_new_value_clip
avs_new_value_array
AVSC_API(void, avs_release_clip)(AVS_Clip *);
AVSC_API(AVS_Clip *, avs_copy_clip)(AVS_Clip *);
AVSC_API(const char *, avs_clip_get_error)(AVS_Clip *);
AVSC_API(const AVS_VideoInfo *, avs_get_video_info)(AVS_Clip *);
AVSC_API(int, avs_get_version)(AVS_Clip *);
AVSC_API(AVS_VideoFrame *, avs_get_frame)(AVS_Clip *, int n);
AVSC_API(int, avs_get_parity)(AVS_Clip *, int n);
AVSC_API(int, avs_get_audio)(AVS_Clip *, void * buf,
INT64 start, INT64 count);
AVSC_API(int, avs_set_cache_hints)(AVS_Clip *,
int cachehints, int frame_range);
typedef AVS_Value (AVSC_CC * AVS_ApplyFunc)
(AVS_ScriptEnvironment *, AVS_Value args, void * user_data);
typedef struct AVS_FilterInfo AVS_FilterInfo;
struct AVS_FilterInfo
;
AVSC_API(AVS_Clip *, avs_new_c_filter)(AVS_ScriptEnvironment * e,
AVS_FilterInfo * * fi,
AVS_Value child, int store_child);
enum ;
AVSC_API(const char *, avs_get_error)(AVS_ScriptEnvironment *);
AVSC_API(int, avs_get_cpu_flags)(AVS_ScriptEnvironment *);
AVSC_API(int, avs_check_version)(AVS_ScriptEnvironment *, int version);
AVSC_API(char *, avs_save_string)(AVS_ScriptEnvironment *, const char* s, int length);
AVSC_API(char *, avs_sprintf)(AVS_ScriptEnvironment *, const char * fmt, ...);
AVSC_API(char *, avs_vsprintf)(AVS_ScriptEnvironment *, const char * fmt, void* val);
AVSC_API(int, avs_add_function)(AVS_ScriptEnvironment *,
const char * name, const char * params,
AVS_ApplyFunc apply, void * user_data);
AVSC_API(int, avs_function_exists)(AVS_ScriptEnvironment *, const char * name);
AVSC_API(AVS_Value, avs_invoke)(AVS_ScriptEnvironment *, const char * name,
AVS_Value args, const char** arg_names);
AVSC_API(AVS_Value, avs_get_var)(AVS_ScriptEnvironment *, const char* name);
AVSC_API(int, avs_set_var)(AVS_ScriptEnvironment *, const char* name, AVS_Value val);
AVSC_API(int, avs_set_global_var)(AVS_ScriptEnvironment *, const char* name, const AVS_Value val);
AVSC_API(AVS_VideoFrame *, avs_new_video_frame_a)(AVS_ScriptEnvironment *,
const AVS_VideoInfo * vi, int align);
AVSC_INLINE
avs_new_video_frame
AVSC_INLINE
avs_new_frame
AVSC_API(AVS_ScriptEnvironment *, AVS_VideoFrame * * pvf);
AVSC_API(void, avs_bit_blt)(AVS_ScriptEnvironment *, BYTE* dstp, int dst_pitch, const BYTE* srcp, int src_pitch, int row_size, int height);
typedef void (AVSC_CC *AVS_ShutdownFunc)(void* user_data, AVS_ScriptEnvironment * env);
AVSC_API(void, avs_at_exit)(AVS_ScriptEnvironment *, AVS_ShutdownFunc function, void * user_data);
AVSC_API(AVS_VideoFrame *, avs_subframe)(AVS_ScriptEnvironment *, AVS_VideoFrame * src, int rel_offset, int new_pitch, int new_row_size, int new_height);
AVSC_API(int, avs_set_memory_max)(AVS_ScriptEnvironment *, int mem);
AVSC_API(int, avs_set_working_dir)(AVS_ScriptEnvironment *, const char * newdir);
AVSC_API(AVS_ScriptEnvironment *, avs_create_script_environment)(int version);
AVSC_EXPORT
avisynth_c_plugin_init;
AVSC_API(void, avs_delete_script_environment)(AVS_ScriptEnvironment *);
AVSC_API(AVS_VideoFrame *, avs_subframe_planar)(AVS_ScriptEnvironment *, AVS_VideoFrame * src, int rel_offset, int new_pitch, int new_row_size, int new_height, int rel_offsetU, int rel_offsetV, int new_pitchUV);
typedef struct AVS_Library AVS_Library;
AVSC_DECLARE_FUNC name##_func name
struct AVS_Library ;
#undef AVSC_DECLARE_FUNC
avs_load_library
avs_free_library
