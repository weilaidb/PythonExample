package org.apache.hadoop.fs.azure.metrics;
import static java.net.HttpURLConnection.HTTP_NOT_FOUND;
import static java.net.HttpURLConnection.HTTP_BAD_REQUEST;
import static java.net.HttpURLConnection.HTTP_INTERNAL_ERROR;
import org.apache.hadoop.classification.InterfaceAudience;
import com.microsoft.azure.storage.OperationContext;
import com.microsoft.azure.storage.RequestResult;
import com.microsoft.azure.storage.ResponseReceivedEvent;
import com.microsoft.azure.storage.StorageEvent;
@InterfaceAudience.Private
public final class ErrorMetricUpdater extends StorageEvent<ResponseReceivedEvent>
