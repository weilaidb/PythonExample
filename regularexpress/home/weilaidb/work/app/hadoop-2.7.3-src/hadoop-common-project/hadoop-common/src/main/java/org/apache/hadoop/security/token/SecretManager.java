package org.apache.hadoop.security.token;
import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import javax.crypto.KeyGenerator;
import javax.crypto.Mac;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.ipc.RetriableException;
import org.apache.hadoop.ipc.StandbyException;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public abstract class SecretManager<T extends TokenIdentifier>
