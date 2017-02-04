#define __AVXSYNTH_C__
#define AVSC_USE_STDCALL 1
#  define AVSC_CC __cdecl
#  define AVSC_CC __stdcall
#define AVSC_INLINE static __inline
#  define AVSC_EXPORT EXTERN_C
__declspec ret AVSC_CC name
__declspec
#  ifndef AVSC_NO_DECLSPEC
__declspec ret AVSC_CC name
#  else
AVSC_API typedef ret (AVSC_CC *name##_func)
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
avs_has_video
avs_has_audio
avs_is_rgb
avs_is_rgb24
avs_is_rgb32
avs_is_yuv
avs_is_yuy2
avs_is_yv12
avs_is_color_space
avs_is_property
avs_is_planar
avs_is_field_based
avs_is_parity_known
avs_is_bff
avs_is_tff
avs_bits_per_pixel
avs_bytes_from_pixels
avs_row_size
avs_bmp_size
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
typedef struct AVS_VideoFrameBuffer  AVS_VideoFrameBuffer;
typedef struct AVS_VideoFrame  AVS_VideoFrame;
avs_get_pitch
avs_get_pitch_p
avs_get_row_size
avs_get_row_size_p
avs_get_height
avs_get_height_p
avs_get_read_ptr
avs_get_read_ptr_p
avs_is_writable
avs_get_write_ptr
avs_get_write_ptr_p
#if defined __cplusplus
extern
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
#if defined __cplusplus
extern
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
#if defined __cplusplus
extern
typedef AVS_Value (AVSC_CC * AVS_ApplyFunc)
(AVS_ScriptEnvironment *, AVS_Value args, void * user_data);
typedef struct AVS_FilterInfo AVS_FilterInfo;
struct AVS_FilterInfo
;
#if defined __cplusplus
extern
enum ;
#if defined __cplusplus
extern
AVSC_INLINE
avs_new_video_frame
AVSC_INLINE
avs_new_frame
#if defined __cplusplus
extern
AVSC_EXPORT
avisynth_c_plugin_init;
#if defined __cplusplus
extern
