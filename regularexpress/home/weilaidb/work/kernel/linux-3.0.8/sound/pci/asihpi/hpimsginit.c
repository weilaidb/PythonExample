static u16 msg_size[HPI_OBJ_MAXINDEX + 1] = HPI_MESSAGE_SIZE_BY_OBJECT;
static u16 res_size[HPI_OBJ_MAXINDEX + 1] = HPI_RESPONSE_SIZE_BY_OBJECT;
static u16 gwSSX2_bypass;
static void hpi_init_message(struct hpi_message *phm, u16 object,
u16 function)
void hpi_init_response(struct hpi_response *phr, u16 object, u16 function,
u16 error)
void hpi_init_message_response(struct hpi_message *phm,
struct hpi_response *phr, u16 object, u16 function)
static void hpi_init_messageV1(struct hpi_message_header *phm, u16 size,
u16 object, u16 function)
void hpi_init_responseV1(struct hpi_response_header *phr, u16 size,
u16 object, u16 function)
void hpi_init_message_responseV1(struct hpi_message_header *phm, u16 msg_size,
struct hpi_response_header *phr, u16 res_size, u16 object,
u16 function)
