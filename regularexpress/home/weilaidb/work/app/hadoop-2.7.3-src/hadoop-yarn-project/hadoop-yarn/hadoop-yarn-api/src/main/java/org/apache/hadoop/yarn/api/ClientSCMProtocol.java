package org.apache.hadoop.yarn.api;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceRequest;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceRequest;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.exceptions.YarnException;
@Public
@Unstable
public interface ClientSCMProtocol
