#define _ATH5K_DEBUG_H
struct ath5k_softc;
struct ath5k_hw;
struct sk_buff;
struct ath5k_buf;
struct ath5k_dbg_info ;
enum ath5k_debug_level ;
#define ATH5K_DBG(_sc, _m, _fmt, ...) do  while (0)
#define ATH5K_DBG_UNLIMIT(_sc, _m, _fmt, ...) do  while (0)
void
ath5k_debug_init_device(struct ath5k_softc *sc);
void
ath5k_debug_printrxbuffs(struct ath5k_softc *sc, struct ath5k_hw *ah);
void
ath5k_debug_dump_bands(struct ath5k_softc *sc);
void
ath5k_debug_printtxbuf(struct ath5k_softc *sc, struct ath5k_buf *bf);
static inline void __attribute__ ((format (printf, 3, 4)))
ATH5K_DBG(struct ath5k_softc *sc, unsigned int m, const char *fmt, ...)
static inline void __attribute__ ((format (printf, 3, 4)))
ATH5K_DBG_UNLIMIT(struct ath5k_softc *sc, unsigned int m, const char *fmt, ...)
static inline void
ath5k_debug_init_device(struct ath5k_softc *sc)
static inline void
ath5k_debug_printrxbuffs(struct ath5k_softc *sc, struct ath5k_hw *ah)
static inline void
ath5k_debug_dump_bands(struct ath5k_softc *sc)
static inline void
ath5k_debug_printtxbuf(struct ath5k_softc *sc, struct ath5k_buf *bf)
