package org.apache.hadoop.hdfs;
import java.io.IOException;
import java.net.URI;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.key.KeyProvider;
import org.apache.hadoop.crypto.key.KeyProviderFactory;
import org.apache.hadoop.crypto.key.kms.KMSClientProvider;
import org.junit.Assert;
import org.junit.Test;
public class TestKeyProviderCache
