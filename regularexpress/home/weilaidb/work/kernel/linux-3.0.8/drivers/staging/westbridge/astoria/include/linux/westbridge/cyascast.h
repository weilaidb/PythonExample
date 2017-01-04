#define _INCLUDED_CYASCAST_H_
#define cy_cast_int2U_int16(v) \
(cy_as_hal_assert(v < 65536), (uint16_t)(v))
#define cy_cast_int2U_int16(v) ((uint16_t)(v))
