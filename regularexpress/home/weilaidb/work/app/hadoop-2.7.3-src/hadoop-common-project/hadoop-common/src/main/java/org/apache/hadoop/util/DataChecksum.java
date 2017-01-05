package org.apache.hadoop.util;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.zip.CRC32;
import java.util.zip.Checksum;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.ChecksumException;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class DataChecksum implements Checksum
