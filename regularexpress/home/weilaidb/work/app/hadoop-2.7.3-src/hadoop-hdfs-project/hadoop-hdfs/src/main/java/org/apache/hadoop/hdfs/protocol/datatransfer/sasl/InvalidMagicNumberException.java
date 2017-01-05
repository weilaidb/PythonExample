package org.apache.hadoop.hdfs.protocol.datatransfer.sasl;
import static org.apache.hadoop.hdfs.protocol.datatransfer.sasl.DataTransferSaslUtil.SASL_TRANSFER_MAGIC_NUMBER;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.Private
public class InvalidMagicNumberException extends IOException
