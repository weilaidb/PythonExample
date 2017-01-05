package org.apache.hadoop.crypto;
import java.io.FilterOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.security.GeneralSecurityException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CanSetDropBehind;
import org.apache.hadoop.fs.Syncable;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class CryptoOutputStream extends FilterOutputStream implements
Syncable, CanSetDropBehind
