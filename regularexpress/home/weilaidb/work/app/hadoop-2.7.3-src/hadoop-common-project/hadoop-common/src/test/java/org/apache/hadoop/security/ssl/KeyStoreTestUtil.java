package org.apache.hadoop.security.ssl;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.security.alias.CredentialProvider;
import org.apache.hadoop.security.alias.CredentialProviderFactory;
import org.apache.hadoop.security.alias.JavaKeyStoreProvider;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;
import java.math.BigInteger;
import java.net.URL;
import java.security.GeneralSecurityException;
import java.security.Key;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.KeyStore;
import java.security.NoSuchAlgorithmException;
import java.security.PrivateKey;
import java.security.SecureRandom;
import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.security.InvalidKeyException;
import java.security.NoSuchProviderException;
import java.security.SignatureException;
import java.security.cert.CertificateEncodingException;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import javax.security.auth.x500.X500Principal;
import org.bouncycastle.x509.X509V1CertificateGenerator;
public class KeyStoreTestUtil
