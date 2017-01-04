#define _HPIDSPCD_H_
struct dsp_code ;
short hpi_dsp_code_open(
u32 adapter,
struct dsp_code *ps_dsp_code,
u32 *pos_error_code);
void hpi_dsp_code_close(struct dsp_code *ps_dsp_code);
void hpi_dsp_code_rewind(struct dsp_code *ps_dsp_code);
short hpi_dsp_code_read_word(struct dsp_code *ps_dsp_code,
u32 *pword
);
short hpi_dsp_code_read_block(size_t words_requested,
struct dsp_code *ps_dsp_code,
u32 **ppblock);
