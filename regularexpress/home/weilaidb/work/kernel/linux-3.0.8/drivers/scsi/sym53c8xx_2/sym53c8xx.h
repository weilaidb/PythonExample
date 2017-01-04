#define SYM53C8XX_H
#define	SYM_CONF_DMA_ADDRESSING_MODE CONFIG_SCSI_SYM53C8XX_DMA_ADDRESSING_MODE
#if 1
#define SYM_CONF_NVRAM_SUPPORT		(1)
#if 1
#define	SYM_LINUX_PROC_INFO_SUPPORT
#define SYM_LINUX_USER_COMMAND_SUPPORT
#define SYM_LINUX_USER_INFO_SUPPORT
#define SYM_LINUX_DEBUG_CONTROL_SUPPORT
#define SYM_CONF_GENERIC_SUPPORT	(1)
#define CONFIG_SCSI_SYM53C8XX_MAX_TAGS	(8)
#if	CONFIG_SCSI_SYM53C8XX_MAX_TAGS < 2
#define SYM_CONF_MAX_TAG	(2)
#elif	CONFIG_SCSI_SYM53C8XX_MAX_TAGS > 256
#define SYM_CONF_MAX_TAG	(256)
#define	SYM_CONF_MAX_TAG	CONFIG_SCSI_SYM53C8XX_MAX_TAGS
#define	CONFIG_SCSI_SYM53C8XX_DEFAULT_TAGS	SYM_CONF_MAX_TAG
#if	SYM_CONF_MAX_TAG <= 64
#define SYM_CONF_MAX_TAG_ORDER	(6)
#elif	SYM_CONF_MAX_TAG <= 128
#define SYM_CONF_MAX_TAG_ORDER	(7)
#define SYM_CONF_MAX_TAG_ORDER	(8)
#define SYM_CONF_MAX_SG		(96)
struct sym_driver_setup ;
#define SYM_SETUP_MAX_TAG		sym_driver_setup.max_tag
#define SYM_SETUP_BURST_ORDER		sym_driver_setup.burst_order
#define SYM_SETUP_SCSI_LED		sym_driver_setup.scsi_led
#define SYM_SETUP_SCSI_DIFF		sym_driver_setup.scsi_diff
#define SYM_SETUP_IRQ_MODE		sym_driver_setup.irq_mode
#define SYM_SETUP_SCSI_BUS_CHECK	sym_driver_setup.scsi_bus_check
#define SYM_SETUP_HOST_ID		sym_driver_setup.host_id
#define boot_verbose			sym_driver_setup.verbose
#define SYM_LINUX_DRIVER_SETUP
extern struct sym_driver_setup sym_driver_setup;
extern unsigned int sym_debug_flags;
#define DEBUG_FLAGS	sym_debug_flags
#define SYM_CONF_MAX_TARGET	(16)
#define SYM_CONF_MAX_LUN	(64)
#define SYM_CONF_IARB_MAX 3
#define SYM_CONF_SET_IARB_ON_ARB_LOST 1
#define SYM_SETUP_RESIDUAL_SUPPORT 1
