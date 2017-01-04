#define _LEDS_BD2802_H_
struct bd2802_led_platform_data;
#define RGB_TIME(slopedown, slopeup, waveform) \
((slopedown) << 6 | (slopeup) << 4 | (waveform))
