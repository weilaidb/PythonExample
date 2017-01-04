#define _SDL_version_h
typedef struct SDL_version
SDL_version;
#define SDL_MAJOR_VERSION   2
#define SDL_MINOR_VERSION   0
#define SDL_PATCHLEVEL      5
#define SDL_VERSION(x)                          \
#define SDL_VERSIONNUM(X, Y, Z)                     \
((X)*1000 + (Y)*100 + (Z))
#define SDL_COMPILEDVERSION \
SDL_VERSIONNUM(SDL_MAJOR_VERSION, SDL_MINOR_VERSION, SDL_PATCHLEVEL)
#define SDL_VERSION_ATLEAST(X, Y, Z) \
(SDL_COMPILEDVERSION >= SDL_VERSIONNUM(X, Y, Z))
extern DECLSPEC void SDLCALL SDL_GetVersion(SDL_version * ver);
extern DECLSPEC const char *SDLCALL SDL_GetRevision(void);
extern DECLSPEC int SDLCALL SDL_GetRevisionNumber(void);
