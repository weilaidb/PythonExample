package org.apache.hadoop.hdfs.protocol.datatransfer.sasl;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.util.Map;
import javax.security.auth.callback.CallbackHandler;
import javax.security.sasl.Sasl;
import javax.security.sasl.SaslClient;
import javax.security.sasl.SaslException;
import javax.security.sasl.SaslServer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.datatransfer.IOStreamPair;
import org.apache.hadoop.security.SaslInputStream;
import org.apache.hadoop.security.SaslOutputStream;
@InterfaceAudience.Private
class SaslParticipant
