getu32
putu32
yasm_md5_init
yasm_md5_update
yasm_md5_final
F1 (z ^ (x & (y ^ z)))
F2 F1(z, x, y)
F3 (x ^ y ^ z)
F4 (y ^ (x | ~z))
MD5STEP \
( w += f(x, y, z) + data, w &= 0xffffffff, w = w<<s | w>>(32-s), w += x )
yasm_md5_transform
int
main (int argc, char **argv)
