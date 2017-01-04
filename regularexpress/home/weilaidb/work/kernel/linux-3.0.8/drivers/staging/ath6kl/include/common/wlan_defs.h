#define __WLAN_DEFS_H__
typedef enum  WLAN_PHY_MODE;
typedef enum WLAN_CAPABILITY;
typedef unsigned long A_RATEMASK;
typedef unsigned short A_RATEMASK;
#define IS_MODE_11A(mode)       (((mode) == MODE_11A) || \
((mode) == MODE_11NA_HT20) || \
((mode) == MODE_11NA_HT40))
#define IS_MODE_11B(mode)       ((mode) == MODE_11B)
#define IS_MODE_11G(mode)       (((mode) == MODE_11G) || \
((mode) == MODE_11GONLY) || \
((mode) == MODE_11NG_HT20) || \
((mode) == MODE_11NG_HT40))
#define IS_MODE_11GONLY(mode)   ((mode) == MODE_11GONLY)
#define IS_MODE_11A(mode)       ((mode) == MODE_11A)
#define IS_MODE_11B(mode)       ((mode) == MODE_11B)
#define IS_MODE_11G(mode)       (((mode) == MODE_11G) || \
((mode) == MODE_11GONLY))
#define IS_MODE_11GONLY(mode)   ((mode) == MODE_11GONLY)
