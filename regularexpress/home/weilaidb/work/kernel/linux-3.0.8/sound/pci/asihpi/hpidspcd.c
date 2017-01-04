#define SOURCEFILE_NAME "hpidspcd.c"
struct code_header ;
#define HPI_VER_DECIMAL ((int)(HPI_VER_MAJOR(HPI_VER) * 10000 + \
HPI_VER_MINOR(HPI_VER) * 100 + HPI_VER_RELEASE(HPI_VER)))
short hpi_dsp_code_open(u32 adapter, struct dsp_code *ps_dsp_code,
u32 *pos_error_code)
void hpi_dsp_code_close(struct dsp_code *ps_dsp_code)
void hpi_dsp_code_rewind(struct dsp_code *ps_dsp_code)
short hpi_dsp_code_read_word(struct dsp_code *ps_dsp_code, u32 *pword)
short hpi_dsp_code_read_block(size_t words_requested,
struct dsp_code *ps_dsp_code, u32 **ppblock)
