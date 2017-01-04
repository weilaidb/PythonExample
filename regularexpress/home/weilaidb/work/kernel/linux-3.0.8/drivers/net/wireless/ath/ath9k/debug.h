#define DEBUG_H
struct ath_txq;
struct ath_buf;
#define TX_STAT_INC(q, c) sc->debug.stats.txstats[q].c++
#define TX_STAT_INC(q, c) do  while (0)
struct ath_interrupt_stats ;
struct ath_tx_stats ;
struct ath_rx_stats ;
struct ath_stats ;
struct ath9k_debug ;
int ath9k_init_debug(struct ath_hw *ah);
void ath_debug_stat_interrupt(struct ath_softc *sc, enum ath9k_int status);
void ath_debug_stat_tx(struct ath_softc *sc, struct ath_buf *bf,
struct ath_tx_status *ts, struct ath_txq *txq);
void ath_debug_stat_rx(struct ath_softc *sc, struct ath_rx_status *rs);
static inline int ath9k_init_debug(struct ath_hw *ah)
static inline void ath_debug_stat_interrupt(struct ath_softc *sc,
enum ath9k_int status)
static inline void ath_debug_stat_tx(struct ath_softc *sc,
struct ath_buf *bf,
struct ath_tx_status *ts,
struct ath_txq *txq)
static inline void ath_debug_stat_rx(struct ath_softc *sc,
struct ath_rx_status *rs)
