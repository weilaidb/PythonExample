#define pinmux_h
#define MCFPINMUX_NONE		-1
extern int mcf_pinmux_request(unsigned, unsigned);
extern void mcf_pinmux_release(unsigned, unsigned);
static inline int mcf_pinmux_is_valid(unsigned pinmux)
