package org.apache.hadoop.security.ssl;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import javax.net.ssl.KeyManager;
import javax.net.ssl.TrustManager;
import java.io.IOException;
import java.security.GeneralSecurityException;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public interface KeyStoresFactory extends Configurable
