package org.apache.hadoop.yarn.client.api;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.client.api.impl.SharedCacheClientImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
@Public
@Unstable
public abstract class SharedCacheClient extends AbstractService
