package org.apache.hadoop.fs.azure.metrics;
import java.net.HttpURLConnection;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import com.microsoft.azure.storage.Constants.HeaderConstants;
import com.microsoft.azure.storage.OperationContext;
import com.microsoft.azure.storage.RequestResult;
import com.microsoft.azure.storage.ResponseReceivedEvent;
import com.microsoft.azure.storage.StorageEvent;
@InterfaceAudience.Private
public final class ResponseReceivedMetricUpdater extends StorageEvent<ResponseReceivedEvent>
