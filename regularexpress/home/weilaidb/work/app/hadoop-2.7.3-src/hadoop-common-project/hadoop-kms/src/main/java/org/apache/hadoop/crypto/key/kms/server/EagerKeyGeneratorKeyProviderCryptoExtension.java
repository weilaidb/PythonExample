package org.apache.hadoop.crypto.key.kms.server;
import java.io.IOException;
import java.security.GeneralSecurityException;
import java.security.NoSuchAlgorithmException;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.concurrent.ExecutionException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.key.KeyProvider;
import org.apache.hadoop.crypto.key.KeyProviderCryptoExtension;
import org.apache.hadoop.crypto.key.kms.ValueQueue;
import org.apache.hadoop.crypto.key.kms.ValueQueue.SyncGenerationPolicy;
@InterfaceAudience.Private
public class EagerKeyGeneratorKeyProviderCryptoExtension
extends KeyProviderCryptoExtension
