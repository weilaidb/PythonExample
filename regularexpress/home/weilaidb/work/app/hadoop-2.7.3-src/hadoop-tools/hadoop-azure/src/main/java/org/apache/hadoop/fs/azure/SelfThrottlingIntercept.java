package org.apache.hadoop.fs.azure;
import java.net.HttpURLConnection;
import java.util.Date;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import com.microsoft.azure.storage.OperationContext;
import com.microsoft.azure.storage.RequestResult;
import com.microsoft.azure.storage.ResponseReceivedEvent;
import com.microsoft.azure.storage.SendingRequestEvent;
import com.microsoft.azure.storage.StorageEvent;
@InterfaceAudience.Private
public class SelfThrottlingIntercept
