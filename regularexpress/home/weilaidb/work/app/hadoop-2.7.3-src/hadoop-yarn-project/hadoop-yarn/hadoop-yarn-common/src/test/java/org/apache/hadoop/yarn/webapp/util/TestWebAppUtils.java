package org.apache.hadoop.yarn.webapp.util;
import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.http.HttpServer2.Builder;
import org.apache.hadoop.security.alias.CredentialProvider;
import org.apache.hadoop.security.alias.CredentialProviderFactory;
import org.apache.hadoop.security.alias.JavaKeyStoreProvider;
import org.junit.Assert;
import org.junit.Test;
public class TestWebAppUtils
