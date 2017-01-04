#define EFX_ENUM_H
enum efx_loopback_mode ;
#define LOOPBACK_TEST_MAX LOOPBACK_PMAPMD
#define LOOPBACKS_INTERNAL ((1 << LOOPBACK_DATA) |		\
(1 << LOOPBACK_GMAC) |		\
(1 << LOOPBACK_XGMII)|		\
(1 << LOOPBACK_XGXS) |		\
(1 << LOOPBACK_XAUI) |		\
(1 << LOOPBACK_GMII) |		\
(1 << LOOPBACK_SGMII) |		\
(1 << LOOPBACK_SGMII) |		\
(1 << LOOPBACK_XGBR) |		\
(1 << LOOPBACK_XFI) |		\
(1 << LOOPBACK_XAUI_FAR) |		\
(1 << LOOPBACK_GMII_FAR) |		\
(1 << LOOPBACK_SGMII_FAR) |		\
(1 << LOOPBACK_XFI_FAR) |		\
(1 << LOOPBACK_XGMII_WS) |		\
(1 << LOOPBACK_XAUI_WS) |		\
(1 << LOOPBACK_XAUI_WS_FAR) |	\
(1 << LOOPBACK_XAUI_WS_NEAR) |	\
(1 << LOOPBACK_GMII_WS) |		\
(1 << LOOPBACK_XFI_WS) |		\
(1 << LOOPBACK_XFI_WS_FAR))
#define LOOPBACKS_WS ((1 << LOOPBACK_XGMII_WS) |		\
(1 << LOOPBACK_XAUI_WS) |			\
(1 << LOOPBACK_XAUI_WS_FAR) |		\
(1 << LOOPBACK_XAUI_WS_NEAR) |		\
(1 << LOOPBACK_GMII_WS) |			\
(1 << LOOPBACK_XFI_WS) |			\
(1 << LOOPBACK_XFI_WS_FAR) |		\
(1 << LOOPBACK_PHYXS_WS))
#define LOOPBACKS_EXTERNAL(_efx)					\
((_efx)->loopback_modes & ~LOOPBACKS_INTERNAL &			\
~(1 << LOOPBACK_NONE))
#define LOOPBACK_MASK(_efx)			\
(1 << (_efx)->loopback_mode)
#define LOOPBACK_INTERNAL(_efx)				\
(!!(LOOPBACKS_INTERNAL & LOOPBACK_MASK(_efx)))
#define LOOPBACK_EXTERNAL(_efx)				\
(!!(LOOPBACK_MASK(_efx) & LOOPBACKS_EXTERNAL(_efx)))
#define LOOPBACK_CHANGED(_from, _to, _mask)				\
(!!((LOOPBACK_MASK(_from) ^ LOOPBACK_MASK(_to)) & (_mask)))
#define LOOPBACK_OUT_OF(_from, _to, _mask)				\
((LOOPBACK_MASK(_from) & (_mask)) && !(LOOPBACK_MASK(_to) & (_mask)))
enum reset_type ;
