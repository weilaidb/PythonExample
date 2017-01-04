static void ath_led_brightness(struct led_classdev *led_cdev,
enum led_brightness brightness)
void ath_deinit_leds(struct ath_softc *sc)
void ath_init_leds(struct ath_softc *sc)
static bool ath_is_rfkill_set(struct ath_softc *sc)
void ath9k_rfkill_poll_state(struct ieee80211_hw *hw)
void ath_start_rfkill_poll(struct ath_softc *sc)
static void ath_detect_bt_priority(struct ath_softc *sc)
static void ath9k_gen_timer_start(struct ath_hw *ah,
struct ath_gen_timer *timer,
u32 trig_timeout,
u32 timer_period)
static void ath9k_gen_timer_stop(struct ath_hw *ah, struct ath_gen_timer *timer)
static void ath_btcoex_period_timer(unsigned long data)
static void ath_btcoex_no_stomp_timer(void *arg)
int ath_init_btcoex_timer(struct ath_softc *sc)
void ath9k_btcoex_timer_resume(struct ath_softc *sc)
void ath9k_btcoex_timer_pause(struct ath_softc *sc)
