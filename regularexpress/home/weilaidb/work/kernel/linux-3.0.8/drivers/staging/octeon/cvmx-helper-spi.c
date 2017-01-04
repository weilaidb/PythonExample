void __cvmx_interrupt_gmxx_enable(int interface);
void __cvmx_interrupt_spxx_int_msk_enable(int index);
void __cvmx_interrupt_stxx_int_msk_enable(int index);
#define CVMX_HELPER_SPI_TIMEOUT 10
int __cvmx_helper_spi_probe(int interface)
int __cvmx_helper_spi_enable(int interface)
cvmx_helper_link_info_t __cvmx_helper_spi_link_get(int ipd_port)
int __cvmx_helper_spi_link_set(int ipd_port, cvmx_helper_link_info_t link_info)
