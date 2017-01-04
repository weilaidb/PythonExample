#define INVOKE_CB(function_p, args...)		\
do  while (0)
#if CVMX_ENABLE_DEBUG_PRINTS
static const char *modes[] =
;
static cvmx_spi_callbacks_t cvmx_spi_callbacks = ;
void cvmx_spi_get_callbacks(cvmx_spi_callbacks_t *callbacks)
void cvmx_spi_set_callbacks(cvmx_spi_callbacks_t *new_callbacks)
int cvmx_spi_start_interface(int interface, cvmx_spi_mode_t mode, int timeout,
int num_ports)
int cvmx_spi_restart_interface(int interface, cvmx_spi_mode_t mode, int timeout)
int cvmx_spi_reset_cb(int interface, cvmx_spi_mode_t mode)
int cvmx_spi_calendar_setup_cb(int interface, cvmx_spi_mode_t mode,
int num_ports)
int cvmx_spi_clock_detect_cb(int interface, cvmx_spi_mode_t mode, int timeout)
int cvmx_spi_training_cb(int interface, cvmx_spi_mode_t mode, int timeout)
int cvmx_spi_calendar_sync_cb(int interface, cvmx_spi_mode_t mode, int timeout)
int cvmx_spi_interface_up_cb(int interface, cvmx_spi_mode_t mode)
