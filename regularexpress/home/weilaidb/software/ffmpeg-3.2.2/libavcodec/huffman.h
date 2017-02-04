#define AVCODEC_HUFFMAN_H
typedef struct Node  Node;
#define FF_HUFFMAN_FLAG_HNODE_FIRST 0x01
#define FF_HUFFMAN_FLAG_ZERO_COUNT  0x02
#define FF_HUFFMAN_BITS 10
typedef int (*HuffCmp)(const void *va, const void *vb);
ff_huff_build_tree;
ff_huff_gen_len_table;
