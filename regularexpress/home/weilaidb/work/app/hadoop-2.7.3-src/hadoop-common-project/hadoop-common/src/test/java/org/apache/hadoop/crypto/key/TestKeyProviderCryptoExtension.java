package org.apache.hadoop.crypto.key;
import java.net.URI;
import java.security.SecureRandom;
import java.util.Arrays;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.key.KeyProviderCryptoExtension.EncryptedKeyVersion;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.apache.hadoop.crypto.key.KeyProvider.KeyVersion;
import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.fail;
public class TestKeyProviderCryptoExtension
