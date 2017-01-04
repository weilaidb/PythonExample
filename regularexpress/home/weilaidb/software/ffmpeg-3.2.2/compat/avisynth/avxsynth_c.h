#define __AVXSYNTH_C__
#define AVSC_USE_STDCALL 1
#  define AVSC_CC __cdecl
#  define AVSC_CC __stdcall
#define AVSC_INLINE static __inline
#  define AVSC_EXPORT EXTERN_C
#  define AVSC_API(ret, name) EXTERN_C __declspec(dllexport) ret AVSC_CC name
#  define AVSC_EXPORT EXTERN_C __declspec(dllexport)
#  ifndef AVSC_NO_DECLSPEC
#    define AVSC_API(ret, name) EXTERN_C __declspec(dllimport) ret AVSC_CC name
#  else
#    define AVSC_API(ret, name) typedef ret (AVSC_CC *name##_func)
#  endif
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
AVSC_INLINE int avs_is_yv12(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_color_space(const AVS_VideoInfo * p, int c_space)
AVSC_INLINE int avs_is_property(const AVS_VideoInfo * p, int property)
AVSC_INLINE int avs_is_planar(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_field_based(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_parity_known(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_bff(const AVS_VideoInfo * p)
AVSC_INLINE int avs_is_tff(const AVS_VideoInfo * p)
AVSC_INLINE int avs_bits_per_pixel(const AVS_VideoInfo * p)
AVSC_INLINE int avs_bytes_from_pixels(const AVS_VideoInfo * p, int pixels)
AVSC_INLINE int avs_row_size(const AVS_VideoInfo * p)
AVSC_INLINE int avs_bmp_size(const AVS_VideoInfo * vi)
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
AVSC_INLINE int avs_get_pitch(const AVS_VideoFrame * p)
AVSC_INLINE int avs_get_pitch_p(const AVS_VideoFrame * p, int plane)
AVSC_INLINE int avs_get_row_size(const AVS_VideoFrame * p)
AVSC_INLINE int avs_get_row_size_p(const AVS_VideoFrame * p, int plane)
AVSC_INLINE int avs_get_height(const AVS_VideoFrame * p)
AVSC_INLINE int avs_get_height_p(const AVS_VideoFrame * p, int plane)
AVSC_INLINE const unsigned char* avs_get_read_ptr(const AVS_VideoFrame * p)
AVSC_INLINE const unsigned char* avs_get_read_ptr_p(const AVS_VideoFrame * p, int plane)
AVSC_INLINE int avs_is_writable(const AVS_VideoFrame * p)
AVSC_INLINE unsigned char* avs_get_write_ptr(const AVS_VideoFrame * p)
AVSC_INLINE unsigned char* avs_get_write_ptr_p(const AVS_VideoFrame * p, int plane)
#if defined __cplusplus
extern "C"
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
#if defined __cplusplus
extern "C"
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
#if defined __cplusplus
extern "C"
typedef AVS_Value (AVSC_CC * AVS_ApplyFunc)
(AVS_ScriptEnvironment *, AVS_Value args, void * user_data);
typedef struct AVS_FilterInfo AVS_FilterInfo;
struct AVS_FilterInfo
;
#if defined __cplusplus
extern "C"
enum ;
#if defined __cplusplus
extern "C"
AVSC_INLINE
AVS_VideoFrame * avs_new_video_frame(AVS_ScriptEnvironment * env,
const AVS_VideoInfo * vi)
AVSC_INLINE
AVS_VideoFrame * avs_new_frame(AVS_ScriptEnvironment * env,
const AVS_VideoInfo * vi)
#if defined __cplusplus
extern "C"
AVSC_EXPORT
const char * AVSC_CC avisynth_c_plugin_init(AVS_ScriptEnvironment* env);
#if defined __cplusplus
extern "C"
