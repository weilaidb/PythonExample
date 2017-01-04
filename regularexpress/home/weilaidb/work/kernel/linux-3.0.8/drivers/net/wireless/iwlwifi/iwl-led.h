#define __iwl_leds_h__
struct iwl_priv;
#define IWL_LED_SOLID 11
#define IWL_DEF_LED_INTRVL cpu_to_le32(1000)
#define IWL_LED_ACTIVITY       (0<<1)
#define IWL_LED_LINK           (1<<1)
enum iwl_led_mode ;
void iwlagn_led_enable(struct iwl_priv *priv);
void iwl_leds_init(struct iwl_priv *priv);
void iwl_leds_exit(struct iwl_priv *priv);
