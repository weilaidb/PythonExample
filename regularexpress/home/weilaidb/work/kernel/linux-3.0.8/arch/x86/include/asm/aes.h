#define ASM_X86_AES_H
void crypto_aes_encrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
const u8 *src);
void crypto_aes_decrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst,
const u8 *src);
