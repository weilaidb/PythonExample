extern SDL_AudioFormat SDL_FirstAudioFormat(SDL_AudioFormat format);
extern SDL_AudioFormat SDL_NextAudioFormat(void);
extern void SDL_CalculateAudioSpec(SDL_AudioSpec * spec);
typedef struct
SDL_AudioTypeFilters;
extern const SDL_AudioTypeFilters sdl_audio_type_filters[];
typedef struct
SDL_AudioRateFilters;
extern const SDL_AudioRateFilters sdl_audio_rate_filters[];
