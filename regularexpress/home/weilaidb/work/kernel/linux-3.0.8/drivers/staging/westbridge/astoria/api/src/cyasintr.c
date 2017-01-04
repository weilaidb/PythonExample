extern void cy_as_mail_box_interrupt_handler(cy_as_device *);
void
cy_as_mcu_interrupt_handler(cy_as_device *dev_p)
void
cy_as_power_management_interrupt_handler(cy_as_device *dev_p)
void
cy_as_pll_lock_loss_interrupt_handler(cy_as_device *dev_p)
uint32_t cy_as_intr_start(cy_as_device *dev_p, cy_bool dmaintr)
uint32_t cy_as_intr_stop(cy_as_device *dev_p)
void cy_as_intr_service_interrupt(cy_as_hal_device_tag tag)
