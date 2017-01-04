#define CAP_H
typedef enum  CAP_RC_T;
typedef enum  CAP_CAPABILITY_T;
typedef enum  CAP_LCD_RES_T;
static inline CAP_RC_T cap_isPresent(CAP_CAPABILITY_T capability, int index);
static inline uint32_t cap_getMaxArmSpeedHz(void);
static inline uint32_t cap_getMaxVpmSpeedHz(void);
static inline CAP_LCD_RES_T cap_getMaxLcdRes(void);
