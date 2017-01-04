#define MPI_LAN_H
typedef struct _MSG_LAN_SEND_REQUEST
MSG_LAN_SEND_REQUEST, MPI_POINTER PTR_MSG_LAN_SEND_REQUEST,
LANSendRequest_t, MPI_POINTER pLANSendRequest_t;
typedef struct _MSG_LAN_SEND_REPLY
MSG_LAN_SEND_REPLY, MPI_POINTER PTR_MSG_LAN_SEND_REPLY,
LANSendReply_t, MPI_POINTER pLANSendReply_t;
typedef struct _MSG_LAN_RECEIVE_POST_REQUEST
MSG_LAN_RECEIVE_POST_REQUEST, MPI_POINTER PTR_MSG_LAN_RECEIVE_POST_REQUEST,
LANReceivePostRequest_t, MPI_POINTER pLANReceivePostRequest_t;
typedef struct _MSG_LAN_RECEIVE_POST_REPLY
MSG_LAN_RECEIVE_POST_REPLY, MPI_POINTER PTR_MSG_LAN_RECEIVE_POST_REPLY,
LANReceivePostReply_t, MPI_POINTER pLANReceivePostReply_t;
typedef struct _MSG_LAN_RESET_REQUEST
MSG_LAN_RESET_REQUEST, MPI_POINTER PTR_MSG_LAN_RESET_REQUEST,
LANResetRequest_t, MPI_POINTER pLANResetRequest_t;
typedef struct _MSG_LAN_RESET_REPLY
MSG_LAN_RESET_REPLY, MPI_POINTER PTR_MSG_LAN_RESET_REPLY,
LANResetReply_t, MPI_POINTER pLANResetReply_t;
#define LAN_REPLY_PACKET_LENGTH_MASK            (0x0000FFFF)
#define LAN_REPLY_PACKET_LENGTH_SHIFT           (0)
#define LAN_REPLY_BUCKET_CONTEXT_MASK           (0x07FF0000)
#define LAN_REPLY_BUCKET_CONTEXT_SHIFT          (16)
#define LAN_REPLY_BUFFER_CONTEXT_MASK           (0x07FFFFFF)
#define LAN_REPLY_BUFFER_CONTEXT_SHIFT          (0)
#define LAN_REPLY_FORM_MASK                     (0x18000000)
#define LAN_REPLY_FORM_RECEIVE_SINGLE           (0x00)
#define LAN_REPLY_FORM_RECEIVE_MULTIPLE         (0x01)
#define LAN_REPLY_FORM_SEND_SINGLE              (0x02)
#define LAN_REPLY_FORM_MESSAGE_CONTEXT          (0x03)
#define LAN_REPLY_FORM_SHIFT                    (27)
#define GET_LAN_PACKET_LENGTH(x)    (((x) & LAN_REPLY_PACKET_LENGTH_MASK)   \
>> LAN_REPLY_PACKET_LENGTH_SHIFT)
#define SET_LAN_PACKET_LENGTH(x, lth)                                       \
((x) = ((x) & ~LAN_REPLY_PACKET_LENGTH_MASK) |                  \
(((lth) << LAN_REPLY_PACKET_LENGTH_SHIFT) &     \
LAN_REPLY_PACKET_LENGTH_MASK))
#define GET_LAN_BUCKET_CONTEXT(x)   (((x) & LAN_REPLY_BUCKET_CONTEXT_MASK)  \
>> LAN_REPLY_BUCKET_CONTEXT_SHIFT)
#define SET_LAN_BUCKET_CONTEXT(x, ctx)                                      \
((x) = ((x) & ~LAN_REPLY_BUCKET_CONTEXT_MASK) |                 \
(((ctx) << LAN_REPLY_BUCKET_CONTEXT_SHIFT) &    \
LAN_REPLY_BUCKET_CONTEXT_MASK))
#define GET_LAN_BUFFER_CONTEXT(x)   (((x) & LAN_REPLY_BUFFER_CONTEXT_MASK)  \
>> LAN_REPLY_BUFFER_CONTEXT_SHIFT)
#define SET_LAN_BUFFER_CONTEXT(x, ctx)                                      \
((x) = ((x) & ~LAN_REPLY_BUFFER_CONTEXT_MASK) |                 \
(((ctx) << LAN_REPLY_BUFFER_CONTEXT_SHIFT) &    \
LAN_REPLY_BUFFER_CONTEXT_MASK))
#define GET_LAN_FORM(x)             (((x) & LAN_REPLY_FORM_MASK)            \
>> LAN_REPLY_FORM_SHIFT)
#define SET_LAN_FORM(x, frm)                                                \
((x) = ((x) & ~LAN_REPLY_FORM_MASK) |                           \
(((frm) << LAN_REPLY_FORM_SHIFT) &              \
LAN_REPLY_FORM_MASK))
#define MPI_LAN_DEVICE_STATE_RESET                     (0x00)
#define MPI_LAN_DEVICE_STATE_OPERATIONAL               (0x01)
#define MPI_LAN_TX_MODES_ENABLE_LOOPBACK_SUPPRESSION   (0x01)
