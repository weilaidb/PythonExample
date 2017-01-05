package org.apache.hadoop.fs.azure;
import java.net.HttpURLConnection;
import java.security.InvalidKeyException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import com.microsoft.azure.storage.Constants.HeaderConstants;
import com.microsoft.azure.storage.core.StorageCredentialsHelper;
import com.microsoft.azure.storage.OperationContext;
import com.microsoft.azure.storage.SendingRequestEvent;
import com.microsoft.azure.storage.StorageCredentials;
import com.microsoft.azure.storage.StorageEvent;
import com.microsoft.azure.storage.StorageException;
@InterfaceAudience.Private
public final class SendRequestIntercept extends StorageEvent<SendingRequestEvent>
