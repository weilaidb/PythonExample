#define AVCODEC_HUFFMAN_H
typedef struct Node  Node;
#define FF_HUFFMAN_FLAG_HNODE_FIRST 0x01
#define FF_HUFFMAN_FLAG_ZERO_COUNT  0x02
#define FF_HUFFMAN_BITS 10
typedef int (*HuffCmp)(const void *va, const void *vb);
int ff_huff_build_tree(AVCodecContext *avctx, VLC *vlc, int nb_codes, int nb_bits,
Node *nodes, HuffCmp cmp, int flags);
int ff_huff_gen_len_table(uint8_t *dst, const uint64_t *stats, int n, int skip0);
