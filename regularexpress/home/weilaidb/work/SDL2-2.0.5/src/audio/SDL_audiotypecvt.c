#define DEBUG_CONVERT 0
#define LESS_RESAMPLERS 0
#define NO_RESAMPLERS 0
#define NO_CONVERTERS 0
#define DIVBY127 0.0078740157480315f
#define DIVBY32767 3.05185094759972e-05f
#define DIVBY2147483647 4.6566128752458e-10f
#if !NO_CONVERTERS
static void SDLCALL
SDL_Convert_U8_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U8_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S8_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16LSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16LSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_U16MSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S16MSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32LSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_S32MSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32LSB_to_F32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_U8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_S8(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_U16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_S16LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_U16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_S16MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_S32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_S32MSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Convert_F32MSB_to_F32LSB(SDL_AudioCVT * cvt, SDL_AudioFormat format)
const SDL_AudioTypeFilters sdl_audio_type_filters[] =
;
#if !NO_RESAMPLERS
static void SDLCALL
SDL_Upsample_U8_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_1c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_2c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_4c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_6c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_8c(SDL_AudioCVT * cvt, SDL_AudioFormat format)
#if !LESS_RESAMPLERS
static void SDLCALL
SDL_Upsample_U8_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U8_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U8_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S8_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S8_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_U16MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_U16MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S16MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S16MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_S32MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_S32MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32LSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_1c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_1c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_2c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_2c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_4c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_4c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_6c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_6c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_8c_x2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Upsample_F32MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_Downsample_F32MSB_8c_x4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
const SDL_AudioRateFilters sdl_audio_rate_filters[] =
;
