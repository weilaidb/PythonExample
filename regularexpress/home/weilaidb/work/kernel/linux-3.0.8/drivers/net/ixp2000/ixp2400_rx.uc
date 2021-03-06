#define RX_THREAD_FREELIST_0		0x0030
#define RBUF_ELEMENT_DONE		0x0044
#define CHANNEL_FLAGS			*l$index0[0]
#define CHANNEL_FLAG_RECEIVING		1
#define PACKET_LENGTH			*l$index0[1]
#define PACKET_CHECKSUM			*l$index0[2]
#define BUFFER_HANDLE			*l$index0[3]
#define BUFFER_START			*l$index0[4]
#define BUFFER_LENGTH			*l$index0[5]
#define CHANNEL_STATE_SIZE		24
#define CHANNEL_STATE_SHIFT		5
.sig volatile sig1
.sig volatile sig2
.sig volatile sig3
.sig mpacket_arrived
.reg add_to_rx_freelist
.reg read $rsw0, $rsw1
.xfer_order $rsw0 $rsw1
.reg zero
.begin
.reg temp
.reg temp2
immed[add_to_rx_freelist, RX_THREAD_FREELIST_0]
immed_w1[add_to_rx_freelist, (&$rsw0 | (&mpacket_arrived << 12))]
local_csr_rd[ACTIVE_CTX_STS]
immed[temp, 0]
alu[temp2, temp, and, 0x1f]
alu_shf[add_to_rx_freelist, add_to_rx_freelist, or, temp2, <<20]
alu[temp2, temp, and, 0x80]
alu_shf[add_to_rx_freelist, add_to_rx_freelist, or, temp2, <<18]
.end
immed[zero, 0]
.begin
br!=ctx[0, mpacket_receive_loop#]
.end
.begin
.reg addr
.reg temp
immed[temp, 0]
init_local_mem_loop#:
alu_shf[addr, --, b, temp, <<CHANNEL_STATE_SHIFT]
local_csr_wr[ACTIVE_LM_ADDR_0, addr]
nop
nop
nop
immed[CHANNEL_FLAGS, 0]
alu[temp, temp, +, 1]
alu[--, temp, and, 0x20]
beq[init_local_mem_loop#]
.end
.begin
local_csr_wr[SAME_ME_SIGNAL, (&sig1 << 3)]
.set_sig sig1
local_csr_wr[SAME_ME_SIGNAL, (&sig2 << 3)]
.set_sig sig2
local_csr_wr[SAME_ME_SIGNAL, (&sig3 << 3)]
.set_sig sig3
.end
mpacket_receive_loop#:
.begin
ctx_arb[sig1]
local_csr_wr[SAME_ME_SIGNAL, (0x80 | (&sig1 << 3))]
msf[fast_wr, --, add_to_rx_freelist, 0]
.set_sig mpacket_arrived
ctx_arb[mpacket_arrived]
.set $rsw0 $rsw1
.end
.begin
alu_shf[--, 0x1b, and, $rsw0, >>8]
bne[abort_rswerr#]
.end
.begin
.reg chanaddr
alu[chanaddr, $rsw0, and, 0x1f]
alu_shf[chanaddr, --, b, chanaddr, <<CHANNEL_STATE_SHIFT]
local_csr_wr[ACTIVE_LM_ADDR_0, chanaddr]
nop
nop
nop
.end
.begin
.reg temp
.reg eop
#if CHANNEL_FLAG_RECEIVING != 1
#error CHANNEL_FLAG_RECEIVING is not 1
alu_shf[temp, 1, and, $rsw0, >>15]
alu[temp, temp, xor, CHANNEL_FLAGS]
alu[--, temp, and, CHANNEL_FLAG_RECEIVING]
beq[abort_proterr#]
alu_shf[eop, 1, and, $rsw0, >>14]
alu[CHANNEL_FLAGS, temp, xor, eop]
.end
.begin
.reg buffer_offset
.reg _packet_length
.reg _packet_checksum
.reg _buffer_handle
.reg _buffer_start
.reg _buffer_length
.begin
.reg temp
alu[--, 1, and, $rsw0, >>15]
beq[not_sop#]
immed[PACKET_LENGTH, 0]
immed[PACKET_CHECKSUM, 0]
not_sop#:
alu[buffer_offset, --, b, PACKET_LENGTH]
alu_shf[temp, 0xff, and, $rsw0, >>16]
alu[_packet_length, buffer_offset, +, temp]
alu[PACKET_LENGTH, --, b, _packet_length]
immed[temp, 0xffff]
alu[temp, $rsw1, and, temp]
alu[_packet_checksum, PACKET_CHECKSUM, +, temp]
alu[PACKET_CHECKSUM, --, b, _packet_checksum]
.end
.begin
.reg temp
alu[temp, 1, and, $rsw0, >>15]
beq[skip_buffer_alloc#]
.begin
.sig zzz
.reg read $stemp $stemp2
.xfer_order $stemp $stemp2
rx_nobufs#:
scratch[get, $stemp, zero, 0, 1], ctx_swap[zzz]
alu[_buffer_handle, --, b, $stemp]
beq[rx_nobufs#]
sram[read, $stemp, _buffer_handle, 0, 2],
ctx_swap[zzz]
alu[_buffer_start, --, b, $stemp]
alu[_buffer_length, --, b, $stemp2]
.end
skip_buffer_alloc#:
.end
.begin
ctx_arb[sig2]
local_csr_wr[SAME_ME_SIGNAL, (0x80 | (&sig2 << 3))]
.end
.begin
.reg temp
alu[temp, 1, and, $rsw0, >>15]
beq[copy_from_local_mem#]
alu[BUFFER_HANDLE, --, b, _buffer_handle]
alu[BUFFER_START, --, b, _buffer_start]
alu[BUFFER_LENGTH, --, b, _buffer_length]
br[sync_state_done#]
copy_from_local_mem#:
alu[_buffer_handle, --, b, BUFFER_HANDLE]
alu[_buffer_start, --, b, BUFFER_START]
alu[_buffer_length, --, b, BUFFER_LENGTH]
sync_state_done#:
.end
.begin
alu[--, _buffer_length, -, _packet_length]
blo[buffer_overflow#]
.end
.begin
.reg element
.reg xfer_size
.reg temp
.sig copy_sig
alu_shf[element, 0x7f, and, $rsw0, >>24]
alu_shf[xfer_size, 0xff, and, $rsw0, >>16]
alu[xfer_size, xfer_size, -, 1]
alu_shf[xfer_size, 0x10, or, xfer_size, >>3]
alu_shf[temp, 0x10, or, xfer_size, <<21]
alu_shf[temp, temp, or, element, <<11]
alu_shf[--, temp, or, 1, <<18]
dram[rbuf_rd, --, _buffer_start, buffer_offset, max_8],
indirect_ref, sig_done[copy_sig]
ctx_arb[copy_sig]
alu[temp, RBUF_ELEMENT_DONE, or, element, <<16]
msf[fast_wr, --, temp, 0]
.end
.begin
.reg write $stemp $stemp2
.xfer_order $stemp $stemp2
.sig zzz
alu_shf[--, 1, and, $rsw0, >>14]
beq[no_writeback#]
alu[$stemp, $rsw0, and, 0x1f]
alu[$stemp2, --, b, _packet_length]
sram[write, $stemp, _buffer_handle, 8, 2], ctx_swap[zzz]
no_writeback#:
.end
.begin
ctx_arb[sig3]
local_csr_wr[SAME_ME_SIGNAL, (0x80 | (&sig3 << 3))]
.end
.begin
.reg write $stemp
.sig zzz
br_inp_state[SCR_Ring1_Status, rx_done_ring_overflow#]
alu_shf[--, 1, and, $rsw0, >>14]
beq[mpacket_receive_loop#]
alu[--, 1, and, $rsw0, >>10]
bne[rxerr#]
alu[$stemp, --, b, _buffer_handle]
scratch[put, $stemp, zero, 4, 1], ctx_swap[zzz]
cap[fast_wr, 0, XSCALE_INT_A]
br[mpacket_receive_loop#]
rxerr#:
alu[$stemp, --, b, _buffer_handle]
scratch[put, $stemp, zero, 0, 1], ctx_swap[zzz]
br[mpacket_receive_loop#]
.end
.end
abort_rswerr#:
halt
abort_proterr#:
halt
state_corrupted#:
halt
buffer_overflow#:
halt
rx_done_ring_overflow#:
halt
