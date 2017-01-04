#define _INCLUDED_CYASINTR_H_
cy_as_return_status_t
cy_as_intr_start(
cy_as_device *dev_p,
cy_bool dmaintr
);
cy_as_return_status_t
cy_as_intr_stop(
cy_as_device *dev_p
);
void cy_as_intr_service_interrupt(
cy_as_hal_device_tag tag
);
