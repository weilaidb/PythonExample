#define __CVMX_SPI_H__
typedef enum  cvmx_spi_mode_t;
typedef struct  cvmx_spi_callbacks_t;
static inline int cvmx_spi_is_spi_interface(int interface)
extern int cvmx_spi_start_interface(int interface, cvmx_spi_mode_t mode,
int timeout, int num_ports);
extern int cvmx_spi_restart_interface(int interface, cvmx_spi_mode_t mode,
int timeout);
static inline int cvmx_spi4000_is_present(int interface)
static inline int cvmx_spi4000_initialize(int interface)
static inline union cvmx_gmxx_rxx_rx_inbnd cvmx_spi4000_check_speed(
int interface,
int port)
extern void cvmx_spi_get_callbacks(cvmx_spi_callbacks_t *callbacks);
extern void cvmx_spi_set_callbacks(cvmx_spi_callbacks_t *new_callbacks);
extern int cvmx_spi_reset_cb(int interface, cvmx_spi_mode_t mode);
extern int cvmx_spi_calendar_setup_cb(int interface, cvmx_spi_mode_t mode,
int num_ports);
extern int cvmx_spi_clock_detect_cb(int interface, cvmx_spi_mode_t mode,
int timeout);
extern int cvmx_spi_training_cb(int interface, cvmx_spi_mode_t mode,
int timeout);
extern int cvmx_spi_calendar_sync_cb(int interface, cvmx_spi_mode_t mode,
int timeout);
extern int cvmx_spi_interface_up_cb(int interface, cvmx_spi_mode_t mode);
