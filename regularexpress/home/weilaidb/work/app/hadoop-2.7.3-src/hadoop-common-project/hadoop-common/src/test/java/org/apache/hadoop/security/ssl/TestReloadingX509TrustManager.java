package org.apache.hadoop.security.ssl;
import org.apache.hadoop.fs.FileUtil;
import org.junit.BeforeClass;
import org.junit.Test;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.security.KeyPair;
import java.security.cert.X509Certificate;
import java.util.HashMap;
import java.util.Map;
import static org.junit.Assert.assertEquals;
import static org.apache.hadoop.security.ssl.KeyStoreTestUtil.createTrustStore;
import static org.apache.hadoop.security.ssl.KeyStoreTestUtil.generateCertificate;
import static org.apache.hadoop.security.ssl.KeyStoreTestUtil.generateKeyPair;
public class TestReloadingX509TrustManager
