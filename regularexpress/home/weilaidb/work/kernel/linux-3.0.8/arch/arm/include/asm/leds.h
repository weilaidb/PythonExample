#define ASM_ARM_LEDS_H
typedef enum  led_event_t;
extern void (*leds_event)(led_event_t);
#define leds_event(e)
