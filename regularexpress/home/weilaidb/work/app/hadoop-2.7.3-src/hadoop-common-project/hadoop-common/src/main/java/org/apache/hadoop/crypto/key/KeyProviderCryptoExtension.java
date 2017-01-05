package org.apache.hadoop.crypto.key;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.security.GeneralSecurityException;
import java.security.SecureRandom;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import com.google.common.base.Preconditions;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.crypto.CryptoCodec;
import org.apache.hadoop.crypto.Decryptor;
import org.apache.hadoop.crypto.Encryptor;
@InterfaceAudience.Private
public class KeyProviderCryptoExtension extends
KeyProviderExtension<KeyProviderCryptoExtension.CryptoExtension>
