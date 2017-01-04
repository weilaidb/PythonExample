#define EPPING_TEST_H_
#define EPPING_ALIGNMENT_PAD  (((sizeof(struct htc_frame_hdr) + 3) & (~0x3)) - sizeof(struct htc_frame_hdr))
#define A_OFFSETOF(type,field) (int)(&(((type *)NULL)->field))
#define EPPING_RSVD_FILL                  0xCC
#define HCI_RSVD_EXPECTED_PKT_TYPE_RECV_OFFSET  7
typedef PREPACK struct  POSTPACK EPPING_HEADER;
#define EPPING_PING_MAGIC_0               0xAA
#define EPPING_PING_MAGIC_1               0x55
#define EPPING_PING_MAGIC_2               0xCE
#define EPPING_PING_MAGIC_3               0xEC
#define IS_EPPING_PACKET(pPkt)   (((pPkt)->Magic_h[0] == EPPING_PING_MAGIC_0) && \
((pPkt)->Magic_h[1] == EPPING_PING_MAGIC_1) && \
((pPkt)->Magic_h[2] == EPPING_PING_MAGIC_2) && \
((pPkt)->Magic_h[3] == EPPING_PING_MAGIC_3))
#define SET_EPPING_PACKET_MAGIC(pPkt)
#define CMD_FLAGS_DATA_CRC            (1 << 0)
#define CMD_FLAGS_DELAY_ECHO          (1 << 1)
#define CMD_FLAGS_NO_DROP             (1 << 2)
#define IS_EPING_PACKET_NO_DROP(pPkt)  ((pPkt)->CmdFlags_h & CMD_FLAGS_NO_DROP)
#define EPPING_CMD_ECHO_PACKET          1
#define EPPING_CMD_RESET_RECV_CNT       2
#define EPPING_CMD_CAPTURE_RECV_CNT     3
#define EPPING_CMD_NO_ECHO              4
#define EPPING_CMD_CONT_RX_START        5
#define EPPING_CMD_CONT_RX_STOP         6
typedef PREPACK struct  POSTPACK EPPING_CONT_RX_PARAMS;
#define EPPING_HDR_CRC_OFFSET    A_OFFSETOF(EPPING_HEADER,StreamNo_h)
#define EPPING_HDR_BYTES_CRC     (sizeof(EPPING_HEADER) - EPPING_HDR_CRC_OFFSET - (sizeof(u16)))
#define HCI_TRANSPORT_STREAM_NUM  16
