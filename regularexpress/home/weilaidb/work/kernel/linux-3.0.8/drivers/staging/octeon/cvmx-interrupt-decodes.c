#define PRINT_ERROR(format, ...)
void __cvmx_interrupt_gmxx_rxx_int_en_enable(int index, int block)
void __cvmx_interrupt_pcsx_intx_en_reg_enable(int index, int block)
{
union cvmx_pcsx_intx_en_reg pcs_int_en_reg;
cvmx_write_csr(CVMX_PCSX_INTX_REG(index, block),
cvmx_read_csr(CVMX_PCSX_INTX_REG(index, block)));
pcs_int_en_reg.u64 = 0;
if (OCTEON_IS_MODEL(OCTEON_CN56XX)) {
void __cvmx_interrupt_pcsxx_int_en_reg_enable(int index)
void __cvmx_interrupt_spxx_int_msk_enable(int index)
void __cvmx_interrupt_stxx_int_msk_enable(int index)
