package org.apache.hadoop.metrics2.annotation;
import java.lang.annotation.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Evolving
@Documented
@Target()
@Retention(RetentionPolicy.RUNTIME)
public @interface Metric
