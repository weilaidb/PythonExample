#define AVCODEC_RL_H
#define MAX_RUN    64
#define MAX_LEVEL  64
typedef struct RLTable  RLTable;
int ff_rl_init(RLTable *rl, uint8_t static_store[2][2*MAX_RUN + MAX_LEVEL + 3]);
void ff_rl_init_vlc(RLTable *rl, unsigned static_size);
void ff_rl_free(RLTable *rl);
#define INIT_VLC_RL(rl, static_size)\
static inline int get_rl_index(const RLTable *rl, int last, int run, int level)
