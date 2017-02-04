#define VMD_HEADER_SIZE 0x0330
#define BYTES_PER_FRAME_RECORD 16
typedef struct vmd_frame  vmd_frame;
typedef struct VmdDemuxContext  VmdDemuxContext;
vmd_probe
vmd_read_header
vmd_read_packet
vmd_read_close
AVInputFormat ff_vmd_demuxer = ;
