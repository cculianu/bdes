/*
 * $NetBSD: crypt.h,v 1.8 2021/10/16 10:53:33 nia Exp $
 */

int des_setkey(const char *key);
int des_cipher(const char *in, char *out, long salt, int num_iter);
int my_setkey(const char *key);
int my_encrypt(char *block, int flag);
