#define AVCODEC_GOLOMB_H
#define INVALID_VLC           0x80000000
extern const uint8_t ff_golomb_vlc_len[512];
extern const uint8_t ff_ue_golomb_vlc_code[512];
extern const  int8_t ff_se_golomb_vlc_code[512];
extern const uint8_t ff_ue_golomb_len[256];
extern const uint8_t ff_interleaved_golomb_vlc_len[256];
extern const uint8_t ff_interleaved_ue_golomb_vlc_code[256];
extern const  int8_t ff_interleaved_se_golomb_vlc_code[256];
extern const uint8_t ff_interleaved_dirac_golomb_vlc_code[256];
static inline int get_ue_golomb(GetBitContext *gb)
static inline unsigned get_ue_golomb_long(GetBitContext *gb)
static inline int get_ue_golomb_31(GetBitContext *gb)
static inline unsigned svq3_get_ue_golomb(GetBitContext *gb)
static inline int get_te0_golomb(GetBitContext *gb, int range)
static inline int get_te_golomb(GetBitContext *gb, int range)
static inline int get_se_golomb(GetBitContext *gb)
static inline int get_se_golomb_long(GetBitContext *gb)
static inline int svq3_get_se_golomb(GetBitContext *gb)
static inline int dirac_get_se_golomb(GetBitContext *gb)
static inline int get_ur_golomb(GetBitContext *gb, int k, int limit,
int esc_len)
static inline int get_ur_golomb_jpegls(GetBitContext *gb, int k, int limit,
int esc_len)
static inline int get_sr_golomb(GetBitContext *gb, int k, int limit,
int esc_len)
static inline int get_sr_golomb_flac(GetBitContext *gb, int k, int limit,
int esc_len)
static inline unsigned int get_ur_golomb_shorten(GetBitContext *gb, int k)
static inline int get_sr_golomb_shorten(GetBitContext *gb, int k)
static inline int get_ue(GetBitContext *s, const char *file, const char *func,
int line)
static inline int get_se(GetBitContext *s, const char *file, const char *func,
int line)
static inline int get_te(GetBitContext *s, int r, char *file, const char *func,
int line)
#define get_ue_golomb(a) get_ue(a, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_se_golomb(a) get_se(a, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_te_golomb(a, r)  get_te(a, r, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_te0_golomb(a, r) get_te(a, r, __FILE__, __PRETTY_FUNCTION__, __LINE__)
static inline void set_ue_golomb(PutBitContext *pb, int i)
static inline void set_te_golomb(PutBitContext *pb, int i, int range)
static inline void set_se_golomb(PutBitContext *pb, int i)
static inline void set_ur_golomb(PutBitContext *pb, int i, int k, int limit,
int esc_len)
static inline void set_ur_golomb_jpegls(PutBitContext *pb, int i, int k,
int limit, int esc_len)
static inline void set_sr_golomb(PutBitContext *pb, int i, int k, int limit,
int esc_len)
static inline void set_sr_golomb_flac(PutBitContext *pb, int i, int k,
int limit, int esc_len)
