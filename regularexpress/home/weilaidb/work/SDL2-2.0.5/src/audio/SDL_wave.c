static int ReadChunk(SDL_RWops * src, Chunk * chunk);
struct MS_ADPCM_decodestate
;
static struct MS_ADPCM_decoder
MS_ADPCM_state;
static int
InitMS_ADPCM(WaveFMT * format)
static Sint32
MS_ADPCM_nibble(struct MS_ADPCM_decodestate *state,
Uint8 nybble, Sint16 * coeff)
static int
MS_ADPCM_decode(Uint8 ** audio_buf, Uint32 * audio_len)
struct IMA_ADPCM_decodestate
;
static struct IMA_ADPCM_decoder
IMA_ADPCM_state;
static int
InitIMA_ADPCM(WaveFMT * format)
static Sint32
IMA_ADPCM_nibble(struct IMA_ADPCM_decodestate *state, Uint8 nybble)
static void
Fill_IMA_ADPCM_block(Uint8 * decoded, Uint8 * encoded,
int channel, int numchannels,
struct IMA_ADPCM_decodestate *state)
static int
IMA_ADPCM_decode(Uint8 ** audio_buf, Uint32 * audio_len)
SDL_AudioSpec *
SDL_LoadWAV_RW(SDL_RWops * src, int freesrc,
SDL_AudioSpec * spec, Uint8 ** audio_buf, Uint32 * audio_len)
void
SDL_FreeWAV(Uint8 * audio_buf)
static int
ReadChunk(SDL_RWops * src, Chunk * chunk)
