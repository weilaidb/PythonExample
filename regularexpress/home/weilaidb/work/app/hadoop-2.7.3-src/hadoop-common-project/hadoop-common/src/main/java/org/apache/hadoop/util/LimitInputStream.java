package org.apache.hadoop.util;
import static com.google.common.base.Preconditions.checkArgument;
import static com.google.common.base.Preconditions.checkNotNull;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
@Unstable
public final class LimitInputStream extends FilterInputStream
