#define __MIDCOMMS_DOT_H__
int dlm_process_incoming_buffer(int nodeid, const void *base, unsigned offset,
unsigned len, unsigned limit);
