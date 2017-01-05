package org.apache.hadoop.fs.azure;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.URI;
import java.util.Date;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation;
import org.apache.hadoop.fs.permission.PermissionStatus;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
interface NativeFileSystemStore
