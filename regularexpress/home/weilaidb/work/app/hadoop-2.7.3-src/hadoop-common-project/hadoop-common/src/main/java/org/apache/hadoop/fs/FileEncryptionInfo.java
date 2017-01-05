package org.apache.hadoop.fs;
import org.apache.commons.codec.binary.Hex;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.crypto.CipherSuite;
import org.apache.hadoop.crypto.CryptoProtocolVersion;
import static com.google.common.base.Preconditions.checkArgument;
import static com.google.common.base.Preconditions.checkNotNull;
@InterfaceAudience.Private
public class FileEncryptionInfo
