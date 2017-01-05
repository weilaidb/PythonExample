package org.apache.hadoop.yarn.server.api;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.server.api.protocolrecords.RunSharedCacheCleanerTaskRequest;
import org.apache.hadoop.yarn.server.api.protocolrecords.RunSharedCacheCleanerTaskResponse;
import org.apache.hadoop.yarn.exceptions.YarnException;
@Public
@Unstable
public interface SCMAdminProtocol
