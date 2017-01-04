typedef enum cy_as_physical_endpoint_state  cy_as_physical_endpoint_state;
static cy_as_end_point_number_t end_point_map[] = ;
#define CY_AS_EPCFG_1024			(1 << 3)
#define CY_AS_EPCFG_DBL			 (0x02)
#define CY_AS_EPCFG_TRIPLE		  (0x03)
#define CY_AS_EPCFG_QUAD			(0x00)
static uint8_t pep_register_values[12][4] = ;
static cy_as_return_status_t
find_endpoint_directions(cy_as_device *dev_p,
cy_as_physical_endpoint_state epstate[4])
static void
create_register_settings(cy_as_device *dev_p,
cy_as_physical_endpoint_state epstate[4])
cy_as_return_status_t
cy_as_usb_map_logical2_physical(cy_as_device *dev_p)
static uint16_t
get_max_dma_size(cy_as_device *dev_p, cy_as_end_point_number_t ep)
cy_as_return_status_t
cy_as_usb_set_dma_sizes(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_usb_setup_dma(cy_as_device *dev_p)
