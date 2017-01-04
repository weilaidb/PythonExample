#define __WL_VERSION_H__
#define __NO_VERSION__
#define VENDOR_NAME         "Agere Systems, http:
#define DRIVER_NAME         "wlags49"
#define DRV_IDENTITY        49
#define DRV_MAJOR_VERSION   7
#define DRV_MINOR_VERSION   22
#define DRV_VERSION_STR     "7.22"
#if defined BUS_PCMCIA
#define BUS_TYPE            "PCMCIA"
#elif defined BUS_PCI
#define BUS_TYPE            "PCI"
err: define bus type;
#if defined HERMES25
#define HW_TYPE				"HII.5"
#define HW_TYPE				"HII"
#if defined WARP
#define FW_TYPE				"WARP"
#define FW_TYPE				"BEAGLE"
#if defined HERMES25
#if defined WARP
#define DRV_VARIANT         3
#define DRV_VARIANT         4
#define DRV_VARIANT         2
#if defined HERMES25
#define MODULE_NAME         DRIVER_NAME "_h25_cs"
#define MODULE_NAME         DRIVER_NAME "_h2_cs"
#elif defined BUS_PCI
#if defined HERMES25
#define MODULE_NAME         DRIVER_NAME "_h25"
#define MODULE_NAME         DRIVER_NAME "_h2"
#define MODULE_DATE         __DATE__ " " __TIME__
#define MODULE_DATE         "07/18/2004 13:30:00"
#define VERSION_INFO        MODULE_NAME " v" DRV_VERSION_STR \
" for " BUS_TYPE ", " 											   	 \
MODULE_DATE " by " VENDOR_NAME
#define WIRELESS_SUPPORT    15
#define DBG_MOD_NAME        MODULE_NAME
#if USE_WEXT
#define HAS_WIRELESS_EXTENSIONS
#define NEW_MULTICAST
#define ALLOC_SKB(len)   dev_alloc_skb(len+2)
#define GET_PACKET(dev, skb, count)\
skb_reserve((skb), 2); \
BLOCK_INPUT(skb_put((skb), (count)), (count)); \
(skb)->protocol = eth_type_trans((skb), (dev))
#define GET_PACKET_DMA(dev, skb, count)\
skb_reserve((skb), 2); \
BLOCK_INPUT_DMA(skb_put((skb), (count)), (count)); \
(skb)->protocol = eth_type_trans((skb), (dev))
