package org.apache.hadoop.crypto.key;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;
import java.net.URI;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.key.KeyProviderDelegationTokenExtension.DelegationTokenExtension;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.token.Token;
import org.junit.Assert;
import org.junit.Test;
import org.mockito.Mockito;
public class TestKeyProviderDelegationTokenExtension
