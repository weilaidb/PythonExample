static const Uint8 mix8[] = ;
#define ADJUST_VOLUME(s, v) (s = (s*v)/SDL_MIX_MAXVOLUME)
#define ADJUST_VOLUME_U8(s, v)  (s = (((s-128)*v)/SDL_MIX_MAXVOLUME)+128)
void
SDL_MixAudioFormat(Uint8 * dst, const Uint8 * src, SDL_AudioFormat format,
Uint32 len, int volume)
