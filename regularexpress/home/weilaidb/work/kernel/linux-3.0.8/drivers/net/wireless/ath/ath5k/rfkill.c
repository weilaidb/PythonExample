static inline void ath5k_rfkill_disable(struct ath5k_softc *sc)
static inline void ath5k_rfkill_enable(struct ath5k_softc *sc)
static inline void ath5k_rfkill_set_intr(struct ath5k_softc *sc, bool enable)
static bool
ath5k_is_rfkill_set(struct ath5k_softc *sc)
static void
ath5k_tasklet_rfkill_toggle(unsigned long data)
void
ath5k_rfkill_hw_start(struct ath5k_hw *ah)
void
ath5k_rfkill_hw_stop(struct ath5k_hw *ah)
