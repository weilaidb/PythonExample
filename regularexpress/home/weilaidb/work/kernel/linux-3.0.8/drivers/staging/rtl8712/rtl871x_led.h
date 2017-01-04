#define __RTL8712_LED_H
enum LED_CTL_MODE ;
#define IS_LED_WPS_BLINKING(_LED_871x)	\
(((struct LED_871x *)_LED_871x)->CurrLedState == LED_BLINK_WPS \
|| ((struct LED_871x *)_LED_871x)->CurrLedState == LED_BLINK_WPS_STOP \
|| ((struct LED_871x *)_LED_871x)->bLedWPSBlinkInProgress)
#define IS_LED_BLINKING(_LED_871x)	\
(((struct LED_871x *)_LED_871x)->bLedWPSBlinkInProgress \
|| ((struct LED_871x *)_LED_871x)->bLedScanBlinkInProgress)
enum LED_PIN_871x ;
enum LED_STRATEGY_871x ;
struct LED_871x ;
struct led_priv ;
void r8712_InitSwLeds(struct _adapter *padapter);
void r8712_DeInitSwLeds(struct _adapter *padapter);
void LedControl871x(struct _adapter *padapter, enum LED_CTL_MODE LedAction);
