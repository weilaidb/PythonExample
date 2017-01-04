#define __HTC_H__
#define A_OFFSETOF(type,field) (unsigned long)(&(((type *)NULL)->field))
#define ASSEMBLE_UNALIGNED_UINT16(p,highbyte,lowbyte) \
(((u16)(((u8 *)(p))[(highbyte)])) << 8 | (u16)(((u8 *)(p))[(lowbyte)]))
#define A_GET_UINT16_FIELD(p,type,field) \
ASSEMBLE_UNALIGNED_UINT16(p,\
A_OFFSETOF(type,field) + 1, \
A_OFFSETOF(type,field))
#define A_SET_UINT16_FIELD(p,type,field,value) \
#define A_GET_UINT8_FIELD(p,type,field) \
((u8 *)(p))[A_OFFSETOF(type,field)]
#define A_SET_UINT8_FIELD(p,type,field,value) \
((u8 *)(p))[A_OFFSETOF(type,field)] = (value)
PREPACK struct htc_frame_hdr  POSTPACK;
#define HTC_FLAGS_NEED_CREDIT_UPDATE (1 << 0)
#define HTC_FLAGS_SEND_BUNDLE        (1 << 1)
#define HTC_FLAGS_RECV_UNUSED_0      (1 << 0)
#define HTC_FLAGS_RECV_TRAILER       (1 << 1)
#define HTC_FLAGS_RECV_UNUSED_2      (1 << 0)
#define HTC_FLAGS_RECV_UNUSED_3      (1 << 0)
#define HTC_FLAGS_RECV_BUNDLE_CNT_MASK (0xF0)
#define HTC_FLAGS_RECV_BUNDLE_CNT_SHIFT 4
#define HTC_HDR_LENGTH  (sizeof(struct htc_frame_hdr))
#define HTC_MAX_TRAILER_LENGTH   255
#define HTC_MAX_PAYLOAD_LENGTH   (4096 - sizeof(struct htc_frame_hdr))
#define HTC_MSG_READY_ID                    1
#define HTC_MSG_CONNECT_SERVICE_ID          2
#define HTC_MSG_CONNECT_SERVICE_RESPONSE_ID 3
#define HTC_MSG_SETUP_COMPLETE_ID           4
#define HTC_MSG_SETUP_COMPLETE_EX_ID        5
#define HTC_MAX_CONTROL_MESSAGE_LENGTH  256
typedef PREPACK struct  POSTPACK HTC_UNKNOWN_MSG;
typedef PREPACK struct  POSTPACK HTC_READY_MSG;
typedef PREPACK struct  POSTPACK HTC_READY_EX_MSG;
#define HTC_VERSION_2P0  0x00
#define HTC_VERSION_2P1  0x01
#define HTC_SERVICE_META_DATA_MAX_LENGTH 128
typedef PREPACK struct  POSTPACK HTC_CONNECT_SERVICE_MSG;
typedef PREPACK struct  POSTPACK HTC_CONNECT_SERVICE_RESPONSE_MSG;
typedef PREPACK struct  POSTPACK HTC_SETUP_COMPLETE_MSG;
typedef PREPACK struct  POSTPACK HTC_SETUP_COMPLETE_EX_MSG;
#define HTC_SETUP_COMPLETE_FLAGS_ENABLE_BUNDLE_RECV     (1 << 0)
#define HTC_SERVICE_SUCCESS      0
#define HTC_SERVICE_NOT_FOUND    1
#define HTC_SERVICE_FAILED       2
#define HTC_SERVICE_NO_RESOURCES 3
#define HTC_SERVICE_NO_MORE_EP   4
#define HTC_RECORD_NULL             0
#define HTC_RECORD_CREDITS          1
#define HTC_RECORD_LOOKAHEAD        2
#define HTC_RECORD_LOOKAHEAD_BUNDLE 3
typedef PREPACK struct  POSTPACK HTC_RECORD_HDR;
typedef PREPACK struct  POSTPACK HTC_CREDIT_REPORT;
typedef PREPACK struct  POSTPACK HTC_LOOKAHEAD_REPORT;
typedef PREPACK struct  POSTPACK HTC_BUNDLED_LOOKAHEAD_REPORT;
