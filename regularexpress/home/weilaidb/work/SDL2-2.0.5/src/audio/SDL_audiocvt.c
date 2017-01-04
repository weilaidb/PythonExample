static void SDLCALL
SDL_ConvertMono(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_ConvertStrip(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_ConvertStrip_2(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_ConvertStereo(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_ConvertSurround(SDL_AudioCVT * cvt, SDL_AudioFormat format)
static void SDLCALL
SDL_ConvertSurround_4(SDL_AudioCVT * cvt, SDL_AudioFormat format)
int
SDL_ConvertAudio(SDL_AudioCVT * cvt)
static SDL_AudioFilter
SDL_HandTunedTypeCVT(SDL_AudioFormat src_fmt, SDL_AudioFormat dst_fmt)
static int
SDL_BuildAudioTypeCVT(SDL_AudioCVT * cvt,
SDL_AudioFormat src_fmt, SDL_AudioFormat dst_fmt)
static SDL_AudioFilter
SDL_HandTunedResampleCVT(SDL_AudioCVT * cvt, int dst_channels,
int src_rate, int dst_rate)
static int
SDL_FindFrequencyMultiple(const int src_rate, const int dst_rate)
static int
SDL_BuildAudioResampleCVT(SDL_AudioCVT * cvt, int dst_channels,
int src_rate, int dst_rate)
int
SDL_BuildAudioCVT(SDL_AudioCVT * cvt,
SDL_AudioFormat src_fmt, Uint8 src_channels, int src_rate,
SDL_AudioFormat dst_fmt, Uint8 dst_channels, int dst_rate)
