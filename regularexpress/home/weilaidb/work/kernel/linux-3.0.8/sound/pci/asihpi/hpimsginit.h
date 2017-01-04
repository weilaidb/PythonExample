#define _HPIMSGINIT_H_
void hpi_init_response(struct hpi_response *phr, u16 object, u16 function,
u16 error);
void hpi_init_message_response(struct hpi_message *phm,
struct hpi_response *phr, u16 object, u16 function);
void hpi_init_responseV1(struct hpi_response_header *phr, u16 size,
u16 object, u16 function);
void hpi_init_message_responseV1(struct hpi_message_header *phm, u16 msg_size,
struct hpi_response_header *phr, u16 res_size, u16 object,
u16 function);
