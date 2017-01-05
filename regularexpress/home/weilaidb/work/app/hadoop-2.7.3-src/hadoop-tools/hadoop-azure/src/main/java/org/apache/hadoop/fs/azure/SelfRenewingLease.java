package org.apache.hadoop.fs.azure;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.azure.StorageInterface.CloudBlobWrapper;
import com.microsoft.azure.storage.AccessCondition;
import com.microsoft.azure.storage.StorageException;
import com.microsoft.azure.storage.blob.CloudBlob;
import java.util.concurrent.atomic.AtomicInteger;
public class SelfRenewingLease
