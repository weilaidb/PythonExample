package org.apache.hadoop.crypto.key;
import java.io.IOException;
import java.security.NoSuchAlgorithmException;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeUnit;
import com.google.common.cache.CacheBuilder;
import com.google.common.cache.CacheLoader;
import com.google.common.cache.LoadingCache;
public class CachingKeyProvider extends
KeyProviderExtension<CachingKeyProvider.CacheExtension>
