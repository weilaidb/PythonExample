package org.apache.hadoop.crypto.key;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
public class FailureInjectingJavaKeyStoreProvider extends JavaKeyStoreProvider
