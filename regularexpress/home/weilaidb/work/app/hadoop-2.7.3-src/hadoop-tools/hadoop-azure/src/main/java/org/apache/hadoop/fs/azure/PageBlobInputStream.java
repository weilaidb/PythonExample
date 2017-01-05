package org.apache.hadoop.fs.azure;
import static org.apache.hadoop.fs.azure.PageBlobFormatHelpers.PAGE_DATA_SIZE;
import static org.apache.hadoop.fs.azure.PageBlobFormatHelpers.PAGE_HEADER_SIZE;
import static org.apache.hadoop.fs.azure.PageBlobFormatHelpers.PAGE_SIZE;
import static org.apache.hadoop.fs.azure.PageBlobFormatHelpers.toShort;
import static org.apache.hadoop.fs.azure.PageBlobFormatHelpers.withMD5Checking;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.azure.StorageInterface.CloudPageBlobWrapper;
import com.microsoft.azure.storage.OperationContext;
import com.microsoft.azure.storage.StorageException;
import com.microsoft.azure.storage.blob.BlobRequestOptions;
import com.microsoft.azure.storage.blob.PageRange;
final class PageBlobInputStream extends InputStream
