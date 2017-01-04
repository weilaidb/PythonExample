#define __AVISYNTH_C__
#define AVSC_USE_STDCALL 1
#  define AVSC_CC __cdecl
#  define AVSC_CC __stdcall
#define AVSC_INLINE static __inline
#  define AVSC_EXPORT __declspec(dllexport)
#  define AVSC_API(ret, name) EXTERN_C AVSC_EXPORT ret AVSC_CC name
#  define AVSC_EXPORT __declspec(dllimport)
#  ifndef AVSC_NO_DECLSPEC
#    define AVSC_API(ret, name) EXTERN_C AVSC_EXPORT ret AVSC_CC name
#  else
#    define AVSC_API(ret, name) typedef ret (AVSC_CC *name##_func)
#  endif
typedef unsigned char BYTE;
typedef long long int INT64;
typedef __int64 INT64;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define AVS_FRAME_ALIGN 16
typedef struct AVS_Clip AVS_Clip;
typedef struct AVS_ScriptEnvironment AVS_ScriptEnvironment;
typedef struct AVS_VideoInfo  AVS_VideoInfo;
AVSC_INLINE int avs_has_video(const AVS_VideoInfo * p)
AVSC_INLINE int avs_has_audio(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_rgb(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_rgb24(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_rgb32(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_yuv(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_yuy2(const AVS_VideoInfo * p)
AVSC_API(int, avs_is_yv24)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yv16)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yv12)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_yv411)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_y8)(const AVS_VideoInfo * p);
AVSC_INLINE int avs_is_yv24(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_yv16(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_yv12(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_yv411(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_y8(const AVS_VideoInfo * p)
#if 1
AVSC_API(int, avs_is_rgb48)(const AVS_VideoInfo * p);
AVSC_API(int, avs_is_rgb64)(const AVS_VideoInfo * p);
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
AVSC_API(int, avs_num_components)(const AVS_VideoInfo * p);
AVSC_API(int, avs_component_size)(const AVS_VideoInfo * p);
AVSC_API(int, avs_bits_per_component)(const AVS_VideoInfo * p);
AVSC_INLINE int avs_is_property(const AVS_VideoInfo * p, int property)
AVSC_INLINE int avs_is_planar(const AVS_VideoInfo * p)
AVSC_API(int, avs_is_color_space)(const AVS_VideoInfo * p, int c_space);
AVSC_INLINE int avs_is_field_based(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_parity_known(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_bff(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_tff(const AVS_VideoInfo * p)
AVSC_API(int, avs_get_plane_width_subsampling)(const AVS_VideoInfo * p, int plane);
AVSC_API(int, avs_get_plane_height_subsampling)(const AVS_VideoInfo * p, int plane);
AVSC_API(int, avs_bits_per_pixel)(const AVS_VideoInfo * p);
AVSC_API(int, avs_bytes_from_pixels)(const AVS_VideoInfo * p, int pixels);
AVSC_API(int, avs_row_size_p)(const AVS_VideoInfo * p, int plane);
AVSC_INLINE int avs_row_size(const AVS_VideoInfo * p)
AVSC_API(int, avs_bmp_size)(const AVS_VideoInfo * vi);
AVSC_INLINE int avs_samples_per_second(const AVS_VideoInfo * p)
AVSC_INLINE int avs_bytes_per_channel_sample(const AVS_VideoInfo * p)
AVSC_INLINE int avs_bytes_per_audio_sample(const AVS_VideoInfo * p)
AVSC_INLINE INT64 avs_audio_samples_from_frames(const AVS_VideoInfo * p, INT64 frames)
AVSC_INLINE int avs_frames_from_audio_samples(const AVS_VideoInfo * p, INT64 samples)
AVSC_INLINE INT64 avs_audio_samples_from_bytes(const AVS_VideoInfo * p, INT64 bytes)
AVSC_INLINE INT64 avs_bytes_from_audio_samples(const AVS_VideoInfo * p, INT64 samples)
AVSC_INLINE int avs_audio_channels(const AVS_VideoInfo * p)
AVSC_INLINE int avs_sample_type(const AVS_VideoInfo * p)
AVSC_INLINE void avs_set_property(AVS_VideoInfo * p, int property)
AVSC_INLINE void avs_clear_property(AVS_VideoInfo * p, int property)
AVSC_INLINE void avs_set_field_based(AVS_VideoInfo * p, int isfieldbased)
AVSC_INLINE void avs_set_fps(AVS_VideoInfo * p, unsigned numerator, unsigned denominator)
AVSC_INLINE int avs_is_same_colorspace(AVS_VideoInfo * x, AVS_VideoInfo * y)
typedef struct AVS_VideoFrameBuffer  AVS_VideoFrameBuffer;
typedef struct AVS_VideoFrame  AVS_VideoFrame;
AVSC_API(int, avs_get_pitch_p)(const AVS_VideoFrame * p, int plane);
AVSC_INLINE int avs_get_pitch_p(const AVS_VideoFrame * p, int plane)
AVSC_INLINE int avs_get_pitch(const AVS_VideoFrame * p)
AVSC_API(int, avs_get_row_size_p)(const AVS_VideoFrame * p, int plane);
AVSC_INLINE int avs_get_row_size(const AVS_VideoFrame * p)
AVSC_API(int, avs_get_height_p)(const AVS_VideoFrame * p, int plane);
AVSC_INLINE int avs_get_height(const AVS_VideoFrame * p)
AVSC_API(const BYTE *, avs_get_read_ptr_p)(const AVS_VideoFrame * p, int plane);
AVSC_INLINE const BYTE* avs_get_read_ptr_p(const AVS_VideoFrame * p, int plane)
AVSC_INLINE const BYTE* avs_get_read_ptr(const AVS_VideoFrame * p)
AVSC_API(int, avs_is_writable)(const AVS_VideoFrame * p);
AVSC_API(BYTE *, avs_get_write_ptr_p)(const AVS_VideoFrame * p, int plane);
AVSC_INLINE BYTE* avs_get_write_ptr(const AVS_VideoFrame * p)
AVSC_API(void, avs_release_video_frame)(AVS_VideoFrame *);
AVSC_API(AVS_VideoFrame *, avs_copy_video_frame)(AVS_VideoFrame *);
AVSC_INLINE void avs_release_frame(AVS_VideoFrame * f)
AVSC_INLINE AVS_VideoFrame * avs_copy_frame(AVS_VideoFrame * f)
typedef struct AVS_Value AVS_Value;
struct AVS_Value ;
static const AVS_Value avs_void = ;
AVSC_API(void, avs_copy_value)(AVS_Value * dest, AVS_Value src);
AVSC_API(void, avs_release_value)(AVS_Value);
AVSC_INLINE int avs_defined(AVS_Value v)
AVSC_INLINE int avs_is_clip(AVS_Value v)
AVSC_INLINE int avs_is_bool(AVS_Value v)
AVSC_INLINE int avs_is_int(AVS_Value v)
AVSC_INLINE int avs_is_float(AVS_Value v)
AVSC_INLINE int avs_is_string(AVS_Value v)
AVSC_INLINE int avs_is_array(AVS_Value v)
AVSC_INLINE int avs_is_error(AVS_Value v)
AVSC_API(AVS_Clip *, avs_take_clip)(AVS_Value, AVS_ScriptEnvironment *);
AVSC_API(void, avs_set_to_clip)(AVS_Value *, AVS_Clip *);
AVSC_INLINE int avs_as_bool(AVS_Value v)
AVSC_INLINE int avs_as_int(AVS_Value v)
AVSC_INLINE const char * avs_as_string(AVS_Value v)
AVSC_INLINE double avs_as_float(AVS_Value v)
AVSC_INLINE const char * avs_as_error(AVS_Value v)
AVSC_INLINE const AVS_Value * avs_as_array(AVS_Value v)
AVSC_INLINE int avs_array_size(AVS_Value v)
AVSC_INLINE AVS_Value avs_array_elt(AVS_Value v, int index)
AVSC_INLINE AVS_Value avs_new_value_bool(int v0)
AVSC_INLINE AVS_Value avs_new_value_int(int v0)
AVSC_INLINE AVS_Value avs_new_value_string(const char * v0)
AVSC_INLINE AVS_Value avs_new_value_float(float v0)
AVSC_INLINE AVS_Value avs_new_value_error(const char * v0)
AVSC_INLINE AVS_Value avs_new_value_clip(AVS_Clip * v0)
AVSC_INLINE AVS_Value avs_new_value_array(AVS_Value * v0, int size)
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
AVSC_API(long, avs_get_cpu_flags)(AVS_ScriptEnvironment *);
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
AVS_VideoFrame * avs_new_video_frame(AVS_ScriptEnvironment * env,
const AVS_VideoInfo * vi)
AVSC_INLINE
AVS_VideoFrame * avs_new_frame(AVS_ScriptEnvironment * env,
const AVS_VideoInfo * vi)
AVSC_API(int, avs_make_writable)(AVS_ScriptEnvironment *, AVS_VideoFrame * * pvf);
AVSC_API(void, avs_bit_blt)(AVS_ScriptEnvironment *, BYTE* dstp, int dst_pitch, const BYTE* srcp, int src_pitch, int row_size, int height);
typedef void (AVSC_CC *AVS_ShutdownFunc)(void* user_data, AVS_ScriptEnvironment * env);
AVSC_API(void, avs_at_exit)(AVS_ScriptEnvironment *, AVS_ShutdownFunc function, void * user_data);
AVSC_API(AVS_VideoFrame *, avs_subframe)(AVS_ScriptEnvironment *, AVS_VideoFrame * src, int rel_offset, int new_pitch, int new_row_size, int new_height);
AVSC_API(int, avs_set_memory_max)(AVS_ScriptEnvironment *, int mem);
AVSC_API(int, avs_set_working_dir)(AVS_ScriptEnvironment *, const char * newdir);
AVSC_API(AVS_ScriptEnvironment *, avs_create_script_environment)(int version);
AVSC_EXPORT
const char * AVSC_CC avisynth_c_plugin_init(AVS_ScriptEnvironment* env);
AVSC_API(void, avs_delete_script_environment)(AVS_ScriptEnvironment *);
AVSC_API(AVS_VideoFrame *, avs_subframe_planar)(AVS_ScriptEnvironment *, AVS_VideoFrame * src, int rel_offset, int new_pitch, int new_row_size, int new_height, int rel_offsetU, int rel_offsetV, int new_pitchUV);
typedef struct AVS_Library AVS_Library;
#define AVSC_DECLARE_FUNC(name) name##_func name
struct AVS_Library ;
#undef AVSC_DECLARE_FUNC
AVSC_INLINE AVS_Library * avs_load_library()
AVSC_INLINE void avs_free_library(AVS_Library *library)
