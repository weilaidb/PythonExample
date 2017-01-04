#define __RTL8712_GP_BITDEF_H__
#define	_GPIO_MOD_MSK			0xFF000000
#define	_GPIO_MOD_SHT			24
#define	_GPIO_IO_SEL_MSK		0x00FF0000
#define	_GPIO_IO_SEL_SHT		16
#define	_GPIO_OUT_MSK			0x0000FF00
#define	_GPIO_OUT_SHT			8
#define	_GPIO_IN_MSK			0x000000FF
#define	_GPIO_IN_SHT			0
#define	_GPIOSEL_MSK			0x0003
#define	_GPIOSEL_SHT			0
#define _LED1SV				BIT(7)
#define _LED1CM_MSK			0x0070
#define _LED1CM_SHT			4
#define _LED0SV				BIT(3)
#define _LED0CM_MSK			0x0007
#define _LED0CM_SHT			0
#define _HST_RDRDY_SHT			0
#define _HST_RDRDY_MSK			0xFF
#define _HST_RDRDY			BIT(_HST_RDRDY_SHT)
#define _CPU_WTBUSY_SHT			1
#define _CPU_WTBUSY_MSK			0xFF
#define _CPU_WTBUSY			BIT(_CPU_WTBUSY_SHT)
#define		GPIOMUX_EN	BIT(3)
#define		GPIOSEL_GPIO	0
#define		GPIOSEL_PHYDBG	1
#define		GPIOSEL_BT	2
#define		GPIOSEL_WLANDBG	3
#define		GPIOSEL_GPIO_MASK	(~(BIT(0)|BIT(1)))
#define		HAL_8192S_HW_GPIO_OFF_BIT	BIT(3)
#define		HAL_8192S_HW_GPIO_OFF_MASK	0xF7
#define		HAL_8192S_HW_GPIO_WPS_BIT	BIT(4)