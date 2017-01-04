typedef struct SDL_HintWatch  SDL_HintWatch;
typedef struct SDL_Hint  SDL_Hint;
static SDL_Hint *SDL_hints;
SDL_bool
SDL_SetHintWithPriority(const char *name, const char *value,
SDL_HintPriority priority)
SDL_bool
SDL_SetHint(const char *name, const char *value)
const char *
SDL_GetHint(const char *name)
SDL_bool
SDL_GetHintBoolean(const char *name, SDL_bool default_value)
void
SDL_AddHintCallback(const char *name, SDL_HintCallback callback, void *userdata)
void
SDL_DelHintCallback(const char *name, SDL_HintCallback callback, void *userdata)
void SDL_ClearHints(void)
