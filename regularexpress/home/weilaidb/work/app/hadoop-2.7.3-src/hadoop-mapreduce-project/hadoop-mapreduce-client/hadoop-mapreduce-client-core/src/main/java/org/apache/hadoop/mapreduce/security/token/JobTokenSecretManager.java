package org.apache.hadoop.mapreduce.security.token;
import java.util.Map;
import java.util.TreeMap;
import javax.crypto.SecretKey;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.token.SecretManager;
import org.apache.hadoop.security.token.Token;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobTokenSecretManager extends SecretManager<JobTokenIdentifier>
