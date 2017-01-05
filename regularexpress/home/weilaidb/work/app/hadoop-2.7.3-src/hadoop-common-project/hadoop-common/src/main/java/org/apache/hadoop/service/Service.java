package org.apache.hadoop.service;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import java.io.Closeable;
import java.io.IOException;
import java.util.List;
import java.util.Map;
@Public
@Evolving
public interface Service extends Closeable
