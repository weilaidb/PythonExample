#define __CVMX_HELPER_SPI_H__
extern int __cvmx_helper_spi_probe(int interface);
extern int __cvmx_helper_spi_enable(int interface);
extern cvmx_helper_link_info_t __cvmx_helper_spi_link_get(int ipd_port);
extern int __cvmx_helper_spi_link_set(int ipd_port,
cvmx_helper_link_info_t link_info);
