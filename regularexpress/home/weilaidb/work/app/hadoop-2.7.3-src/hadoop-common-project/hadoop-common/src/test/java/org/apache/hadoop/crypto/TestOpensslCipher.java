package org.apache.hadoop.crypto;
import java.nio.ByteBuffer;
import java.security.NoSuchAlgorithmException;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.ShortBufferException;
import org.apache.hadoop.test.GenericTestUtils;
import org.junit.Assume;
import org.junit.Assert;
import org.junit.Test;
public class TestOpensslCipher
