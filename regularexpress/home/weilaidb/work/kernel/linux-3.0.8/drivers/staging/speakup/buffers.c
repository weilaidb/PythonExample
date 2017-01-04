#define synthBufferSize 8192
static u_char synth_buffer[synthBufferSize];
static u_char *buff_in = synth_buffer;
static u_char *buff_out = synth_buffer;
static u_char *buffer_end = synth_buffer+synthBufferSize-1;
void speakup_start_ttys(void)
EXPORT_SYMBOL_GPL(speakup_start_ttys);
static void speakup_stop_ttys(void)
static int synth_buffer_free(void)
int synth_buffer_empty(void)
EXPORT_SYMBOL_GPL(synth_buffer_empty);
void synth_buffer_add(char ch)
char synth_buffer_getc(void)
EXPORT_SYMBOL_GPL(synth_buffer_getc);
char synth_buffer_peek(void)
EXPORT_SYMBOL_GPL(synth_buffer_peek);
void synth_buffer_clear(void)
EXPORT_SYMBOL_GPL(synth_buffer_clear);
