#define LED_BLINK_NORMAL_INTERVAL	100
#define LED_BLINK_SLOWLY_INTERVAL	200
#define LED_BLINK_LONG_INTERVAL	400
#define LED_BLINK_NO_LINK_INTERVAL_ALPHA	1000
#define LED_BLINK_LINK_INTERVAL_ALPHA		500
#define LED_BLINK_SCAN_INTERVAL_ALPHA		180
#define LED_BLINK_FASTER_INTERVAL_ALPHA		50
#define LED_BLINK_WPS_SUCESS_INTERVAL_ALPHA	5000
enum _LED_STATE_871x ;
static void BlinkTimerCallback(unsigned long data);
static void BlinkWorkItemCallback(struct work_struct *work);
static void InitLed871x(struct _adapter *padapter, struct LED_871x *pLed,
enum LED_PIN_871x	LedPin)
static void DeInitLed871x(struct LED_871x *pLed)
static void SwLedOn(struct _adapter *padapter, struct LED_871x *pLed)
static void SwLedOff(struct _adapter *padapter, struct LED_871x *pLed)
void r8712_InitSwLeds(struct _adapter *padapter)
void r8712_DeInitSwLeds(struct _adapter *padapter)
static void SwLedBlink(struct LED_871x *pLed)
static void SwLedBlink1(struct LED_871x *pLed)
static void SwLedBlink2(struct LED_871x *pLed)
static void SwLedBlink3(struct LED_871x *pLed)
static void SwLedBlink4(struct LED_871x *pLed)
static void SwLedBlink5(struct LED_871x *pLed)
static void SwLedBlink6(struct LED_871x *pLed)
static void BlinkTimerCallback(unsigned long data)
static void BlinkWorkItemCallback(struct work_struct *work)
static void SwLedControlMode1(struct _adapter *padapter,
enum LED_CTL_MODE LedAction)
static void SwLedControlMode2(struct _adapter *padapter,
enum LED_CTL_MODE LedAction)
static void SwLedControlMode3(struct _adapter *padapter,
enum LED_CTL_MODE LedAction)
static void SwLedControlMode4(struct _adapter *padapter,
enum LED_CTL_MODE LedAction)
static void SwLedControlMode5(struct _adapter *padapter,
enum LED_CTL_MODE LedAction)
static void SwLedControlMode6(struct _adapter *padapter,
enum LED_CTL_MODE LedAction)
void LedControl871x(struct _adapter *padapter, enum LED_CTL_MODE LedAction)
