#define _LED_CONTROL_H
#define NUM_OF_LEDS 4
#define DSD_START_OFFSET                     0x0200
#define EEPROM_VERSION_OFFSET           	 0x020E
#define EEPROM_HW_PARAM_POINTER_ADDRESS 	 0x0218
#define EEPROM_HW_PARAM_POINTER_ADDRRES_MAP5 0x0220
#define GPIO_SECTION_START_OFFSET        	 0x03
#define COMPATIBILITY_SECTION_LENGTH         42
#define COMPATIBILITY_SECTION_LENGTH_MAP5    84
#define EEPROM_MAP5_MAJORVERSION             5
#define EEPROM_MAP5_MINORVERSION             0
#define MAX_NUM_OF_BLINKS 					10
#define NUM_OF_GPIO_PINS 					16
#define DISABLE_GPIO_NUM 					0xFF
#define EVENT_SIGNALED 						1
#define MAX_FILE_NAME_BUFFER_SIZE 			100
#define TURN_ON_LED(GPIO, index) dowhile(0);
#define TURN_OFF_LED(GPIO, index)  do while(0);
#define B_ULONG32 unsigned long
typedef enum _LEDColors LEDColors;
typedef enum LedEvents  LedEventInfo_t;
#define DRIVER_HALT 0xff
typedef struct LedStateInfo_t
LEDStateInfo, *pLEDStateInfo;
typedef struct _LED_INFO_STRUCT
LED_INFO_STRUCT, *PLED_INFO_STRUCT;
#define BCM_LED_THREAD_DISABLED			 	 0
#define BCM_LED_THREAD_RUNNING_ACTIVELY  	 1
#define BCM_LED_THREAD_RUNNING_INACTIVELY	 2
